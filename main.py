# This Python file uses the following encoding: utf-8
import sys
from pathlib import Path

import asyncio

from PySide6.QtGui import QGuiApplication
from PySide6.QtQml import QQmlApplicationEngine
from PySide6.QtCore import QObject, Slot, Property, Signal


class MyObject(QObject):
    messageChanged = Signal(str)
    
    def __init__(self):
        QObject.__init__(self)
        self._message = ""

    @Slot(str,int)
    def print_message(self, message, count):
        asyncio.run(self.async_print_message(message, count))
    
    async def async_print_message(self, message, count):
        for _ in range(count):
            print(message)
            await asyncio.sleep(1)  # simulate long-running operation
        self.messageChanged.emit(message * count)



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
    

    