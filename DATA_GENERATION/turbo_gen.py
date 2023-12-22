import sionna as sn
from commpy.channels import awgn
from commpy.modulation import PSKModem
import pandas as pd
import random

binary_source = sn.utils.BinarySource()
psk = PSKModem(4)
snr = 10

# lengths = 1024, 1536, 2048
# rates   = 1/2, 1/3

# ---- rate=1/2, length=1024 ----
#r = 1/2
#n = 1024
#k = int(r * n)

#enc = sn.fec.turbo.TurboEncoder(constraint_length=4,
#                                rate=r)
#msg = binary_source([17000, k])
#c_12_1024 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/2 and length 1024 done")

# ---- rate=1/3, length=1024 ----
#r = 1/3
#n = 1024
#k = int(r * n)

#enc = sn.fec.turbo.TurboEncoder(constraint_length=4,
#                                rate=r)
#msg = binary_source([17000, k])
#c_13_1024 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/3 and length 1024 done")

# ---- rate=1/2, length=1536 ----
#r = 1/2
#n = 1536
#k = int(r * n)

#enc = sn.fec.turbo.TurboEncoder(constraint_length=4,
#                                rate=r)
#msg = binary_source([17000, k])
#c_12_1536 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/2 and length 1536 done")

# ---- rate=1/3, length=1536 ----
#r = 1/3
#n = 1536
#k = int(r * n)

#enc = sn.fec.turbo.TurboEncoder(constraint_length=4,
#                                rate=r)
#msg = binary_source([17000, k])
#c_13_1536 = enc(msg).numpy().astype(int).tolist()
#print("[info] code rate 1/3 and length 1536 done")

# ---- rate=1/2, length=2048 ----
r = 1/2
n = 2048
k = int(r * n)

enc = sn.fec.turbo.TurboEncoder(constraint_length=4,
                                rate=r)
msg = binary_source([40000, k])
c_12_2048 = enc(msg).numpy().astype(int).tolist()
print("[info] code rate 1/2 and length 2048 done")


# ---- rate=1/2, length=1536 ----
r = 1/3
n = 2048
k = int(r * n)

enc = sn.fec.turbo.TurboEncoder(constraint_length=4,
                                rate=r)
msg = binary_source([40000, k])
c_13_2048 = enc(msg).numpy().astype(int).tolist()
print("[info] code rate 1/3 and length 2048 done")

# ---- Modulation, AWGN and Demodulation utility funcs ----

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

# ---- modulation ----

#c_12_1024_mod = [psk_modulation(x) for x in c_12_1024]
#c_13_1024_mod = [psk_modulation(x) for x in c_13_1024]

#c_12_1536_mod = [psk_modulation(x) for x in c_12_1536]
#c_13_1536_mod = [psk_modulation(x) for x in c_13_1536]

c_12_2048_mod = [psk_modulation(x) for x in c_12_2048]
c_13_2048_mod = [psk_modulation(x) for x in c_13_2048]

print("[info] modulation completed")

# ---- awgn addition ----

#c_12_1024_noisy = [apply_awgn(x, snr, 1/2) for x in c_12_1024_mod]
#c_13_1024_noisy = [apply_awgn(x, snr, 1/3) for x in c_12_1024_mod]

#c_12_1536_noisy = [apply_awgn(x, snr, 1/2) for x in c_12_1536_mod]
#c_13_1536_noisy = [apply_awgn(x, snr, 1/3) for x in c_13_1536_mod]

c_12_2048_noisy = [apply_awgn(x, snr, 1/2) for x in c_12_2048_mod]
c_13_2048_noisy = [apply_awgn(x, snr, 1/3) for x in c_13_2048_mod]

print("[info] awgn completed")

# ---- demodulation ----

#c_12_1024_demod = [psk_demodulation(x) for x in c_12_1024_noisy]
#c_13_1024_demod = [psk_demodulation(x) for x in c_13_1024_noisy]

#c_12_1536_demod = [psk_demodulation(x) for x in c_12_1536_noisy]
#c_13_1536_demod = [psk_demodulation(x) for x in c_13_1536_noisy]

c_12_2048_demod = [psk_demodulation(x) for x in c_12_2048_noisy]
c_13_2048_demod = [psk_demodulation(x) for x in c_13_2048_noisy]

print("[info] demodulation completed")

#c_12_1024_str = [bin_string(x) for x in c_12_1024_demod]
#c_13_1024_str = [bin_string(x) for x in c_13_1024_demod]

#c_12_1536_str = [bin_string(x) for x in c_12_1536_demod]
#c_13_1536_str = [bin_string(x) for x in c_13_1536_demod]

c_12_2048_str = [bin_string(x) for x in c_12_2048_demod]
c_13_2048_str = [bin_string(x) for x in c_13_2048_demod]

print("[info] string conversion done")

encoded = c_12_2048_str + c_13_2048_str

labels = [1 for _ in range(80000)]

random.shuffle(encoded)
print("[info] data has been shuffled")

data = {
        'encoded_data_string': encoded,
        'encoding': labels
}

df = pd.DataFrame(data, index=None)
df.to_csv("turbo_2048_rates_4psk_80000.csv", header=True, index=False)
print("[info] file has been written")
