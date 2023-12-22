import sionna as sn
from commpy.modulation import PSKModem
from commpy.channels import awgn
import random
#import numpy as np
import pandas as pd

binary_source = sn.utils.BinarySource()
psk = PSKModem(4)
snr = 10
# rates = [1/2, 1/3, 2/3, 3/4]
# fixed lengths = [2048]

# ---- rate=1/2, length=1024 ----

#r = 1/2
#n = 2048
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([20000, k])
#c_12_1024 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/2 and 2048 length done!")

# ---- rate=1/3, length=1024 ----
#r = 1/3
#n = 2048
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([20000, k])
#c_13_1024 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/3 and 2048 length done!")

# ---- rate=2/3, length=1024 ----
#r = 2/3
#n = 20
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([8333, k])
#c_23_1024 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 2/3 and 1024 length done!")

# ---- rate=3/4, length=1024 ----
#r = 3/4
#n = 1024
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([8333, k])
#c_34_1024 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 3/4 and 1024 length done!")

# ---- rate=1/2, length=1536 ----
#r = 1/2
#n = 1536
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([8333, k])
#c_12_1536 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/2 and 1536 length done!")

# ---- rate=1/3, length=1536 ----
#r = 1/3
#n = 1536
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([8333, k])
#c_13_1536 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/3 and 1536 length done!")

# ---- rate=2/3, length=1536
#r = 2/3
#n = 1536
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([8333, k])
#c_23_1536 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 2/3 and 1536 length done!")

# ---- rate=3/4, length=1536
#r = 3/4
#n = 1536
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([8333, k])
#c_34_1536 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 3/4 and 1536 length done!")

# ---- rate=1/2, length=2048 ----
#r = 1/2
#n = 2048
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([20000, k])
#c_12_2048 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/2 and 2048 length done!")

# ---- rate=1/3, length=2048 ----
#r = 1/3
#n = 2048
#k = int(r * n)

#enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
#msg = binary_source([20000, k])
#c_13_2048 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/3 and 2048 length done!")

# ---- rate=1/2, length=2048 ----
r = 2/3
n = 2048
k = int(r * n)

enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
msg = binary_source([40000, k])
c_23_2048 = enc(msg).numpy().astype(int).tolist()
print("[info] code rate 2/3 and 2048 length done!")

# ---- rate=1/2, length=2048 ----
r = 3/4
n = 2048
k = int(r * n)

enc = sn.fec.ldpc.LDPC5GEncoder(k, n)
msg = binary_source([40000, k])
c_34_2048 = enc(msg).numpy().astype(int).tolist()
print("[info] code rate 3/4 and 2048 length done!")

# ---- modulation, demodulation, and noise ----


def psk_modulation(bit_string):
    """
    Takes the shift value and returns PSK modulation
    """
    return psk.modulate(bit_string)

def psk_demodulation(noisy_signal):
    """
    Performs PSK demodulation on the received signal
    """
    return psk.demodulate(noisy_signal, demod_type='hard')

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

# ---- Apply modulation ----

#c_12_1024_mod = [psk_modulation(x) for x in c_12_1024]
#c_13_1024_mod = [psk_modulation(x) for x in c_13_1024]
#c_23_1024_mod = [psk_modulation(x) for x in c_23_1024]
#c_34_1024_mod = [psk_modulation(x) for x in c_34_1024]

#c_12_1536_mod = [psk_modulation(x) for x in c_12_1536]
#c_13_1536_mod = [psk_modulation(x) for x in c_13_1536]
#c_23_1536_mod = [psk_modulation(x) for x in c_23_1536]
#c_34_1536_mod = [psk_modulation(x) for x in c_34_1536]

#c_12_2048_mod = [psk_modulation(x) for x in c_12_2048]
#c_13_2048_mod = [psk_modulation(x) for x in c_13_2048]
c_23_2048_mod = [psk_modulation(x) for x in c_23_2048]
c_34_2048_mod = [psk_modulation(x) for x in c_34_2048]

print("[info] Modulation completed")

# ---- Apply AWGN ----

#c_12_1024_noisy = [apply_awgn(x, snr, 1/2) for x in c_12_1024_mod]
#c_13_1024_noisy = [apply_awgn(x, snr, 1/3) for x in c_13_1024_mod]
#c_23_1024_noisy = [apply_awgn(x, snr, 2/3) for x in c_23_1024_mod]
#c_34_1024_noisy = [apply_awgn(x, snr, 3/4) for x in c_34_1024_mod]

#c_12_1536_noisy = [apply_awgn(x, snr, 1/2) for x in c_12_1536_mod]
#c_13_1536_noisy = [apply_awgn(x, snr, 1/3) for x in c_13_1536_mod]
#c_23_1536_noisy = [apply_awgn(x, snr, 2/3) for x in c_23_1536_mod]
#c_34_1536_noisy = [apply_awgn(x, snr, 3/4) for x in c_34_1536_mod]

#c_12_2048_noisy = [apply_awgn(x, snr, 1/2) for x in c_12_2048_mod]
#c_13_2048_noisy = [apply_awgn(x, snr, 1/3) for x in c_13_2048_mod]
c_23_2048_noisy = [apply_awgn(x, snr, 2/3) for x in c_23_2048_mod]
c_34_2048_noisy = [apply_awgn(x, snr, 3/4) for x in c_34_2048_mod]

print("[info] AWGN addition completed")

# ---- Demodulate ----

#c_12_2048_demod = [psk_demodulation(x) for x in c_12_2048_noisy]
#c_13_2048_demod = [psk_demodulation(x) for x in c_13_2048_noisy]
c_23_2048_demod = [psk_demodulation(x) for x in c_23_2048_noisy]
c_34_2048_demod = [psk_demodulation(x) for x in c_34_2048_noisy]

#c_12_1024_demod = [psk_demodulation(x) for x in c_12_1024_noisy]
#c_13_1024_demod = [psk_demodulation(x) for x in c_13_1024_noisy]
#c_23_1024_demod = [psk_demodulation(x) for x in c_23_1024_noisy]
#c_34_1024_demod = [psk_demodulation(x) for x in c_34_1024_noisy]

#c_12_1536_demod = [psk_demodulation(x) for x in c_12_1536_noisy]
#c_13_1536_demod = [psk_demodulation(x) for x in c_13_1536_noisy]
#c_23_1536_demod = [psk_demodulation(x) for x in c_23_1536_noisy]
#c_34_1536_demod = [psk_demodulation(x) for x in c_34_1536_noisy]

print("[info] demodulation completed")

# ---- converting to string ----
#c_12_2048_str = [bin_string(x) for x in c_12_2048_demod]
#c_13_2048_str = [bin_string(x) for x in c_13_2048_demod]
c_23_2048_str = [bin_string(x) for x in c_23_2048_demod]
c_34_2048_str = [bin_string(x) for x in c_34_2048_demod]

#c_12_1024_str = [bin_string(x) for x in c_12_1024_demod]
#c_13_1024_str = [bin_string(x) for x in c_13_1024_demod]
#c_23_1024_str = [bin_string(x) for x in c_23_1024_demod]
#c_34_1024_str = [bin_string(x) for x in c_34_1024_demod]

#c_12_1536_str = [bin_string(x) for x in c_12_1536_demod]
#c_13_1536_str = [bin_string(x) for x in c_13_1536_demod]
#c_23_1536_str = [bin_string(x) for x in c_23_1536_demod]
#c_34_1536_str = [bin_string(x) for x in c_34_1536_demod]

print("[info] string conversion completed")

encoded =  c_23_2048_str + c_34_2048_str
        

label = [3 for _ in range(80000)]
random.shuffle(encoded)
print("[info] data has been shuffled")

data = {
        'encoded_data_string': encoded,
        'encoding': label
 }

df = pd.DataFrame(data, index=None)
print("[info] Dataframe has been created")

df.to_csv("ldpc_2048_4psk_80000_2_coderates_only.csv", header=True, index=False)
print("[info] file has been written. Success!")
