// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QT3DRENDER_PYTHON_H
#define SBK_QT3DRENDER_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qt3dcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <Qt3DRender/qabstractlight.h>
#include <Qt3DRender/qabstractraycaster.h>
#include <Qt3DRender/qabstracttexture.h>
#include <Qt3DRender/qalphatest.h>
#include <Qt3DRender/qblendequation.h>
#include <Qt3DRender/qblendequationarguments.h>
#include <Qt3DRender/qblitframebuffer.h>
#include <Qt3DRender/qcamera.h>
#include <Qt3DRender/qcameralens.h>
#include <Qt3DRender/qclearbuffers.h>
#include <Qt3DRender/qcomputecommand.h>
#include <Qt3DRender/qcullface.h>
#include <Qt3DRender/qdepthtest.h>
#include <Qt3DRender/qfrontface.h>
#include <Qt3DRender/qgeometryrenderer.h>
#include <Qt3DRender/qgraphicsapifilter.h>
#include <Qt3DRender/qlayerfilter.h>
#include <Qt3DRender/qlevelofdetail.h>
#include <Qt3DRender/qmemorybarrier.h>
#include <Qt3DRender/qmesh.h>
#include <Qt3DRender/qpickevent.h>
#include <Qt3DRender/qpickingsettings.h>
#include <Qt3DRender/qpointsize.h>
#include <Qt3DRender/qrastermode.h>
#include <Qt3DRender/qraycasterhit.h>
#include <Qt3DRender/qrenderapi.h>
#include <Qt3DRender/qrenderaspect.h>
#include <Qt3DRender/qrendercapabilities.h>
#include <Qt3DRender/qrendersettings.h>
#include <Qt3DRender/qrendertargetoutput.h>
#include <Qt3DRender/qsceneloader.h>
#include <Qt3DRender/qsetfence.h>
#include <Qt3DRender/qshaderimage.h>
#include <Qt3DRender/qshaderprogram.h>
#include <Qt3DRender/qsortpolicy.h>
#include <Qt3DRender/qstenciloperationarguments.h>
#include <Qt3DRender/qstenciltestarguments.h>
#include <Qt3DRender/qsubtreeenabler.h>
#include <Qt3DRender/qtextureimage.h>
#include <Qt3DRender/qtexturewrapmode.h>
#include <Qt3DRender/qwaitfence.h>
#include <qsharedpointer.h>

namespace Qt3DRender {
    class PropertyReaderInterface;
    class QAbstractTextureImage;
    class QAlphaCoverage;
    class QBufferCapture;
    class QCameraSelector;
    class QClipPlane;
    class QColorMask;
    class QDepthRange;
    class QDirectionalLight;
    class QDispatchCompute;
    class QDithering;
    class QEffect;
    class QEnvironmentLight;
    class QFilterKey;
    class QFrameGraphNode;
    class QFrustumCulling;
    class QLayer;
    class QLevelOfDetailBoundingSphere;
    class QLevelOfDetailSwitch;
    class QLineWidth;
    class QMaterial;
    class QMultiSampleAntiAliasing;
    class QNoDepthMask;
    class QNoDraw;
    class QNoPicking;
    class QObjectPicker;
    class QPaintedTextureImage;
    class QParameter;
    class QPickLineEvent;
    class QPickPointEvent;
    class QPickTriangleEvent;
    class QPickingProxy;
    class QPointLight;
    class QPolygonOffset;
    class QProximityFilter;
    class QRayCaster;
    class QRenderCapture;
    class QRenderCaptureReply;
    class QRenderPass;
    class QRenderPassFilter;
    class QRenderState;
    class QRenderStateSet;
    class QRenderSurfaceSelector;
    class QRenderTarget;
    class QRenderTargetSelector;
    class QScissorTest;
    class QScreenRayCaster;
    class QSeamlessCubemap;
    class QShaderData;
    class QShaderProgramBuilder;
    class QSharedGLTexture;
    class QSpotLight;
    class QStencilMask;
    class QStencilOperation;
    class QStencilTest;
    class QTechnique;
    class QTechniqueFilter;
    class QTexture1D;
    class QTexture1DArray;
    class QTexture2D;
    class QTexture2DArray;
    class QTexture2DMultisample;
    class QTexture2DMultisampleArray;
    class QTexture3D;
    class QTextureBuffer;
    class QTextureCubeMap;
    class QTextureCubeMapArray;
    class QTextureData;
    class QTextureDataUpdate;
    class QTextureImageData;
    class QTextureImageDataGenerator;
    class QTextureLoader;
    class QTextureRectangle;
    class QViewport;
}
// Type indices
enum : int {
    SBK_QT3DRENDER_API_IDX                                   = 4,
    SBK_Qt3DRenderQT3DRENDER_IDX                             = 3,
    SBK_QT3DRENDER_PROPERTYREADERINTERFACE_IDX               = 5,
    SBK_QT3DRENDER_QABSTRACTLIGHT_TYPE_IDX                   = 7,
    SBK_QT3DRENDER_QABSTRACTLIGHT_IDX                        = 6,
    SBK_QT3DRENDER_QABSTRACTRAYCASTER_RUNMODE_IDX            = 10,
    SBK_QT3DRENDER_QABSTRACTRAYCASTER_FILTERMODE_IDX         = 9,
    SBK_QT3DRENDER_QABSTRACTRAYCASTER_IDX                    = 8,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_STATUS_IDX               = 17,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_TARGET_IDX               = 18,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_TEXTUREFORMAT_IDX        = 19,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_FILTER_IDX               = 15,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_CUBEMAPFACE_IDX          = 14,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_COMPARISONFUNCTION_IDX   = 12,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_COMPARISONMODE_IDX       = 13,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_HANDLETYPE_IDX           = 16,
    SBK_QT3DRENDER_QABSTRACTTEXTURE_IDX                      = 11,
    SBK_QT3DRENDER_QABSTRACTTEXTUREIMAGE_IDX                 = 20,
    SBK_QT3DRENDER_QALPHACOVERAGE_IDX                        = 21,
    SBK_QT3DRENDER_QALPHATEST_ALPHAFUNCTION_IDX              = 23,
    SBK_QT3DRENDER_QALPHATEST_IDX                            = 22,
    SBK_QT3DRENDER_QBLENDEQUATION_BLENDFUNCTION_IDX          = 25,
    SBK_QT3DRENDER_QBLENDEQUATION_IDX                        = 24,
    SBK_QT3DRENDER_QBLENDEQUATIONARGUMENTS_BLENDING_IDX      = 27,
    SBK_QT3DRENDER_QBLENDEQUATIONARGUMENTS_IDX               = 26,
    SBK_QT3DRENDER_QBLITFRAMEBUFFER_INTERPOLATIONMETHOD_IDX  = 29,
    SBK_QT3DRENDER_QBLITFRAMEBUFFER_IDX                      = 28,
    SBK_QT3DRENDER_QBUFFERCAPTURE_IDX                        = 30,
    SBK_QT3DRENDER_QCAMERA_CAMERATRANSLATIONOPTION_IDX       = 32,
    SBK_QT3DRENDER_QCAMERA_IDX                               = 31,
    SBK_QT3DRENDER_QCAMERALENS_PROJECTIONTYPE_IDX            = 34,
    SBK_QT3DRENDER_QCAMERALENS_IDX                           = 33,
    SBK_QT3DRENDER_QCAMERASELECTOR_IDX                       = 35,
    SBK_QT3DRENDER_QCLEARBUFFERS_BUFFERTYPE_IDX              = 37,
    SBK_QFLAGS_QT3DRENDER_QCLEARBUFFERS_BUFFERTYPE_IDX       = 0,
    SBK_QT3DRENDER_QCLEARBUFFERS_IDX                         = 36,
    SBK_QT3DRENDER_QCLIPPLANE_IDX                            = 38,
    SBK_QT3DRENDER_QCOLORMASK_IDX                            = 39,
    SBK_QT3DRENDER_QCOMPUTECOMMAND_RUNTYPE_IDX               = 41,
    SBK_QT3DRENDER_QCOMPUTECOMMAND_IDX                       = 40,
    SBK_QT3DRENDER_QCULLFACE_CULLINGMODE_IDX                 = 43,
    SBK_QT3DRENDER_QCULLFACE_IDX                             = 42,
    SBK_QT3DRENDER_QDEPTHRANGE_IDX                           = 44,
    SBK_QT3DRENDER_QDEPTHTEST_DEPTHFUNCTION_IDX              = 46,
    SBK_QT3DRENDER_QDEPTHTEST_IDX                            = 45,
    SBK_QT3DRENDER_QDIRECTIONALLIGHT_IDX                     = 47,
    SBK_QT3DRENDER_QDISPATCHCOMPUTE_IDX                      = 48,
    SBK_QT3DRENDER_QDITHERING_IDX                            = 49,
    SBK_QT3DRENDER_QEFFECT_IDX                               = 50,
    SBK_QT3DRENDER_QENVIRONMENTLIGHT_IDX                     = 51,
    SBK_QT3DRENDER_QFILTERKEY_IDX                            = 52,
    SBK_QT3DRENDER_QFRAMEGRAPHNODE_IDX                       = 53,
    SBK_QT3DRENDER_QFRONTFACE_WINDINGDIRECTION_IDX           = 55,
    SBK_QT3DRENDER_QFRONTFACE_IDX                            = 54,
    SBK_QT3DRENDER_QFRUSTUMCULLING_IDX                       = 56,
    SBK_QT3DRENDER_QGEOMETRYRENDERER_PRIMITIVETYPE_IDX       = 58,
    SBK_QT3DRENDER_QGEOMETRYRENDERER_IDX                     = 57,
    SBK_QT3DRENDER_QGRAPHICSAPIFILTER_API_IDX                = 60,
    SBK_QT3DRENDER_QGRAPHICSAPIFILTER_OPENGLPROFILE_IDX      = 61,
    SBK_QT3DRENDER_QGRAPHICSAPIFILTER_IDX                    = 59,
    SBK_QT3DRENDER_QLAYER_IDX                                = 62,
    SBK_QT3DRENDER_QLAYERFILTER_FILTERMODE_IDX               = 64,
    SBK_QT3DRENDER_QLAYERFILTER_IDX                          = 63,
    SBK_QT3DRENDER_QLEVELOFDETAIL_THRESHOLDTYPE_IDX          = 66,
    SBK_QT3DRENDER_QLEVELOFDETAIL_IDX                        = 65,
    SBK_QT3DRENDER_QLEVELOFDETAILBOUNDINGSPHERE_IDX          = 67,
    SBK_QT3DRENDER_QLEVELOFDETAILSWITCH_IDX                  = 68,
    SBK_QT3DRENDER_QLINEWIDTH_IDX                            = 69,
    SBK_QT3DRENDER_QMATERIAL_IDX                             = 70,
    SBK_QT3DRENDER_QMEMORYBARRIER_OPERATION_IDX              = 72,
    SBK_QFLAGS_QT3DRENDER_QMEMORYBARRIER_OPERATION_IDX       = 1,
    SBK_QT3DRENDER_QMEMORYBARRIER_IDX                        = 71,
    SBK_QT3DRENDER_QMESH_STATUS_IDX                          = 74,
    SBK_QT3DRENDER_QMESH_IDX                                 = 73,
    SBK_QT3DRENDER_QMULTISAMPLEANTIALIASING_IDX              = 75,
    SBK_QT3DRENDER_QNODEPTHMASK_IDX                          = 76,
    SBK_QT3DRENDER_QNODRAW_IDX                               = 77,
    SBK_QT3DRENDER_QNOPICKING_IDX                            = 78,
    SBK_QT3DRENDER_QOBJECTPICKER_IDX                         = 79,
    SBK_QT3DRENDER_QPAINTEDTEXTUREIMAGE_IDX                  = 80,
    SBK_QT3DRENDER_QPARAMETER_IDX                            = 81,
    SBK_QT3DRENDER_QPICKEVENT_BUTTONS_IDX                    = 83,
    SBK_QT3DRENDER_QPICKEVENT_MODIFIERS_IDX                  = 84,
    SBK_QT3DRENDER_QPICKEVENT_IDX                            = 82,
    SBK_QT3DRENDER_QPICKLINEEVENT_IDX                        = 85,
    SBK_QT3DRENDER_QPICKPOINTEVENT_IDX                       = 86,
    SBK_QT3DRENDER_QPICKTRIANGLEEVENT_IDX                    = 87,
    SBK_QT3DRENDER_QPICKINGPROXY_IDX                         = 88,
    SBK_QT3DRENDER_QPICKINGSETTINGS_PICKMETHOD_IDX           = 91,
    SBK_QT3DRENDER_QPICKINGSETTINGS_PICKRESULTMODE_IDX       = 92,
    SBK_QT3DRENDER_QPICKINGSETTINGS_FACEORIENTATIONPICKINGMODE_IDX = 90,
    SBK_QT3DRENDER_QPICKINGSETTINGS_IDX                      = 89,
    SBK_QT3DRENDER_QPOINTLIGHT_IDX                           = 93,
    SBK_QT3DRENDER_QPOINTSIZE_SIZEMODE_IDX                   = 95,
    SBK_QT3DRENDER_QPOINTSIZE_IDX                            = 94,
    SBK_QT3DRENDER_QPOLYGONOFFSET_IDX                        = 96,
    SBK_QT3DRENDER_QPROXIMITYFILTER_IDX                      = 97,
    SBK_QT3DRENDER_QRASTERMODE_RASTERMODE_IDX                = 100,
    SBK_QT3DRENDER_QRASTERMODE_FACEMODE_IDX                  = 99,
    SBK_QT3DRENDER_QRASTERMODE_IDX                           = 98,
    SBK_QT3DRENDER_QRAYCASTER_IDX                            = 101,
    SBK_QT3DRENDER_QRAYCASTERHIT_HITTYPE_IDX                 = 103,
    SBK_QT3DRENDER_QRAYCASTERHIT_IDX                         = 102,
    SBK_QT3DRENDER_QRENDERASPECT_SUBMISSIONTYPE_IDX          = 105,
    SBK_QT3DRENDER_QRENDERASPECT_IDX                         = 104,
    SBK_QT3DRENDER_QRENDERCAPABILITIES_API_IDX               = 107,
    SBK_QT3DRENDER_QRENDERCAPABILITIES_PROFILE_IDX           = 108,
    SBK_QT3DRENDER_QRENDERCAPABILITIES_IDX                   = 106,
    SBK_QT3DRENDER_QRENDERCAPTURE_IDX                        = 109,
    SBK_QT3DRENDER_QRENDERCAPTUREREPLY_IDX                   = 110,
    SBK_QT3DRENDER_QRENDERPASS_IDX                           = 111,
    SBK_QT3DRENDER_QRENDERPASSFILTER_IDX                     = 112,
    SBK_QT3DRENDER_QRENDERSETTINGS_RENDERPOLICY_IDX          = 114,
    SBK_QT3DRENDER_QRENDERSETTINGS_IDX                       = 113,
    SBK_QT3DRENDER_QRENDERSTATE_IDX                          = 115,
    SBK_QT3DRENDER_QRENDERSTATESET_IDX                       = 116,
    SBK_QT3DRENDER_QRENDERSURFACESELECTOR_IDX                = 117,
    SBK_QT3DRENDER_QRENDERTARGET_IDX                         = 118,
    SBK_QT3DRENDER_QRENDERTARGETOUTPUT_ATTACHMENTPOINT_IDX   = 120,
    SBK_QT3DRENDER_QRENDERTARGETOUTPUT_IDX                   = 119,
    SBK_QT3DRENDER_QRENDERTARGETSELECTOR_IDX                 = 121,
    SBK_QT3DRENDER_QSCENELOADER_STATUS_IDX                   = 124,
    SBK_QT3DRENDER_QSCENELOADER_COMPONENTTYPE_IDX            = 123,
    SBK_QT3DRENDER_QSCENELOADER_IDX                          = 122,
    SBK_QT3DRENDER_QSCISSORTEST_IDX                          = 125,
    SBK_QT3DRENDER_QSCREENRAYCASTER_IDX                      = 126,
    SBK_QT3DRENDER_QSEAMLESSCUBEMAP_IDX                      = 127,
    SBK_QT3DRENDER_QSETFENCE_HANDLETYPE_IDX                  = 129,
    SBK_QT3DRENDER_QSETFENCE_IDX                             = 128,
    SBK_QT3DRENDER_QSHADERDATA_IDX                           = 130,
    SBK_QT3DRENDER_QSHADERIMAGE_ACCESS_IDX                   = 132,
    SBK_QT3DRENDER_QSHADERIMAGE_IMAGEFORMAT_IDX              = 133,
    SBK_QT3DRENDER_QSHADERIMAGE_IDX                          = 131,
    SBK_QT3DRENDER_QSHADERPROGRAM_SHADERTYPE_IDX             = 136,
    SBK_QT3DRENDER_QSHADERPROGRAM_STATUS_IDX                 = 137,
    SBK_QT3DRENDER_QSHADERPROGRAM_FORMAT_IDX                 = 135,
    SBK_QT3DRENDER_QSHADERPROGRAM_IDX                        = 134,
    SBK_QT3DRENDER_QSHADERPROGRAMBUILDER_IDX                 = 138,
    SBK_QT3DRENDER_QSHAREDGLTEXTURE_IDX                      = 139,
    SBK_QT3DRENDER_QSORTPOLICY_SORTTYPE_IDX                  = 141,
    SBK_QT3DRENDER_QSORTPOLICY_IDX                           = 140,
    SBK_QT3DRENDER_QSPOTLIGHT_IDX                            = 142,
    SBK_QT3DRENDER_QSTENCILMASK_IDX                          = 143,
    SBK_QT3DRENDER_QSTENCILOPERATION_IDX                     = 144,
    SBK_QT3DRENDER_QSTENCILOPERATIONARGUMENTS_FACEMODE_IDX   = 146,
    SBK_QT3DRENDER_QSTENCILOPERATIONARGUMENTS_OPERATION_IDX  = 147,
    SBK_QT3DRENDER_QSTENCILOPERATIONARGUMENTS_IDX            = 145,
    SBK_QT3DRENDER_QSTENCILTEST_IDX                          = 148,
    SBK_QT3DRENDER_QSTENCILTESTARGUMENTS_STENCILFACEMODE_IDX = 150,
    SBK_QT3DRENDER_QSTENCILTESTARGUMENTS_STENCILFUNCTION_IDX = 151,
    SBK_QT3DRENDER_QSTENCILTESTARGUMENTS_IDX                 = 149,
    SBK_QT3DRENDER_QSUBTREEENABLER_ENABLEMENT_IDX            = 153,
    SBK_QT3DRENDER_QSUBTREEENABLER_IDX                       = 152,
    SBK_QT3DRENDER_QTECHNIQUE_IDX                            = 154,
    SBK_QT3DRENDER_QTECHNIQUEFILTER_IDX                      = 155,
    SBK_QT3DRENDER_QTEXTURE1D_IDX                            = 156,
    SBK_QT3DRENDER_QTEXTURE1DARRAY_IDX                       = 157,
    SBK_QT3DRENDER_QTEXTURE2D_IDX                            = 158,
    SBK_QT3DRENDER_QTEXTURE2DARRAY_IDX                       = 159,
    SBK_QT3DRENDER_QTEXTURE2DMULTISAMPLE_IDX                 = 160,
    SBK_QT3DRENDER_QTEXTURE2DMULTISAMPLEARRAY_IDX            = 161,
    SBK_QT3DRENDER_QTEXTURE3D_IDX                            = 162,
    SBK_QT3DRENDER_QTEXTUREBUFFER_IDX                        = 163,
    SBK_QT3DRENDER_QTEXTURECUBEMAP_IDX                       = 164,
    SBK_QT3DRENDER_QTEXTURECUBEMAPARRAY_IDX                  = 165,
    SBK_QT3DRENDER_QTEXTUREDATA_IDX                          = 166,
    SBK_QT3DRENDER_QTEXTUREDATAUPDATE_IDX                    = 167,
    SBK_QT3DRENDER_QTEXTUREIMAGE_STATUS_IDX                  = 169,
    SBK_QT3DRENDER_QTEXTUREIMAGE_IDX                         = 168,
    SBK_QT3DRENDER_QTEXTUREIMAGEDATA_IDX                     = 170,
    SBK_QT3DRENDER_QTEXTUREIMAGEDATAGENERATOR_IDX            = 171,
    SBK_QT3DRENDER_QTEXTURELOADER_IDX                        = 172,
    SBK_QT3DRENDER_QTEXTURERECTANGLE_IDX                     = 173,
    SBK_QT3DRENDER_QTEXTUREWRAPMODE_WRAPMODE_IDX             = 175,
    SBK_QT3DRENDER_QTEXTUREWRAPMODE_IDX                      = 174,
    SBK_QT3DRENDER_QVIEWPORT_IDX                             = 176,
    SBK_QT3DRENDER_QWAITFENCE_HANDLETYPE_IDX                 = 178,
    SBK_QT3DRENDER_QWAITFENCE_IDX                            = 177,
    SBK_QSHAREDPOINTER_QT3DRENDER_QTEXTUREIMAGEDATA_IDX      = 179, // QSharedPointer<Qt3DRender::QTextureImageData>
    SBK_QSHAREDPOINTER_CONSTQT3DRENDER_QTEXTUREIMAGEDATA_IDX = 179, //   (const)
    SBK_QSHAREDPOINTER_QT3DRENDER_QTEXTUREIMAGEDATAGENERATOR_IDX = 180, // QSharedPointer<Qt3DRender::QTextureImageDataGenerator>
    SBK_QSHAREDPOINTER_CONSTQT3DRENDER_QTEXTUREIMAGEDATAGENERATOR_IDX = 180, //   (const)
    SBK_QSHAREDPOINTER_QT3DRENDER_PROPERTYREADERINTERFACE_IDX = 181, // QSharedPointer<Qt3DRender::PropertyReaderInterface>
    SBK_QSHAREDPOINTER_CONSTQT3DRENDER_PROPERTYREADERINTERFACE_IDX = 181, //   (const)
    SBK_Qt3DRender_IDX_COUNT                                 = 182
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_Qt3DRenderTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_Qt3DRenderModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_Qt3DRenderTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DRENDER_QLIST_INT_IDX                             = 0, // QList<int>
    SBK_QT3DRENDER_QLIST_QT3DCORE_QENTITYPTR_IDX             = 1, // QList<Qt3DCore::QEntity*>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QRAYCASTERHIT_IDX        = 2, // QList<Qt3DRender::QRayCasterHit>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QLAYERPTR_IDX            = 3, // QList<Qt3DRender::QLayer*>
    SBK_QT3DRENDER_QLIST_QOBJECTPTR_IDX                      = 4, // QList<QObject*>
    SBK_QT3DRENDER_QLIST_QBYTEARRAY_IDX                      = 5, // QList<QByteArray>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QABSTRACTTEXTUREIMAGEPTR_IDX = 6, // QList<Qt3DRender::QAbstractTextureImage*>
    SBK_QT3DRENDER_QLIST_QT3DCORE_QNODEPTR_IDX               = 7, // QList<Qt3DCore::QNode*>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QFILTERKEYPTR_IDX        = 8, // QList<Qt3DRender::QFilterKey*>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QPARAMETERPTR_IDX        = 9, // QList<Qt3DRender::QParameter*>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QRENDERSTATEPTR_IDX      = 10, // QList<Qt3DRender::QRenderState*>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QSORTPOLICY_SORTTYPE_IDX = 11, // QList<Qt3DRender::QSortPolicy::SortType>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QRENDERTARGETOUTPUTPTR_IDX = 12, // QList<Qt3DRender::QRenderTargetOutput*>
    SBK_QT3DRENDER_QLIST_QT3DCORE_QCOMPONENTPTR_IDX          = 13, // QList<Qt3DCore::QComponent*>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QTECHNIQUEPTR_IDX        = 14, // QList<Qt3DRender::QTechnique*>
    SBK_QT3DRENDER_QLIST_QREAL_IDX                           = 15, // QList<qreal>
    SBK_QT3DRENDER_STD_VECTOR_QSHAREDPOINTER_QT3DCORE_QASPECTJOB_IDX = 16, // std::vector<QSharedPointer< Qt3DCore::QAspectJob>>
    SBK_QT3DRENDER_QLIST_QT3DRENDER_QRENDERPASSPTR_IDX       = 17, // QList<Qt3DRender::QRenderPass*>
    SBK_QT3DRENDER_QLIST_QSHAREDPOINTER_QT3DRENDER_QTEXTUREIMAGEDATA_IDX = 18, // QList<QSharedPointer< Qt3DRender::QTextureImageData>>
    SBK_QT3DRENDER_QLIST_QVARIANT_IDX                        = 19, // QList<QVariant>
    SBK_QT3DRENDER_QLIST_QSTRING_IDX                         = 20, // QList<QString>
    SBK_QT3DRENDER_QMAP_QSTRING_QVARIANT_IDX                 = 21, // QMap<QString,QVariant>
    SBK_Qt3DRender_CONVERTERS_IDX_COUNT                      = 22
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::Qt3DRender::API >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_API_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::PropertyReaderInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_PROPERTYREADERINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractLight::Type >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTLIGHT_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractLight >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTLIGHT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractRayCaster::RunMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTRAYCASTER_RUNMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractRayCaster::FilterMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTRAYCASTER_FILTERMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractRayCaster >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTRAYCASTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::Status >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::Target >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_TARGET_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::TextureFormat >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_TEXTUREFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::Filter >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_FILTER_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::CubeMapFace >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_CUBEMAPFACE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::ComparisonFunction >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_COMPARISONFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::ComparisonMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_COMPARISONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture::HandleType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_HANDLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTexture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAbstractTextureImage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QABSTRACTTEXTUREIMAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAlphaCoverage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QALPHACOVERAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAlphaTest::AlphaFunction >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QALPHATEST_ALPHAFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QAlphaTest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QALPHATEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QBlendEquation::BlendFunction >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QBLENDEQUATION_BLENDFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QBlendEquation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QBLENDEQUATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QBlendEquationArguments::Blending >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QBLENDEQUATIONARGUMENTS_BLENDING_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QBlendEquationArguments >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QBLENDEQUATIONARGUMENTS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QBlitFramebuffer::InterpolationMethod >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QBLITFRAMEBUFFER_INTERPOLATIONMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QBlitFramebuffer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QBLITFRAMEBUFFER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QBufferCapture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QBUFFERCAPTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QCamera::CameraTranslationOption >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCAMERA_CAMERATRANSLATIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QCamera >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCAMERA_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QCameraLens::ProjectionType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCAMERALENS_PROJECTIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QCameraLens >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCAMERALENS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QCameraSelector >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCAMERASELECTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QClearBuffers::BufferType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCLEARBUFFERS_BUFFERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt3DRender::QClearBuffers::BufferType> >() { return SbkPySide6_Qt3DRenderTypes[SBK_QFLAGS_QT3DRENDER_QCLEARBUFFERS_BUFFERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QClearBuffers >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCLEARBUFFERS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QClipPlane >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCLIPPLANE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QColorMask >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCOLORMASK_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QComputeCommand::RunType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCOMPUTECOMMAND_RUNTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QComputeCommand >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCOMPUTECOMMAND_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QCullFace::CullingMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCULLFACE_CULLINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QCullFace >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QCULLFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QDepthRange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QDEPTHRANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QDepthTest::DepthFunction >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QDEPTHTEST_DEPTHFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QDepthTest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QDEPTHTEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QDirectionalLight >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QDIRECTIONALLIGHT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QDispatchCompute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QDISPATCHCOMPUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QDithering >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QDITHERING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QEffect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QEFFECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QEnvironmentLight >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QENVIRONMENTLIGHT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QFilterKey >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QFILTERKEY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QFrameGraphNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QFRAMEGRAPHNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QFrontFace::WindingDirection >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QFRONTFACE_WINDINGDIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QFrontFace >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QFRONTFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QFrustumCulling >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QFRUSTUMCULLING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QGeometryRenderer::PrimitiveType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QGEOMETRYRENDERER_PRIMITIVETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QGeometryRenderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QGEOMETRYRENDERER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QGraphicsApiFilter::Api >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QGRAPHICSAPIFILTER_API_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QGraphicsApiFilter::OpenGLProfile >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QGRAPHICSAPIFILTER_OPENGLPROFILE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QGraphicsApiFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QGRAPHICSAPIFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLayer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLAYER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLayerFilter::FilterMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLAYERFILTER_FILTERMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLayerFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLAYERFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLevelOfDetail::ThresholdType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLEVELOFDETAIL_THRESHOLDTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLevelOfDetail >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLEVELOFDETAIL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLevelOfDetailBoundingSphere >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLEVELOFDETAILBOUNDINGSPHERE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLevelOfDetailSwitch >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLEVELOFDETAILSWITCH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QLineWidth >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QLINEWIDTH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QMemoryBarrier::Operation >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QMEMORYBARRIER_OPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt3DRender::QMemoryBarrier::Operation> >() { return SbkPySide6_Qt3DRenderTypes[SBK_QFLAGS_QT3DRENDER_QMEMORYBARRIER_OPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QMemoryBarrier >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QMEMORYBARRIER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QMesh::Status >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QMESH_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QMultiSampleAntiAliasing >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QMULTISAMPLEANTIALIASING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QNoDepthMask >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QNODEPTHMASK_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QNoDraw >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QNODRAW_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QNoPicking >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QNOPICKING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QObjectPicker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QOBJECTPICKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPaintedTextureImage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPAINTEDTEXTUREIMAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QParameter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPARAMETER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickEvent::Buttons >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKEVENT_BUTTONS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickEvent::Modifiers >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKEVENT_MODIFIERS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickLineEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKLINEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickPointEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKPOINTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickTriangleEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKTRIANGLEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickingProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKINGPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickingSettings::PickMethod >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKINGSETTINGS_PICKMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickingSettings::PickResultMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKINGSETTINGS_PICKRESULTMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickingSettings::FaceOrientationPickingMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKINGSETTINGS_FACEORIENTATIONPICKINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPickingSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPICKINGSETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPointLight >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPOINTLIGHT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPointSize::SizeMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPOINTSIZE_SIZEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPointSize >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPOINTSIZE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QPolygonOffset >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPOLYGONOFFSET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QProximityFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QPROXIMITYFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRasterMode::RasterMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRASTERMODE_RASTERMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRasterMode::FaceMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRASTERMODE_FACEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRasterMode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRASTERMODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRayCaster >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRAYCASTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRayCasterHit::HitType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRAYCASTERHIT_HITTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRayCasterHit >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRAYCASTERHIT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderAspect::SubmissionType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERASPECT_SUBMISSIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderAspect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERASPECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderCapabilities::API >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERCAPABILITIES_API_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderCapabilities::Profile >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERCAPABILITIES_PROFILE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderCapabilities >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERCAPABILITIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderCapture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERCAPTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderCaptureReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERCAPTUREREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderPass >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERPASS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderPassFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERPASSFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderSettings::RenderPolicy >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERSETTINGS_RENDERPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERSETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderStateSet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERSTATESET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderSurfaceSelector >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERSURFACESELECTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderTarget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERTARGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderTargetOutput::AttachmentPoint >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERTARGETOUTPUT_ATTACHMENTPOINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderTargetOutput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERTARGETOUTPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QRenderTargetSelector >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QRENDERTARGETSELECTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSceneLoader::Status >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSCENELOADER_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSceneLoader::ComponentType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSCENELOADER_COMPONENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSceneLoader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSCENELOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QScissorTest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSCISSORTEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QScreenRayCaster >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSCREENRAYCASTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSeamlessCubemap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSEAMLESSCUBEMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSetFence::HandleType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSETFENCE_HANDLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSetFence >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSETFENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderImage::Access >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERIMAGE_ACCESS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderImage::ImageFormat >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERIMAGE_IMAGEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderImage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERIMAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderProgram::ShaderType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERPROGRAM_SHADERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderProgram::Status >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERPROGRAM_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderProgram::Format >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERPROGRAM_FORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderProgram >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERPROGRAM_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QShaderProgramBuilder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHADERPROGRAMBUILDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSharedGLTexture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSHAREDGLTEXTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSortPolicy::SortType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSORTPOLICY_SORTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSortPolicy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSORTPOLICY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSpotLight >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSPOTLIGHT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilMask >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILMASK_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilOperation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILOPERATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilOperationArguments::FaceMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILOPERATIONARGUMENTS_FACEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilOperationArguments::Operation >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILOPERATIONARGUMENTS_OPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilOperationArguments >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILOPERATIONARGUMENTS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilTest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILTEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilTestArguments::StencilFaceMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILTESTARGUMENTS_STENCILFACEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilTestArguments::StencilFunction >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILTESTARGUMENTS_STENCILFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QStencilTestArguments >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSTENCILTESTARGUMENTS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSubtreeEnabler::Enablement >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSUBTREEENABLER_ENABLEMENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QSubtreeEnabler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QSUBTREEENABLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTechnique >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTECHNIQUE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTechniqueFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTECHNIQUEFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTexture1D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURE1D_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTexture1DArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURE1DARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTexture2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURE2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTexture2DArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURE2DARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTexture2DMultisample >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURE2DMULTISAMPLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTexture2DMultisampleArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURE2DMULTISAMPLEARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTexture3D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURE3D_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureBuffer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREBUFFER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureCubeMap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURECUBEMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureCubeMapArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURECUBEMAPARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureDataUpdate >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREDATAUPDATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureImage::Status >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREIMAGE_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureImage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREIMAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureImageData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREIMAGEDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureImageDataGenerator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREIMAGEDATAGENERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureLoader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURELOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureRectangle >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTURERECTANGLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureWrapMode::WrapMode >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREWRAPMODE_WRAPMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QTextureWrapMode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QTEXTUREWRAPMODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QViewport >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QVIEWPORT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QWaitFence::HandleType >() { return SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QWAITFENCE_HANDLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DRender::QWaitFence >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DRenderTypes[SBK_QT3DRENDER_QWAITFENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<Qt3DRender::QTextureImageData> >() { return SbkPySide6_Qt3DRenderTypes[SBK_QSHAREDPOINTER_QT3DRENDER_QTEXTUREIMAGEDATA_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<Qt3DRender::QTextureImageDataGenerator> >() { return SbkPySide6_Qt3DRenderTypes[SBK_QSHAREDPOINTER_QT3DRENDER_QTEXTUREIMAGEDATAGENERATOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<Qt3DRender::PropertyReaderInterface> >() { return SbkPySide6_Qt3DRenderTypes[SBK_QSHAREDPOINTER_QT3DRENDER_PROPERTYREADERINTERFACE_IDX]; }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QT3DRENDER_PYTHON_H

