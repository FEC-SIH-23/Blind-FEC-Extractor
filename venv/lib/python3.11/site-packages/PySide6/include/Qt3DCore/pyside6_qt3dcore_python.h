// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QT3DCORE_PYTHON_H
#define SBK_QT3DCORE_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <Qt3DCore/qaspectengine.h>
#include <Qt3DCore/qattribute.h>
#include <Qt3DCore/qbackendnode.h>
#include <Qt3DCore/qbuffer.h>
#include <Qt3DCore/qgeometryview.h>
#include <Qt3DCore/qnodeid.h>
#include <Qt3DCore/qskeletonloader.h>
#include <qsharedpointer.h>

namespace Qt3DCore {
    class QAbstractAspect;
    class QAbstractFunctor;
    class QAbstractSkeleton;
    class QArmature;
    class QAspectJob;
    class QBackendNodeMapper;
    class QBoundingVolume;
    class QComponent;
    class QCoreSettings;
    class QEntity;
    class QGeometry;
    class QJoint;
    class QNode;
    class QNodeId;
    struct QNodeIdTypePair;
    class QSkeleton;
    class QTransform;
}
// Type indices
enum : int {
    SBK_Qt3DCoreQT3DCORE_IDX                                 = 1,
    SBK_QT3DCORE_QABSTRACTASPECT_IDX                         = 2,
    SBK_QT3DCORE_QABSTRACTFUNCTOR_IDX                        = 3,
    SBK_QT3DCORE_QABSTRACTSKELETON_IDX                       = 4,
    SBK_QT3DCORE_QARMATURE_IDX                               = 5,
    SBK_QT3DCORE_QASPECTENGINE_RUNMODE_IDX                   = 7,
    SBK_QT3DCORE_QASPECTENGINE_IDX                           = 6,
    SBK_QT3DCORE_QASPECTJOB_IDX                              = 8,
    SBK_QT3DCORE_QATTRIBUTE_ATTRIBUTETYPE_IDX                = 10,
    SBK_QT3DCORE_QATTRIBUTE_VERTEXBASETYPE_IDX               = 11,
    SBK_QT3DCORE_QATTRIBUTE_IDX                              = 9,
    SBK_QT3DCORE_QBACKENDNODE_MODE_IDX                       = 13,
    SBK_QT3DCORE_QBACKENDNODE_IDX                            = 12,
    SBK_QT3DCORE_QBACKENDNODEMAPPER_IDX                      = 14,
    SBK_QT3DCORE_QBOUNDINGVOLUME_IDX                         = 15,
    SBK_QT3DCORE_QBUFFER_USAGETYPE_IDX                       = 18,
    SBK_QT3DCORE_QBUFFER_ACCESSTYPE_IDX                      = 17,
    SBK_QT3DCORE_QBUFFER_IDX                                 = 16,
    SBK_QT3DCORE_QCOMPONENT_IDX                              = 19,
    SBK_QT3DCORE_QCORESETTINGS_IDX                           = 20,
    SBK_QT3DCORE_QENTITY_IDX                                 = 21,
    SBK_QT3DCORE_QGEOMETRY_IDX                               = 22,
    SBK_QT3DCORE_QGEOMETRYVIEW_PRIMITIVETYPE_IDX             = 24,
    SBK_QT3DCORE_QGEOMETRYVIEW_IDX                           = 23,
    SBK_QT3DCORE_QJOINT_IDX                                  = 25,
    SBK_QT3DCORE_QNODE_IDX                                   = 26,
    SBK_QT3DCORE_QNODEID_IDX                                 = 27,
    SBK_QT3DCORE_QNODEIDTYPEPAIR_IDX                         = 28,
    SBK_QT3DCORE_QSKELETON_IDX                               = 29,
    SBK_QT3DCORE_QSKELETONLOADER_STATUS_IDX                  = 31,
    SBK_QT3DCORE_QSKELETONLOADER_IDX                         = 30,
    SBK_QT3DCORE_QTRANSFORM_IDX                              = 32,
    SBK_QSHAREDPOINTER_QT3DCORE_QASPECTJOB_IDX               = 33, // QSharedPointer<Qt3DCore::QAspectJob>
    SBK_QSHAREDPOINTER_CONSTQT3DCORE_QASPECTJOB_IDX          = 33, //   (const)
    SBK_QSHAREDPOINTER_QT3DCORE_QBACKENDNODEMAPPER_IDX       = 34, // QSharedPointer<Qt3DCore::QBackendNodeMapper>
    SBK_QSHAREDPOINTER_CONSTQT3DCORE_QBACKENDNODEMAPPER_IDX  = 34, //   (const)
    SBK_QSHAREDPOINTER_QT3DCORE_QENTITY_IDX                  = 35, // QSharedPointer<Qt3DCore::QEntity>
    SBK_QSHAREDPOINTER_CONSTQT3DCORE_QENTITY_IDX             = 35, //   (const)
    SBK_Qt3DCore_IDX_COUNT                                   = 36
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_Qt3DCoreTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_Qt3DCoreModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_Qt3DCoreTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DCORE_QLIST_INT_IDX                               = 0, // QList<int>
    SBK_QT3DCORE_QLIST_QOBJECTPTR_IDX                        = 1, // QList<QObject*>
    SBK_QT3DCORE_QLIST_QBYTEARRAY_IDX                        = 2, // QList<QByteArray>
    SBK_QT3DCORE_STD_VECTOR_QSHAREDPOINTER_QT3DCORE_QASPECTJOB_IDX = 3, // std::vector<QSharedPointer< Qt3DCore::QAspectJob>>
    SBK_QT3DCORE_QLIST_QT3DCORE_QNODEPTR_IDX                 = 4, // QList<Qt3DCore::QNode*>
    SBK_QT3DCORE_QLIST_QT3DCORE_QENTITYPTR_IDX               = 5, // QList<Qt3DCore::QEntity*>
    SBK_QT3DCORE_QLIST_QT3DCORE_QATTRIBUTEPTR_IDX            = 6, // QList<Qt3DCore::QAttribute*>
    SBK_QT3DCORE_QLIST_QT3DCORE_QCOMPONENTPTR_IDX            = 7, // QList<Qt3DCore::QComponent*>
    SBK_QT3DCORE_QLIST_QT3DCORE_QJOINTPTR_IDX                = 8, // QList<Qt3DCore::QJoint*>
    SBK_QT3DCORE_QLIST_QT3DCORE_QABSTRACTASPECTPTR_IDX       = 9, // QList<Qt3DCore::QAbstractAspect*>
    SBK_QT3DCORE_QLIST_QT3DCORE_QNODEID_IDX                  = 10, // QList<Qt3DCore::QNodeId>
    SBK_QT3DCORE_QLIST_QVARIANT_IDX                          = 11, // QList<QVariant>
    SBK_QT3DCORE_QLIST_QSTRING_IDX                           = 12, // QList<QString>
    SBK_QT3DCORE_QMAP_QSTRING_QVARIANT_IDX                   = 13, // QMap<QString,QVariant>
    SBK_Qt3DCore_CONVERTERS_IDX_COUNT                        = 14
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAbstractAspect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QABSTRACTASPECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAbstractFunctor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QABSTRACTFUNCTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAbstractSkeleton >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QABSTRACTSKELETON_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QArmature >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QARMATURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAspectEngine::RunMode >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QASPECTENGINE_RUNMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAspectEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QASPECTENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAspectJob >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QASPECTJOB_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAttribute::AttributeType >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QATTRIBUTE_ATTRIBUTETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAttribute::VertexBaseType >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QATTRIBUTE_VERTEXBASETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAttribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBackendNode::Mode >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QBACKENDNODE_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBackendNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QBACKENDNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBackendNodeMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QBACKENDNODEMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBoundingVolume >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QBOUNDINGVOLUME_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBuffer::UsageType >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QBUFFER_USAGETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBuffer::AccessType >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QBUFFER_ACCESSTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBuffer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QBUFFER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QComponent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QCOMPONENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QCoreSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QCORESETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QGeometryView::PrimitiveType >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QGEOMETRYVIEW_PRIMITIVETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QGeometryView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QGEOMETRYVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QJoint >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QJOINT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNodeId >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QNODEID_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNodeIdTypePair >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QNODEIDTYPEPAIR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSkeleton >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QSKELETON_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSkeletonLoader::Status >() { return SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QSKELETONLOADER_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSkeletonLoader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QSKELETONLOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QTransform >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DCoreTypes[SBK_QT3DCORE_QTRANSFORM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<Qt3DCore::QAspectJob> >() { return SbkPySide6_Qt3DCoreTypes[SBK_QSHAREDPOINTER_QT3DCORE_QASPECTJOB_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<Qt3DCore::QBackendNodeMapper> >() { return SbkPySide6_Qt3DCoreTypes[SBK_QSHAREDPOINTER_QT3DCORE_QBACKENDNODEMAPPER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<Qt3DCore::QEntity> >() { return SbkPySide6_Qt3DCoreTypes[SBK_QSHAREDPOINTER_QT3DCORE_QENTITY_IDX]; }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QT3DCORE_PYTHON_H

