// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTPOSITIONING_PYTHON_H
#define SBK_QTPOSITIONING_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtPositioning/qgeoareamonitorsource.h>
#include <QtPositioning/qgeocoordinate.h>
#include <QtPositioning/qgeopositioninfo.h>
#include <QtPositioning/qgeopositioninfosource.h>
#include <QtPositioning/qgeosatelliteinfo.h>
#include <QtPositioning/qgeosatelliteinfosource.h>
#include <QtPositioning/qgeoshape.h>
#include <QtPositioning/qnmeapositioninfosource.h>
class QGeoAddress;
class QGeoAreaMonitorInfo;
class QGeoCircle;
class QGeoLocation;
class QGeoPath;
class QGeoPolygon;
class QGeoPositionInfoSourceFactory;
class QGeoRectangle;
// Type indices
enum : int {
    SBK_QGEOADDRESS_IDX                                      = 2,
    SBK_QGEOAREAMONITORINFO_IDX                              = 3,
    SBK_QGEOAREAMONITORSOURCE_ERROR_IDX                      = 6,
    SBK_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX         = 5,
    SBK_QFLAGS_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX  = 0,
    SBK_QGEOAREAMONITORSOURCE_IDX                            = 4,
    SBK_QGEOCIRCLE_IDX                                       = 7,
    SBK_QGEOCOORDINATE_COORDINATETYPE_IDX                    = 10,
    SBK_QGEOCOORDINATE_COORDINATEFORMAT_IDX                  = 9,
    SBK_QGEOCOORDINATE_IDX                                   = 8,
    SBK_QGEOLOCATION_IDX                                     = 11,
    SBK_QGEOPATH_IDX                                         = 12,
    SBK_QGEOPOLYGON_IDX                                      = 13,
    SBK_QGEOPOSITIONINFO_ATTRIBUTE_IDX                       = 15,
    SBK_QGEOPOSITIONINFO_IDX                                 = 14,
    SBK_QGEOPOSITIONINFOSOURCE_ERROR_IDX                     = 17,
    SBK_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX         = 18,
    SBK_QFLAGS_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX  = 1,
    SBK_QGEOPOSITIONINFOSOURCE_IDX                           = 16,
    SBK_QGEOPOSITIONINFOSOURCEFACTORY_IDX                    = 19,
    SBK_QGEORECTANGLE_IDX                                    = 20,
    SBK_QGEOSATELLITEINFO_ATTRIBUTE_IDX                      = 22,
    SBK_QGEOSATELLITEINFO_SATELLITESYSTEM_IDX                = 23,
    SBK_QGEOSATELLITEINFO_IDX                                = 21,
    SBK_QGEOSATELLITEINFOSOURCE_ERROR_IDX                    = 25,
    SBK_QGEOSATELLITEINFOSOURCE_IDX                          = 24,
    SBK_QGEOSHAPE_SHAPETYPE_IDX                              = 27,
    SBK_QGEOSHAPE_IDX                                        = 26,
    SBK_QNMEAPOSITIONINFOSOURCE_UPDATEMODE_IDX               = 29,
    SBK_QNMEAPOSITIONINFOSOURCE_IDX                          = 28,
    SBK_QtPositioning_IDX_COUNT                              = 30
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtPositioningTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtPositioningModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtPositioningTypeConverters;

// Converter indices
enum : int {
    SBK_QTPOSITIONING_QLIST_INT_IDX                          = 0, // QList<int>
    SBK_QTPOSITIONING_QLIST_QGEOCOORDINATE_IDX               = 1, // QList<QGeoCoordinate>
    SBK_QTPOSITIONING_QMAP_QSTRING_QVARIANT_IDX              = 2, // QMap<QString,QVariant>
    SBK_QTPOSITIONING_QLIST_QVARIANT_IDX                     = 3, // QList<QVariant>
    SBK_QTPOSITIONING_QLIST_QOBJECTPTR_IDX                   = 4, // QList<QObject*>
    SBK_QTPOSITIONING_QLIST_QBYTEARRAY_IDX                   = 5, // QList<QByteArray>
    SBK_QTPOSITIONING_QLIST_QGEOSATELLITEINFO_IDX            = 6, // QList<QGeoSatelliteInfo>
    SBK_QTPOSITIONING_QLIST_QGEOAREAMONITORINFO_IDX          = 7, // QList<QGeoAreaMonitorInfo>
    SBK_QTPOSITIONING_QLIST_QSTRING_IDX                      = 8, // QList<QString>
    SBK_QtPositioning_CONVERTERS_IDX_COUNT                   = 9
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QGeoAddress >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOADDRESS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOAREAMONITORINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorSource::Error >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOAREAMONITORSOURCE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorSource::AreaMonitorFeature >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoAreaMonitorSource::AreaMonitorFeature> >() { return SbkPySide6_QtPositioningTypes[SBK_QFLAGS_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOAREAMONITORSOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCircle >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOCIRCLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCoordinate::CoordinateType >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOCOORDINATE_COORDINATETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoCoordinate::CoordinateFormat >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOCOORDINATE_COORDINATEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoCoordinate >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOCOORDINATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoLocation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOLOCATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPath >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOPATH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPolygon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOPOLYGON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfo::Attribute >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOPOSITIONINFO_ATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOPOSITIONINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSource::Error >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSource::PositioningMethod >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoPositionInfoSource::PositioningMethod> >() { return SbkPySide6_QtPositioningTypes[SBK_QFLAGS_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSourceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRectangle >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEORECTANGLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfo::Attribute >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOSATELLITEINFO_ATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfo::SatelliteSystem >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOSATELLITEINFO_SATELLITESYSTEM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOSATELLITEINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfoSource::Error >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOSATELLITEINFOSOURCE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfoSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOSATELLITEINFOSOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoShape::ShapeType >() { return SbkPySide6_QtPositioningTypes[SBK_QGEOSHAPE_SHAPETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoShape >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QGEOSHAPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNmeaPositionInfoSource::UpdateMode >() { return SbkPySide6_QtPositioningTypes[SBK_QNMEAPOSITIONINFOSOURCE_UPDATEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNmeaPositionInfoSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPositioningTypes[SBK_QNMEAPOSITIONINFOSOURCE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTPOSITIONING_PYTHON_H

