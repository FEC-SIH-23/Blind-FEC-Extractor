import tensorflow as tf
import pandas as pd
import numpy as np
import tensorflow as tf
from tensorflow.keras.models import load_model

fecEncoding = ['Turbo','Convolutional','LDPC','BCH']

model_path = 'sih_2048_snr2_model'

loaded_model = load_model(model_path)

path = "file:///home/k3ysdev/SIH/temp/FEC/testDataSets/combined.csv"

path.replace("file://", "")
df = pd.read_csv(path)
data = []

for bit_string in df:
    bit_array = np.array(list(bit_string), dtype=int)
    data.append(bit_array)

df_test = np.reshape(bit_array, (1, 2048, 1))
df_float = tf.convert_to_tensor(df_test, dtype=tf.float32)
predictions = loaded_model.predict(df_float)
print(predictions)
final = np.argmax(predictions)
print(fecEncoding[final])