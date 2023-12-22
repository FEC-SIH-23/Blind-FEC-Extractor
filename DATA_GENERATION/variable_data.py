import sionna as sn
from commpy.channels import awgn
from commpy.modulation import PSKModem
from numpy.random import randint
import pandas as pd
import random

modem = PSKModem(8)
bin_source = sn.utils.BinarySource()
rate = 3/4
encoded_strings = []

for i in range(100):
    random_length = randint(2048, 4096)
    k = int(random_length * rate)
    encoder = sn.fec.ldpc.LDPC5GEncoder(k, random_length)
    msg = bin_source([1, k])
    encoded = encoder(msg).numpy().astype(int).tolist()[0]
    modulated = modem.modulate(encoded)
    noisy = awgn(modulated, 10, rate)
    demodulated = modem.demodulate(noisy, demod_type='hard')
    string = ''.join(str(bit) for bit in demodulated)
    encoded_strings.append(string)

print("[info] strings have been created of variable length")

labels = [3 for _ in range(100)]
random.shuffle(encoded_strings)

data = {
        'encoded_data_string': encoded_strings,
        'encoding': labels
}

df = pd.DataFrame(data,index=None)
print("[info] dataframe is created")

df.to_csv("variable_length.csv", header=True, index=False)
print("[info] CSV file is created")

    

