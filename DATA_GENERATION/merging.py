import pandas as pd
import os

dirname = input("[*] enter directory path: ")
files = os.listdir(dirname)
merged = pd.DataFrame()

for f in files:
    fname = f"{dirname}/" + f
    df = pd.read_csv(fname)
    df.columns = ['encoded_data_string', 'encoding']
    merged = pd.concat([merged, df], ignore_index=True)
print("[info] merging completed")
merged = merged.sample(frac=1)
print("[info] shuffling completed")
merged.to_csv(f"{dirname}/merged_data_4psk_2048_easy.csv", index=False)
print("[info] data written to csv")
