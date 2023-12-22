import pandas as pd

filename = input('Enter the filename: ')
df = pd.read_csv(filename)

for idx in df.index:
    if len(df['encoded_data_string'][idx]) < 2048:
        diff = 2048 - len(df['encoded_data_string'][idx])
        df['encoded_data_string'][idx] = '0'*diff + df['encoded_data_string'][idx]

df.to_csv('left_padded_data.csv', header=True, index=False)

