import sionna as sn
from commpy.channels import awgn
import numpy
import pandas as pd
import random 
import os

df = pd.DataFrame(columns=['encoded_data_string', 'encoding'])
binary_source = sn.utils.BinarySource()

### parameters ###
n = int(input("[PROMPT] Input the Block length: "))
BATCH_SIZE = int(input("[PROMPT] Input the Batch size: "))
SNR = input("[PROMPT] Input the SNR value: ")
m = int("[PROMPT] Input the shift value for PSK modulation")

path = f"./all_data/snr-{SNR}/block-{n}"
filename = f"ldpc_noise_code_{n}_snr_{SNR}.csv"
if '.' in SNR:
    SNR = float(SNR)
else:
    SNR = int(SNR)

if SNR < 0:
    path = f"./all_data/snr-negative{abs(SNR)}/block-{n}"
    filename = f"ldpc_noise_code_{n}_snr_negative{abs(SNR)}"

#### for code rate 1/2 ####

#rate12 = 1/2
#k12 = int(n * rate12)

#encoder12 = sn.fec.ldpc.LDPC5GEncoder(k12, n)
#msg12 = binary_source([BATCH_SIZE, k12])
#c12 = encoder12(msg12).numpy()
#c12_list = [''.join([str(int(a)) for a in x]) for x in c12]

print("[INFO] Created codes of rate 1/2")

#### for code rate 2/3 ####
rate23 = 2/3
k23 = int(n * rate23)
encoder23 = sn.fec.ldpc.LDPC5GEncoder(k23, n)
msg23 = binary_source([BATCH_SIZE, k23])
c23 = encoder23(msg23).numpy()
c23_list = [''.join([str(int(a)) for a in x]) for x in c23]

print("[INFO] Created codes of rate 2/3")

#### for code rate 4/5 ####
rate45 = 4/5
k45 = int(n * rate45)
encoder45 = sn.fec.ldpc.LDPC5GEncoder(k45, n)
msg45 = binary_source([BATCH_SIZE, k45])
c45 = encoder45(msg45).numpy()
c45_list = [''.join([str(int(a)) for a in x]) for x in c45]

print('[INFO] Created codes of rate 4/5')

print("[INFO] All Codes have been created")

# ---------- Utility functions for Mod, Demod, Noise and List-to-string conversion --------------

def bpsk_modulation(bits):
    # Define the phase states for BPSK modulation
    phase_states = [-1, 1]
    # Map the bits to the corresponding phase states
    phase_sequence = [phase_states[int(b)] for b in bits]
    # Generate the modulated signal
    modulated_signal = phase_sequence
    return modulated_signal

def bpsk_demodulation(received_signal):
    # Create a decision threshold at 0
    decision_threshold = 0
    # Demodulate the received signal based on the decision threshold
    demodulated_bits = (received_signal > decision_threshold).astype(int)
    return demodulated_bits

def apply_awgn(modulated_signal, snr, coderate):
    return awgn(modulated_signal, snr, coderate)

def bin_string(a):
    return ''.join(str(bit) for bit in a)

# ------------ Apply modulation and channels ----------------

c12_modulated = [bpsk_modulation(x) for x in c12_list]
c23_modulated = [bpsk_modulation(x) for x in c23_list]
c45_modulated = [bpsk_modulation(x) for x in c45_list]
print("[INFO] BPSK Modulation completed")

c12_noisy = [apply_awgn(x, SNR, 1/2) for x in c12_modulated]
c23_noisy = [apply_awgn(x, SNR, 1/2) for x in c23_modulated]
c45_noisy = [apply_awgn(x, SNR, 1/2) for x in c45_modulated]
print("[INFO] AWGN added")

c12_demodulated = [bpsk_demodulation(x) for x in c12_noisy]
c23_demodulated = [bpsk_demodulation(x) for x in c23_noisy]
c45_demodulated = [bpsk_demodulation(x) for x in c45_noisy]
print("[INFO] BPSK Demodulation completed")

c12_demodulated_string = [bin_string(x) for x in c12_demodulated ]
c23_demodulated_string = [bin_string(x) for x in c23_demodulated ]
c45_demodulated_string = [bin_string(x) for x in c45_demodulated ]
print("[INFO] Binary list to string conversion completed")

#### all 3 together ####
encoded = c12_demodulated_string + c23_demodulated_string + c45_demodulated_string
label = [3 for _ in range(BATCH_SIZE*3)]
print("[INFO] Labels have been created")
    
random.shuffle(encoded)
print('[INFO] Data has been shuffled')

data = {
    'encoded_data_string': encoded,
    'encoding': label
}

if not os.path.exists(path):
    os.makedirs(path)
print("[INFO] Directory path has been validated")

df = pd.DataFrame(data, index=None)
print("[INFO] Dataframe has been created")

df.to_csv(f"{path}/{filename}", header=True, index=False)
print("[INFO] File has been written")




