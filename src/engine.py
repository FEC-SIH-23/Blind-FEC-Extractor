import tensorflow as tf
import pandas as pd
import numpy as np
import tensorflow as tf
from tensorflow.keras.models import load_model
from PyQt5.QtCore import QObject


class mlengine(QObject):
    @pyqtSlot()
    def engine(self):
        fecEncoding = ['Turbo','Convulational','LDPC','BCH']

        model_path = 'sih_2048_snr2_model'

        loaded_model = load_model(model_path)

        df = pd.read_csv('test_cnv.csv')

        # df

        data = []
        for bit_string in df:
            bit_array = np.array(list(bit_string), dtype=int)
            data.append(bit_array)

        # data

        df_test = np.reshape(data, (1, 2048, 1))

        #df_test.shape

        df_float = tf.convert_to_tensor(df_test, dtype=tf.float32)

        predictions = loaded_model.predict(df_float)

        # predictions

        final = np.argmax(predictions)

        print(fecEncoding[final])





