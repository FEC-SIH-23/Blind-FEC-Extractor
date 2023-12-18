// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSPATIALAUDIO_PYTHON_H
#define SBK_QTSPATIALAUDIO_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtmultimedia_python.h>

// Bound library includes
#include <QtSpatialAudio/qambientsound.h>
#include <QtSpatialAudio/qaudioengine.h>
#include <QtSpatialAudio/qaudioroom.h>
#include <QtSpatialAudio/qspatialsound.h>
class QAudioListener;
// Type indices
enum : int {
    SBK_QAMBIENTSOUND_LOOPS_IDX                              = 1,
    SBK_QAMBIENTSOUND_IDX                                    = 0,
    SBK_QAUDIOENGINE_OUTPUTMODE_IDX                          = 3,
    SBK_QAUDIOENGINE_IDX                                     = 2,
    SBK_QAUDIOLISTENER_IDX                                   = 4,
    SBK_QAUDIOROOM_MATERIAL_IDX                              = 6,
    SBK_QAUDIOROOM_WALL_IDX                                  = 7,
    SBK_QAUDIOROOM_IDX                                       = 5,
    SBK_QSPATIALSOUND_LOOPS_IDX                              = 10,
    SBK_QSPATIALSOUND_DISTANCEMODEL_IDX                      = 9,
    SBK_QSPATIALSOUND_IDX                                    = 8,
    SBK_QtSpatialAudio_IDX_COUNT                             = 11
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtSpatialAudioTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtSpatialAudioModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtSpatialAudioTypeConverters;

// Converter indices
enum : int {
    SBK_QTSPATIALAUDIO_QLIST_INT_IDX                         = 0, // QList<int>
    SBK_QTSPATIALAUDIO_QLIST_QOBJECTPTR_IDX                  = 1, // QList<QObject*>
    SBK_QTSPATIALAUDIO_QLIST_QBYTEARRAY_IDX                  = 2, // QList<QByteArray>
    SBK_QTSPATIALAUDIO_QLIST_QVARIANT_IDX                    = 3, // QList<QVariant>
    SBK_QTSPATIALAUDIO_QLIST_QSTRING_IDX                     = 4, // QList<QString>
    SBK_QTSPATIALAUDIO_QMAP_QSTRING_QVARIANT_IDX             = 5, // QMap<QString,QVariant>
    SBK_QtSpatialAudio_CONVERTERS_IDX_COUNT                  = 6
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAmbientSound::Loops >() { return SbkPySide6_QtSpatialAudioTypes[SBK_QAMBIENTSOUND_LOOPS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAmbientSound >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSpatialAudioTypes[SBK_QAMBIENTSOUND_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAudioEngine::OutputMode >() { return SbkPySide6_QtSpatialAudioTypes[SBK_QAUDIOENGINE_OUTPUTMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAudioEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSpatialAudioTypes[SBK_QAUDIOENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAudioListener >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSpatialAudioTypes[SBK_QAUDIOLISTENER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAudioRoom::Material >() { return SbkPySide6_QtSpatialAudioTypes[SBK_QAUDIOROOM_MATERIAL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAudioRoom::Wall >() { return SbkPySide6_QtSpatialAudioTypes[SBK_QAUDIOROOM_WALL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAudioRoom >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSpatialAudioTypes[SBK_QAUDIOROOM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSpatialSound::Loops >() { return SbkPySide6_QtSpatialAudioTypes[SBK_QSPATIALSOUND_LOOPS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSpatialSound::DistanceModel >() { return SbkPySide6_QtSpatialAudioTypes[SBK_QSPATIALSOUND_DISTANCEMODEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSpatialSound >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSpatialAudioTypes[SBK_QSPATIALSOUND_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSPATIALAUDIO_PYTHON_H

