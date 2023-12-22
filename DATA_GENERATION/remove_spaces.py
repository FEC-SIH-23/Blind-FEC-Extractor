import pandas as pd

df = pd.read_csv('./all_data/convolutional_encoded_noise_snr2.csv')
#s = df.loc[0, 'encoded_data_string']
#print(s)
#print(type(s))
df['encoded_data_string'] = df['encoded_data_string'].str.replace(" ", "")
df.to_csv('./all_data/convolutional_encoded_noise_snr2.csv', index=False)
