// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTPRINTSUPPORT_PYTHON_H
#define SBK_QTPRINTSUPPORT_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtwidgets_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtPrintSupport/qabstractprintdialog.h>
#include <QtPrintSupport/qprintengine.h>
#include <QtPrintSupport/qprinter.h>
#include <QtPrintSupport/qprintpreviewwidget.h>
class QPageSetupDialog;
class QPrintDialog;
class QPrintPreviewDialog;
class QPrinterInfo;
// Type indices
enum : int {
    SBK_QABSTRACTPRINTDIALOG_PRINTRANGE_IDX                  = 2,
    SBK_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX           = 1,
    SBK_QFLAGS_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX    = 3,
    SBK_QABSTRACTPRINTDIALOG_IDX                             = 0,
    SBK_QPAGESETUPDIALOG_IDX                                 = 4,
    SBK_QPRINTDIALOG_IDX                                     = 5,
    SBK_QPRINTENGINE_PRINTENGINEPROPERTYKEY_IDX              = 7,
    SBK_QPRINTENGINE_IDX                                     = 6,
    SBK_QPRINTPREVIEWDIALOG_IDX                              = 8,
    SBK_QPRINTPREVIEWWIDGET_VIEWMODE_IDX                     = 10,
    SBK_QPRINTPREVIEWWIDGET_ZOOMMODE_IDX                     = 11,
    SBK_QPRINTPREVIEWWIDGET_IDX                              = 9,
    SBK_QPRINTER_PRINTERMODE_IDX                             = 19,
    SBK_QPRINTER_PAGEORDER_IDX                               = 16,
    SBK_QPRINTER_COLORMODE_IDX                               = 13,
    SBK_QPRINTER_PAPERSOURCE_IDX                             = 17,
    SBK_QPRINTER_PRINTERSTATE_IDX                            = 20,
    SBK_QPRINTER_OUTPUTFORMAT_IDX                            = 15,
    SBK_QPRINTER_PRINTRANGE_IDX                              = 18,
    SBK_QPRINTER_UNIT_IDX                                    = 21,
    SBK_QPRINTER_DUPLEXMODE_IDX                              = 14,
    SBK_QPRINTER_IDX                                         = 12,
    SBK_QPRINTERINFO_IDX                                     = 22,
    SBK_QtPrintSupport_IDX_COUNT                             = 23
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtPrintSupportTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtPrintSupportModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtPrintSupportTypeConverters;

// Converter indices
enum : int {
    SBK_QTPRINTSUPPORT_QLIST_INT_IDX                         = 0, // QList<int>
    SBK_QTPRINTSUPPORT_QLIST_QPRINTERINFO_IDX                = 1, // QList<QPrinterInfo>
    SBK_QTPRINTSUPPORT_QLIST_QPRINTER_COLORMODE_IDX          = 2, // QList<QPrinter::ColorMode>
    SBK_QTPRINTSUPPORT_QLIST_QPRINTER_DUPLEXMODE_IDX         = 3, // QList<QPrinter::DuplexMode>
    SBK_QTPRINTSUPPORT_QLIST_QPAGESIZE_IDX                   = 4, // QList<QPageSize>
    SBK_QTPRINTSUPPORT_QLIST_QWIDGETPTR_IDX                  = 5, // QList<QWidget*>
    SBK_QTPRINTSUPPORT_QLIST_QACTIONPTR_IDX                  = 6, // QList<QAction*>
    SBK_QTPRINTSUPPORT_QLIST_QVARIANT_IDX                    = 7, // QList<QVariant>
    SBK_QTPRINTSUPPORT_QLIST_QSTRING_IDX                     = 8, // QList<QString>
    SBK_QTPRINTSUPPORT_QMAP_QSTRING_QVARIANT_IDX             = 9, // QMap<QString,QVariant>
    SBK_QtPrintSupport_CONVERTERS_IDX_COUNT                  = 10
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractPrintDialog::PrintRange >() { return SbkPySide6_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_PRINTRANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractPrintDialog::PrintDialogOption >() { return SbkPySide6_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstractPrintDialog::PrintDialogOption> >() { return SbkPySide6_QtPrintSupportTypes[SBK_QFLAGS_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractPrintDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSetupDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QPAGESETUPDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QPRINTDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintEngine::PrintEnginePropertyKey >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTENGINE_PRINTENGINEPROPERTYKEY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrintEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QPRINTENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QPRINTPREVIEWDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewWidget::ViewMode >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_VIEWMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewWidget::ZoomMode >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_ZOOMMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrinter::PrinterMode >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_PRINTERMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PageOrder >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_PAGEORDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::ColorMode >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_COLORMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PaperSource >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_PAPERSOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PrinterState >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_PRINTERSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::OutputFormat >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_OUTPUTFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PrintRange >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_PRINTRANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::Unit >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_UNIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::DuplexMode >() { return SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_DUPLEXMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QPRINTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrinterInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPrintSupportTypes[SBK_QPRINTERINFO_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTPRINTSUPPORT_PYTHON_H

