import sionna as sn
from commpy.channels import awgn
from commpy.modulation import PSKModem, qr
import pandas as pd
import random
import os
#import sys

# ---- Set the parameters ----

df = pd.DataFrame(columns=['encoded_data_string', 'encoding'])
binary_source = sn.utils.BinarySource()

N = int(input("[PROMPT] Input the block length: "))
BATCH_SIZE = int(input("[PROMPT] Input the batch size: "))
SNR = int(input("[PROMPT] Input the SNR value: "))
PSK_SHIFT = int(input("[PROMPT] Input the PSK shift value: "))

DIR_PATH = f"./test_data"
filename = f"test_ldpc_noise_code_{N}_snr_{SNR}_{PSK_SHIFT}psk_coderate_3_4.csv"

psk_mod = PSKModem(PSK_SHIFT)

# ---- Code creation ----

rate34 = 3/4
k34 = int(N * rate34)

encoder34 = sn.fec.ldpc.LDPC5GEncoder(k34, N)
msg34_1 = binary_source([BATCH_SIZE, k34])
c34_list_1 = encoder34(msg34_1).numpy()
#c34_list = [''.join([str(int(a)) for a in x]) for x in c34]
c34_list_1 = c34_list_1.astype(int)
c34_list_1 = c34_list_1.tolist()
print("Length c34_list_1: ", len(c34_list_1[0]))
print("[INFO] Created first batch of code rate 3/4")

rate34 = 3/4
k34 = int(N * rate34)

encoder34 = sn.fec.ldpc.LDPC5GEncoder(k34, N)
msg34_2 = binary_source([BATCH_SIZE, k34])
c34_list_2 = encoder34(msg34_2).numpy()
#c34_list = [''.join([str(int(a)) for a in x]) for x in c34]
c34_list_2 = c34_list_2.astype(int)
c34_list_2 = c34_list_2.tolist()
print("Length c34_list_2: ", len(c34_list_2[0]))
print("[INFO] Created second batch of code rate 3/4")

rate34 = 3/4
k34 = int(N * rate34)

encoder34 = sn.fec.ldpc.LDPC5GEncoder(k34, N)
msg34_3 = binary_source([BATCH_SIZE, k34])
c34_list_3 = encoder34(msg34_3).numpy()
#c34_list = [''.join([str(int(a)) for a in x]) for x in c34]
c34_list_3 = c34_list_3.astype(int)
c34_list_3 = c34_list_3.tolist()
print("Length c34_list_3: ", len(c34_list_3[0]))
print("[INFO] Created third batch of code rate 3/4")

#print(c34)
#print(type(c34))
#print(type(c34[0]))
#sys.exit(0)

# ---- Modulation, AWGN and Demodulation utility funcs ----

def psk_modulation(bit_string):
    """
    Takes the shift value and returns PSK modulation
    """
    return psk_mod.modulate(bit_string)

def psk_demodulation(noisy_signal):
    """
    Performs PSK demodulation on the received signal
    """
    return psk_mod.demodulate(noisy_signal, demod_type='hard')

def apply_awgn(modulated_signal, snr, coderate):
    """
    Adds Additive White Gaussian Noise on the signals
    """
    return awgn(modulated_signal, snr, coderate)

def bin_string(bin_array):
    """
    Converts a binary array into a binary string
    """
    return ''.join(str(bit) for bit in bin_array)

# ---- Apply Modulation, AWGN and Demodulation ----

c34_modulated_1 = [psk_modulation(x) for x in c34_list_1]
c34_modulated_2 = [psk_modulation(x) for x in c34_list_2]
c34_modulated_3 = [psk_modulation(x) for x in c34_list_3]
print("[INFO] PSK modulation completed")
print("eeeeeeeeeeeeeeeeeeeeeee Length after modulation: ", len(c34_modulated_1[0]))

c34_noisy_1 = [apply_awgn(x, SNR, 3/4) for x in c34_modulated_1]
c34_noisy_2 = [apply_awgn(x, SNR, 3/4) for x in c34_modulated_2]
c34_noisy_3 = [apply_awgn(x, SNR, 3/4) for x in c34_modulated_3]
print("[INFO] AWGN have been added")
print("Length after awgn: ", len(c34_noisy_1[0]))

c34_demodulated_1 = [psk_demodulation(x) for x in c34_noisy_1]
c34_demodulated_2 = [psk_demodulation(x) for x in c34_noisy_2]
c34_demodulated_3 = [psk_demodulation(x) for x in c34_noisy_3]
print("[INFO] PSK demodulation completed")
print("Length after demodulation: ", len(c34_demodulated_1[0]))

c34_demodulated_string_1 = [bin_string(x) for x in c34_demodulated_1]
c34_demodulated_string_2 = [bin_string(x) for x in c34_demodulated_2]
c34_demodulated_string_3 = [bin_string(x) for x in c34_demodulated_3]
print("[INFO] String codes have been converted to binary string")

encoded = c34_demodulated_string_1 + c34_demodulated_string_2 + c34_demodulated_string_3

#for i, x in enumerate(encoded):
#    encoded[i] += "0" * (2048-N)

LABEL_SIZE = 3*BATCH_SIZE
label = [3 for _ in range(LABEL_SIZE)]

random.shuffle(encoded)
print("[INFO] Data has been shuffled")

data = {
        'encoded_data_string': encoded,
        'encoding': label
}

if not os.path.exists(DIR_PATH):
    os.makedirs(DIR_PATH)
print("[INFO] Directory path is validated")

df = pd.DataFrame(data, index=None)
print("[INFO] Dataframe has been created")

df.to_csv(f"{DIR_PATH}/{filename}", header=True, index=False)
print(f"[INFO] File '{filename}' has been written. Success!")
