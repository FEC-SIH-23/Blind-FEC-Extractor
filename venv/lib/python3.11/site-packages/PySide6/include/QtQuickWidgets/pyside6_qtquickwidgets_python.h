// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTQUICKWIDGETS_PYTHON_H
#define SBK_QTQUICKWIDGETS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtquick_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtopengl_python.h>
#include <pyside6_qtqml_python.h>
#include <pyside6_qtwidgets_python.h>

// Bound library includes
#include <QtQuickWidgets/qquickwidget.h>
// Type indices
enum : int {
    SBK_QQUICKWIDGET_RESIZEMODE_IDX                          = 1,
    SBK_QQUICKWIDGET_STATUS_IDX                              = 2,
    SBK_QQUICKWIDGET_IDX                                     = 0,
    SBK_QtQuickWidgets_IDX_COUNT                             = 3
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtQuickWidgetsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtQuickWidgetsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtQuickWidgetsTypeConverters;

// Converter indices
enum : int {
    SBK_QTQUICKWIDGETS_QLIST_INT_IDX                         = 0, // QList<int>
    SBK_QTQUICKWIDGETS_QLIST_QACTIONPTR_IDX                  = 1, // QList<QAction*>
    SBK_QTQUICKWIDGETS_QLIST_QQMLERROR_IDX                   = 2, // QList<QQmlError>
    SBK_QTQUICKWIDGETS_QLIST_QVARIANT_IDX                    = 3, // QList<QVariant>
    SBK_QTQUICKWIDGETS_QLIST_QSTRING_IDX                     = 4, // QList<QString>
    SBK_QTQUICKWIDGETS_QMAP_QSTRING_QVARIANT_IDX             = 5, // QMap<QString,QVariant>
    SBK_QtQuickWidgets_CONVERTERS_IDX_COUNT                  = 6
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QQuickWidget::ResizeMode >() { return SbkPySide6_QtQuickWidgetsTypes[SBK_QQUICKWIDGET_RESIZEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWidget::Status >() { return SbkPySide6_QtQuickWidgetsTypes[SBK_QQUICKWIDGET_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickWidgetsTypes[SBK_QQUICKWIDGET_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTQUICKWIDGETS_PYTHON_H

