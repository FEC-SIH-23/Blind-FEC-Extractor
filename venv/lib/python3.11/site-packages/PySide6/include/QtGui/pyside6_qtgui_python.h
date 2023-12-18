// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTGUI_PYTHON_H
#define SBK_QTGUI_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QAbstractTextDocumentLayout>
#include <QInputMethodEvent>
#include <QPainter>
#include <QPainterPath>
#include <QTextBlock>
#include <QTextFrame>
#include <QTextLayout>
#include <QtGui/qabstractfileiconprovider.h>
#include <QtGui/qabstracttextdocumentlayout.h>
#include <QtGui/qaccessible.h>
#include <QtGui/qaccessible_base.h>
#include <QtGui/qaction.h>
#include <QtGui/qactiongroup.h>
#include <QtGui/qbrush.h>
#include <QtGui/qclipboard.h>
#include <QtGui/qcolor.h>
#include <QtGui/qcolorspace.h>
#include <QtGui/qevent.h>
#include <QtGui/qeventpoint.h>
#include <QtGui/qfont.h>
#include <QtGui/qfontdatabase.h>
#include <QtGui/qgenericmatrix.h>
#include <QtGui/qglyphrun.h>
#include <QtGui/qicon.h>
#include <QtGui/qiconengine.h>
#include <QtGui/qimage.h>
#include <QtGui/qimageiohandler.h>
#include <QtGui/qimagereader.h>
#include <QtGui/qimagewriter.h>
#include <QtGui/qinputdevice.h>
#include <QtGui/qinputmethod.h>
#include <QtGui/qkeysequence.h>
#include <QtGui/qmatrix4x4.h>
#include <QtGui/qmovie.h>
#include <QtGui/qopenglcontext.h>
#include <QtGui/qopenglfunctions.h>
#include <QtGui/qpagedpaintdevice.h>
#include <QtGui/qpagelayout.h>
#include <QtGui/qpageranges.h>
#include <QtGui/qpagesize.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qpaintengine.h>
#include <QtGui/qpainter.h>
#include <QtGui/qpainterpath.h>
#include <QtGui/qpalette.h>
#include <QtGui/qpixelformat.h>
#include <QtGui/qpixmapcache.h>
#include <QtGui/qpointingdevice.h>
#include <QtGui/qrawfont.h>
#include <QtGui/qregion.h>
#include <QtGui/qrgba64.h>
#include <QtGui/qsessionmanager.h>
#include <QtGui/qstandarditemmodel.h>
#include <QtGui/qstatictext.h>
#include <QtGui/qsurface.h>
#include <QtGui/qsurfaceformat.h>
#include <QtGui/qtextcursor.h>
#include <QtGui/qtextdocument.h>
#include <QtGui/qtextformat.h>
#include <QtGui/qtextlayout.h>
#include <QtGui/qtextobject.h>
#include <QtGui/qtextoption.h>
#include <QtGui/qtransform.h>
#include <QtGui/qvalidator.h>
#include <QtGui/qwindow.h>
class QAccessibleActionInterface;
class QAccessibleEditableTextInterface;
class QAccessibleEvent;
class QAccessibleInterface;
class QAccessibleObject;
class QAccessibleStateChangeEvent;
class QAccessibleTableCellInterface;
class QAccessibleTextCursorEvent;
class QAccessibleTextInsertEvent;
class QAccessibleTextInterface;
class QAccessibleTextRemoveEvent;
class QAccessibleTextSelectionEvent;
class QAccessibleTextUpdateEvent;
class QAccessibleValueChangeEvent;
class QAccessibleValueInterface;
class QActionEvent;
class QBackingStore;
class QBitmap;
class QBrush;
class QCloseEvent;
class QColorTransform;
class QConicalGradient;
class QCursor;
class QDesktopServices;
class QDrag;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QExposeEvent;
class QFileOpenEvent;
class QFocusEvent;
class QFontInfo;
class QFontMetrics;
class QFontMetricsF;
class QGuiApplication;
class QHelpEvent;
class QHideEvent;
class QHoverEvent;
class QIconDragEvent;
class QInputEvent;
class QInputMethodQueryEvent;
class QIntValidator;
class QKeyEvent;
class QLinearGradient;
class QMouseEvent;
class QMoveEvent;
class QNativeGestureEvent;
class QOffscreenSurface;
class QOpenGLContextGroup;
class QOpenGLExtraFunctions;
class QPaintDeviceWindow;
class QPaintEngineState;
class QPaintEvent;
class QPainterPathStroker;
class QPdfWriter;
class QPen;
class QPicture;
class QPixmap;
class QPointerEvent;
class QPointingDeviceUniqueId;
class QPolygon;
class QPolygonF;
class QPyTextObject;
class QQuaternion;
class QRadialGradient;
class QRasterWindow;
class QRegularExpressionValidator;
class QResizeEvent;
class QScreen;
class QScrollPrepareEvent;
class QShortcut;
class QShortcutEvent;
class QShowEvent;
class QSinglePointEvent;
class QStandardItemModel;
class QStatusTipEvent;
class QStyleHints;
class QSyntaxHighlighter;
class QTabletEvent;
class QTextBlockGroup;
class QTextBlockUserData;
class QTextDocumentFragment;
class QTextDocumentWriter;
class QTextFragment;
class QTextImageFormat;
class QTextInlineObject;
class QTextList;
class QTextObject;
class QTextObjectInterface;
class QTextTable;
class QTextTableCell;
class QTextTableCellFormat;
class QTextTableFormat;
class QToolBarChangeEvent;
class QTouchEvent;
class QUndoCommand;
class QUndoGroup;
class QUndoStack;
class QVector2D;
class QVector3D;
class QVector4D;
class QWhatsThisClickedEvent;
class QWheelEvent;
class QWindowStateChangeEvent;

namespace QtGuiHelper {
    class QOverrideCursorGuard;
}
// Type indices
enum : int {
    SBK_QABSTRACTFILEICONPROVIDER_ICONTYPE_IDX               = 1,
    SBK_QABSTRACTFILEICONPROVIDER_OPTION_IDX                 = 2,
    SBK_QFLAGS_QABSTRACTFILEICONPROVIDER_OPTION_IDX          = 71,
    SBK_QABSTRACTFILEICONPROVIDER_IDX                        = 0,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_IDX                      = 3,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_PAINTCONTEXT_IDX         = 4,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_SELECTION_IDX            = 5,
    SBK_QACCESSIBLE_EVENT_IDX                                = 7,
    SBK_QACCESSIBLE_ROLE_IDX                                 = 10,
    SBK_QACCESSIBLE_TEXT_IDX                                 = 12,
    SBK_QACCESSIBLE_RELATIONFLAG_IDX                         = 9,
    SBK_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX                  = 72,
    SBK_QACCESSIBLE_INTERFACETYPE_IDX                        = 8,
    SBK_QACCESSIBLE_TEXTBOUNDARYTYPE_IDX                     = 13,
    SBK_QACCESSIBLE_IDX                                      = 6,
    SBK_QACCESSIBLE_STATE_IDX                                = 11,
    SBK_QACCESSIBLEACTIONINTERFACE_IDX                       = 14,
    SBK_QACCESSIBLEEDITABLETEXTINTERFACE_IDX                 = 15,
    SBK_QACCESSIBLEEVENT_IDX                                 = 16,
    SBK_QACCESSIBLEINTERFACE_IDX                             = 17,
    SBK_QACCESSIBLEOBJECT_IDX                                = 18,
    SBK_QACCESSIBLESTATECHANGEEVENT_IDX                      = 19,
    SBK_QACCESSIBLETABLECELLINTERFACE_IDX                    = 20,
    SBK_QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_IDX = 22,
    SBK_QACCESSIBLETABLEMODELCHANGEEVENT_IDX                 = 21,
    SBK_QACCESSIBLETEXTCURSOREVENT_IDX                       = 23,
    SBK_QACCESSIBLETEXTINSERTEVENT_IDX                       = 24,
    SBK_QACCESSIBLETEXTINTERFACE_IDX                         = 25,
    SBK_QACCESSIBLETEXTREMOVEEVENT_IDX                       = 26,
    SBK_QACCESSIBLETEXTSELECTIONEVENT_IDX                    = 27,
    SBK_QACCESSIBLETEXTUPDATEEVENT_IDX                       = 28,
    SBK_QACCESSIBLEVALUECHANGEEVENT_IDX                      = 29,
    SBK_QACCESSIBLEVALUEINTERFACE_IDX                        = 30,
    SBK_QACTION_MENUROLE_IDX                                 = 33,
    SBK_QACTION_PRIORITY_IDX                                 = 34,
    SBK_QACTION_ACTIONEVENT_IDX                              = 32,
    SBK_QACTION_IDX                                          = 31,
    SBK_QACTIONEVENT_IDX                                     = 35,
    SBK_QACTIONGROUP_EXCLUSIONPOLICY_IDX                     = 37,
    SBK_QACTIONGROUP_IDX                                     = 36,
    SBK_QBACKINGSTORE_IDX                                    = 38,
    SBK_QBITMAP_IDX                                          = 39,
    SBK_QBRUSH_IDX                                           = 40,
    SBK_QCLIPBOARD_MODE_IDX                                  = 42,
    SBK_QCLIPBOARD_IDX                                       = 41,
    SBK_QCLOSEEVENT_IDX                                      = 43,
    SBK_QCOLOR_SPEC_IDX                                      = 46,
    SBK_QCOLOR_NAMEFORMAT_IDX                                = 45,
    SBK_QCOLOR_IDX                                           = 44,
    SBK_QtGuiQCOLORCONSTANTS_IDX                             = 47,
    SBK_QtGuiQCOLORCONSTANTS_SVG_IDX                         = 48,
    SBK_QCOLORSPACE_NAMEDCOLORSPACE_IDX                      = 50,
    SBK_QCOLORSPACE_PRIMARIES_IDX                            = 51,
    SBK_QCOLORSPACE_TRANSFERFUNCTION_IDX                     = 52,
    SBK_QCOLORSPACE_IDX                                      = 49,
    SBK_QCOLORTRANSFORM_IDX                                  = 53,
    SBK_QCONICALGRADIENT_IDX                                 = 54,
    SBK_QCONTEXTMENUEVENT_REASON_IDX                         = 56,
    SBK_QCONTEXTMENUEVENT_IDX                                = 55,
    SBK_QCURSOR_IDX                                          = 57,
    SBK_QDESKTOPSERVICES_IDX                                 = 58,
    SBK_QDOUBLEVALIDATOR_NOTATION_IDX                        = 60,
    SBK_QDOUBLEVALIDATOR_IDX                                 = 59,
    SBK_QDRAG_IDX                                            = 61,
    SBK_QDRAGENTEREVENT_IDX                                  = 62,
    SBK_QDRAGLEAVEEVENT_IDX                                  = 63,
    SBK_QDRAGMOVEEVENT_IDX                                   = 64,
    SBK_QDROPEVENT_IDX                                       = 65,
    SBK_QENTEREVENT_IDX                                      = 66,
    SBK_QEVENTPOINT_STATE_IDX                                = 68,
    SBK_QEVENTPOINT_IDX                                      = 67,
    SBK_QEXPOSEEVENT_IDX                                     = 69,
    SBK_QFILEOPENEVENT_IDX                                   = 70,
    SBK_QFOCUSEVENT_IDX                                      = 107,
    SBK_QFONT_STYLEHINT_IDX                                  = 113,
    SBK_QFONT_STYLESTRATEGY_IDX                              = 114,
    SBK_QFONT_HINTINGPREFERENCE_IDX                          = 463,
    SBK_QFONT_WEIGHT_IDX                                     = 115,
    SBK_QFONT_STYLE_IDX                                      = 112,
    SBK_QFONT_STRETCH_IDX                                    = 111,
    SBK_QFONT_CAPITALIZATION_IDX                             = 109,
    SBK_QFONT_SPACINGTYPE_IDX                                = 110,
    SBK_QFONT_IDX                                            = 108,
    SBK_QFONTDATABASE_WRITINGSYSTEM_IDX                      = 118,
    SBK_QFONTDATABASE_SYSTEMFONT_IDX                         = 117,
    SBK_QFONTDATABASE_IDX                                    = 116,
    SBK_QFONTINFO_IDX                                        = 119,
    SBK_QFONTMETRICS_IDX                                     = 120,
    SBK_QFONTMETRICSF_IDX                                    = 121,
    SBK_QGLYPHRUN_GLYPHRUNFLAG_IDX                           = 123,
    SBK_QFLAGS_QGLYPHRUN_GLYPHRUNFLAG_IDX                    = 73,
    SBK_QGLYPHRUN_IDX                                        = 122,
    SBK_QGRADIENT_TYPE_IDX                                   = 129,
    SBK_QGRADIENT_SPREAD_IDX                                 = 128,
    SBK_QGRADIENT_COORDINATEMODE_IDX                         = 125,
    SBK_QGRADIENT_INTERPOLATIONMODE_IDX                      = 126,
    SBK_QGRADIENT_PRESET_IDX                                 = 127,
    SBK_QGRADIENT_IDX                                        = 124,
    SBK_QGUIAPPLICATION_IDX                                  = 130,
    SBK_QHELPEVENT_IDX                                       = 131,
    SBK_QHIDEEVENT_IDX                                       = 132,
    SBK_QHOVEREVENT_IDX                                      = 133,
    SBK_QICON_MODE_IDX                                       = 135,
    SBK_QICON_STATE_IDX                                      = 136,
    SBK_QICON_IDX                                            = 134,
    SBK_QICONDRAGEVENT_IDX                                   = 137,
    SBK_QICONENGINE_ICONENGINEHOOK_IDX                       = 139,
    SBK_QICONENGINE_IDX                                      = 138,
    SBK_QICONENGINE_SCALEDPIXMAPARGUMENT_IDX                 = 140,
    SBK_QIMAGE_INVERTMODE_IDX                                = 143,
    SBK_QIMAGE_FORMAT_IDX                                    = 142,
    SBK_QIMAGE_IDX                                           = 141,
    SBK_QIMAGEIOHANDLER_IMAGEOPTION_IDX                      = 145,
    SBK_QIMAGEIOHANDLER_TRANSFORMATION_IDX                   = 146,
    SBK_QFLAGS_QIMAGEIOHANDLER_TRANSFORMATION_IDX            = 74,
    SBK_QIMAGEIOHANDLER_IDX                                  = 144,
    SBK_QIMAGEREADER_IMAGEREADERERROR_IDX                    = 148,
    SBK_QIMAGEREADER_IDX                                     = 147,
    SBK_QIMAGEWRITER_IMAGEWRITERERROR_IDX                    = 150,
    SBK_QIMAGEWRITER_IDX                                     = 149,
    SBK_QINPUTDEVICE_DEVICETYPE_IDX                          = 153,
    SBK_QFLAGS_QINPUTDEVICE_DEVICETYPE_IDX                   = 76,
    SBK_QINPUTDEVICE_CAPABILITY_IDX                          = 152,
    SBK_QFLAGS_QINPUTDEVICE_CAPABILITY_IDX                   = 75,
    SBK_QINPUTDEVICE_IDX                                     = 151,
    SBK_QINPUTEVENT_IDX                                      = 154,
    SBK_QINPUTMETHOD_ACTION_IDX                              = 156,
    SBK_QINPUTMETHOD_IDX                                     = 155,
    SBK_QINPUTMETHODEVENT_ATTRIBUTETYPE_IDX                  = 159,
    SBK_QINPUTMETHODEVENT_IDX                                = 157,
    SBK_QINPUTMETHODEVENT_ATTRIBUTE_IDX                      = 158,
    SBK_QINPUTMETHODQUERYEVENT_IDX                           = 160,
    SBK_QINTVALIDATOR_IDX                                    = 161,
    SBK_QKEYEVENT_IDX                                        = 162,
    SBK_QKEYSEQUENCE_STANDARDKEY_IDX                         = 166,
    SBK_QKEYSEQUENCE_SEQUENCEFORMAT_IDX                      = 164,
    SBK_QKEYSEQUENCE_SEQUENCEMATCH_IDX                       = 165,
    SBK_QKEYSEQUENCE_IDX                                     = 163,
    SBK_QLINEARGRADIENT_IDX                                  = 167,
    SBK_QMATRIX2X2_IDX                                       = 168,
    SBK_QGENERICMATRIX_2_2_FLOAT_IDX                         = 168,
    SBK_QMATRIX2X3_IDX                                       = 169,
    SBK_QGENERICMATRIX_2_3_FLOAT_IDX                         = 169,
    SBK_QMATRIX2X4_IDX                                       = 170,
    SBK_QGENERICMATRIX_2_4_FLOAT_IDX                         = 170,
    SBK_QMATRIX3X2_IDX                                       = 171,
    SBK_QGENERICMATRIX_3_2_FLOAT_IDX                         = 171,
    SBK_QMATRIX3X3_IDX                                       = 172,
    SBK_QGENERICMATRIX_3_3_FLOAT_IDX                         = 172,
    SBK_QMATRIX3X4_IDX                                       = 173,
    SBK_QGENERICMATRIX_3_4_FLOAT_IDX                         = 173,
    SBK_QMATRIX4X2_IDX                                       = 174,
    SBK_QGENERICMATRIX_4_2_FLOAT_IDX                         = 174,
    SBK_QMATRIX4X3_IDX                                       = 175,
    SBK_QGENERICMATRIX_4_3_FLOAT_IDX                         = 175,
    SBK_QMATRIX4X4_FLAG_IDX                                  = 177,
    SBK_QFLAGS_QMATRIX4X4_FLAG_IDX                           = 77,
    SBK_QMATRIX4X4_IDX                                       = 176,
    SBK_QMOUSEEVENT_IDX                                      = 178,
    SBK_QMOVEEVENT_IDX                                       = 179,
    SBK_QMOVIE_MOVIESTATE_IDX                                = 182,
    SBK_QMOVIE_CACHEMODE_IDX                                 = 181,
    SBK_QMOVIE_IDX                                           = 180,
    SBK_QNATIVEGESTUREEVENT_IDX                              = 183,
    SBK_QOFFSCREENSURFACE_IDX                                = 184,
    SBK_QOPENGLCONTEXT_OPENGLMODULETYPE_IDX                  = 186,
    SBK_QOPENGLCONTEXT_IDX                                   = 185,
    SBK_QOPENGLCONTEXTGROUP_IDX                              = 187,
    SBK_QOPENGLEXTRAFUNCTIONS_IDX                            = 188,
    SBK_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX                   = 190,
    SBK_QFLAGS_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX            = 78,
    SBK_QOPENGLFUNCTIONS_IDX                                 = 189,
    SBK_QPAGELAYOUT_UNIT_IDX                                 = 194,
    SBK_QPAGELAYOUT_ORIENTATION_IDX                          = 193,
    SBK_QPAGELAYOUT_MODE_IDX                                 = 192,
    SBK_QPAGELAYOUT_IDX                                      = 191,
    SBK_QPAGERANGES_IDX                                      = 195,
    SBK_QPAGERANGES_RANGE_IDX                                = 196,
    SBK_QPAGESIZE_PAGESIZEID_IDX                             = 198,
    SBK_QPAGESIZE_UNIT_IDX                                   = 200,
    SBK_QPAGESIZE_SIZEMATCHPOLICY_IDX                        = 199,
    SBK_QPAGESIZE_IDX                                        = 197,
    SBK_QPAGEDPAINTDEVICE_PDFVERSION_IDX                     = 202,
    SBK_QPAGEDPAINTDEVICE_IDX                                = 201,
    SBK_QPAINTDEVICE_PAINTDEVICEMETRIC_IDX                   = 204,
    SBK_QPAINTDEVICE_IDX                                     = 203,
    SBK_QPAINTDEVICEWINDOW_IDX                               = 205,
    SBK_QPAINTENGINE_PAINTENGINEFEATURE_IDX                  = 208,
    SBK_QFLAGS_QPAINTENGINE_PAINTENGINEFEATURE_IDX           = 80,
    SBK_QPAINTENGINE_DIRTYFLAG_IDX                           = 207,
    SBK_QFLAGS_QPAINTENGINE_DIRTYFLAG_IDX                    = 79,
    SBK_QPAINTENGINE_POLYGONDRAWMODE_IDX                     = 209,
    SBK_QPAINTENGINE_TYPE_IDX                                = 210,
    SBK_QPAINTENGINE_IDX                                     = 206,
    SBK_QPAINTENGINESTATE_IDX                                = 211,
    SBK_QPAINTEVENT_IDX                                      = 212,
    SBK_QPAINTER_RENDERHINT_IDX                              = 217,
    SBK_QFLAGS_QPAINTER_RENDERHINT_IDX                       = 82,
    SBK_QPAINTER_PIXMAPFRAGMENTHINT_IDX                      = 216,
    SBK_QFLAGS_QPAINTER_PIXMAPFRAGMENTHINT_IDX               = 81,
    SBK_QPAINTER_COMPOSITIONMODE_IDX                         = 214,
    SBK_QPAINTER_IDX                                         = 213,
    SBK_QPAINTER_PIXMAPFRAGMENT_IDX                          = 215,
    SBK_QPAINTERPATH_ELEMENTTYPE_IDX                         = 220,
    SBK_QPAINTERPATH_IDX                                     = 218,
    SBK_QPAINTERPATH_ELEMENT_IDX                             = 219,
    SBK_QPAINTERPATHSTROKER_IDX                              = 221,
    SBK_QPALETTE_COLORGROUP_IDX                              = 223,
    SBK_QPALETTE_COLORROLE_IDX                               = 224,
    SBK_QPALETTE_IDX                                         = 222,
    SBK_QPDFWRITER_IDX                                       = 225,
    SBK_QPEN_IDX                                             = 226,
    SBK_QPICTURE_IDX                                         = 227,
    SBK_QPIXELFORMAT_COLORMODEL_IDX                          = 233,
    SBK_QPIXELFORMAT_ALPHAUSAGE_IDX                          = 231,
    SBK_QPIXELFORMAT_ALPHAPOSITION_IDX                       = 229,
    SBK_QPIXELFORMAT_ALPHAPREMULTIPLIED_IDX                  = 230,
    SBK_QPIXELFORMAT_TYPEINTERPRETATION_IDX                  = 234,
    SBK_QPIXELFORMAT_YUVLAYOUT_IDX                           = 235,
    SBK_QPIXELFORMAT_BYTEORDER_IDX                           = 232,
    SBK_QPIXELFORMAT_IDX                                     = 228,
    SBK_QPIXMAP_IDX                                          = 236,
    SBK_QPIXMAPCACHE_IDX                                     = 237,
    SBK_QPIXMAPCACHE_KEY_IDX                                 = 238,
    SBK_QPLATFORMSURFACEEVENT_SURFACEEVENTTYPE_IDX           = 240,
    SBK_QPLATFORMSURFACEEVENT_IDX                            = 239,
    SBK_QPOINTEREVENT_IDX                                    = 241,
    SBK_QPOINTINGDEVICE_POINTERTYPE_IDX                      = 244,
    SBK_QFLAGS_QPOINTINGDEVICE_POINTERTYPE_IDX               = 83,
    SBK_QPOINTINGDEVICE_GRABTRANSITION_IDX                   = 243,
    SBK_QPOINTINGDEVICE_IDX                                  = 242,
    SBK_QPOINTINGDEVICEUNIQUEID_IDX                          = 245,
    SBK_QPOLYGON_IDX                                         = 246,
    SBK_QPOLYGONF_IDX                                        = 247,
    SBK_QPYTEXTOBJECT_IDX                                    = 248,
    SBK_QQUATERNION_IDX                                      = 249,
    SBK_QRADIALGRADIENT_IDX                                  = 250,
    SBK_QRASTERWINDOW_IDX                                    = 251,
    SBK_QRAWFONT_ANTIALIASINGTYPE_IDX                        = 253,
    SBK_QRAWFONT_LAYOUTFLAG_IDX                              = 254,
    SBK_QFLAGS_QRAWFONT_LAYOUTFLAG_IDX                       = 84,
    SBK_QRAWFONT_IDX                                         = 252,
    SBK_QREGION_REGIONTYPE_IDX                               = 256,
    SBK_QREGION_IDX                                          = 255,
    SBK_QREGULAREXPRESSIONVALIDATOR_IDX                      = 257,
    SBK_QRESIZEEVENT_IDX                                     = 258,
    SBK_QRGBA64_IDX                                          = 259,
    SBK_QRHI_IMPLEMENTATION_IDX                              = 266,
    SBK_QRHI_FLAG_IDX                                        = 264,
    SBK_QFLAGS_QRHI_FLAG_IDX                                 = 87,
    SBK_QRHI_FRAMEOPRESULT_IDX                               = 265,
    SBK_QRHI_FEATURE_IDX                                     = 263,
    SBK_QRHI_BEGINFRAMEFLAG_IDX                              = 261,
    SBK_QFLAGS_QRHI_BEGINFRAMEFLAG_IDX                       = 85,
    SBK_QRHI_ENDFRAMEFLAG_IDX                                = 262,
    SBK_QFLAGS_QRHI_ENDFRAMEFLAG_IDX                         = 86,
    SBK_QRHI_RESOURCELIMIT_IDX                               = 267,
    SBK_QRHI_IDX                                             = 260,
    SBK_QRHIBUFFER_TYPE_IDX                                  = 269,
    SBK_QRHIBUFFER_USAGEFLAG_IDX                             = 270,
    SBK_QFLAGS_QRHIBUFFER_USAGEFLAG_IDX                      = 88,
    SBK_QRHIBUFFER_IDX                                       = 268,
    SBK_QRHICOLORATTACHMENT_IDX                              = 271,
    SBK_QRHICOMMANDBUFFER_INDEXFORMAT_IDX                    = 274,
    SBK_QRHICOMMANDBUFFER_BEGINPASSFLAG_IDX                  = 273,
    SBK_QFLAGS_QRHICOMMANDBUFFER_BEGINPASSFLAG_IDX           = 89,
    SBK_QRHICOMMANDBUFFER_IDX                                = 272,
    SBK_QRHICOMPUTEPIPELINE_FLAG_IDX                         = 276,
    SBK_QFLAGS_QRHICOMPUTEPIPELINE_FLAG_IDX                  = 90,
    SBK_QRHICOMPUTEPIPELINE_IDX                              = 275,
    SBK_QRHIDEPTHSTENCILCLEARVALUE_IDX                       = 277,
    SBK_QRHIDRIVERINFO_DEVICETYPE_IDX                        = 279,
    SBK_QRHIDRIVERINFO_IDX                                   = 278,
    SBK_QRHIGLES2INITPARAMS_IDX                              = 280,
    SBK_QRHIGLES2NATIVEHANDLES_IDX                           = 281,
    SBK_QRHIGRAPHICSPIPELINE_FLAG_IDX                        = 288,
    SBK_QFLAGS_QRHIGRAPHICSPIPELINE_FLAG_IDX                 = 92,
    SBK_QRHIGRAPHICSPIPELINE_TOPOLOGY_IDX                    = 293,
    SBK_QRHIGRAPHICSPIPELINE_CULLMODE_IDX                    = 287,
    SBK_QRHIGRAPHICSPIPELINE_FRONTFACE_IDX                   = 289,
    SBK_QRHIGRAPHICSPIPELINE_COLORMASKCOMPONENT_IDX          = 285,
    SBK_QFLAGS_QRHIGRAPHICSPIPELINE_COLORMASKCOMPONENT_IDX   = 91,
    SBK_QRHIGRAPHICSPIPELINE_BLENDFACTOR_IDX                 = 283,
    SBK_QRHIGRAPHICSPIPELINE_BLENDOP_IDX                     = 284,
    SBK_QRHIGRAPHICSPIPELINE_COMPAREOP_IDX                   = 286,
    SBK_QRHIGRAPHICSPIPELINE_STENCILOP_IDX                   = 291,
    SBK_QRHIGRAPHICSPIPELINE_POLYGONMODE_IDX                 = 290,
    SBK_QRHIGRAPHICSPIPELINE_IDX                             = 282,
    SBK_QRHIGRAPHICSPIPELINE_TARGETBLEND_IDX                 = 292,
    SBK_QRHIINITPARAMS_IDX                                   = 294,
    SBK_QRHINATIVEHANDLES_IDX                                = 295,
    SBK_QRHINULLINITPARAMS_IDX                               = 296,
    SBK_QRHIREADBACKDESCRIPTION_IDX                          = 297,
    SBK_QRHIREADBACKRESULT_IDX                               = 298,
    SBK_QRHIRENDERBUFFER_TYPE_IDX                            = 301,
    SBK_QRHIRENDERBUFFER_FLAG_IDX                            = 300,
    SBK_QFLAGS_QRHIRENDERBUFFER_FLAG_IDX                     = 93,
    SBK_QRHIRENDERBUFFER_IDX                                 = 299,
    SBK_QRHIRENDERPASSDESCRIPTOR_IDX                         = 302,
    SBK_QRHIRENDERTARGET_IDX                                 = 303,
    SBK_QRHIRESOURCE_TYPE_IDX                                = 305,
    SBK_QRHIRESOURCE_IDX                                     = 304,
    SBK_QRHIRESOURCEUPDATEBATCH_IDX                          = 306,
    SBK_QRHISAMPLER_FILTER_IDX                               = 310,
    SBK_QRHISAMPLER_ADDRESSMODE_IDX                          = 308,
    SBK_QRHISAMPLER_COMPAREOP_IDX                            = 309,
    SBK_QRHISAMPLER_IDX                                      = 307,
    SBK_QRHISCISSOR_IDX                                      = 311,
    SBK_QRHISHADERRESOURCEBINDING_TYPE_IDX                   = 318,
    SBK_QRHISHADERRESOURCEBINDING_STAGEFLAG_IDX              = 316,
    SBK_QFLAGS_QRHISHADERRESOURCEBINDING_STAGEFLAG_IDX       = 94,
    SBK_QRHISHADERRESOURCEBINDING_IDX                        = 312,
    SBK_QRHISHADERRESOURCEBINDING_DATA_IDX                   = 313,
    SBK_QRHISHADERRESOURCEBINDING_DATA_STORAGEBUFFERDATA_IDX = 314,
    SBK_QRHISHADERRESOURCEBINDING_DATA_STORAGEIMAGEDATA_IDX  = 315,
    SBK_QRHISHADERRESOURCEBINDING_TEXTUREANDSAMPLER_IDX      = 317,
    SBK_QRHISHADERRESOURCEBINDINGS_UPDATEFLAG_IDX            = 320,
    SBK_QFLAGS_QRHISHADERRESOURCEBINDINGS_UPDATEFLAG_IDX     = 95,
    SBK_QRHISHADERRESOURCEBINDINGS_IDX                       = 319,
    SBK_QRHISHADERSTAGE_TYPE_IDX                             = 322,
    SBK_QRHISHADERSTAGE_IDX                                  = 321,
    SBK_QRHISTATS_IDX                                        = 323,
    SBK_QRHISWAPCHAIN_FLAG_IDX                               = 325,
    SBK_QFLAGS_QRHISWAPCHAIN_FLAG_IDX                        = 96,
    SBK_QRHISWAPCHAIN_FORMAT_IDX                             = 326,
    SBK_QRHISWAPCHAIN_STEREOTARGETBUFFER_IDX                 = 327,
    SBK_QRHISWAPCHAIN_IDX                                    = 324,
    SBK_QRHISWAPCHAINRENDERTARGET_IDX                        = 328,
    SBK_QRHITEXTURE_FLAG_IDX                                 = 330,
    SBK_QFLAGS_QRHITEXTURE_FLAG_IDX                          = 97,
    SBK_QRHITEXTURE_FORMAT_IDX                               = 331,
    SBK_QRHITEXTURE_IDX                                      = 329,
    SBK_QRHITEXTURECOPYDESCRIPTION_IDX                       = 332,
    SBK_QRHITEXTURERENDERTARGET_FLAG_IDX                     = 334,
    SBK_QFLAGS_QRHITEXTURERENDERTARGET_FLAG_IDX              = 98,
    SBK_QRHITEXTURERENDERTARGET_IDX                          = 333,
    SBK_QRHITEXTURERENDERTARGETDESCRIPTION_IDX               = 335,
    SBK_QRHITEXTURESUBRESOURCEUPLOADDESCRIPTION_IDX          = 336,
    SBK_QRHITEXTUREUPLOADDESCRIPTION_IDX                     = 337,
    SBK_QRHITEXTUREUPLOADENTRY_IDX                           = 338,
    SBK_QRHIVERTEXINPUTATTRIBUTE_FORMAT_IDX                  = 340,
    SBK_QRHIVERTEXINPUTATTRIBUTE_IDX                         = 339,
    SBK_QRHIVERTEXINPUTBINDING_CLASSIFICATION_IDX            = 342,
    SBK_QRHIVERTEXINPUTBINDING_IDX                           = 341,
    SBK_QRHIVERTEXINPUTLAYOUT_IDX                            = 343,
    SBK_QRHIVIEWPORT_IDX                                     = 344,
    SBK_QSCREEN_IDX                                          = 345,
    SBK_QSCROLLEVENT_SCROLLSTATE_IDX                         = 347,
    SBK_QSCROLLEVENT_IDX                                     = 346,
    SBK_QSCROLLPREPAREEVENT_IDX                              = 348,
    SBK_QSESSIONMANAGER_RESTARTHINT_IDX                      = 350,
    SBK_QSESSIONMANAGER_IDX                                  = 349,
    SBK_QSHADER_STAGE_IDX                                    = 354,
    SBK_QSHADER_SOURCE_IDX                                   = 353,
    SBK_QSHADER_VARIANT_IDX                                  = 355,
    SBK_QSHADER_SERIALIZEDFORMATVERSION_IDX                  = 352,
    SBK_QSHADER_IDX                                          = 351,
    SBK_QSHADERCODE_IDX                                      = 356,
    SBK_QSHADERKEY_IDX                                       = 357,
    SBK_QSHADERVERSION_FLAG_IDX                              = 359,
    SBK_QFLAGS_QSHADERVERSION_FLAG_IDX                       = 99,
    SBK_QSHADERVERSION_IDX                                   = 358,
    SBK_QSHORTCUT_IDX                                        = 360,
    SBK_QSHORTCUTEVENT_IDX                                   = 361,
    SBK_QSHOWEVENT_IDX                                       = 362,
    SBK_QSINGLEPOINTEVENT_IDX                                = 363,
    SBK_QSTANDARDITEM_ITEMTYPE_IDX                           = 365,
    SBK_QSTANDARDITEM_IDX                                    = 364,
    SBK_QSTANDARDITEMMODEL_IDX                               = 366,
    SBK_QSTATICTEXT_PERFORMANCEHINT_IDX                      = 368,
    SBK_QSTATICTEXT_IDX                                      = 367,
    SBK_QSTATUSTIPEVENT_IDX                                  = 369,
    SBK_QSTYLEHINTS_IDX                                      = 370,
    SBK_QSURFACE_SURFACECLASS_IDX                            = 372,
    SBK_QSURFACE_SURFACETYPE_IDX                             = 373,
    SBK_QSURFACE_IDX                                         = 371,
    SBK_QSURFACEFORMAT_FORMATOPTION_IDX                      = 376,
    SBK_QFLAGS_QSURFACEFORMAT_FORMATOPTION_IDX               = 100,
    SBK_QSURFACEFORMAT_SWAPBEHAVIOR_IDX                      = 379,
    SBK_QSURFACEFORMAT_RENDERABLETYPE_IDX                    = 378,
    SBK_QSURFACEFORMAT_OPENGLCONTEXTPROFILE_IDX              = 377,
    SBK_QSURFACEFORMAT_COLORSPACE_IDX                        = 375,
    SBK_QSURFACEFORMAT_IDX                                   = 374,
    SBK_QSYNTAXHIGHLIGHTER_IDX                               = 380,
    SBK_QTABLETEVENT_IDX                                     = 381,
    SBK_QTEXTBLOCK_IDX                                       = 382,
    SBK_QTEXTBLOCK_ITERATOR_IDX                              = 383,
    SBK_QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_IDX                 = 464,
    SBK_QTEXTBLOCKFORMAT_MARKERTYPE_IDX                      = 385,
    SBK_QTEXTBLOCKFORMAT_IDX                                 = 384,
    SBK_QTEXTBLOCKGROUP_IDX                                  = 386,
    SBK_QTEXTBLOCKUSERDATA_IDX                               = 387,
    SBK_QTEXTCHARFORMAT_VERTICALALIGNMENT_IDX                = 391,
    SBK_QTEXTCHARFORMAT_UNDERLINESTYLE_IDX                   = 390,
    SBK_QTEXTCHARFORMAT_FONTPROPERTIESINHERITANCEBEHAVIOR_IDX = 389,
    SBK_QTEXTCHARFORMAT_IDX                                  = 388,
    SBK_QTEXTCURSOR_MOVEMODE_IDX                             = 393,
    SBK_QTEXTCURSOR_MOVEOPERATION_IDX                        = 394,
    SBK_QTEXTCURSOR_SELECTIONTYPE_IDX                        = 395,
    SBK_QTEXTCURSOR_IDX                                      = 392,
    SBK_QTEXTDOCUMENT_METAINFORMATION_IDX                    = 399,
    SBK_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX                    = 398,
    SBK_QFLAGS_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX             = 102,
    SBK_QTEXTDOCUMENT_FINDFLAG_IDX                           = 397,
    SBK_QFLAGS_QTEXTDOCUMENT_FINDFLAG_IDX                    = 101,
    SBK_QTEXTDOCUMENT_RESOURCETYPE_IDX                       = 400,
    SBK_QTEXTDOCUMENT_STACKS_IDX                             = 401,
    SBK_QTEXTDOCUMENT_IDX                                    = 396,
    SBK_QTEXTDOCUMENTFRAGMENT_IDX                            = 402,
    SBK_QTEXTDOCUMENTWRITER_IDX                              = 403,
    SBK_QTEXTFORMAT_FORMATTYPE_IDX                           = 405,
    SBK_QTEXTFORMAT_PROPERTY_IDX                             = 408,
    SBK_QTEXTFORMAT_OBJECTTYPES_IDX                          = 406,
    SBK_QTEXTFORMAT_PAGEBREAKFLAG_IDX                        = 407,
    SBK_QFLAGS_QTEXTFORMAT_PAGEBREAKFLAG_IDX                 = 103,
    SBK_QTEXTFORMAT_IDX                                      = 404,
    SBK_QTEXTFRAGMENT_IDX                                    = 409,
    SBK_QTEXTFRAME_IDX                                       = 410,
    SBK_QTEXTFRAME_ITERATOR_IDX                              = 411,
    SBK_QTEXTFRAMEFORMAT_POSITION_IDX                        = 414,
    SBK_QTEXTFRAMEFORMAT_BORDERSTYLE_IDX                     = 413,
    SBK_QTEXTFRAMEFORMAT_IDX                                 = 412,
    SBK_QTEXTIMAGEFORMAT_IDX                                 = 415,
    SBK_QTEXTINLINEOBJECT_IDX                                = 416,
    SBK_QTEXTITEM_RENDERFLAG_IDX                             = 418,
    SBK_QFLAGS_QTEXTITEM_RENDERFLAG_IDX                      = 104,
    SBK_QTEXTITEM_IDX                                        = 417,
    SBK_QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_IDX                = 422,
    SBK_QFLAGS_QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_IDX         = 105,
    SBK_QTEXTLAYOUT_CURSORMODE_IDX                           = 420,
    SBK_QTEXTLAYOUT_IDX                                      = 419,
    SBK_QTEXTLAYOUT_FORMATRANGE_IDX                          = 421,
    SBK_QTEXTLENGTH_TYPE_IDX                                 = 424,
    SBK_QTEXTLENGTH_IDX                                      = 423,
    SBK_QTEXTLINE_EDGE_IDX                                   = 427,
    SBK_QTEXTLINE_CURSORPOSITION_IDX                         = 426,
    SBK_QTEXTLINE_IDX                                        = 425,
    SBK_QTEXTLIST_IDX                                        = 428,
    SBK_QTEXTLISTFORMAT_STYLE_IDX                            = 430,
    SBK_QTEXTLISTFORMAT_IDX                                  = 429,
    SBK_QTEXTOBJECT_IDX                                      = 431,
    SBK_QTEXTOBJECTINTERFACE_IDX                             = 432,
    SBK_QTEXTOPTION_TABTYPE_IDX                              = 436,
    SBK_QTEXTOPTION_WRAPMODE_IDX                             = 437,
    SBK_QTEXTOPTION_FLAG_IDX                                 = 434,
    SBK_QFLAGS_QTEXTOPTION_FLAG_IDX                          = 106,
    SBK_QTEXTOPTION_IDX                                      = 433,
    SBK_QTEXTOPTION_TAB_IDX                                  = 435,
    SBK_QTEXTTABLE_IDX                                       = 438,
    SBK_QTEXTTABLECELL_IDX                                   = 439,
    SBK_QTEXTTABLECELLFORMAT_IDX                             = 440,
    SBK_QTEXTTABLEFORMAT_IDX                                 = 441,
    SBK_QTOOLBARCHANGEEVENT_IDX                              = 442,
    SBK_QTOUCHEVENT_IDX                                      = 443,
    SBK_QTRANSFORM_TRANSFORMATIONTYPE_IDX                    = 445,
    SBK_QTRANSFORM_IDX                                       = 444,
    SBK_QUNDOCOMMAND_IDX                                     = 446,
    SBK_QUNDOGROUP_IDX                                       = 447,
    SBK_QUNDOSTACK_IDX                                       = 448,
    SBK_QVALIDATOR_STATE_IDX                                 = 450,
    SBK_QVALIDATOR_IDX                                       = 449,
    SBK_QVECTOR2D_IDX                                        = 451,
    SBK_QVECTOR3D_IDX                                        = 452,
    SBK_QVECTOR4D_IDX                                        = 453,
    SBK_QWHATSTHISCLICKEDEVENT_IDX                           = 454,
    SBK_QWHEELEVENT_IDX                                      = 455,
    SBK_QWINDOW_VISIBILITY_IDX                               = 458,
    SBK_QWINDOW_ANCESTORMODE_IDX                             = 457,
    SBK_QWINDOW_IDX                                          = 456,
    SBK_QWINDOWSTATECHANGEEVENT_IDX                          = 459,
    SBK_QtGuiQT_IDX                                          = 460,
    SBK_QTGUIHELPER_QOVERRIDECURSORGUARD_IDX                 = 462,
    SBK_QtGui_IDX_COUNT                                      = 465
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtGuiTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtGuiModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtGuiTypeConverters;

// Converter indices
enum : int {
    SBK_WID_IDX                                              = 0,
    SBK_QTGUI_QLIST_INT_IDX                                  = 1, // QList<int>
    SBK_QTGUI_QLIST_QVECTOR2D_IDX                            = 2, // QList<QVector2D>
    SBK_QTGUI_QLIST_QVECTOR3D_IDX                            = 3, // QList<QVector3D>
    SBK_QTGUI_QLIST_QVECTOR4D_IDX                            = 4, // QList<QVector4D>
    SBK_QTGUI_QLIST_QREAL_IDX                                = 5, // QList<qreal>
    SBK_QTGUI_QLIST_QTEXTOPTION_TAB_IDX                      = 6, // QList<QTextOption::Tab>
    SBK_QTGUI_QLIST_QGLYPHRUN_IDX                            = 7, // QList<QGlyphRun>
    SBK_QTGUI_QLIST_QTEXTLENGTH_IDX                          = 8, // QList<QTextLength>
    SBK_QTGUI_QMAP_INT_QVARIANT_IDX                          = 9, // QMap<int,QVariant>
    SBK_QTGUI_QLIST_QTEXTLAYOUT_FORMATRANGE_IDX              = 10, // QList<QTextLayout::FormatRange>
    SBK_QTGUI_STD_PAIR_INT_INT_IDX                           = 11, // std::pair<int,int>
    SBK_QTGUI_QLIST_QSTANDARDITEMPTR_IDX                     = 12, // QList<QStandardItem*>
    SBK_QTGUI_QLIST_QSHADERKEY_IDX                           = 13, // QList<QShaderKey>
    SBK_QTGUI_QMAP_INT_STD_PAIR_INT_INT_IDX                  = 14, // QMap<int,std::pair< int,int>>
    SBK_QTGUI_STD_ARRAY_FLOAT_4_IDX                          = 15, // std::array<float,4>
    SBK_QTGUI_QLIST_QRHIVERTEXINPUTATTRIBUTE_IDX             = 16, // QList<QRhiVertexInputAttribute>
    SBK_QTGUI_QLIST_QRHIVERTEXINPUTBINDING_IDX               = 17, // QList<QRhiVertexInputBinding>
    SBK_QTGUI_QLIST_QRHITEXTUREUPLOADENTRY_IDX               = 18, // QList<QRhiTextureUploadEntry>
    SBK_QTGUI_QLIST_QRHICOLORATTACHMENT_IDX                  = 19, // QList<QRhiColorAttachment>
    SBK_QTGUI_STD_ARRAY_INT_4_IDX                            = 20, // std::array<int,4>
    SBK_QTGUI_QLIST_QPOINTF_IDX                              = 21, // QList<QPointF>
    SBK_QTGUI_QLIST_QUINT32_IDX                              = 22, // QList<quint32>
    SBK_QTGUI_QLIST_QFONTDATABASE_WRITINGSYSTEM_IDX          = 23, // QList<QFontDatabase::WritingSystem>
    SBK_QTGUI_QLIST_QPOINT_IDX                               = 24, // QList<QPoint>
    SBK_QTGUI_QLIST_QPOLYGONF_IDX                            = 25, // QList<QPolygonF>
    SBK_QTGUI_QLIST_QPAGERANGES_RANGE_IDX                    = 26, // QList<QPageRanges::Range>
    SBK_QTGUI_QLIST_FLOAT_IDX                                = 27, // QList<float>
    SBK_QTGUI_QLIST_QSIZE_IDX                                = 28, // QList<QSize>
    SBK_QTGUI_STD_PAIR_QREAL_QCOLOR_IDX                      = 29, // std::pair<qreal,QColor>
    SBK_QTGUI_QLIST_STD_PAIR_QREAL_QCOLOR_IDX                = 30, // QList<std::pair< qreal,QColor>>
    SBK_QTGUI_QLIST_QSIZETYPE_IDX                            = 31, // QList<qsizetype>
    SBK_QTGUI_QLIST_UINT16_T_IDX                             = 32, // QList<uint16_t>
    SBK_QTGUI_QLIST_QACCESSIBLEINTERFACEPTR_IDX              = 33, // QList<QAccessibleInterface*>
    SBK_QTGUI_STD_PAIR_QACCESSIBLEINTERFACEPTR_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX = 34, // std::pair<QAccessibleInterface*,QFlags<QAccessible::RelationFlag>>
    SBK_QTGUI_QLIST_STD_PAIR_QACCESSIBLEINTERFACEPTR_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX = 35, // QList<std::pair< QAccessibleInterface*,QFlags<QAccessible::RelationFlag>>>
    SBK_QTGUI_QLIST_UNSIGNEDINT_IDX                          = 36, // QList<unsigned int>
    SBK_QTGUI_QLIST_QLINE_IDX                                = 37, // QList<QLine>
    SBK_QTGUI_QLIST_QLINEF_IDX                               = 38, // QList<QLineF>
    SBK_QTGUI_QLIST_QRECT_IDX                                = 39, // QList<QRect>
    SBK_QTGUI_QLIST_QRECTF_IDX                               = 40, // QList<QRectF>
    SBK_QTGUI_QLIST_QKEYSEQUENCE_IDX                         = 41, // QList<QKeySequence>
    SBK_QTGUI_QLIST_QOBJECTPTR_IDX                           = 42, // QList<QObject*>
    SBK_QTGUI_QLIST_QBYTEARRAY_IDX                           = 43, // QList<QByteArray>
    SBK_QTGUI_QLIST_QUNDOSTACKPTR_IDX                        = 44, // QList<QUndoStack*>
    SBK_QTGUI_QLIST_QTEXTFRAMEPTR_IDX                        = 45, // QList<QTextFrame*>
    SBK_QTGUI_QLIST_QTEXTBLOCK_IDX                           = 46, // QList<QTextBlock>
    SBK_QTGUI_QLIST_QTEXTFORMAT_IDX                          = 47, // QList<QTextFormat>
    SBK_QTGUI_QLIST_QSCREENPTR_IDX                           = 48, // QList<QScreen*>
    SBK_QTGUI_QLIST_QOPENGLCONTEXTPTR_IDX                    = 49, // QList<QOpenGLContext*>
    SBK_QTGUI_QSET_QBYTEARRAY_IDX                            = 50, // QSet<QByteArray>
    SBK_QTGUI_QLIST_CONSTQINPUTDEVICEPTR_IDX                 = 51, // QList<const QInputDevice*>
    SBK_QTGUI_QLIST_QACTIONPTR_IDX                           = 52, // QList<QAction*>
    SBK_QTGUI_QLIST_QABSTRACTTEXTDOCUMENTLAYOUT_SELECTION_IDX = 53, // QList<QAbstractTextDocumentLayout::Selection>
    SBK_QTGUI_QLIST_QINPUTMETHODEVENT_ATTRIBUTE_IDX          = 54, // QList<QInputMethodEvent::Attribute>
    SBK_QTGUI_QLIST_QEVENTPOINT_IDX                          = 55, // QList<QEventPoint>
    SBK_QTGUI_QLIST_QWINDOWPTR_IDX                           = 56, // QList<QWindow*>
    SBK_QTGUI_QLIST_QRHISHADERRESOURCEBINDING_IDX            = 57, // QList<QRhiShaderResourceBinding>
    SBK_QTGUI_QLIST_QRHISHADERSTAGE_IDX                      = 58, // QList<QRhiShaderStage>
    SBK_QTGUI_QLIST_QRHIGRAPHICSPIPELINE_TARGETBLEND_IDX     = 59, // QList<QRhiGraphicsPipeline::TargetBlend>
    SBK_QTGUI_STD_PAIR_INT_UNSIGNEDINT_IDX                   = 60, // std::pair<int,unsigned int>
    SBK_QTGUI_STD_PAIR_QRHIBUFFERPTR_QUINT32_IDX             = 61, // std::pair<QRhiBuffer*,quint32>
    SBK_QTGUI_QLIST_STD_PAIR_QRHIBUFFERPTR_QUINT32_IDX       = 62, // QList<std::pair< QRhiBuffer*,quint32>>
    SBK_QTGUI_STD_PAIR_QRHIBUFFERPTR_UNSIGNEDINT_IDX         = 63, // std::pair<QRhiBuffer*,unsigned int>
    SBK_QTGUI_QLIST_QMODELINDEX_IDX                          = 64, // QList<QModelIndex>
    SBK_QTGUI_QLIST_QPERSISTENTMODELINDEX_IDX                = 65, // QList<QPersistentModelIndex>
    SBK_QTGUI_QHASH_INT_QBYTEARRAY_IDX                       = 66, // QHash<int,QByteArray>
    SBK_QTGUI_QLIST_QVARIANT_IDX                             = 67, // QList<QVariant>
    SBK_QTGUI_QLIST_QSTRING_IDX                              = 68, // QList<QString>
    SBK_QTGUI_QMAP_QSTRING_QVARIANT_IDX                      = 69, // QMap<QString,QVariant>
    SBK_QtGui_CONVERTERS_IDX_COUNT                           = 70
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractFileIconProvider::IconType >() { return SbkPySide6_QtGuiTypes[SBK_QABSTRACTFILEICONPROVIDER_ICONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractFileIconProvider::Option >() { return SbkPySide6_QtGuiTypes[SBK_QABSTRACTFILEICONPROVIDER_OPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstractFileIconProvider::Option> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QABSTRACTFILEICONPROVIDER_OPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractFileIconProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QABSTRACTFILEICONPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QABSTRACTTEXTDOCUMENTLAYOUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout::PaintContext >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QABSTRACTTEXTDOCUMENTLAYOUT_PAINTCONTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout::Selection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QABSTRACTTEXTDOCUMENTLAYOUT_SELECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::Event >() { return SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_EVENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::Role >() { return SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_ROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::Text >() { return SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_TEXT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::RelationFlag >() { return SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_RELATIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAccessible::RelationFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::InterfaceType >() { return SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_INTERFACETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::TextBoundaryType >() { return SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_TEXTBOUNDARYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::State >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLE_STATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleActionInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLEACTIONINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleEditableTextInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLEEDITABLETEXTINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLEINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLEOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleStateChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLESTATECHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableCellInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETABLECELLINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableModelChangeEvent::ModelChangeType >() { return SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableModelChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETABLEMODELCHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextCursorEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETEXTCURSOREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextInsertEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETEXTINSERTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETEXTINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextRemoveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETEXTREMOVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextSelectionEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETEXTSELECTIONEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextUpdateEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLETEXTUPDATEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleValueChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLEVALUECHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleValueInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACCESSIBLEVALUEINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAction::MenuRole >() { return SbkPySide6_QtGuiTypes[SBK_QACTION_MENUROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAction::Priority >() { return SbkPySide6_QtGuiTypes[SBK_QACTION_PRIORITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAction::ActionEvent >() { return SbkPySide6_QtGuiTypes[SBK_QACTION_ACTIONEVENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAction >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QActionEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACTIONEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QActionGroup::ExclusionPolicy >() { return SbkPySide6_QtGuiTypes[SBK_QACTIONGROUP_EXCLUSIONPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QActionGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QACTIONGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBackingStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QBACKINGSTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBitmap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QBITMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBrush >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QBRUSH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QClipboard::Mode >() { return SbkPySide6_QtGuiTypes[SBK_QCLIPBOARD_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QClipboard >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCLIPBOARD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCloseEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCLOSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColor::Spec >() { return SbkPySide6_QtGuiTypes[SBK_QCOLOR_SPEC_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColor::NameFormat >() { return SbkPySide6_QtGuiTypes[SBK_QCOLOR_NAMEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCOLOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorSpace::NamedColorSpace >() { return SbkPySide6_QtGuiTypes[SBK_QCOLORSPACE_NAMEDCOLORSPACE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColorSpace::Primaries >() { return SbkPySide6_QtGuiTypes[SBK_QCOLORSPACE_PRIMARIES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColorSpace::TransferFunction >() { return SbkPySide6_QtGuiTypes[SBK_QCOLORSPACE_TRANSFERFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColorSpace >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCOLORSPACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorTransform >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCOLORTRANSFORM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QConicalGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCONICALGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QContextMenuEvent::Reason >() { return SbkPySide6_QtGuiTypes[SBK_QCONTEXTMENUEVENT_REASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QContextMenuEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCONTEXTMENUEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCursor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QCURSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesktopServices >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QDESKTOPSERVICES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDoubleValidator::Notation >() { return SbkPySide6_QtGuiTypes[SBK_QDOUBLEVALIDATOR_NOTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDoubleValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QDOUBLEVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDrag >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QDRAG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragEnterEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QDRAGENTEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragLeaveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QDRAGLEAVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragMoveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QDRAGMOVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDropEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QDROPEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEnterEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QENTEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEventPoint::State >() { return SbkPySide6_QtGuiTypes[SBK_QEVENTPOINT_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QEventPoint >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QEVENTPOINT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QExposeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QEXPOSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFileOpenEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QFILEOPENEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFocusEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QFOCUSEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::StyleHint >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_STYLEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::StyleStrategy >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_STYLESTRATEGY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::HintingPreference >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_HINTINGPREFERENCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Weight >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_WEIGHT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Style >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_STYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Stretch >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_STRETCH_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Capitalization >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_CAPITALIZATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::SpacingType >() { return SbkPySide6_QtGuiTypes[SBK_QFONT_SPACINGTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QFONT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontDatabase::WritingSystem >() { return SbkPySide6_QtGuiTypes[SBK_QFONTDATABASE_WRITINGSYSTEM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFontDatabase::SystemFont >() { return SbkPySide6_QtGuiTypes[SBK_QFONTDATABASE_SYSTEMFONT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFontDatabase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QFONTDATABASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QFONTINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontMetrics >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QFONTMETRICS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontMetricsF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QFONTMETRICSF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGlyphRun::GlyphRunFlag >() { return SbkPySide6_QtGuiTypes[SBK_QGLYPHRUN_GLYPHRUNFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGlyphRun::GlyphRunFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QGLYPHRUN_GLYPHRUNFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGlyphRun >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QGLYPHRUN_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient::Type >() { return SbkPySide6_QtGuiTypes[SBK_QGRADIENT_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::Spread >() { return SbkPySide6_QtGuiTypes[SBK_QGRADIENT_SPREAD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::CoordinateMode >() { return SbkPySide6_QtGuiTypes[SBK_QGRADIENT_COORDINATEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::InterpolationMode >() { return SbkPySide6_QtGuiTypes[SBK_QGRADIENT_INTERPOLATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::Preset >() { return SbkPySide6_QtGuiTypes[SBK_QGRADIENT_PRESET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGuiApplication >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QGUIAPPLICATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QHELPEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHideEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QHIDEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHoverEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QHOVEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIcon::Mode >() { return SbkPySide6_QtGuiTypes[SBK_QICON_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QIcon::State >() { return SbkPySide6_QtGuiTypes[SBK_QICON_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QIcon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QICON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconDragEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QICONDRAGEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconEngine::IconEngineHook >() { return SbkPySide6_QtGuiTypes[SBK_QICONENGINE_ICONENGINEHOOK_IDX]; }
template<> inline PyTypeObject *SbkType< ::QIconEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QICONENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconEngine::ScaledPixmapArgument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QICONENGINE_SCALEDPIXMAPARGUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImage::InvertMode >() { return SbkPySide6_QtGuiTypes[SBK_QIMAGE_INVERTMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImage::Format >() { return SbkPySide6_QtGuiTypes[SBK_QIMAGE_FORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QIMAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler::ImageOption >() { return SbkPySide6_QtGuiTypes[SBK_QIMAGEIOHANDLER_IMAGEOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler::Transformation >() { return SbkPySide6_QtGuiTypes[SBK_QIMAGEIOHANDLER_TRANSFORMATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QImageIOHandler::Transformation> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QIMAGEIOHANDLER_TRANSFORMATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QIMAGEIOHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageReader::ImageReaderError >() { return SbkPySide6_QtGuiTypes[SBK_QIMAGEREADER_IMAGEREADERERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageReader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QIMAGEREADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageWriter::ImageWriterError >() { return SbkPySide6_QtGuiTypes[SBK_QIMAGEWRITER_IMAGEWRITERERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QIMAGEWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputDevice::DeviceType >() { return SbkPySide6_QtGuiTypes[SBK_QINPUTDEVICE_DEVICETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QInputDevice::DeviceType> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QINPUTDEVICE_DEVICETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QInputDevice::Capability >() { return SbkPySide6_QtGuiTypes[SBK_QINPUTDEVICE_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QInputDevice::Capability> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QINPUTDEVICE_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QInputDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QINPUTDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QINPUTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethod::Action >() { return SbkPySide6_QtGuiTypes[SBK_QINPUTMETHOD_ACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QInputMethod >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QINPUTMETHOD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent::AttributeType >() { return SbkPySide6_QtGuiTypes[SBK_QINPUTMETHODEVENT_ATTRIBUTETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QINPUTMETHODEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent::Attribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QINPUTMETHODEVENT_ATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodQueryEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QINPUTMETHODQUERYEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIntValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QINTVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeyEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QKEYEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeySequence::StandardKey >() { return SbkPySide6_QtGuiTypes[SBK_QKEYSEQUENCE_STANDARDKEY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QKeySequence::SequenceFormat >() { return SbkPySide6_QtGuiTypes[SBK_QKEYSEQUENCE_SEQUENCEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QKeySequence::SequenceMatch >() { return SbkPySide6_QtGuiTypes[SBK_QKEYSEQUENCE_SEQUENCEMATCH_IDX]; }
template<> inline PyTypeObject *SbkType< ::QKeySequence >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QKEYSEQUENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLinearGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QLINEARGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX2X2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x3 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX2X3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x4 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX2X4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX3X2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x3 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX3X3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x4 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX3X4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX4X2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x3 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX4X3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x4::Flag >() { return SbkPySide6_QtGuiTypes[SBK_QMATRIX4X4_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QMatrix4x4::Flag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QMATRIX4X4_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMatrix4x4 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMATRIX4X4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMouseEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMOUSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMoveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMOVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMovie::MovieState >() { return SbkPySide6_QtGuiTypes[SBK_QMOVIE_MOVIESTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMovie::CacheMode >() { return SbkPySide6_QtGuiTypes[SBK_QMOVIE_CACHEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMovie >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QMOVIE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNativeGestureEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QNATIVEGESTUREEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOffscreenSurface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QOFFSCREENSURFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLContext::OpenGLModuleType >() { return SbkPySide6_QtGuiTypes[SBK_QOPENGLCONTEXT_OPENGLMODULETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLContext >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QOPENGLCONTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLContextGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QOPENGLCONTEXTGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLExtraFunctions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QOPENGLEXTRAFUNCTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions::OpenGLFeature >() { return SbkPySide6_QtGuiTypes[SBK_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLFunctions::OpenGLFeature> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QOPENGLFUNCTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Unit >() { return SbkPySide6_QtGuiTypes[SBK_QPAGELAYOUT_UNIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Orientation >() { return SbkPySide6_QtGuiTypes[SBK_QPAGELAYOUT_ORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Mode >() { return SbkPySide6_QtGuiTypes[SBK_QPAGELAYOUT_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageLayout >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAGELAYOUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageRanges >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAGERANGES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageRanges::Range >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAGERANGES_RANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSize::PageSizeId >() { return SbkPySide6_QtGuiTypes[SBK_QPAGESIZE_PAGESIZEID_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageSize::Unit >() { return SbkPySide6_QtGuiTypes[SBK_QPAGESIZE_UNIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageSize::SizeMatchPolicy >() { return SbkPySide6_QtGuiTypes[SBK_QPAGESIZE_SIZEMATCHPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageSize >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAGESIZE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice::PdfVersion >() { return SbkPySide6_QtGuiTypes[SBK_QPAGEDPAINTDEVICE_PDFVERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAGEDPAINTDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintDevice::PaintDeviceMetric >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTDEVICE_PAINTDEVICEMETRIC_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintDeviceWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTDEVICEWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::PaintEngineFeature >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTENGINE_PAINTENGINEFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPaintEngine::PaintEngineFeature> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QPAINTENGINE_PAINTENGINEFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::DirtyFlag >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTENGINE_DIRTYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPaintEngine::DirtyFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QPAINTENGINE_DIRTYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::PolygonDrawMode >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTENGINE_POLYGONDRAWMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::Type >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTENGINE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngineState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTENGINESTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::RenderHint >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTER_RENDERHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPainter::RenderHint> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QPAINTER_RENDERHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainter::PixmapFragmentHint >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTER_PIXMAPFRAGMENTHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPainter::PixmapFragmentHint> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QPAINTER_PIXMAPFRAGMENTHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainter::CompositionMode >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTER_COMPOSITIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::PixmapFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTER_PIXMAPFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPath::ElementType >() { return SbkPySide6_QtGuiTypes[SBK_QPAINTERPATH_ELEMENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainterPath >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTERPATH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPath::Element >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTERPATH_ELEMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPathStroker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPAINTERPATHSTROKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPalette::ColorGroup >() { return SbkPySide6_QtGuiTypes[SBK_QPALETTE_COLORGROUP_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPalette::ColorRole >() { return SbkPySide6_QtGuiTypes[SBK_QPALETTE_COLORROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPalette >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPALETTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPDFWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPen >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPEN_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPicture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPICTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::ColorModel >() { return SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_COLORMODEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaUsage >() { return SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_ALPHAUSAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaPosition >() { return SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_ALPHAPOSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaPremultiplied >() { return SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_ALPHAPREMULTIPLIED_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::TypeInterpretation >() { return SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_TYPEINTERPRETATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::YUVLayout >() { return SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_YUVLAYOUT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::ByteOrder >() { return SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_BYTEORDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPIXELFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPIXMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmapCache >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPIXMAPCACHE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmapCache::Key >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPIXMAPCACHE_KEY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlatformSurfaceEvent::SurfaceEventType >() { return SbkPySide6_QtGuiTypes[SBK_QPLATFORMSURFACEEVENT_SURFACEEVENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlatformSurfaceEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPLATFORMSURFACEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointerEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPOINTEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointingDevice::PointerType >() { return SbkPySide6_QtGuiTypes[SBK_QPOINTINGDEVICE_POINTERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPointingDevice::PointerType> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QPOINTINGDEVICE_POINTERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPointingDevice::GrabTransition >() { return SbkPySide6_QtGuiTypes[SBK_QPOINTINGDEVICE_GRABTRANSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPointingDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPOINTINGDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointingDeviceUniqueId >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPOINTINGDEVICEUNIQUEID_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPolygon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPOLYGON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPolygonF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPOLYGONF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyTextObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QPYTEXTOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuaternion >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QQUATERNION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRadialGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QRADIALGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRasterWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QRASTERWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRawFont::AntialiasingType >() { return SbkPySide6_QtGuiTypes[SBK_QRAWFONT_ANTIALIASINGTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRawFont::LayoutFlag >() { return SbkPySide6_QtGuiTypes[SBK_QRAWFONT_LAYOUTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QRawFont::LayoutFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QRAWFONT_LAYOUTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRawFont >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QRAWFONT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegion::RegionType >() { return SbkPySide6_QtGuiTypes[SBK_QREGION_REGIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRegion >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QREGION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegularExpressionValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QREGULAREXPRESSIONVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QResizeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QRESIZEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRgba64 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QRGBA64_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScreen >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSCREEN_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScrollEvent::ScrollState >() { return SbkPySide6_QtGuiTypes[SBK_QSCROLLEVENT_SCROLLSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QScrollEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSCROLLEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScrollPrepareEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSCROLLPREPAREEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSessionManager::RestartHint >() { return SbkPySide6_QtGuiTypes[SBK_QSESSIONMANAGER_RESTARTHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSessionManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSESSIONMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShortcut >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSHORTCUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShortcutEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSHORTCUTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShowEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSHOWEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSinglePointEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSINGLEPOINTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardItem::ItemType >() { return SbkPySide6_QtGuiTypes[SBK_QSTANDARDITEM_ITEMTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStandardItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSTANDARDITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardItemModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSTANDARDITEMMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStaticText::PerformanceHint >() { return SbkPySide6_QtGuiTypes[SBK_QSTATICTEXT_PERFORMANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStaticText >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSTATICTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStatusTipEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSTATUSTIPEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStyleHints >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSTYLEHINTS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurface::SurfaceClass >() { return SbkPySide6_QtGuiTypes[SBK_QSURFACE_SURFACECLASS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurface::SurfaceType >() { return SbkPySide6_QtGuiTypes[SBK_QSURFACE_SURFACETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSURFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::FormatOption >() { return SbkPySide6_QtGuiTypes[SBK_QSURFACEFORMAT_FORMATOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSurfaceFormat::FormatOption> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QSURFACEFORMAT_FORMATOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::SwapBehavior >() { return SbkPySide6_QtGuiTypes[SBK_QSURFACEFORMAT_SWAPBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::RenderableType >() { return SbkPySide6_QtGuiTypes[SBK_QSURFACEFORMAT_RENDERABLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::OpenGLContextProfile >() { return SbkPySide6_QtGuiTypes[SBK_QSURFACEFORMAT_OPENGLCONTEXTPROFILE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::ColorSpace >() { return SbkPySide6_QtGuiTypes[SBK_QSURFACEFORMAT_COLORSPACE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSURFACEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSyntaxHighlighter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QSYNTAXHIGHLIGHTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTabletEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTABLETEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlock >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTBLOCK_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlock::iterator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTBLOCK_ITERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat::LineHeightTypes >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat::MarkerType >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTBLOCKFORMAT_MARKERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTBLOCKFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTBLOCKGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockUserData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTBLOCKUSERDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::VerticalAlignment >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTCHARFORMAT_VERTICALALIGNMENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::UnderlineStyle >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTCHARFORMAT_UNDERLINESTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::FontPropertiesInheritanceBehavior >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTCHARFORMAT_FONTPROPERTIESINHERITANCEBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTCHARFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCursor::MoveMode >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTCURSOR_MOVEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCursor::MoveOperation >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTCURSOR_MOVEOPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCursor::SelectionType >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTCURSOR_SELECTIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCursor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTCURSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument::MetaInformation >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENT_METAINFORMATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::MarkdownFeature >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextDocument::MarkdownFeature> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::FindFlag >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENT_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextDocument::FindFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QTEXTDOCUMENT_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::ResourceType >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENT_RESOURCETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::Stacks >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENT_STACKS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocumentFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENTFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocumentWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTDOCUMENTWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFormat::FormatType >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTFORMAT_FORMATTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat::Property >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTFORMAT_PROPERTY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat::ObjectTypes >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTFORMAT_OBJECTTYPES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat::PageBreakFlag >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTFORMAT_PAGEBREAKFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextFormat::PageBreakFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QTEXTFORMAT_PAGEBREAKFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrame >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTFRAME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrame::iterator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTFRAME_ITERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat::Position >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTFRAMEFORMAT_POSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat::BorderStyle >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTFRAMEFORMAT_BORDERSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTFRAMEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextImageFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTIMAGEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextInlineObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTINLINEOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextItem::RenderFlag >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTITEM_RENDERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextItem::RenderFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QTEXTITEM_RENDERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout::GlyphRunRetrievalFlag >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextLayout::GlyphRunRetrievalFlag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLayout::CursorMode >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTLAYOUT_CURSORMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLayout >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTLAYOUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout::FormatRange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTLAYOUT_FORMATRANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLength::Type >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTLENGTH_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLength >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTLENGTH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLine::Edge >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTLINE_EDGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLine::CursorPosition >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTLINE_CURSORPOSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTLINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextList >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTLIST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextListFormat::Style >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTLISTFORMAT_STYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextListFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTLISTFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextObjectInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTOBJECTINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::TabType >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTOPTION_TABTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextOption::WrapMode >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTOPTION_WRAPMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextOption::Flag >() { return SbkPySide6_QtGuiTypes[SBK_QTEXTOPTION_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextOption::Flag> >() { return SbkPySide6_QtGuiTypes[SBK_QFLAGS_QTEXTOPTION_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextOption >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTOPTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::Tab >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTOPTION_TAB_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTable >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTTABLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableCell >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTTABLECELL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableCellFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTTABLECELLFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTEXTTABLEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QToolBarChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTOOLBARCHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTouchEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTOUCHEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTransform::TransformationType >() { return SbkPySide6_QtGuiTypes[SBK_QTRANSFORM_TRANSFORMATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTransform >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTRANSFORM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUndoCommand >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QUNDOCOMMAND_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUndoGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QUNDOGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUndoStack >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QUNDOSTACK_IDX]); }
template<> inline PyTypeObject *SbkType< ::QValidator::State >() { return SbkPySide6_QtGuiTypes[SBK_QVALIDATOR_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QVECTOR2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector3D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QVECTOR3D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector4D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QVECTOR4D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWhatsThisClickedEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QWHATSTHISCLICKEDEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWheelEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QWHEELEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindow::Visibility >() { return SbkPySide6_QtGuiTypes[SBK_QWINDOW_VISIBILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWindow::AncestorMode >() { return SbkPySide6_QtGuiTypes[SBK_QWINDOW_ANCESTORMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindowStateChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QWINDOWSTATECHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtGuiHelper::QOverrideCursorGuard >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtGuiTypes[SBK_QTGUIHELPER_QOVERRIDECURSORGUARD_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTGUI_PYTHON_H

