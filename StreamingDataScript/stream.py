import tensorflow as tf
import pandas as pd
import numpy as np
from tensorflow.keras.models import load_model

fecEncoding = ['Turbo','Convolutional','LDPC','BCH']

model_path = 'sih_2048_snr2_model'

loaded_model = load_model(model_path)

path = "file:///home/k3ysdev/SIH/temp/FEC/testDataSets/combined.csv"

# Correctly remove the file:// prefix
path = path.replace("file://", "")
df = pd.read_csv(path)

result = []

data = []

for bit_string in df:
    bit_array = np.array(list(bit_string), dtype=int)
    data.append(bit_array)

# Move the reshaping and tensor conversion inside the loop
for bit_array in data:
    df_test = np.reshape(bit_array, (1, 2048, 1))
    df_float = tf.convert_to_tensor(df_test, dtype=tf.float32)
    predictions = loaded_model.predict(df_float)
    final = np.argmax(predictions)
    result.append(fecEncoding[final])

# Print the results
for type in result:
    print(type)

unique_results = set(result)

print(unique_results)