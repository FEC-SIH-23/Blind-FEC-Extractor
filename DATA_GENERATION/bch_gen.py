import sionna as sn
import pandas as pd
from commpy.modulation import PSKModem
from commpy.channels import awgn


binary_source = sn.utils.BinarySource()
psk = PSKModem(4)

def bch_encode(message):
    # Generator polynomial coefficients for BCH(63, 56)
    generator_polynomial = [1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1]
    # Convert message to a list of integers
    message_bits = list(map(int, message))
    # Initialize shift register cells
    shift_register = [1] * 63
    # Perform systematic encoding
    for bit in message_bits:
        # XOR the feedback bits with the message bit
        feedback = shift_register[-7] ^ shift_register[-6] ^ shift_register[-2] ^ bit
        # Shift the register and set the first cell to the feedback
        shift_register = [feedback] + shift_register[:-1]
    # Output the parity bits
    parity_bits = [shift_register[0] ^ 1, shift_register[1] ^ 1, shift_register[2] ^ 1, shift_register[3] ^ 1, shift_register[4] ^ 1, shift_register[5] ^ 1, shift_register[6] ^ 1]
    # Concatenate the message and parity bits
    codeword = message_bits + parity_bits
    # Convert the codeword to a string and return
    # print(codeword)
    # codeword_str = ''.join(map(str, codeword))
    return codeword

def psk_modulate(bit_string):
    return psk.modulate(bit_string)

def psk_demodulate(noisy_sig):
    return psk.demodulate(noisy_sig, demod_type='hard')

def apply_awgn(modulated, snr, coderate):
    return awgn(modulated, snr, coderate)

def bin_string(bin_array):
    """
    Converts a binary array into a binary string
    """
    return ''.join(str(bit) for bit in bin_array)

msg = binary_source([80000, 56]).numpy().astype(int).tolist()
encoded = [bch_encode(x) for x in msg]
print("[info] encoding completed")
mod = [psk_modulate(x) for x in encoded]
print("[info] modulation completed")
noisy = [apply_awgn(x, 10, 1) for x in mod]
print("[info] awgn added")
demod = [psk_demodulate(x) for x in noisy]
print("[info] demodulation completed")
strings = [bin_string(x) for x in demod]
print("[info] string conversion completed")

labels = [4 for _ in range(80000)]

data = {
        'encoded_data_string': strings,
        'encoding': labels
}

df = pd.DataFrame(data, index=None)
df.to_csv("bch_data_4psk_80000.csv", header=True, index=False)
print("[info] file is written")

