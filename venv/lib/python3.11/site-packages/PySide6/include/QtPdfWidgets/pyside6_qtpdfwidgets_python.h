// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTPDFWIDGETS_PYTHON_H
#define SBK_QTPDFWIDGETS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtwidgets_python.h>
#include <pyside6_qtpdf_python.h>

// Bound library includes
#include <QtPdfWidgets/qpdfview.h>
class QPdfPageSelector;
// Type indices
enum : int {
    SBK_QPDFPAGESELECTOR_IDX                                 = 0,
    SBK_QPDFVIEW_PAGEMODE_IDX                                = 2,
    SBK_QPDFVIEW_ZOOMMODE_IDX                                = 3,
    SBK_QPDFVIEW_IDX                                         = 1,
    SBK_QtPdfWidgets_IDX_COUNT                               = 4
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtPdfWidgetsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtPdfWidgetsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtPdfWidgetsTypeConverters;

// Converter indices
enum : int {
    SBK_QTPDFWIDGETS_QLIST_INT_IDX                           = 0, // QList<int>
    SBK_QTPDFWIDGETS_QLIST_QWIDGETPTR_IDX                    = 1, // QList<QWidget*>
    SBK_QTPDFWIDGETS_QLIST_QACTIONPTR_IDX                    = 2, // QList<QAction*>
    SBK_QTPDFWIDGETS_QLIST_QVARIANT_IDX                      = 3, // QList<QVariant>
    SBK_QTPDFWIDGETS_QLIST_QSTRING_IDX                       = 4, // QList<QString>
    SBK_QTPDFWIDGETS_QMAP_QSTRING_QVARIANT_IDX               = 5, // QMap<QString,QVariant>
    SBK_QtPdfWidgets_CONVERTERS_IDX_COUNT                    = 6
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QPdfPageSelector >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfWidgetsTypes[SBK_QPDFPAGESELECTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfView::PageMode >() { return SbkPySide6_QtPdfWidgetsTypes[SBK_QPDFVIEW_PAGEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfView::ZoomMode >() { return SbkPySide6_QtPdfWidgetsTypes[SBK_QPDFVIEW_ZOOMMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfWidgetsTypes[SBK_QPDFVIEW_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTPDFWIDGETS_PYTHON_H

