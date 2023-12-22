import sionna as sn
import pandas as pd
from commpy.channels import awgn
from commpy.modulation import PSKModem
import random
import os

bin_source = sn.utils.BinarySource()
N = int(input("[PROMPT] Input the block length: "))
BATCH_SIZE = int(input("[PROMPT] Input the batch size: "))
SNR = int(input("[PROMPT] Input the SNR value: "))
PSK_SHIFT = int(input("[PROMPT] Input the PSK shift value: "))
numerator, denominator = [int(x) for x in input("[PROMPT] Enter the code rate: ").split("/")]

DIR_PATH = f"./all_data/snr-{SNR}/block-{N}/psk-{PSK_SHIFT}"
filename = f"convolution_noise_code_{N}_snr_{SNR}_{PSK_SHIFT}psk_coderate_{numerator}_{denominator}.csv"

psk_mod = PSKModem(PSK_SHIFT)

# ---- encoded code generation -----

coderate = numerator / denominator
k = int(N * coderate)

encoder_1 = sn.fec.conv.ConvEncoder(rate=coderate,constraint_length=5)
msg_1 = bin_source([BATCH_SIZE, k])
code_1 = encoder_1(msg_1).numpy()
code_1_list = code_1.astype(int)
code_1_list = code_1_list.tolist()
print("[INFO] First batch of codes were generated.")

encoder_2 = sn.fec.conv.ConvEncoder(rate=coderate,constraint_length=5)
msg_2 = bin_source([BATCH_SIZE, k])
code_2 = encoder_1(msg_2).numpy()
code_2_list = code_2.astype(int)
code_2_list = code_2_list.tolist()
print("[INFO] Second batch of codes were generated.")

encoder_3 = sn.fec.conv.ConvEncoder(rate=coderate,constraint_length=5)
msg_3 = bin_source([BATCH_SIZE, k])
code_3 = encoder_1(msg_3).numpy()
code_3_list = code_3.astype(int)
code_3_list = code_3_list.tolist()
print("[INFO] Third batch of codes were generated.")

# ---- utility functions to simulate channel ----

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

# ---- use the utility functions ----

modulated_1 = [psk_modulation(x) for x in code_1_list]
modulated_2 = [psk_modulation(x) for x in code_2_list]
modulated_3 = [psk_modulation(x) for x in code_3_list]
print("[INFO] PSK modulation completed")

noisy_1 = [apply_awgn(x, SNR, 3/4) for x in modulated_1]
noisy_2 = [apply_awgn(x, SNR, 3/4) for x in modulated_2]
noisy_3 = [apply_awgn(x, SNR, 3/4) for x in modulated_3]
print("[INFO] AWGN have been added")

demodulated_1 = [psk_demodulation(x) for x in noisy_1]
demodulated_2 = [psk_demodulation(x) for x in noisy_2]
demodulated_3 = [psk_demodulation(x) for x in noisy_3]
print("[INFO] PSK demodulation completed")


demodulated_string_1 = [bin_string(x) for x in demodulated_1]
demodulated_string_2 = [bin_string(x) for x in demodulated_2]
demodulated_string_3 = [bin_string(x) for x in demodulated_3]
print("[INFO] String codes have been converted to binary string")

encoded = demodulated_string_1 + demodulated_string_2 + demodulated_string_3

LABEL_SIZE = 3*BATCH_SIZE
label = [3 for _ in range(LABEL_SIZE)]

random.shuffle(encoded)
print('[INFO] Data has been shuffled')

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
