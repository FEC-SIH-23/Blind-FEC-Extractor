// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTWEBENGINEWIDGETS_PYTHON_H
#define SBK_QTWEBENGINEWIDGETS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtwidgets_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtwebenginecore_python.h>
#include <pyside6_qtprintsupport_python.h>
#include <pyside6_qtwebchannel_python.h>

// Bound library includes
class QWebEngineView;
// Type indices
enum : int {
    SBK_QWEBENGINEVIEW_IDX                                   = 0,
    SBK_QtWebEngineWidgets_IDX_COUNT                         = 1
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtWebEngineWidgetsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtWebEngineWidgetsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtWebEngineWidgetsTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBENGINEWIDGETS_QLIST_INT_IDX                     = 0, // QList<int>
    SBK_QTWEBENGINEWIDGETS_QLIST_QACTIONPTR_IDX              = 1, // QList<QAction*>
    SBK_QTWEBENGINEWIDGETS_QLIST_QVARIANT_IDX                = 2, // QList<QVariant>
    SBK_QTWEBENGINEWIDGETS_QLIST_QSTRING_IDX                 = 3, // QList<QString>
    SBK_QTWEBENGINEWIDGETS_QMAP_QSTRING_QVARIANT_IDX         = 4, // QMap<QString,QVariant>
    SBK_QtWebEngineWidgets_CONVERTERS_IDX_COUNT              = 5
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QWebEngineView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineWidgetsTypes[SBK_QWEBENGINEVIEW_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTWEBENGINEWIDGETS_PYTHON_H

