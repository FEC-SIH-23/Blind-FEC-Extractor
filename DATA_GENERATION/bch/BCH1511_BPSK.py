#This code is focused to generate a BCH encoded string dataset in csv 
#format to train RNN model for PSID SIH1447. This code utilizes Libraries
#galois for BCH encoding. It generates a random data encodes it using BCH
#modulates it using BPSK modulation technique, adds White Gaussian Noise 
#and then pads the signal to desired length and writes the signal as samp#les in csv file.
# use [$ pip install numpy galois] to install the required libraries.

# Importing libraries required, remove the comment on the next line to install on Google Colab and Kaggle..
!pip install galois numpy
import galois
import numpy as np
import csv

#Generates binary string of length "n"..
def message(n):
    return galois.GF2.Random(n)

#Using Galois library, this function encodes the message generated by message()
def encode_bch(data, n, k):
    bch = galois.BCH(n, k)
    return bch.encode(data)

#function to implement a BPSK Modulator takes binary input..
def bpsk_modulate(data):
    return [-1 if bit == 0 else 1 for bit in data]

#Adds AWGN on the modulated signal, simulating real world channels..
def add_awgn(signal, snr_dB):
    noise_std_dev = 10 ** (-snr_dB / 20)
    awgn = np.random.normal(0, noise_std_dev, len(signal))
    noisy_signal = np.where(np.array(signal) + awgn > 0, 1, 0)
    return noisy_signal.tolist()

#Pads signal by adding Zeroes to the desired length..
def pad_signal(signal, length):
    return signal + [0] * (length - len(signal))

#Generates samples..
def generate_samples(n, k, num_samples, snr_dB, pad_length):
    samples = []
    for _ in range(num_samples):
        data = message(k)
        encoded_data = encode_bch(data, n, k)
        modulated_data = bpsk_modulate(encoded_data)
        noisy_data = add_awgn(modulated_data, snr_dB)
        padded_data = pad_signal(noisy_data, pad_length)
        samples.append(padded_data)

    return samples

#Writes CSV file with two columns, one for samples and one for encoding...
def save_to_csv(data, filename, encoding):
    with open(filename, 'w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(["bch_bpsk_encoded_string", "encoding"])
        for line in data:
            line_str = ''.join(map(str, line))
            writer.writerow([line_str, encoding])

if __name__ == "__main__":
    n = 15
    k = 11
    num_samples = int(input("Enter the Number of Samples:- "))
    snr_dB = float(input("Enter the SNR in dB:- "))
    pad_length = int(input("Enter the Pad Length:- "))
    encoding = int(input("Enter the Encoding Parameter:- "))

    samples = generate_samples(n, k, num_samples, snr_dB, pad_length)
    save_to_csv(samples, f'BCH{n}{k}_BPSK_SNR{snr_dB}_BL{pad_length}.csv', encoding)

    print(f"BCH{n}{k}_BPSK_SNR{snr_dB}_BL{pad_length}.csv created, download it now!")
    print(f"The current BCH coding used is BCH({n}, {k})")
