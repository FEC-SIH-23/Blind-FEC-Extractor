// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTPDF_PYTHON_H
#define SBK_QTPDF_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>

// Bound library includes
#include <QtPdf/qpdfbookmarkmodel.h>
#include <QtPdf/qpdfdocument.h>
#include <QtPdf/qpdfdocumentrenderoptions.h>
#include <QtPdf/qpdflinkmodel.h>
#include <QtPdf/qpdfpagerenderer.h>
#include <QtPdf/qpdfsearchmodel.h>
class QPdfLink;
class QPdfPageNavigator;
class QPdfSelection;
// Type indices
enum : int {
    SBK_QPDFBOOKMARKMODEL_ROLE_IDX                           = 2,
    SBK_QPDFBOOKMARKMODEL_IDX                                = 1,
    SBK_QPDFDOCUMENT_STATUS_IDX                              = 7,
    SBK_QPDFDOCUMENT_ERROR_IDX                               = 4,
    SBK_QPDFDOCUMENT_METADATAFIELD_IDX                       = 5,
    SBK_QPDFDOCUMENT_PAGEMODELROLE_IDX                       = 6,
    SBK_QPDFDOCUMENT_IDX                                     = 3,
    SBK_QPDFDOCUMENTRENDEROPTIONS_ROTATION_IDX               = 10,
    SBK_QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_IDX             = 9,
    SBK_QFLAGS_QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_IDX      = 0,
    SBK_QPDFDOCUMENTRENDEROPTIONS_IDX                        = 8,
    SBK_QPDFLINK_IDX                                         = 11,
    SBK_QPDFLINKMODEL_ROLE_IDX                               = 13,
    SBK_QPDFLINKMODEL_IDX                                    = 12,
    SBK_QPDFPAGENAVIGATOR_IDX                                = 14,
    SBK_QPDFPAGERENDERER_RENDERMODE_IDX                      = 16,
    SBK_QPDFPAGERENDERER_IDX                                 = 15,
    SBK_QPDFSEARCHMODEL_ROLE_IDX                             = 18,
    SBK_QPDFSEARCHMODEL_IDX                                  = 17,
    SBK_QPDFSELECTION_IDX                                    = 19,
    SBK_QtPdf_IDX_COUNT                                      = 20
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtPdfTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtPdfModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtPdfTypeConverters;

// Converter indices
enum : int {
    SBK_QTPDF_QLIST_INT_IDX                                  = 0, // QList<int>
    SBK_QTPDF_QLIST_QPOLYGONF_IDX                            = 1, // QList<QPolygonF>
    SBK_QTPDF_QLIST_QRECTF_IDX                               = 2, // QList<QRectF>
    SBK_QTPDF_QLIST_QOBJECTPTR_IDX                           = 3, // QList<QObject*>
    SBK_QTPDF_QLIST_QBYTEARRAY_IDX                           = 4, // QList<QByteArray>
    SBK_QTPDF_QLIST_QMODELINDEX_IDX                          = 5, // QList<QModelIndex>
    SBK_QTPDF_QMAP_INT_QVARIANT_IDX                          = 6, // QMap<int,QVariant>
    SBK_QTPDF_QLIST_QPERSISTENTMODELINDEX_IDX                = 7, // QList<QPersistentModelIndex>
    SBK_QTPDF_QHASH_INT_QBYTEARRAY_IDX                       = 8, // QHash<int,QByteArray>
    SBK_QTPDF_QLIST_QPDFLINK_IDX                             = 9, // QList<QPdfLink>
    SBK_QTPDF_QLIST_QVARIANT_IDX                             = 10, // QList<QVariant>
    SBK_QTPDF_QLIST_QSTRING_IDX                              = 11, // QList<QString>
    SBK_QTPDF_QMAP_QSTRING_QVARIANT_IDX                      = 12, // QMap<QString,QVariant>
    SBK_QtPdf_CONVERTERS_IDX_COUNT                           = 13
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QPdfBookmarkModel::Role >() { return SbkPySide6_QtPdfTypes[SBK_QPDFBOOKMARKMODEL_ROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfBookmarkModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFBOOKMARKMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfDocument::Status >() { return SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENT_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfDocument::Error >() { return SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENT_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfDocument::MetaDataField >() { return SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENT_METADATAFIELD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfDocument::PageModelRole >() { return SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENT_PAGEMODELROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfDocumentRenderOptions::Rotation >() { return SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENTRENDEROPTIONS_ROTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfDocumentRenderOptions::RenderFlag >() { return SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPdfDocumentRenderOptions::RenderFlag> >() { return SbkPySide6_QtPdfTypes[SBK_QFLAGS_QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfDocumentRenderOptions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFDOCUMENTRENDEROPTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfLink >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFLINK_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfLinkModel::Role >() { return SbkPySide6_QtPdfTypes[SBK_QPDFLINKMODEL_ROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfLinkModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFLINKMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfPageNavigator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFPAGENAVIGATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfPageRenderer::RenderMode >() { return SbkPySide6_QtPdfTypes[SBK_QPDFPAGERENDERER_RENDERMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfPageRenderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFPAGERENDERER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfSearchModel::Role >() { return SbkPySide6_QtPdfTypes[SBK_QPDFSEARCHMODEL_ROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPdfSearchModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFSEARCHMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfSelection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtPdfTypes[SBK_QPDFSELECTION_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTPDF_PYTHON_H

