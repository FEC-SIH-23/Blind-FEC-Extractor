// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTQUICKCONTROLS2_PYTHON_H
#define SBK_QTQUICKCONTROLS2_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtquick_python.h>
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtopengl_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtqml_python.h>

// Bound library includes
class QQuickStyle;
// Type indices
enum : int {
    SBK_QQUICKSTYLE_IDX                                      = 0,
    SBK_QtQuickControls2_IDX_COUNT                           = 1
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtQuickControls2Types;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtQuickControls2ModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtQuickControls2TypeConverters;

// Converter indices
enum : int {
    SBK_QTQUICKCONTROLS2_QLIST_INT_IDX                       = 0, // QList<int>
    SBK_QTQUICKCONTROLS2_QLIST_QVARIANT_IDX                  = 1, // QList<QVariant>
    SBK_QTQUICKCONTROLS2_QLIST_QSTRING_IDX                   = 2, // QList<QString>
    SBK_QTQUICKCONTROLS2_QMAP_QSTRING_QVARIANT_IDX           = 3, // QMap<QString,QVariant>
    SBK_QtQuickControls2_CONVERTERS_IDX_COUNT                = 4
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QQuickStyle >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickControls2Types[SBK_QQUICKSTYLE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTQUICKCONTROLS2_PYTHON_H

