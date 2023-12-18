// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSENSORS_PYTHON_H
#define SBK_QTSENSORS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtSensors/qaccelerometer.h>
#include <QtSensors/qambientlightsensor.h>
#include <QtSensors/qorientationsensor.h>
#include <QtSensors/qsensor.h>
#include <QtSensors/qtapsensor.h>
class QAccelerometerFilter;
class QAccelerometerReading;
class QAmbientLightFilter;
class QAmbientLightSensor;
class QAmbientTemperatureFilter;
class QAmbientTemperatureReading;
class QAmbientTemperatureSensor;
class QCompass;
class QCompassFilter;
class QCompassReading;
class QGyroscope;
class QGyroscopeFilter;
class QGyroscopeReading;
class QHumidityFilter;
class QHumidityReading;
class QHumiditySensor;
class QIRProximityFilter;
class QIRProximityReading;
class QIRProximitySensor;
class QLidFilter;
class QLidReading;
class QLidSensor;
class QLightFilter;
class QLightReading;
class QLightSensor;
class QMagnetometer;
class QMagnetometerFilter;
class QMagnetometerReading;
class QOrientationFilter;
class QOrientationSensor;
class QPressureFilter;
class QPressureReading;
class QPressureSensor;
class QProximityFilter;
class QProximityReading;
class QProximitySensor;
class QRotationFilter;
class QRotationReading;
class QRotationSensor;
class QSensorBackend;
class QSensorBackendFactory;
class QSensorChangesInterface;
class QSensorFilter;
class QSensorManager;
class QSensorPluginInterface;
class QSensorReading;
class QTapFilter;
class QTapSensor;
class QTiltFilter;
class QTiltReading;
class QTiltSensor;
struct qoutputrange;
// Type indices
enum : int {
    SBK_QACCELEROMETER_ACCELERATIONMODE_IDX                  = 1,
    SBK_QACCELEROMETER_IDX                                   = 0,
    SBK_QACCELEROMETERFILTER_IDX                             = 2,
    SBK_QACCELEROMETERREADING_IDX                            = 3,
    SBK_QAMBIENTLIGHTFILTER_IDX                              = 4,
    SBK_QAMBIENTLIGHTREADING_LIGHTLEVEL_IDX                  = 6,
    SBK_QAMBIENTLIGHTREADING_IDX                             = 5,
    SBK_QAMBIENTLIGHTSENSOR_IDX                              = 7,
    SBK_QAMBIENTTEMPERATUREFILTER_IDX                        = 8,
    SBK_QAMBIENTTEMPERATUREREADING_IDX                       = 9,
    SBK_QAMBIENTTEMPERATURESENSOR_IDX                        = 10,
    SBK_QCOMPASS_IDX                                         = 11,
    SBK_QCOMPASSFILTER_IDX                                   = 12,
    SBK_QCOMPASSREADING_IDX                                  = 13,
    SBK_QGYROSCOPE_IDX                                       = 14,
    SBK_QGYROSCOPEFILTER_IDX                                 = 15,
    SBK_QGYROSCOPEREADING_IDX                                = 16,
    SBK_QHUMIDITYFILTER_IDX                                  = 17,
    SBK_QHUMIDITYREADING_IDX                                 = 18,
    SBK_QHUMIDITYSENSOR_IDX                                  = 19,
    SBK_QIRPROXIMITYFILTER_IDX                               = 20,
    SBK_QIRPROXIMITYREADING_IDX                              = 21,
    SBK_QIRPROXIMITYSENSOR_IDX                               = 22,
    SBK_QLIDFILTER_IDX                                       = 23,
    SBK_QLIDREADING_IDX                                      = 24,
    SBK_QLIDSENSOR_IDX                                       = 25,
    SBK_QLIGHTFILTER_IDX                                     = 26,
    SBK_QLIGHTREADING_IDX                                    = 27,
    SBK_QLIGHTSENSOR_IDX                                     = 28,
    SBK_QMAGNETOMETER_IDX                                    = 29,
    SBK_QMAGNETOMETERFILTER_IDX                              = 30,
    SBK_QMAGNETOMETERREADING_IDX                             = 31,
    SBK_QORIENTATIONFILTER_IDX                               = 32,
    SBK_QORIENTATIONREADING_ORIENTATION_IDX                  = 34,
    SBK_QORIENTATIONREADING_IDX                              = 33,
    SBK_QORIENTATIONSENSOR_IDX                               = 35,
    SBK_QPRESSUREFILTER_IDX                                  = 36,
    SBK_QPRESSUREREADING_IDX                                 = 37,
    SBK_QPRESSURESENSOR_IDX                                  = 38,
    SBK_QPROXIMITYFILTER_IDX                                 = 39,
    SBK_QPROXIMITYREADING_IDX                                = 40,
    SBK_QPROXIMITYSENSOR_IDX                                 = 41,
    SBK_QROTATIONFILTER_IDX                                  = 42,
    SBK_QROTATIONREADING_IDX                                 = 43,
    SBK_QROTATIONSENSOR_IDX                                  = 44,
    SBK_QSENSOR_FEATURE_IDX                                  = 47,
    SBK_QSENSOR_AXESORIENTATIONMODE_IDX                      = 46,
    SBK_QSENSOR_IDX                                          = 45,
    SBK_QSENSORBACKEND_IDX                                   = 48,
    SBK_QSENSORBACKENDFACTORY_IDX                            = 49,
    SBK_QSENSORCHANGESINTERFACE_IDX                          = 50,
    SBK_QSENSORFILTER_IDX                                    = 51,
    SBK_QSENSORMANAGER_IDX                                   = 52,
    SBK_QSENSORPLUGININTERFACE_IDX                           = 53,
    SBK_QSENSORREADING_IDX                                   = 54,
    SBK_QTAPFILTER_IDX                                       = 55,
    SBK_QTAPREADING_TAPDIRECTION_IDX                         = 57,
    SBK_QTAPREADING_IDX                                      = 56,
    SBK_QTAPSENSOR_IDX                                       = 58,
    SBK_QTILTFILTER_IDX                                      = 59,
    SBK_QTILTREADING_IDX                                     = 60,
    SBK_QTILTSENSOR_IDX                                      = 61,
    SBK_QOUTPUTRANGE_IDX                                     = 62,
    SBK_QtSensors_IDX_COUNT                                  = 63
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtSensorsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtSensorsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtSensorsTypeConverters;

// Converter indices
enum : int {
    SBK_QTSENSORS_QLIST_INT_IDX                              = 0, // QList<int>
    SBK_QTSENSORS_QLIST_QOBJECTPTR_IDX                       = 1, // QList<QObject*>
    SBK_QTSENSORS_QLIST_QBYTEARRAY_IDX                       = 2, // QList<QByteArray>
    SBK_QTSENSORS_STD_PAIR_INT_INT_IDX                       = 3, // std::pair<int,int>
    SBK_QTSENSORS_QLIST_STD_PAIR_INT_INT_IDX                 = 4, // QList<std::pair< int,int>>
    SBK_QTSENSORS_QLIST_QSENSORFILTERPTR_IDX                 = 5, // QList<QSensorFilter*>
    SBK_QTSENSORS_QLIST_QOUTPUTRANGE_IDX                     = 6, // QList<qoutputrange>
    SBK_QTSENSORS_QLIST_QVARIANT_IDX                         = 7, // QList<QVariant>
    SBK_QTSENSORS_QLIST_QSTRING_IDX                          = 8, // QList<QString>
    SBK_QTSENSORS_QMAP_QSTRING_QVARIANT_IDX                  = 9, // QMap<QString,QVariant>
    SBK_QtSensors_CONVERTERS_IDX_COUNT                       = 10
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAccelerometer::AccelerationMode >() { return SbkPySide6_QtSensorsTypes[SBK_QACCELEROMETER_ACCELERATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccelerometer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QACCELEROMETER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccelerometerFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QACCELEROMETERFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccelerometerReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QACCELEROMETERREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAmbientLightFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QAMBIENTLIGHTFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAmbientLightReading::LightLevel >() { return SbkPySide6_QtSensorsTypes[SBK_QAMBIENTLIGHTREADING_LIGHTLEVEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAmbientLightReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QAMBIENTLIGHTREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAmbientLightSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QAMBIENTLIGHTSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAmbientTemperatureFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QAMBIENTTEMPERATUREFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAmbientTemperatureReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QAMBIENTTEMPERATUREREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAmbientTemperatureSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QAMBIENTTEMPERATURESENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCompass >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QCOMPASS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCompassFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QCOMPASSFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCompassReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QCOMPASSREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGyroscope >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QGYROSCOPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGyroscopeFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QGYROSCOPEFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGyroscopeReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QGYROSCOPEREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHumidityFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QHUMIDITYFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHumidityReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QHUMIDITYREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHumiditySensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QHUMIDITYSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIRProximityFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QIRPROXIMITYFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIRProximityReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QIRPROXIMITYREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIRProximitySensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QIRPROXIMITYSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLidFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QLIDFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLidReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QLIDREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLidSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QLIDSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLightFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QLIGHTFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLightReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QLIGHTREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLightSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QLIGHTSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMagnetometer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QMAGNETOMETER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMagnetometerFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QMAGNETOMETERFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMagnetometerReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QMAGNETOMETERREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOrientationFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QORIENTATIONFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOrientationReading::Orientation >() { return SbkPySide6_QtSensorsTypes[SBK_QORIENTATIONREADING_ORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOrientationReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QORIENTATIONREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOrientationSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QORIENTATIONSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPressureFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QPRESSUREFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPressureReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QPRESSUREREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPressureSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QPRESSURESENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QProximityFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QPROXIMITYFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QProximityReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QPROXIMITYREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QProximitySensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QPROXIMITYSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRotationFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QROTATIONFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRotationReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QROTATIONREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRotationSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QROTATIONSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensor::Feature >() { return SbkPySide6_QtSensorsTypes[SBK_QSENSOR_FEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSensor::AxesOrientationMode >() { return SbkPySide6_QtSensorsTypes[SBK_QSENSOR_AXESORIENTATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensorBackend >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSORBACKEND_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensorBackendFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSORBACKENDFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensorChangesInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSORCHANGESINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensorFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSORFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensorManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSORMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensorPluginInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSORPLUGININTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSensorReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QSENSORREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTapFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QTAPFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTapReading::TapDirection >() { return SbkPySide6_QtSensorsTypes[SBK_QTAPREADING_TAPDIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTapReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QTAPREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTapSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QTAPSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTiltFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QTILTFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTiltReading >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QTILTREADING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTiltSensor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QTILTSENSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::qoutputrange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSensorsTypes[SBK_QOUTPUTRANGE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSENSORS_PYTHON_H

