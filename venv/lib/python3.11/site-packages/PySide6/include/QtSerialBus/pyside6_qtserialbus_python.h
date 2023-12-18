// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSERIALBUS_PYTHON_H
#define SBK_QTSERIALBUS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtserialport_python.h>

// Bound library includes
#include <QtSerialBus/qcanbusdevice.h>
#include <QtSerialBus/qcanbusframe.h>
#include <QtSerialBus/qmodbusdataunit.h>
#include <QtSerialBus/qmodbusdevice.h>
#include <QtSerialBus/qmodbusdeviceidentification.h>
#include <QtSerialBus/qmodbuspdu.h>
#include <QtSerialBus/qmodbusreply.h>
#include <QtSerialBus/qmodbusserver.h>
class QCanBus;
class QCanBusDeviceInfo;
class QCanBusFactory;
class QModbusClient;
class QModbusRequest;
class QModbusRtuSerialClient;
class QModbusRtuSerialServer;
class QModbusTcpClient;
class QModbusTcpConnectionObserver;
class QModbusTcpServer;
// Type indices
enum : int {
    SBK_QCANBUS_IDX                                          = 0,
    SBK_QCANBUSDEVICE_CANBUSERROR_IDX                        = 3,
    SBK_QCANBUSDEVICE_CANBUSDEVICESTATE_IDX                  = 2,
    SBK_QCANBUSDEVICE_CANBUSSTATUS_IDX                       = 4,
    SBK_QCANBUSDEVICE_CONFIGURATIONKEY_IDX                   = 5,
    SBK_QCANBUSDEVICE_DIRECTION_IDX                          = 6,
    SBK_QFLAGS_QCANBUSDEVICE_DIRECTION_IDX                   = 15,
    SBK_QCANBUSDEVICE_IDX                                    = 1,
    SBK_QCANBUSDEVICE_FILTER_FORMATFILTER_IDX                = 8,
    SBK_QFLAGS_QCANBUSDEVICE_FILTER_FORMATFILTER_IDX         = 16,
    SBK_QCANBUSDEVICE_FILTER_IDX                             = 7,
    SBK_QCANBUSDEVICEINFO_IDX                                = 9,
    SBK_QCANBUSFACTORY_IDX                                   = 10,
    SBK_QCANBUSFRAME_FRAMETYPE_IDX                           = 13,
    SBK_QCANBUSFRAME_FRAMEERROR_IDX                          = 12,
    SBK_QFLAGS_QCANBUSFRAME_FRAMEERROR_IDX                   = 17,
    SBK_QCANBUSFRAME_IDX                                     = 11,
    SBK_QCANBUSFRAME_TIMESTAMP_IDX                           = 14,
    SBK_QMODBUSCLIENT_IDX                                    = 18,
    SBK_QMODBUSDATAUNIT_REGISTERTYPE_IDX                     = 20,
    SBK_QMODBUSDATAUNIT_IDX                                  = 19,
    SBK_QMODBUSDEVICE_ERROR_IDX                              = 23,
    SBK_QMODBUSDEVICE_STATE_IDX                              = 25,
    SBK_QMODBUSDEVICE_CONNECTIONPARAMETER_IDX                = 22,
    SBK_QMODBUSDEVICE_INTERMEDIATEERROR_IDX                  = 24,
    SBK_QMODBUSDEVICE_IDX                                    = 21,
    SBK_QMODBUSDEVICEIDENTIFICATION_OBJECTID_IDX             = 28,
    SBK_QMODBUSDEVICEIDENTIFICATION_READDEVICEIDCODE_IDX     = 29,
    SBK_QMODBUSDEVICEIDENTIFICATION_CONFORMITYLEVEL_IDX      = 27,
    SBK_QMODBUSDEVICEIDENTIFICATION_IDX                      = 26,
    SBK_QMODBUSPDU_EXCEPTIONCODE_IDX                         = 31,
    SBK_QMODBUSPDU_FUNCTIONCODE_IDX                          = 32,
    SBK_QMODBUSPDU_IDX                                       = 30,
    SBK_QMODBUSREPLY_REPLYTYPE_IDX                           = 34,
    SBK_QMODBUSREPLY_IDX                                     = 33,
    SBK_QMODBUSREQUEST_IDX                                   = 35,
    SBK_QMODBUSRTUSERIALCLIENT_IDX                           = 36,
    SBK_QMODBUSRTUSERIALSERVER_IDX                           = 37,
    SBK_QMODBUSSERVER_OPTION_IDX                             = 39,
    SBK_QMODBUSSERVER_IDX                                    = 38,
    SBK_QMODBUSTCPCLIENT_IDX                                 = 40,
    SBK_QMODBUSTCPCONNECTIONOBSERVER_IDX                     = 41,
    SBK_QMODBUSTCPSERVER_IDX                                 = 42,
    SBK_QtSerialBus_IDX_COUNT                                = 43
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtSerialBusTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtSerialBusModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtSerialBusTypeConverters;

// Converter indices
enum : int {
    SBK_QTSERIALBUS_QLIST_INT_IDX                            = 0, // QList<int>
    SBK_QTSERIALBUS_QLIST_QUINT16_IDX                        = 1, // QList<quint16>
    SBK_QTSERIALBUS_QLIST_QCANBUSDEVICEINFO_IDX              = 2, // QList<QCanBusDeviceInfo>
    SBK_QTSERIALBUS_QLIST_QOBJECTPTR_IDX                     = 3, // QList<QObject*>
    SBK_QTSERIALBUS_QLIST_QBYTEARRAY_IDX                     = 4, // QList<QByteArray>
    SBK_QTSERIALBUS_QLIST_QMODBUSDEVICE_INTERMEDIATEERROR_IDX = 5, // QList<QModbusDevice::IntermediateError>
    SBK_QTSERIALBUS_QMAP_QMODBUSDATAUNIT_REGISTERTYPE_QMODBUSDATAUNIT_IDX = 6, // QMap<QModbusDataUnit::RegisterType,QModbusDataUnit>
    SBK_QTSERIALBUS_QLIST_QCANBUSDEVICE_CONFIGURATIONKEY_IDX = 7, // QList<QCanBusDevice::ConfigurationKey>
    SBK_QTSERIALBUS_QLIST_QCANBUSFRAME_IDX                   = 8, // QList<QCanBusFrame>
    SBK_QTSERIALBUS_QLIST_QVARIANT_IDX                       = 9, // QList<QVariant>
    SBK_QTSERIALBUS_QLIST_QSTRING_IDX                        = 10, // QList<QString>
    SBK_QTSERIALBUS_QMAP_QSTRING_QVARIANT_IDX                = 11, // QMap<QString,QVariant>
    SBK_QtSerialBus_CONVERTERS_IDX_COUNT                     = 12
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QCanBus >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QCANBUS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::CanBusError >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_CANBUSERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::CanBusDeviceState >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_CANBUSDEVICESTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::CanBusStatus >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_CANBUSSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::ConfigurationKey >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_CONFIGURATIONKEY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::Direction >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_DIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QCanBusDevice::Direction> >() { return SbkPySide6_QtSerialBusTypes[SBK_QFLAGS_QCANBUSDEVICE_DIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::Filter::FormatFilter >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_FILTER_FORMATFILTER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QCanBusDevice::Filter::FormatFilter> >() { return SbkPySide6_QtSerialBusTypes[SBK_QFLAGS_QCANBUSDEVICE_FILTER_FORMATFILTER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::Filter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICE_FILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDeviceInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QCANBUSDEVICEINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QCANBUSFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame::FrameType >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSFRAME_FRAMETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame::FrameError >() { return SbkPySide6_QtSerialBusTypes[SBK_QCANBUSFRAME_FRAMEERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QCanBusFrame::FrameError> >() { return SbkPySide6_QtSerialBusTypes[SBK_QFLAGS_QCANBUSFRAME_FRAMEERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QCANBUSFRAME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame::TimeStamp >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QCANBUSFRAME_TIMESTAMP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusClient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSCLIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDataUnit::RegisterType >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDATAUNIT_REGISTERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDataUnit >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDATAUNIT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::Error >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::State >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICE_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::ConnectionParameter >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICE_CONNECTIONPARAMETER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::IntermediateError >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICE_INTERMEDIATEERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification::ObjectId >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICEIDENTIFICATION_OBJECTID_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification::ReadDeviceIdCode >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICEIDENTIFICATION_READDEVICEIDCODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification::ConformityLevel >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICEIDENTIFICATION_CONFORMITYLEVEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSDEVICEIDENTIFICATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusPdu::ExceptionCode >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSPDU_EXCEPTIONCODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusPdu::FunctionCode >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSPDU_FUNCTIONCODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusPdu >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSPDU_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusReply::ReplyType >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSREPLY_REPLYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusRtuSerialClient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSRTUSERIALCLIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusRtuSerialServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSRTUSERIALSERVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusServer::Option >() { return SbkPySide6_QtSerialBusTypes[SBK_QMODBUSSERVER_OPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QModbusServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSSERVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusTcpClient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSTCPCLIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusTcpConnectionObserver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSTCPCONNECTIONOBSERVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusTcpServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSerialBusTypes[SBK_QMODBUSTCPSERVER_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSERIALBUS_PYTHON_H

