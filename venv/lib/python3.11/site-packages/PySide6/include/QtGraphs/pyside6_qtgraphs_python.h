// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTGRAPHS_PYTHON_H
#define SBK_QTGRAPHS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtquickwidgets_python.h>
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtquick_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtopengl_python.h>
#include <pyside6_qtqml_python.h>
#include <pyside6_qtwidgets_python.h>

// Bound library includes
#include <QtGraphs/q3dcamera.h>
#include <QtGraphs/q3dtheme.h>
#include <QtGraphs/qabstract3daxis.h>
#include <QtGraphs/qabstract3dgraph.h>
#include <QtGraphs/qabstract3dinputhandler.h>
#include <QtGraphs/qabstract3dseries.h>
#include <QtGraphs/qabstractdataproxy.h>
#include <QtGraphs/qitemmodelbardataproxy.h>
#include <QtGraphs/qitemmodelsurfacedataproxy.h>
#include <QtGraphs/qsurface3dseries.h>
class Q3DBars;
class Q3DInputHandler;
class Q3DLight;
class Q3DObject;
class Q3DScatter;
class Q3DScene;
class Q3DSurface;
class QBar3DSeries;
class QBarDataItem;
class QBarDataProxy;
class QCategory3DAxis;
class QCustom3DItem;
class QCustom3DLabel;
class QCustom3DVolume;
class QHeightMapSurfaceDataProxy;
class QItemModelScatterDataProxy;
class QLogValue3DAxisFormatter;
class QScatter3DSeries;
class QScatterDataItem;
class QScatterDataProxy;
class QSurfaceDataItem;
class QSurfaceDataProxy;
class QTouch3DInputHandler;
class QValue3DAxis;
class QValue3DAxisFormatter;
// Type indices
enum : int {
    SBK_Q3DBARS_IDX                                          = 0,
    SBK_Q3DCAMERA_CAMERAPRESET_IDX                           = 2,
    SBK_Q3DCAMERA_IDX                                        = 1,
    SBK_Q3DINPUTHANDLER_IDX                                  = 3,
    SBK_Q3DLIGHT_IDX                                         = 4,
    SBK_Q3DOBJECT_IDX                                        = 5,
    SBK_Q3DSCATTER_IDX                                       = 6,
    SBK_Q3DSCENE_IDX                                         = 7,
    SBK_Q3DSURFACE_IDX                                       = 8,
    SBK_Q3DTHEME_COLORSTYLE_IDX                              = 10,
    SBK_Q3DTHEME_THEME_IDX                                   = 11,
    SBK_Q3DTHEME_IDX                                         = 9,
    SBK_QABSTRACT3DAXIS_AXISORIENTATION_IDX                  = 13,
    SBK_QABSTRACT3DAXIS_AXISTYPE_IDX                         = 14,
    SBK_QABSTRACT3DAXIS_IDX                                  = 12,
    SBK_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX                   = 19,
    SBK_QFLAGS_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX            = 36,
    SBK_QABSTRACT3DGRAPH_SHADOWQUALITY_IDX                   = 20,
    SBK_QABSTRACT3DGRAPH_ELEMENTTYPE_IDX                     = 16,
    SBK_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX                = 17,
    SBK_QFLAGS_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX         = 35,
    SBK_QABSTRACT3DGRAPH_RENDERINGMODE_IDX                   = 18,
    SBK_QABSTRACT3DGRAPH_IDX                                 = 15,
    SBK_QABSTRACT3DINPUTHANDLER_INPUTVIEW_IDX                = 22,
    SBK_QABSTRACT3DINPUTHANDLER_IDX                          = 21,
    SBK_QABSTRACT3DSERIES_SERIESTYPE_IDX                     = 25,
    SBK_QABSTRACT3DSERIES_MESH_IDX                           = 24,
    SBK_QABSTRACT3DSERIES_IDX                                = 23,
    SBK_QABSTRACTDATAPROXY_DATATYPE_IDX                      = 27,
    SBK_QABSTRACTDATAPROXY_IDX                               = 26,
    SBK_QBAR3DSERIES_IDX                                     = 28,
    SBK_QBARDATAITEM_IDX                                     = 29,
    SBK_QBARDATAPROXY_IDX                                    = 30,
    SBK_QCATEGORY3DAXIS_IDX                                  = 31,
    SBK_QCUSTOM3DITEM_IDX                                    = 32,
    SBK_QCUSTOM3DLABEL_IDX                                   = 33,
    SBK_QCUSTOM3DVOLUME_IDX                                  = 34,
    SBK_QHEIGHTMAPSURFACEDATAPROXY_IDX                       = 38,
    SBK_QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_IDX        = 40,
    SBK_QITEMMODELBARDATAPROXY_IDX                           = 39,
    SBK_QITEMMODELSCATTERDATAPROXY_IDX                       = 41,
    SBK_QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_IDX    = 43,
    SBK_QITEMMODELSURFACEDATAPROXY_IDX                       = 42,
    SBK_QLOGVALUE3DAXISFORMATTER_IDX                         = 44,
    SBK_QSCATTER3DSERIES_IDX                                 = 45,
    SBK_QSCATTERDATAITEM_IDX                                 = 46,
    SBK_QSCATTERDATAPROXY_IDX                                = 47,
    SBK_QSURFACE3DSERIES_DRAWFLAG_IDX                        = 49,
    SBK_QFLAGS_QSURFACE3DSERIES_DRAWFLAG_IDX                 = 37,
    SBK_QSURFACE3DSERIES_IDX                                 = 48,
    SBK_QSURFACEDATAITEM_IDX                                 = 50,
    SBK_QSURFACEDATAPROXY_IDX                                = 51,
    SBK_QTOUCH3DINPUTHANDLER_IDX                             = 52,
    SBK_QVALUE3DAXIS_IDX                                     = 53,
    SBK_QVALUE3DAXISFORMATTER_IDX                            = 54,
    SBK_QtGraphs_IDX_COUNT                                   = 55
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtGraphsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtGraphsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtGraphsTypeConverters;

// Converter indices
enum : int {
    SBK_QBARDATAARRAY_IDX                                    = 0,
    SBK_QSURFACEDATAARRAY_IDX                                = 1,
    SBK_QTGRAPHS_QLIST_INT_IDX                               = 2, // QList<int>
    SBK_QTGRAPHS_QLIST_QCUSTOM3DITEMPTR_IDX                  = 3, // QList<QCustom3DItem*>
    SBK_QTGRAPHS_QLIST_QQMLERROR_IDX                         = 4, // QList<QQmlError>
    SBK_QTGRAPHS_QLIST_QABSTRACT3DINPUTHANDLERPTR_IDX        = 5, // QList<QAbstract3DInputHandler*>
    SBK_QTGRAPHS_QLIST_Q3DTHEMEPTR_IDX                       = 6, // QList<Q3DTheme*>
    SBK_QTGRAPHS_QLIST_QVALUE3DAXISPTR_IDX                   = 7, // QList<QValue3DAxis*>
    SBK_QTGRAPHS_QLIST_QSURFACE3DSERIESPTR_IDX               = 8, // QList<QSurface3DSeries*>
    SBK_QTGRAPHS_QLIST_QSCATTER3DSERIESPTR_IDX               = 9, // QList<QScatter3DSeries*>
    SBK_QTGRAPHS_QLIST_QABSTRACT3DAXISPTR_IDX                = 10, // QList<QAbstract3DAxis*>
    SBK_QTGRAPHS_QLIST_QBAR3DSERIESPTR_IDX                   = 11, // QList<QBar3DSeries*>
    SBK_QTGRAPHS_QLIST_QOBJECTPTR_IDX                        = 12, // QList<QObject*>
    SBK_QTGRAPHS_QLIST_QBYTEARRAY_IDX                        = 13, // QList<QByteArray>
    SBK_QTGRAPHS_QLIST_FLOAT_IDX                             = 14, // QList<float>
    SBK_QTGRAPHS_QLIST_UCHAR_IDX                             = 15, // QList<uchar>
    SBK_QTGRAPHS_QLIST_UNSIGNEDINT_IDX                       = 16, // QList<unsigned int>
    SBK_QTGRAPHS_QLIST_QIMAGEPTR_IDX                         = 17, // QList<QImage*>
    SBK_QTGRAPHS_QLIST_QSURFACEDATAITEM_IDX                  = 18, // QList<QSurfaceDataItem>
    SBK_QTGRAPHS_QLIST_QSCATTERDATAITEM_IDX                  = 19, // QList<QScatterDataItem>
    SBK_QTGRAPHS_QLIST_QBARDATAITEM_IDX                      = 20, // QList<QBarDataItem>
    SBK_QTGRAPHS_QLIST_QCOLOR_IDX                            = 21, // QList<QColor>
    SBK_QTGRAPHS_QLIST_QLINEARGRADIENT_IDX                   = 22, // QList<QLinearGradient>
    SBK_QTGRAPHS_QLIST_QVARIANT_IDX                          = 23, // QList<QVariant>
    SBK_QTGRAPHS_QLIST_QSTRING_IDX                           = 24, // QList<QString>
    SBK_QTGRAPHS_QMAP_QSTRING_QVARIANT_IDX                   = 25, // QMap<QString,QVariant>
    SBK_QtGraphs_CONVERTERS_IDX_COUNT                        = 26
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::Q3DBars >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DBARS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DCamera::CameraPreset >() { return SbkPySide6_QtGraphsTypes[SBK_Q3DCAMERA_CAMERAPRESET_IDX]; }
template<> inline PyTypeObject *SbkType< ::Q3DCamera >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DCAMERA_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DInputHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DINPUTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DLight >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DLIGHT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DScatter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DSCATTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DScene >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DSCENE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DSurface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DSURFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Q3DTheme::ColorStyle >() { return SbkPySide6_QtGraphsTypes[SBK_Q3DTHEME_COLORSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Q3DTheme::Theme >() { return SbkPySide6_QtGraphsTypes[SBK_Q3DTHEME_THEME_IDX]; }
template<> inline PyTypeObject *SbkType< ::Q3DTheme >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_Q3DTHEME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstract3DAxis::AxisOrientation >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DAXIS_AXISORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DAxis::AxisType >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DAXIS_AXISTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstract3DGraph::SelectionFlag >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstract3DGraph::SelectionFlag> >() { return SbkPySide6_QtGraphsTypes[SBK_QFLAGS_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DGraph::ShadowQuality >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DGRAPH_SHADOWQUALITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DGraph::ElementType >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DGRAPH_ELEMENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DGraph::OptimizationHint >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstract3DGraph::OptimizationHint> >() { return SbkPySide6_QtGraphsTypes[SBK_QFLAGS_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DGraph::RenderingMode >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DGRAPH_RENDERINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DGraph >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DGRAPH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstract3DInputHandler::InputView >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DINPUTHANDLER_INPUTVIEW_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DInputHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DINPUTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstract3DSeries::SeriesType >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DSERIES_SERIESTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DSeries::Mesh >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DSERIES_MESH_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstract3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QABSTRACT3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractDataProxy::DataType >() { return SbkPySide6_QtGraphsTypes[SBK_QABSTRACTDATAPROXY_DATATYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QABSTRACTDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBar3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QBAR3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBarDataItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QBARDATAITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBarDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QBARDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCategory3DAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QCATEGORY3DAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCustom3DItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QCUSTOM3DITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCustom3DLabel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QCUSTOM3DLABEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCustom3DVolume >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QCUSTOM3DVOLUME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHeightMapSurfaceDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QHEIGHTMAPSURFACEDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QItemModelBarDataProxy::MultiMatchBehavior >() { return SbkPySide6_QtGraphsTypes[SBK_QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QItemModelBarDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QITEMMODELBARDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QItemModelScatterDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QITEMMODELSCATTERDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QItemModelSurfaceDataProxy::MultiMatchBehavior >() { return SbkPySide6_QtGraphsTypes[SBK_QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QItemModelSurfaceDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QITEMMODELSURFACEDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLogValue3DAxisFormatter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QLOGVALUE3DAXISFORMATTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScatter3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QSCATTER3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScatterDataItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QSCATTERDATAITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScatterDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QSCATTERDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurface3DSeries::DrawFlag >() { return SbkPySide6_QtGraphsTypes[SBK_QSURFACE3DSERIES_DRAWFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSurface3DSeries::DrawFlag> >() { return SbkPySide6_QtGraphsTypes[SBK_QFLAGS_QSURFACE3DSERIES_DRAWFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurface3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QSURFACE3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceDataItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QSURFACEDATAITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QSURFACEDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTouch3DInputHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QTOUCH3DINPUTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QValue3DAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QVALUE3DAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QValue3DAxisFormatter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGraphsTypes[SBK_QVALUE3DAXISFORMATTER_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTGRAPHS_PYTHON_H

