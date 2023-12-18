// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QT3DEXTRAS_PYTHON_H
#define SBK_QT3DEXTRAS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qt3drender_python.h>
#include <pyside6_qt3dcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <Qt3DExtras/qabstractcameracontroller.h>

namespace Qt3DExtras {
    class QAbstractSpriteSheet;
    class QConeGeometry;
    class QConeGeometryView;
    class QConeMesh;
    class QCuboidGeometry;
    class QCuboidGeometryView;
    class QCuboidMesh;
    class QCylinderGeometry;
    class QCylinderGeometryView;
    class QCylinderMesh;
    class QDiffuseMapMaterial;
    class QDiffuseSpecularMapMaterial;
    class QDiffuseSpecularMaterial;
    class QExtrudedTextGeometry;
    class QExtrudedTextMesh;
    class QFirstPersonCameraController;
    class QForwardRenderer;
    class QGoochMaterial;
    class QMetalRoughMaterial;
    class QMorphPhongMaterial;
    class QNormalDiffuseMapAlphaMaterial;
    class QNormalDiffuseMapMaterial;
    class QNormalDiffuseSpecularMapMaterial;
    class QOrbitCameraController;
    class QPerVertexColorMaterial;
    class QPhongAlphaMaterial;
    class QPhongMaterial;
    class QPlaneGeometry;
    class QPlaneGeometryView;
    class QPlaneMesh;
    class QSkyboxEntity;
    class QSphereGeometry;
    class QSphereGeometryView;
    class QSphereMesh;
    class QSpriteGrid;
    class QSpriteSheet;
    class QSpriteSheetItem;
    class QText2DEntity;
    class QTextureMaterial;
    class QTorusGeometry;
    class QTorusGeometryView;
    class QTorusMesh;
    class Qt3DWindow;
}
// Type indices
enum : int {
    SBK_Qt3DExtrasQT3DEXTRAS_IDX                             = 0,
    SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_IDX             = 1,
    SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_INPUTSTATE_IDX  = 2,
    SBK_QT3DEXTRAS_QABSTRACTSPRITESHEET_IDX                  = 3,
    SBK_QT3DEXTRAS_QCONEGEOMETRY_IDX                         = 4,
    SBK_QT3DEXTRAS_QCONEGEOMETRYVIEW_IDX                     = 5,
    SBK_QT3DEXTRAS_QCONEMESH_IDX                             = 6,
    SBK_QT3DEXTRAS_QCUBOIDGEOMETRY_IDX                       = 7,
    SBK_QT3DEXTRAS_QCUBOIDGEOMETRYVIEW_IDX                   = 8,
    SBK_QT3DEXTRAS_QCUBOIDMESH_IDX                           = 9,
    SBK_QT3DEXTRAS_QCYLINDERGEOMETRY_IDX                     = 10,
    SBK_QT3DEXTRAS_QCYLINDERGEOMETRYVIEW_IDX                 = 11,
    SBK_QT3DEXTRAS_QCYLINDERMESH_IDX                         = 12,
    SBK_QT3DEXTRAS_QDIFFUSEMAPMATERIAL_IDX                   = 13,
    SBK_QT3DEXTRAS_QDIFFUSESPECULARMAPMATERIAL_IDX           = 14,
    SBK_QT3DEXTRAS_QDIFFUSESPECULARMATERIAL_IDX              = 15,
    SBK_QT3DEXTRAS_QEXTRUDEDTEXTGEOMETRY_IDX                 = 16,
    SBK_QT3DEXTRAS_QEXTRUDEDTEXTMESH_IDX                     = 17,
    SBK_QT3DEXTRAS_QFIRSTPERSONCAMERACONTROLLER_IDX          = 18,
    SBK_QT3DEXTRAS_QFORWARDRENDERER_IDX                      = 19,
    SBK_QT3DEXTRAS_QGOOCHMATERIAL_IDX                        = 20,
    SBK_QT3DEXTRAS_QMETALROUGHMATERIAL_IDX                   = 21,
    SBK_QT3DEXTRAS_QMORPHPHONGMATERIAL_IDX                   = 22,
    SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPALPHAMATERIAL_IDX        = 23,
    SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPMATERIAL_IDX             = 24,
    SBK_QT3DEXTRAS_QNORMALDIFFUSESPECULARMAPMATERIAL_IDX     = 25,
    SBK_QT3DEXTRAS_QORBITCAMERACONTROLLER_IDX                = 26,
    SBK_QT3DEXTRAS_QPERVERTEXCOLORMATERIAL_IDX               = 27,
    SBK_QT3DEXTRAS_QPHONGALPHAMATERIAL_IDX                   = 28,
    SBK_QT3DEXTRAS_QPHONGMATERIAL_IDX                        = 29,
    SBK_QT3DEXTRAS_QPLANEGEOMETRY_IDX                        = 30,
    SBK_QT3DEXTRAS_QPLANEGEOMETRYVIEW_IDX                    = 31,
    SBK_QT3DEXTRAS_QPLANEMESH_IDX                            = 32,
    SBK_QT3DEXTRAS_QSKYBOXENTITY_IDX                         = 33,
    SBK_QT3DEXTRAS_QSPHEREGEOMETRY_IDX                       = 34,
    SBK_QT3DEXTRAS_QSPHEREGEOMETRYVIEW_IDX                   = 35,
    SBK_QT3DEXTRAS_QSPHEREMESH_IDX                           = 36,
    SBK_QT3DEXTRAS_QSPRITEGRID_IDX                           = 37,
    SBK_QT3DEXTRAS_QSPRITESHEET_IDX                          = 38,
    SBK_QT3DEXTRAS_QSPRITESHEETITEM_IDX                      = 39,
    SBK_QT3DEXTRAS_QTEXT2DENTITY_IDX                         = 40,
    SBK_QT3DEXTRAS_QTEXTUREMATERIAL_IDX                      = 41,
    SBK_QT3DEXTRAS_QTORUSGEOMETRY_IDX                        = 42,
    SBK_QT3DEXTRAS_QTORUSGEOMETRYVIEW_IDX                    = 43,
    SBK_QT3DEXTRAS_QTORUSMESH_IDX                            = 44,
    SBK_QT3DEXTRAS_QT3DWINDOW_IDX                            = 45,
    SBK_Qt3DExtras_IDX_COUNT                                 = 46
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_Qt3DExtrasTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_Qt3DExtrasModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_Qt3DExtrasTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DEXTRAS_QLIST_INT_IDX                             = 0, // QList<int>
    SBK_QT3DEXTRAS_QLIST_QT3DCORE_QCOMPONENTPTR_IDX          = 1, // QList<Qt3DCore::QComponent*>
    SBK_QT3DEXTRAS_QLIST_QT3DEXTRAS_QSPRITESHEETITEMPTR_IDX  = 2, // QList<Qt3DExtras::QSpriteSheetItem*>
    SBK_QT3DEXTRAS_QLIST_QT3DCORE_QNODEPTR_IDX               = 3, // QList<Qt3DCore::QNode*>
    SBK_QT3DEXTRAS_QLIST_QT3DCORE_QATTRIBUTEPTR_IDX          = 4, // QList<Qt3DCore::QAttribute*>
    SBK_QT3DEXTRAS_QLIST_QT3DRENDER_QPARAMETERPTR_IDX        = 5, // QList<Qt3DRender::QParameter*>
    SBK_QT3DEXTRAS_QLIST_QT3DRENDER_QFILTERKEYPTR_IDX        = 6, // QList<Qt3DRender::QFilterKey*>
    SBK_QT3DEXTRAS_QLIST_QVARIANT_IDX                        = 7, // QList<QVariant>
    SBK_QT3DEXTRAS_QLIST_QSTRING_IDX                         = 8, // QList<QString>
    SBK_QT3DEXTRAS_QMAP_QSTRING_QVARIANT_IDX                 = 9, // QMap<QString,QVariant>
    SBK_Qt3DExtras_CONVERTERS_IDX_COUNT                      = 10
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QAbstractCameraController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QAbstractCameraController::InputState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_INPUTSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QAbstractSpriteSheet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QABSTRACTSPRITESHEET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QConeGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCONEGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QConeGeometryView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCONEGEOMETRYVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QConeMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCONEMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCuboidGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCUBOIDGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCuboidGeometryView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCUBOIDGEOMETRYVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCuboidMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCUBOIDMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCylinderGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCYLINDERGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCylinderGeometryView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCYLINDERGEOMETRYVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCylinderMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCYLINDERMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QDiffuseMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QDIFFUSEMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QDiffuseSpecularMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QDIFFUSESPECULARMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QDiffuseSpecularMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QDIFFUSESPECULARMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QExtrudedTextGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QEXTRUDEDTEXTGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QExtrudedTextMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QEXTRUDEDTEXTMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QFirstPersonCameraController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QFIRSTPERSONCAMERACONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QForwardRenderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QFORWARDRENDERER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QGoochMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QGOOCHMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QMetalRoughMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QMETALROUGHMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QMorphPhongMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QMORPHPHONGMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QNormalDiffuseMapAlphaMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPALPHAMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QNormalDiffuseMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QNormalDiffuseSpecularMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QNORMALDIFFUSESPECULARMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QOrbitCameraController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QORBITCAMERACONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPerVertexColorMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPERVERTEXCOLORMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPhongAlphaMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPHONGALPHAMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPhongMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPHONGMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPlaneGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPLANEGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPlaneGeometryView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPLANEGEOMETRYVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPlaneMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPLANEMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSkyboxEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSKYBOXENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSphereGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPHEREGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSphereGeometryView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPHEREGEOMETRYVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSphereMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPHEREMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSpriteGrid >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPRITEGRID_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSpriteSheet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPRITESHEET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSpriteSheetItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPRITESHEETITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QText2DEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTEXT2DENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QTextureMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTEXTUREMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QTorusGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTORUSGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QTorusGeometryView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTORUSGEOMETRYVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QTorusMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTORUSMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::Qt3DWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QT3DWINDOW_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QT3DEXTRAS_PYTHON_H

