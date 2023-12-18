// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSERIALPORT_PYTHON_H
#define SBK_QTSERIALPORT_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtSerialPort/qserialport.h>
class QSerialPortInfo;
// Type indices
enum : int {
    SBK_QSERIALPORT_DIRECTION_IDX                            = 5,
    SBK_QFLAGS_QSERIALPORT_DIRECTION_IDX                     = 0,
    SBK_QSERIALPORT_BAUDRATE_IDX                             = 3,
    SBK_QSERIALPORT_DATABITS_IDX                             = 4,
    SBK_QSERIALPORT_PARITY_IDX                               = 7,
    SBK_QSERIALPORT_STOPBITS_IDX                             = 10,
    SBK_QSERIALPORT_FLOWCONTROL_IDX                          = 6,
    SBK_QSERIALPORT_PINOUTSIGNAL_IDX                         = 8,
    SBK_QFLAGS_QSERIALPORT_PINOUTSIGNAL_IDX                  = 1,
    SBK_QSERIALPORT_SERIALPORTERROR_IDX                      = 9,
    SBK_QSERIALPORT_IDX                                      = 2,
    SBK_QSERIALPORTINFO_IDX                                  = 11,
    SBK_QtSerialPort_IDX_COUNT                               = 12
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtSerialPortTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtSerialPortModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtSerialPortTypeConverters;

// Converter indices
enum : int {
    SBK_QTSERIALPORT_QLIST_INT_IDX                           = 0, // QList<int>
    SBK_QTSERIALPORT_QLIST_QSERIALPORTINFO_IDX               = 1, // QList<QSerialPortInfo>
    SBK_QTSERIALPORT_QLIST_QINT32_IDX                        = 2, // QList<qint32>
    SBK_QTSERIALPORT_QLIST_QVARIANT_IDX                      = 3, // QList<QVariant>
    SBK_QTSERIALPORT_QLIST_QSTRING_IDX                       = 4, // QList<QString>
    SBK_QTSERIALPORT_QMAP_QSTRING_QVARIANT_IDX               = 5, // QMap<QString,QVariant>
    SBK_QtSerialPort_CONVERTERS_IDX_COUNT                    = 6
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QSerialPort::Direction >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_DIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSerialPort::Direction> >() { return SbkPySide6_QtSerialPortTypes[SBK_QFLAGS_QSERIALPORT_DIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort::BaudRate >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_BAUDRATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort::DataBits >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_DATABITS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort::Parity >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_PARITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort::StopBits >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_STOPBITS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort::FlowControl >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_FLOWCONTROL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort::PinoutSignal >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_PINOUTSIGNAL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSerialPort::PinoutSignal> >() { return SbkPySide6_QtSerialPortTypes[SBK_QFLAGS_QSERIALPORT_PINOUTSIGNAL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort::SerialPortError >() { return SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_SERIALPORTERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSerialPort >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSerialPortInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialPortTypes[SBK_QSERIALPORTINFO_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSERIALPORT_PYTHON_H

