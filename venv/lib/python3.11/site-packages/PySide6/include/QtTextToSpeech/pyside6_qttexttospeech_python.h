// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTTEXTTOSPEECH_PYTHON_H
#define SBK_QTTEXTTOSPEECH_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtTextToSpeech/qtexttospeech.h>
#include <QtTextToSpeech/qvoice.h>
class QTextToSpeechEngine;
// Type indices
enum : int {
    SBK_QTEXTTOSPEECH_STATE_IDX                              = 5,
    SBK_QTEXTTOSPEECH_ERRORREASON_IDX                        = 4,
    SBK_QTEXTTOSPEECH_BOUNDARYHINT_IDX                       = 2,
    SBK_QTEXTTOSPEECH_CAPABILITY_IDX                         = 3,
    SBK_QFLAGS_QTEXTTOSPEECH_CAPABILITY_IDX                  = 0,
    SBK_QTEXTTOSPEECH_IDX                                    = 1,
    SBK_QTEXTTOSPEECHENGINE_IDX                              = 6,
    SBK_QVOICE_GENDER_IDX                                    = 9,
    SBK_QVOICE_AGE_IDX                                       = 8,
    SBK_QVOICE_IDX                                           = 7,
    SBK_QtTextToSpeech_IDX_COUNT                             = 10
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtTextToSpeechTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtTextToSpeechModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtTextToSpeechTypeConverters;

// Converter indices
enum : int {
    SBK_QTTEXTTOSPEECH_QLIST_INT_IDX                         = 0, // QList<int>
    SBK_QTTEXTTOSPEECH_QLIST_QLOCALE_IDX                     = 1, // QList<QLocale>
    SBK_QTTEXTTOSPEECH_QLIST_QVOICE_IDX                      = 2, // QList<QVoice>
    SBK_QTTEXTTOSPEECH_QLIST_QOBJECTPTR_IDX                  = 3, // QList<QObject*>
    SBK_QTTEXTTOSPEECH_QLIST_QBYTEARRAY_IDX                  = 4, // QList<QByteArray>
    SBK_QTTEXTTOSPEECH_QMAP_QSTRING_QVARIANT_IDX             = 5, // QMap<QString,QVariant>
    SBK_QTTEXTTOSPEECH_QLIST_QVARIANT_IDX                    = 6, // QList<QVariant>
    SBK_QTTEXTTOSPEECH_QLIST_QSTRING_IDX                     = 7, // QList<QString>
    SBK_QtTextToSpeech_CONVERTERS_IDX_COUNT                  = 8
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QTextToSpeech::State >() { return SbkPySide6_QtTextToSpeechTypes[SBK_QTEXTTOSPEECH_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextToSpeech::ErrorReason >() { return SbkPySide6_QtTextToSpeechTypes[SBK_QTEXTTOSPEECH_ERRORREASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextToSpeech::BoundaryHint >() { return SbkPySide6_QtTextToSpeechTypes[SBK_QTEXTTOSPEECH_BOUNDARYHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextToSpeech::Capability >() { return SbkPySide6_QtTextToSpeechTypes[SBK_QTEXTTOSPEECH_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextToSpeech::Capability> >() { return SbkPySide6_QtTextToSpeechTypes[SBK_QFLAGS_QTEXTTOSPEECH_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextToSpeech >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtTextToSpeechTypes[SBK_QTEXTTOSPEECH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextToSpeechEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtTextToSpeechTypes[SBK_QTEXTTOSPEECHENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVoice::Gender >() { return SbkPySide6_QtTextToSpeechTypes[SBK_QVOICE_GENDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QVoice::Age >() { return SbkPySide6_QtTextToSpeechTypes[SBK_QVOICE_AGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QVoice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtTextToSpeechTypes[SBK_QVOICE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTTEXTTOSPEECH_PYTHON_H

