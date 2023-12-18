// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTWEBENGINECORE_PYTHON_H
#define SBK_QTWEBENGINECORE_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtprintsupport_python.h>
#include <pyside6_qtwidgets_python.h>
#include <pyside6_qtwebchannel_python.h>

// Bound library includes
#include <QtWebEngineCore/qwebenginecertificateerror.h>
#include <QtWebEngineCore/qwebenginecontextmenurequest.h>
#include <QtWebEngineCore/qwebenginecookiestore.h>
#include <QtWebEngineCore/qwebenginedownloadrequest.h>
#include <QtWebEngineCore/qwebenginefilesystemaccessrequest.h>
#include <QtWebEngineCore/qwebenginehistory.h>
#include <QtWebEngineCore/qwebenginehttprequest.h>
#include <QtWebEngineCore/qwebengineloadinginfo.h>
#include <QtWebEngineCore/qwebenginenewwindowrequest.h>
#include <QtWebEngineCore/qwebenginepage.h>
#include <QtWebEngineCore/qwebengineprofile.h>
#include <QtWebEngineCore/qwebenginescript.h>
#include <QtWebEngineCore/qwebenginesettings.h>
#include <QtWebEngineCore/qwebengineurlrequestinfo.h>
#include <QtWebEngineCore/qwebengineurlrequestjob.h>
#include <QtWebEngineCore/qwebengineurlscheme.h>
class QWebEngineFindTextResult;
class QWebEngineFullScreenRequest;
class QWebEngineHistory;
class QWebEngineHistoryItem;
class QWebEngineNotification;
class QWebEngineQuotaRequest;
class QWebEngineRegisterProtocolHandlerRequest;
class QWebEngineScriptCollection;
class QWebEngineUrlRequestInterceptor;
class QWebEngineUrlSchemeHandler;
// Type indices
enum : int {
    SBK_QWEBENGINECERTIFICATEERROR_TYPE_IDX                  = 6,
    SBK_QWEBENGINECERTIFICATEERROR_IDX                       = 5,
    SBK_QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_IDX           = 10,
    SBK_QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_IDX           = 9,
    SBK_QFLAGS_QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_IDX    = 1,
    SBK_QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_IDX            = 8,
    SBK_QFLAGS_QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_IDX     = 0,
    SBK_QWEBENGINECONTEXTMENUREQUEST_IDX                     = 7,
    SBK_QWEBENGINECOOKIESTORE_IDX                            = 11,
    SBK_QWEBENGINECOOKIESTORE_FILTERREQUEST_IDX              = 12,
    SBK_QWEBENGINEDOWNLOADREQUEST_DOWNLOADSTATE_IDX          = 15,
    SBK_QWEBENGINEDOWNLOADREQUEST_SAVEPAGEFORMAT_IDX         = 16,
    SBK_QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_IDX = 14,
    SBK_QWEBENGINEDOWNLOADREQUEST_IDX                        = 13,
    SBK_QWEBENGINEFILESYSTEMACCESSREQUEST_HANDLETYPE_IDX     = 19,
    SBK_QWEBENGINEFILESYSTEMACCESSREQUEST_ACCESSFLAG_IDX     = 18,
    SBK_QFLAGS_QWEBENGINEFILESYSTEMACCESSREQUEST_ACCESSFLAG_IDX = 2,
    SBK_QWEBENGINEFILESYSTEMACCESSREQUEST_IDX                = 17,
    SBK_QWEBENGINEFINDTEXTRESULT_IDX                         = 20,
    SBK_QWEBENGINEFULLSCREENREQUEST_IDX                      = 21,
    SBK_QWEBENGINEHISTORY_IDX                                = 22,
    SBK_QWEBENGINEHISTORYITEM_IDX                            = 23,
    SBK_QWEBENGINEHISTORYMODEL_ROLES_IDX                     = 25,
    SBK_QWEBENGINEHISTORYMODEL_IDX                           = 24,
    SBK_QWEBENGINEHTTPREQUEST_METHOD_IDX                     = 27,
    SBK_QWEBENGINEHTTPREQUEST_IDX                            = 26,
    SBK_QWEBENGINELOADINGINFO_LOADSTATUS_IDX                 = 30,
    SBK_QWEBENGINELOADINGINFO_ERRORDOMAIN_IDX                = 29,
    SBK_QWEBENGINELOADINGINFO_IDX                            = 28,
    SBK_QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_IDX       = 32,
    SBK_QWEBENGINENEWWINDOWREQUEST_IDX                       = 31,
    SBK_QWEBENGINENOTIFICATION_IDX                           = 33,
    SBK_QWEBENGINEPAGE_WEBACTION_IDX                         = 43,
    SBK_QWEBENGINEPAGE_FINDFLAG_IDX                          = 37,
    SBK_QFLAGS_QWEBENGINEPAGE_FINDFLAG_IDX                   = 3,
    SBK_QWEBENGINEPAGE_WEBWINDOWTYPE_IDX                     = 44,
    SBK_QWEBENGINEPAGE_PERMISSIONPOLICY_IDX                  = 41,
    SBK_QWEBENGINEPAGE_NAVIGATIONTYPE_IDX                    = 40,
    SBK_QWEBENGINEPAGE_FEATURE_IDX                           = 35,
    SBK_QWEBENGINEPAGE_FILESELECTIONMODE_IDX                 = 36,
    SBK_QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_IDX     = 38,
    SBK_QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_IDX    = 42,
    SBK_QWEBENGINEPAGE_LIFECYCLESTATE_IDX                    = 39,
    SBK_QWEBENGINEPAGE_IDX                                   = 34,
    SBK_QWEBENGINEPROFILE_HTTPCACHETYPE_IDX                  = 46,
    SBK_QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_IDX        = 47,
    SBK_QWEBENGINEPROFILE_IDX                                = 45,
    SBK_QWEBENGINEQUOTAREQUEST_IDX                           = 48,
    SBK_QWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_IDX         = 49,
    SBK_QWEBENGINESCRIPT_INJECTIONPOINT_IDX                  = 51,
    SBK_QWEBENGINESCRIPT_SCRIPTWORLDID_IDX                   = 52,
    SBK_QWEBENGINESCRIPT_IDX                                 = 50,
    SBK_QWEBENGINESCRIPTCOLLECTION_IDX                       = 53,
    SBK_QWEBENGINESETTINGS_FONTFAMILY_IDX                    = 55,
    SBK_QWEBENGINESETTINGS_WEBATTRIBUTE_IDX                  = 58,
    SBK_QWEBENGINESETTINGS_FONTSIZE_IDX                      = 56,
    SBK_QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_IDX        = 57,
    SBK_QWEBENGINESETTINGS_IDX                               = 54,
    SBK_QWEBENGINEURLREQUESTINFO_RESOURCETYPE_IDX            = 61,
    SBK_QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_IDX          = 60,
    SBK_QWEBENGINEURLREQUESTINFO_IDX                         = 59,
    SBK_QWEBENGINEURLREQUESTINTERCEPTOR_IDX                  = 62,
    SBK_QWEBENGINEURLREQUESTJOB_ERROR_IDX                    = 64,
    SBK_QWEBENGINEURLREQUESTJOB_IDX                          = 63,
    SBK_QWEBENGINEURLSCHEME_SYNTAX_IDX                       = 68,
    SBK_QWEBENGINEURLSCHEME_SPECIALPORT_IDX                  = 67,
    SBK_QWEBENGINEURLSCHEME_FLAG_IDX                         = 66,
    SBK_QFLAGS_QWEBENGINEURLSCHEME_FLAG_IDX                  = 4,
    SBK_QWEBENGINEURLSCHEME_IDX                              = 65,
    SBK_QWEBENGINEURLSCHEMEHANDLER_IDX                       = 69,
    SBK_QtWebEngineCore_IDX_COUNT                            = 70
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtWebEngineCoreTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtWebEngineCoreModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtWebEngineCoreTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBENGINECORE_QLIST_INT_IDX                        = 0, // QList<int>
    SBK_QTWEBENGINECORE_QHASH_QBYTEARRAY_QBYTEARRAY_IDX      = 1, // QHash<QByteArray,QByteArray>
    SBK_QTWEBENGINECORE_QLIST_QWEBENGINESCRIPT_IDX           = 2, // QList<QWebEngineScript>
    SBK_QTWEBENGINECORE_QMULTIMAP_QBYTEARRAY_QBYTEARRAY_IDX  = 3, // QMultiMap<QByteArray,QByteArray>
    SBK_QTWEBENGINECORE_QLIST_QSSLCERTIFICATE_IDX            = 4, // QList<QSslCertificate>
    SBK_QTWEBENGINECORE_QLIST_QOBJECTPTR_IDX                 = 5, // QList<QObject*>
    SBK_QTWEBENGINECORE_QLIST_QBYTEARRAY_IDX                 = 6, // QList<QByteArray>
    SBK_QTWEBENGINECORE_QMAP_QBYTEARRAY_QBYTEARRAY_IDX       = 7, // QMap<QByteArray,QByteArray>
    SBK_QTWEBENGINECORE_QLIST_QURL_IDX                       = 8, // QList<QUrl>
    SBK_QTWEBENGINECORE_QLIST_QWEBENGINEHISTORYITEM_IDX      = 9, // QList<QWebEngineHistoryItem>
    SBK_QTWEBENGINECORE_QMAP_QSTRING_QSTRING_IDX             = 10, // QMap<QString,QString>
    SBK_QTWEBENGINECORE_QMAP_INT_QVARIANT_IDX                = 11, // QMap<int,QVariant>
    SBK_QTWEBENGINECORE_QLIST_QMODELINDEX_IDX                = 12, // QList<QModelIndex>
    SBK_QTWEBENGINECORE_QHASH_INT_QBYTEARRAY_IDX             = 13, // QHash<int,QByteArray>
    SBK_QTWEBENGINECORE_QLIST_QVARIANT_IDX                   = 14, // QList<QVariant>
    SBK_QTWEBENGINECORE_QLIST_QSTRING_IDX                    = 15, // QList<QString>
    SBK_QTWEBENGINECORE_QMAP_QSTRING_QVARIANT_IDX            = 16, // QMap<QString,QVariant>
    SBK_QtWebEngineCore_CONVERTERS_IDX_COUNT                 = 17
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QWebEngineCertificateError::Type >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECERTIFICATEERROR_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineCertificateError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECERTIFICATEERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuRequest::MediaType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuRequest::MediaFlag >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEngineContextMenuRequest::MediaFlag> >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QFLAGS_QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuRequest::EditFlag >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEngineContextMenuRequest::EditFlag> >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QFLAGS_QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECONTEXTMENUREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineCookieStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECOOKIESTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineCookieStore::FilterRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINECOOKIESTORE_FILTERREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadRequest::DownloadState >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEDOWNLOADREQUEST_DOWNLOADSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadRequest::SavePageFormat >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEDOWNLOADREQUEST_SAVEPAGEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadRequest::DownloadInterruptReason >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEDOWNLOADREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineFileSystemAccessRequest::HandleType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEFILESYSTEMACCESSREQUEST_HANDLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineFileSystemAccessRequest::AccessFlag >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEFILESYSTEMACCESSREQUEST_ACCESSFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEngineFileSystemAccessRequest::AccessFlag> >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QFLAGS_QWEBENGINEFILESYSTEMACCESSREQUEST_ACCESSFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineFileSystemAccessRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEFILESYSTEMACCESSREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineFindTextResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEFINDTEXTRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineFullScreenRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEFULLSCREENREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineHistory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEHISTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineHistoryItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEHISTORYITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineHistoryModel::Roles >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEHISTORYMODEL_ROLES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineHistoryModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEHISTORYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineHttpRequest::Method >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEHTTPREQUEST_METHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineHttpRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEHTTPREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineLoadingInfo::LoadStatus >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINELOADINGINFO_LOADSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineLoadingInfo::ErrorDomain >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINELOADINGINFO_ERRORDOMAIN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineLoadingInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINELOADINGINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineNewWindowRequest::DestinationType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineNewWindowRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINENEWWINDOWREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineNotification >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINENOTIFICATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::WebAction >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_WEBACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::FindFlag >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEnginePage::FindFlag> >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QFLAGS_QWEBENGINEPAGE_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::WebWindowType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_WEBWINDOWTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::PermissionPolicy >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_PERMISSIONPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::NavigationType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_NAVIGATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::Feature >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_FEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::FileSelectionMode >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_FILESELECTIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::JavaScriptConsoleMessageLevel >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::RenderProcessTerminationStatus >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::LifecycleState >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_LIFECYCLESTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineProfile::HttpCacheType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPROFILE_HTTPCACHETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineProfile::PersistentCookiesPolicy >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineProfile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEPROFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineQuotaRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEQUOTAREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineRegisterProtocolHandlerRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineScript::InjectionPoint >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESCRIPT_INJECTIONPOINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineScript::ScriptWorldId >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESCRIPT_SCRIPTWORLDID_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineScript >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESCRIPT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineScriptCollection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESCRIPTCOLLECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::FontFamily >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESETTINGS_FONTFAMILY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::WebAttribute >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESETTINGS_WEBATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::FontSize >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESETTINGS_FONTSIZE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::UnknownUrlSchemePolicy >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINESETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInfo::ResourceType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINFO_RESOURCETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInfo::NavigationType >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInterceptor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINTERCEPTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestJob::Error >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTJOB_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestJob >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTJOB_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme::Syntax >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_SYNTAX_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme::SpecialPort >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_SPECIALPORT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme::Flag >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEngineUrlScheme::Flag> >() { return SbkPySide6_QtWebEngineCoreTypes[SBK_QFLAGS_QWEBENGINEURLSCHEME_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlSchemeHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEMEHANDLER_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTWEBENGINECORE_PYTHON_H

