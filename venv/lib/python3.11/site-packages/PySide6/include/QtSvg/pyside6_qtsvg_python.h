// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSVG_PYTHON_H
#define SBK_QTSVG_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtSvg/qsvggenerator.h>
class QSvgRenderer;
// Type indices
enum : int {
    SBK_QSVGGENERATOR_SVGVERSION_IDX                         = 1,
    SBK_QSVGGENERATOR_IDX                                    = 0,
    SBK_QSVGRENDERER_IDX                                     = 2,
    SBK_QtSvg_IDX_COUNT                                      = 3
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtSvgTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtSvgModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtSvgTypeConverters;

// Converter indices
enum : int {
    SBK_QTSVG_QLIST_INT_IDX                                  = 0, // QList<int>
    SBK_QTSVG_QLIST_QOBJECTPTR_IDX                           = 1, // QList<QObject*>
    SBK_QTSVG_QLIST_QBYTEARRAY_IDX                           = 2, // QList<QByteArray>
    SBK_QTSVG_QLIST_QVARIANT_IDX                             = 3, // QList<QVariant>
    SBK_QTSVG_QLIST_QSTRING_IDX                              = 4, // QList<QString>
    SBK_QTSVG_QMAP_QSTRING_QVARIANT_IDX                      = 5, // QMap<QString,QVariant>
    SBK_QtSvg_CONVERTERS_IDX_COUNT                           = 6
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QSvgGenerator::SvgVersion >() { return SbkPySide6_QtSvgTypes[SBK_QSVGGENERATOR_SVGVERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSvgGenerator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSvgTypes[SBK_QSVGGENERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSvgRenderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSvgTypes[SBK_QSVGRENDERER_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSVG_PYTHON_H

