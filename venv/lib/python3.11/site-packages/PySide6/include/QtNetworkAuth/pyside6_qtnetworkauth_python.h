// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTNETWORKAUTH_PYTHON_H
#define SBK_QTNETWORKAUTH_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtNetworkAuth/qabstractoauth.h>
#include <QtNetworkAuth/qoauth1.h>
#include <QtNetworkAuth/qoauth1signature.h>
class QAbstractOAuth2;
class QAbstractOAuthReplyHandler;
class QOAuth2AuthorizationCodeFlow;
class QOAuthHttpServerReplyHandler;
class QOAuthOobReplyHandler;
// Type indices
enum : int {
    SBK_QABSTRACTOAUTH_STATUS_IDX                            = 5,
    SBK_QABSTRACTOAUTH_STAGE_IDX                             = 4,
    SBK_QABSTRACTOAUTH_ERROR_IDX                             = 3,
    SBK_QABSTRACTOAUTH_CONTENTTYPE_IDX                       = 2,
    SBK_QABSTRACTOAUTH_IDX                                   = 0,
    SBK_QABSTRACTOAUTH2_IDX                                  = 1,
    SBK_QABSTRACTOAUTHREPLYHANDLER_IDX                       = 6,
    SBK_QOAUTH1_SIGNATUREMETHOD_IDX                          = 8,
    SBK_QOAUTH1_IDX                                          = 7,
    SBK_QOAUTH1SIGNATURE_HTTPREQUESTMETHOD_IDX               = 10,
    SBK_QOAUTH1SIGNATURE_IDX                                 = 9,
    SBK_QOAUTH2AUTHORIZATIONCODEFLOW_IDX                     = 11,
    SBK_QOAUTHHTTPSERVERREPLYHANDLER_IDX                     = 12,
    SBK_QOAUTHOOBREPLYHANDLER_IDX                            = 13,
    SBK_QtNetworkAuth_IDX_COUNT                              = 14
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtNetworkAuthTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtNetworkAuthModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtNetworkAuthTypeConverters;

// Converter indices
enum : int {
    SBK_QTNETWORKAUTH_QLIST_INT_IDX                          = 0, // QList<int>
    SBK_QTNETWORKAUTH_QMAP_QSTRING_QVARIANT_IDX              = 1, // QMap<QString,QVariant>
    SBK_QTNETWORKAUTH_QLIST_QOBJECTPTR_IDX                   = 2, // QList<QObject*>
    SBK_QTNETWORKAUTH_QLIST_QBYTEARRAY_IDX                   = 3, // QList<QByteArray>
    SBK_QTNETWORKAUTH_QMULTIMAP_QSTRING_QVARIANT_IDX         = 4, // QMultiMap<QString,QVariant>
    SBK_QTNETWORKAUTH_STD_PAIR_QSTRING_QSTRING_IDX           = 5, // std::pair<QString,QString>
    SBK_QTNETWORKAUTH_QLIST_QSTRING_IDX                      = 6, // QList<QString>
    SBK_QTNETWORKAUTH_QLIST_QVARIANT_IDX                     = 7, // QList<QVariant>
    SBK_QtNetworkAuth_CONVERTERS_IDX_COUNT                   = 8
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractOAuth::Status >() { return SbkPySide6_QtNetworkAuthTypes[SBK_QABSTRACTOAUTH_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractOAuth::Stage >() { return SbkPySide6_QtNetworkAuthTypes[SBK_QABSTRACTOAUTH_STAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractOAuth::Error >() { return SbkPySide6_QtNetworkAuthTypes[SBK_QABSTRACTOAUTH_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractOAuth::ContentType >() { return SbkPySide6_QtNetworkAuthTypes[SBK_QABSTRACTOAUTH_CONTENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractOAuth >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QABSTRACTOAUTH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractOAuth2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QABSTRACTOAUTH2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractOAuthReplyHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QABSTRACTOAUTHREPLYHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOAuth1::SignatureMethod >() { return SbkPySide6_QtNetworkAuthTypes[SBK_QOAUTH1_SIGNATUREMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOAuth1 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QOAUTH1_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOAuth1Signature::HttpRequestMethod >() { return SbkPySide6_QtNetworkAuthTypes[SBK_QOAUTH1SIGNATURE_HTTPREQUESTMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOAuth1Signature >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QOAUTH1SIGNATURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOAuth2AuthorizationCodeFlow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QOAUTH2AUTHORIZATIONCODEFLOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOAuthHttpServerReplyHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QOAUTHHTTPSERVERREPLYHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOAuthOobReplyHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNetworkAuthTypes[SBK_QOAUTHOOBREPLYHANDLER_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTNETWORKAUTH_PYTHON_H

