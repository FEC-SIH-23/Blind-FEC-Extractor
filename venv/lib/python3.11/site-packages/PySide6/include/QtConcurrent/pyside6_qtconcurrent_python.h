// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTCONCURRENT_PYTHON_H
#define SBK_QTCONCURRENT_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtConcurrent/qtaskbuilder.h>
#include <QtConcurrent/qtconcurrentreducekernel.h>
#include <QtConcurrent/qtconcurrentrunbase.h>
#include <QtConcurrent/qtconcurrentthreadengine.h>
#if QT_CONFIG(future)
#include <QtCore/qfuture.h>
#include <QtCore/qfuturewatcher.h>
#endif
// Type indices
enum : int {
    SBK_QFUTUREQSTRING_IDX                                   = 1,
    SBK_QFUTURE_QSTRING_IDX                                  = 1,
    SBK_QFUTUREVOID_IDX                                      = 2,
    SBK_QFUTURE_VOID_IDX                                     = 2,
    SBK_QFUTUREWATCHERQSTRING_IDX                            = 3,
    SBK_QFUTUREWATCHER_QSTRING_IDX                           = 3,
    SBK_QFUTUREWATCHERVOID_IDX                               = 4,
    SBK_QFUTUREWATCHER_VOID_IDX                              = 4,
    SBK_QTCONCURRENT_FUTURERESULT_IDX                        = 6,
    SBK_QTCONCURRENT_THREADFUNCTIONRESULT_IDX                = 8,
    SBK_QTCONCURRENT_REDUCEOPTION_IDX                        = 7,
    SBK_QFLAGS_QTCONCURRENT_REDUCEOPTION_IDX                 = 0,
    SBK_QtConcurrentQTCONCURRENT_IDX                         = 5,
    SBK_QtConcurrent_IDX_COUNT                               = 9
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtConcurrentTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtConcurrentModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtConcurrentTypeConverters;

// Converter indices
enum : int {
    SBK_QTCONCURRENT_QLIST_INT_IDX                           = 0, // QList<int>
    SBK_QTCONCURRENT_QLIST_QVARIANT_IDX                      = 1, // QList<QVariant>
    SBK_QTCONCURRENT_QLIST_QSTRING_IDX                       = 2, // QList<QString>
    SBK_QTCONCURRENT_QMAP_QSTRING_QVARIANT_IDX               = 3, // QMap<QString,QVariant>
    SBK_QtConcurrent_CONVERTERS_IDX_COUNT                    = 4
};

// typedef entries
using QFutureQString = QFuture<QString>;
using QFutureVoid = QFuture<void>;
using QFutureWatcherQString = QFutureWatcher<QString>;
using QFutureWatcherVoid = QFutureWatcher<void>;

// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
#if QT_CONFIG(future)
template<> inline PyTypeObject *SbkType< ::QFutureQString >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtConcurrentTypes[SBK_QFUTUREQSTRING_IDX]); }
#endif
#if QT_CONFIG(future)
template<> inline PyTypeObject *SbkType< ::QFutureVoid >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtConcurrentTypes[SBK_QFUTUREVOID_IDX]); }
#endif
#if QT_CONFIG(future)
template<> inline PyTypeObject *SbkType< ::QFutureWatcherQString >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtConcurrentTypes[SBK_QFUTUREWATCHERQSTRING_IDX]); }
#endif
#if QT_CONFIG(future)
template<> inline PyTypeObject *SbkType< ::QFutureWatcherVoid >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtConcurrentTypes[SBK_QFUTUREWATCHERVOID_IDX]); }
#endif
template<> inline PyTypeObject *SbkType< ::QtConcurrent::FutureResult >() { return SbkPySide6_QtConcurrentTypes[SBK_QTCONCURRENT_FUTURERESULT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtConcurrent::ThreadFunctionResult >() { return SbkPySide6_QtConcurrentTypes[SBK_QTCONCURRENT_THREADFUNCTIONRESULT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtConcurrent::ReduceOption >() { return SbkPySide6_QtConcurrentTypes[SBK_QTCONCURRENT_REDUCEOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QtConcurrent::ReduceOption> >() { return SbkPySide6_QtConcurrentTypes[SBK_QFLAGS_QTCONCURRENT_REDUCEOPTION_IDX]; }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTCONCURRENT_PYTHON_H

