// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTQUICK3D_PYTHON_H
#define SBK_QTQUICK3D_PYTHON_H

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
#include <QtQuick3D/qquick3dgeometry.h>
#include <QtQuick3D/qquick3dinstancing.h>
#include <QtQuick3D/qquick3dobject.h>
#include <QtQuick3D/qquick3dtexturedata.h>
class QQuick3D;
// Type indices
enum : int {
    SBK_QQUICK3D_IDX                                         = 0,
    SBK_QQUICK3DGEOMETRY_PRIMITIVETYPE_IDX                   = 5,
    SBK_QQUICK3DGEOMETRY_IDX                                 = 1,
    SBK_QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_IDX              = 4,
    SBK_QQUICK3DGEOMETRY_ATTRIBUTE_COMPONENTTYPE_IDX         = 3,
    SBK_QQUICK3DGEOMETRY_ATTRIBUTE_IDX                       = 2,
    SBK_QQUICK3DGEOMETRY_TARGETATTRIBUTE_IDX                 = 6,
    SBK_QQUICK3DINSTANCING_IDX                               = 7,
    SBK_QQUICK3DINSTANCING_INSTANCETABLEENTRY_IDX            = 8,
    SBK_QQUICK3DOBJECT_ITEMCHANGE_IDX                        = 10,
    SBK_QQUICK3DOBJECT_IDX                                   = 9,
    SBK_QQUICK3DTEXTUREDATA_FORMAT_IDX                       = 12,
    SBK_QQUICK3DTEXTUREDATA_IDX                              = 11,
    SBK_QtQuick3D_IDX_COUNT                                  = 13
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtQuick3DTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtQuick3DModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtQuick3DTypeConverters;

// Converter indices
enum : int {
    SBK_QTQUICK3D_QLIST_INT_IDX                              = 0, // QList<int>
    SBK_QTQUICK3D_QLIST_QQUICK3DOBJECTPTR_IDX                = 1, // QList<QQuick3DObject*>
    SBK_QTQUICK3D_QLIST_QOBJECTPTR_IDX                       = 2, // QList<QObject*>
    SBK_QTQUICK3D_QLIST_QBYTEARRAY_IDX                       = 3, // QList<QByteArray>
    SBK_QTQUICK3D_QLIST_QVARIANT_IDX                         = 4, // QList<QVariant>
    SBK_QTQUICK3D_QLIST_QSTRING_IDX                          = 5, // QList<QString>
    SBK_QTQUICK3D_QMAP_QSTRING_QVARIANT_IDX                  = 6, // QMap<QString,QVariant>
    SBK_QtQuick3D_CONVERTERS_IDX_COUNT                       = 7
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QQuick3D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuick3DGeometry::PrimitiveType >() { return SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DGEOMETRY_PRIMITIVETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuick3DGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuick3DGeometry::Attribute::Semantic >() { return SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuick3DGeometry::Attribute::ComponentType >() { return SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DGEOMETRY_ATTRIBUTE_COMPONENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuick3DGeometry::Attribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DGEOMETRY_ATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuick3DGeometry::TargetAttribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DGEOMETRY_TARGETATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuick3DInstancing >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DINSTANCING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuick3DInstancing::InstanceTableEntry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DINSTANCING_INSTANCETABLEENTRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuick3DObject::ItemChange >() { return SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DOBJECT_ITEMCHANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuick3DObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuick3DTextureData::Format >() { return SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DTEXTUREDATA_FORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuick3DTextureData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuick3DTypes[SBK_QQUICK3DTEXTUREDATA_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTQUICK3D_PYTHON_H

