import pandas as pd
import os

snr = input("[*] Give the SNR value: ")
block = input("[*] Give the block length: ")
dirname = f"./all_data/snr-{snr}/block-{block}"

if float(snr) < 0.5:
    dirname = f"./all_data/snr-negative{snr}/block-{block}"

files = os.listdir(dirname)

merged = pd.DataFrame()

print("[+] File merging started")
for f in files:
    fname = f'{dirname}/' + f
    df = pd.read_csv(fname)
    df.columns = ['encoded_data_string', 'encoding']
    merged = pd.concat([merged, df], ignore_index=True)
print("[+] File merging completed")

#assert merged.shape[0] == 407400, print(f"[X] Total rows are {merged.shape[0]}")

print("[+] Shuffling Dataframe")

merged = merged.sample(frac=1)

print("[+] Shuffling completed. Dataset is now randomized")

print("[+] Attempting to write to CSV")

merged.to_csv(f'{dirname}/merged_data_block{block}_snr{snr}.csv', index=False)

print("[+] Dataframe written to CSV file. Success!")

