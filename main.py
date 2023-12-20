# This Python file uses the following encoding: utf-8
import sys
from pathlib import Path

import asyncio

from PySide6.QtGui import QGuiApplication
from PySide6.QtQml import QQmlApplicationEngine
from PySide6.QtCore import QObject, Slot, Property, Signal

import tensorflow as tf
import pandas as pd
import numpy as np
import tensorflow as tf
from tensorflow.keras.models import load_model

fecEncoding = ['Turbo','Convolutional','LDPC','BCH']

model_path = 'sih_2048_snr2_model'

loaded_model = load_model(model_path)


class MyObject(QObject):
    messageChanged = Signal(str)
    
    def __init__(self):
        QObject.__init__(self)
        self._message = ""

    @Slot(str, int)
    def predict(self, message, flag):
        # print(message)
        if (flag == 0):
            asyncio.run(self.modelOutputWithMessage(message))
        else:
            asyncio.run(self.modelOutputWithPath(message))
    
    async def modelOutputWithMessage(self, bit_string):
        bit_string = bit_string.replace('\n', '') 
        bit_array = np.array(list(bit_string), dtype=int)
        df_test = np.reshape(bit_array, (1, 2048, 1))
        df_float = tf.convert_to_tensor(df_test, dtype=tf.float32)
        predictions = loaded_model.predict(df_float)
        print(predictions)
        final = np.argmax(predictions)
        print(fecEncoding[final])
        self.messageChanged.emit(fecEncoding[final])

    async def modelOutputWithPath(self, path):
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
        self.messageChanged.emit(fecEncoding[final])


if __name__ == "__main__":
    app = QGuiApplication(sys.argv)
    engine = QQmlApplicationEngine()
    my_object = MyObject()

    engine.rootContext().setContextProperty("myObject", my_object)
    qml_file = Path(__file__).resolve().parent / "main.qml"
    engine.load(qml_file)
    if not engine.rootObjects():
        sys.exit(-1)
    sys.exit(app.exec())

# a slot for a qml signal for a function printing hello world