// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTWEBENGINEQUICK_PYTHON_H
#define SBK_QTWEBENGINEQUICK_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtqml_python.h>
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>

// Bound library includes
#include <QtWebEngineQuick/qquickwebengineprofile.h>
#include <QtWebEngineQuick/qtwebenginequickglobal.h>
// Type indices
enum : int {
    SBK_QQUICKWEBENGINEPROFILE_HTTPCACHETYPE_IDX             = 1,
    SBK_QQUICKWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_IDX   = 2,
    SBK_QQUICKWEBENGINEPROFILE_IDX                           = 0,
    SBK_QtWebEngineQuickQTWEBENGINEQUICK_IDX                 = 3,
    SBK_QtWebEngineQuick_IDX_COUNT                           = 4
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtWebEngineQuickTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtWebEngineQuickModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtWebEngineQuickTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBENGINEQUICK_QLIST_INT_IDX                       = 0, // QList<int>
    SBK_QTWEBENGINEQUICK_QLIST_QOBJECTPTR_IDX                = 1, // QList<QObject*>
    SBK_QTWEBENGINEQUICK_QLIST_QBYTEARRAY_IDX                = 2, // QList<QByteArray>
    SBK_QTWEBENGINEQUICK_QLIST_QVARIANT_IDX                  = 3, // QList<QVariant>
    SBK_QTWEBENGINEQUICK_QLIST_QSTRING_IDX                   = 4, // QList<QString>
    SBK_QTWEBENGINEQUICK_QMAP_QSTRING_QVARIANT_IDX           = 5, // QMap<QString,QVariant>
    SBK_QtWebEngineQuick_CONVERTERS_IDX_COUNT                = 6
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QQuickWebEngineProfile::HttpCacheType >() { return SbkPySide6_QtWebEngineQuickTypes[SBK_QQUICKWEBENGINEPROFILE_HTTPCACHETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWebEngineProfile::PersistentCookiesPolicy >() { return SbkPySide6_QtWebEngineQuickTypes[SBK_QQUICKWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWebEngineProfile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineQuickTypes[SBK_QQUICKWEBENGINEPROFILE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTWEBENGINEQUICK_PYTHON_H

