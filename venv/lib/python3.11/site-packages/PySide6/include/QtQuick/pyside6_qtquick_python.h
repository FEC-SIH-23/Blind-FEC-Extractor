// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTQUICK_PYTHON_H
#define SBK_QTQUICK_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtopengl_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtqml_python.h>

// Bound library includes
#include <QtQuick/qquickframebufferobject.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickitemgrabresult.h>
#include <QtQuick/qquickpainteditem.h>
#include <QtQuick/qquicktextdocument.h>
#include <QtQuick/qquickview.h>
#include <QtQuick/qquickwindow.h>
#include <QtQuick/qsggeometry.h>
#include <QtQuick/qsgmaterial.h>
#include <QtQuick/qsgmaterialshader.h>
#include <QtQuick/qsgnode.h>
#include <QtQuick/qsgrendererinterface.h>
#include <QtQuick/qsgrendernode.h>
#include <QtQuick/qsgsimpletexturenode.h>
#include <QtQuick/qsgtexture.h>
#include <qsharedpointer.h>
class QQuickAsyncImageProvider;
class QQuickGraphicsConfiguration;
class QQuickGraphicsDevice;
class QQuickImageProvider;
class QQuickImageResponse;
class QQuickRenderControl;
class QQuickRenderTarget;
class QQuickTextureFactory;
class QSGBasicGeometryNode;
class QSGClipNode;
class QSGDynamicTexture;
class QSGFlatColorMaterial;
class QSGGeometryNode;
struct QSGMaterialType;
class QSGOpacityNode;
class QSGOpaqueTextureMaterial;
class QSGRectangleNode;
class QSGSimpleRectNode;
class QSGTextureMaterial;
class QSGTextureProvider;
class QSGTransformNode;
class QSGVertexColorMaterial;
// Type indices
enum : int {
    SBK_QQUICKASYNCIMAGEPROVIDER_IDX                         = 13,
    SBK_QQUICKFRAMEBUFFEROBJECT_IDX                          = 14,
    SBK_QQUICKFRAMEBUFFEROBJECT_RENDERER_IDX                 = 15,
    SBK_QQUICKGRAPHICSCONFIGURATION_IDX                      = 16,
    SBK_QQUICKGRAPHICSDEVICE_IDX                             = 17,
    SBK_QQUICKIMAGEPROVIDER_IDX                              = 18,
    SBK_QQUICKIMAGERESPONSE_IDX                              = 19,
    SBK_QQUICKITEM_FLAG_IDX                                  = 21,
    SBK_QFLAGS_QQUICKITEM_FLAG_IDX                           = 0,
    SBK_QQUICKITEM_ITEMCHANGE_IDX                            = 22,
    SBK_QQUICKITEM_TRANSFORMORIGIN_IDX                       = 23,
    SBK_QQUICKITEM_IDX                                       = 20,
    SBK_QQUICKITEM_UPDATEPAINTNODEDATA_IDX                   = 24,
    SBK_QQUICKITEMGRABRESULT_IDX                             = 25,
    SBK_QQUICKPAINTEDITEM_RENDERTARGET_IDX                   = 28,
    SBK_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX                = 27,
    SBK_QFLAGS_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX         = 1,
    SBK_QQUICKPAINTEDITEM_IDX                                = 26,
    SBK_QQUICKRENDERCONTROL_IDX                              = 29,
    SBK_QQUICKRENDERTARGET_IDX                               = 30,
    SBK_QQUICKTEXTDOCUMENT_IDX                               = 31,
    SBK_QQUICKTEXTUREFACTORY_IDX                             = 32,
    SBK_QQUICKTRANSFORM_IDX                                  = 33,
    SBK_QQUICKVIEW_RESIZEMODE_IDX                            = 35,
    SBK_QQUICKVIEW_STATUS_IDX                                = 36,
    SBK_QQUICKVIEW_IDX                                       = 34,
    SBK_QQUICKWINDOW_CREATETEXTUREOPTION_IDX                 = 38,
    SBK_QFLAGS_QQUICKWINDOW_CREATETEXTUREOPTION_IDX          = 2,
    SBK_QQUICKWINDOW_RENDERSTAGE_IDX                         = 39,
    SBK_QQUICKWINDOW_SCENEGRAPHERROR_IDX                     = 40,
    SBK_QQUICKWINDOW_TEXTRENDERTYPE_IDX                      = 41,
    SBK_QQUICKWINDOW_IDX                                     = 37,
    SBK_QSGBASICGEOMETRYNODE_IDX                             = 42,
    SBK_QSGCLIPNODE_IDX                                      = 43,
    SBK_QSGDYNAMICTEXTURE_IDX                                = 44,
    SBK_QSGFLATCOLORMATERIAL_IDX                             = 45,
    SBK_QSGGEOMETRY_ATTRIBUTETYPE_IDX                        = 49,
    SBK_QSGGEOMETRY_DATAPATTERN_IDX                          = 51,
    SBK_QSGGEOMETRY_DRAWINGMODE_IDX                          = 52,
    SBK_QSGGEOMETRY_TYPE_IDX                                 = 55,
    SBK_QSGGEOMETRY_IDX                                      = 46,
    SBK_QSGGEOMETRY_ATTRIBUTE_IDX                            = 47,
    SBK_QSGGEOMETRY_ATTRIBUTESET_IDX                         = 48,
    SBK_QSGGEOMETRY_COLOREDPOINT2D_IDX                       = 50,
    SBK_QSGGEOMETRY_POINT2D_IDX                              = 53,
    SBK_QSGGEOMETRY_TEXTUREDPOINT2D_IDX                      = 54,
    SBK_QSGGEOMETRYNODE_IDX                                  = 56,
    SBK_QSGMATERIAL_FLAG_IDX                                 = 58,
    SBK_QFLAGS_QSGMATERIAL_FLAG_IDX                          = 3,
    SBK_QSGMATERIAL_IDX                                      = 57,
    SBK_QSGMATERIALSHADER_FLAG_IDX                           = 60,
    SBK_QFLAGS_QSGMATERIALSHADER_FLAG_IDX                    = 4,
    SBK_QSGMATERIALSHADER_STAGE_IDX                          = 63,
    SBK_QSGMATERIALSHADER_IDX                                = 59,
    SBK_QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_IDX         = 62,
    SBK_QFLAGS_QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_IDX  = 5,
    SBK_QSGMATERIALSHADER_RENDERSTATE_IDX                    = 61,
    SBK_QSGMATERIALTYPE_IDX                                  = 64,
    SBK_QSGNODE_NODETYPE_IDX                                 = 68,
    SBK_QSGNODE_FLAG_IDX                                     = 67,
    SBK_QFLAGS_QSGNODE_FLAG_IDX                              = 7,
    SBK_QSGNODE_DIRTYSTATEBIT_IDX                            = 66,
    SBK_QFLAGS_QSGNODE_DIRTYSTATEBIT_IDX                     = 6,
    SBK_QSGNODE_IDX                                          = 65,
    SBK_QSGOPACITYNODE_IDX                                   = 69,
    SBK_QSGOPAQUETEXTUREMATERIAL_IDX                         = 70,
    SBK_QSGRECTANGLENODE_IDX                                 = 71,
    SBK_QSGRENDERNODE_STATEFLAG_IDX                          = 75,
    SBK_QFLAGS_QSGRENDERNODE_STATEFLAG_IDX                   = 9,
    SBK_QSGRENDERNODE_RENDERINGFLAG_IDX                      = 74,
    SBK_QFLAGS_QSGRENDERNODE_RENDERINGFLAG_IDX               = 8,
    SBK_QSGRENDERNODE_IDX                                    = 72,
    SBK_QSGRENDERNODE_RENDERSTATE_IDX                        = 73,
    SBK_QSGRENDERERINTERFACE_GRAPHICSAPI_IDX                 = 77,
    SBK_QSGRENDERERINTERFACE_RESOURCE_IDX                    = 79,
    SBK_QSGRENDERERINTERFACE_SHADERTYPE_IDX                  = 82,
    SBK_QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_IDX       = 80,
    SBK_QFLAGS_QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_IDX = 10,
    SBK_QSGRENDERERINTERFACE_SHADERSOURCETYPE_IDX            = 81,
    SBK_QFLAGS_QSGRENDERERINTERFACE_SHADERSOURCETYPE_IDX     = 11,
    SBK_QSGRENDERERINTERFACE_RENDERMODE_IDX                  = 78,
    SBK_QSGRENDERERINTERFACE_IDX                             = 76,
    SBK_QSGSIMPLERECTNODE_IDX                                = 83,
    SBK_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX = 85,
    SBK_QFLAGS_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX = 12,
    SBK_QSGSIMPLETEXTURENODE_IDX                             = 84,
    SBK_QSGTEXTURE_WRAPMODE_IDX                              = 89,
    SBK_QSGTEXTURE_FILTERING_IDX                             = 88,
    SBK_QSGTEXTURE_ANISOTROPYLEVEL_IDX                       = 87,
    SBK_QSGTEXTURE_IDX                                       = 86,
    SBK_QSGTEXTUREMATERIAL_IDX                               = 90,
    SBK_QSGTEXTUREPROVIDER_IDX                               = 91,
    SBK_QSGTRANSFORMNODE_IDX                                 = 92,
    SBK_QSGVERTEXCOLORMATERIAL_IDX                           = 93,
    SBK_QSHAREDPOINTER_QQUICKITEMGRABRESULT_IDX              = 95, // QSharedPointer<QQuickItemGrabResult>
    SBK_QSHAREDPOINTER_CONSTQQUICKITEMGRABRESULT_IDX         = 95, //   (const)
    SBK_QtQuick_IDX_COUNT                                    = 96
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtQuickTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtQuickModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtQuickTypeConverters;

// Converter indices
enum : int {
    SBK_QTQUICK_QLIST_INT_IDX                                = 0, // QList<int>
    SBK_QTQUICK_QLIST_QSGGEOMETRY_POINT2D_IDX                = 1, // QList<QSGGeometry::Point2D>
    SBK_QTQUICK_QLIST_QBYTEARRAY_IDX                         = 2, // QList<QByteArray>
    SBK_QTQUICK_QLIST_QOBJECTPTR_IDX                         = 3, // QList<QObject*>
    SBK_QTQUICK_QLIST_QQUICKITEMPTR_IDX                      = 4, // QList<QQuickItem*>
    SBK_QTQUICK_QLIST_QQMLERROR_IDX                          = 5, // QList<QQmlError>
    SBK_QTQUICK_QMAP_QSTRING_QVARIANT_IDX                    = 6, // QMap<QString,QVariant>
    SBK_QTQUICK_QLIST_QVARIANT_IDX                           = 7, // QList<QVariant>
    SBK_QTQUICK_QLIST_QSTRING_IDX                            = 8, // QList<QString>
    SBK_QtQuick_CONVERTERS_IDX_COUNT                         = 9
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QQuickAsyncImageProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKASYNCIMAGEPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickFramebufferObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKFRAMEBUFFEROBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickFramebufferObject::Renderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKFRAMEBUFFEROBJECT_RENDERER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickGraphicsConfiguration >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKGRAPHICSCONFIGURATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickGraphicsDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKGRAPHICSDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickImageProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKIMAGEPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickImageResponse >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKIMAGERESPONSE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::Flag >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKITEM_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickItem::Flag> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QQUICKITEM_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickItem::ItemChange >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKITEM_ITEMCHANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickItem::TransformOrigin >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKITEM_TRANSFORMORIGIN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::UpdatePaintNodeData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKITEM_UPDATEPAINTNODEDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItemGrabResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKITEMGRABRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem::RenderTarget >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKPAINTEDITEM_RENDERTARGET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem::PerformanceHint >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickPaintedItem::PerformanceHint> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKPAINTEDITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRenderControl >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKRENDERCONTROL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRenderTarget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKRENDERTARGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTextDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKTEXTDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTextureFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKTEXTUREFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTransform >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKTRANSFORM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickView::ResizeMode >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKVIEW_RESIZEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickView::Status >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKVIEW_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::CreateTextureOption >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKWINDOW_CREATETEXTUREOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickWindow::CreateTextureOption> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QQUICKWINDOW_CREATETEXTUREOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::RenderStage >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKWINDOW_RENDERSTAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::SceneGraphError >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKWINDOW_SCENEGRAPHERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::TextRenderType >() { return SbkPySide6_QtQuickTypes[SBK_QQUICKWINDOW_TEXTRENDERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QQUICKWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGBasicGeometryNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGBASICGEOMETRYNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGClipNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGCLIPNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGDynamicTexture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGDYNAMICTEXTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGFlatColorMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGFLATCOLORMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::AttributeType >() { return SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_ATTRIBUTETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::DataPattern >() { return SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_DATAPATTERN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::DrawingMode >() { return SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_DRAWINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Type >() { return SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Attribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_ATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::AttributeSet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_ATTRIBUTESET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::ColoredPoint2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_COLOREDPOINT2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Point2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_POINT2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::TexturedPoint2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRY_TEXTUREDPOINT2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometryNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGGEOMETRYNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterial::Flag >() { return SbkPySide6_QtQuickTypes[SBK_QSGMATERIAL_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGMaterial::Flag> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGMATERIAL_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::Flag >() { return SbkPySide6_QtQuickTypes[SBK_QSGMATERIALSHADER_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGMaterialShader::Flag> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGMATERIALSHADER_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::Stage >() { return SbkPySide6_QtQuickTypes[SBK_QSGMATERIALSHADER_STAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGMATERIALSHADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::RenderState::DirtyState >() { return SbkPySide6_QtQuickTypes[SBK_QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGMaterialShader::RenderState::DirtyState> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::RenderState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGMATERIALSHADER_RENDERSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialType >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGMATERIALTYPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGNode::NodeType >() { return SbkPySide6_QtQuickTypes[SBK_QSGNODE_NODETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGNode::Flag >() { return SbkPySide6_QtQuickTypes[SBK_QSGNODE_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGNode::Flag> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGNODE_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGNode::DirtyStateBit >() { return SbkPySide6_QtQuickTypes[SBK_QSGNODE_DIRTYSTATEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGNode::DirtyStateBit> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGNODE_DIRTYSTATEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGOpacityNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGOPACITYNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGOpaqueTextureMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGOPAQUETEXTUREMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRectangleNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGRECTANGLENODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode::StateFlag >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERNODE_STATEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRenderNode::StateFlag> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGRENDERNODE_STATEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode::RenderingFlag >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERNODE_RENDERINGFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRenderNode::RenderingFlag> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGRENDERNODE_RENDERINGFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGRENDERNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode::RenderState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGRENDERNODE_RENDERSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::GraphicsApi >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERERINTERFACE_GRAPHICSAPI_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::Resource >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERERINTERFACE_RESOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::ShaderType >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERERINTERFACE_SHADERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::ShaderCompilationType >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRendererInterface::ShaderCompilationType> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::ShaderSourceType >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERERINTERFACE_SHADERSOURCETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRendererInterface::ShaderSourceType> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGRENDERERINTERFACE_SHADERSOURCETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::RenderMode >() { return SbkPySide6_QtQuickTypes[SBK_QSGRENDERERINTERFACE_RENDERMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGRENDERERINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGSimpleRectNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGSIMPLERECTNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGSimpleTextureNode::TextureCoordinatesTransformFlag >() { return SbkPySide6_QtQuickTypes[SBK_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> >() { return SbkPySide6_QtQuickTypes[SBK_QFLAGS_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGSimpleTextureNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGSIMPLETEXTURENODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTexture::WrapMode >() { return SbkPySide6_QtQuickTypes[SBK_QSGTEXTURE_WRAPMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGTexture::Filtering >() { return SbkPySide6_QtQuickTypes[SBK_QSGTEXTURE_FILTERING_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGTexture::AnisotropyLevel >() { return SbkPySide6_QtQuickTypes[SBK_QSGTEXTURE_ANISOTROPYLEVEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGTexture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGTEXTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextureMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGTEXTUREMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextureProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGTEXTUREPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTransformNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGTRANSFORMNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGVertexColorMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQuickTypes[SBK_QSGVERTEXCOLORMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<QQuickItemGrabResult> >() { return SbkPySide6_QtQuickTypes[SBK_QSHAREDPOINTER_QQUICKITEMGRABRESULT_IDX]; }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTQUICK_PYTHON_H

