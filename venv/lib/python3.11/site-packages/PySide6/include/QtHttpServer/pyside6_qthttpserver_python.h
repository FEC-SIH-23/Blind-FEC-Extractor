// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTHTTPSERVER_PYTHON_H
#define SBK_QTHTTPSERVER_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtconcurrent_python.h>
#include <pyside6_qtcore_python.h>
#include <pyside6_qtwebsockets_python.h>
#include <pyside6_qtnetwork_python.h>

// Bound library includes
#include <QtHttpServer/qhttpserverrequest.h>
#include <QtHttpServer/qhttpserverresponder.h>
#if QT_CONFIG(future)
#include <QtCore/qfuture.h>
#endif
class QAbstractHttpServer;
class QHttpServer;
class QHttpServerResponse;
class QHttpServerRouter;
class QHttpServerRouterRule;
// Type indices
enum : int {
    SBK_QABSTRACTHTTPSERVER_IDX                              = 0,
    SBK_QFUTUREHTTPSERVERRESPONSE_IDX                        = 2,
    SBK_QFUTURE_QHTTPSERVERRESPONSE_IDX                      = 2,
    SBK_QHTTPSERVER_IDX                                      = 3,
    SBK_QHTTPSERVERREQUEST_METHOD_IDX                        = 5,
    SBK_QFLAGS_QHTTPSERVERREQUEST_METHOD_IDX                 = 1,
    SBK_QHTTPSERVERREQUEST_IDX                               = 4,
    SBK_QHTTPSERVERRESPONDER_STATUSCODE_IDX                  = 7,
    SBK_QHTTPSERVERRESPONDER_IDX                             = 6,
    SBK_QHTTPSERVERRESPONSE_IDX                              = 8,
    SBK_QHTTPSERVERROUTER_IDX                                = 9,
    SBK_QHTTPSERVERROUTERRULE_IDX                            = 10,
    SBK_QtHttpServer_IDX_COUNT                               = 11
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtHttpServerTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtHttpServerModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtHttpServerTypeConverters;

// Converter indices
enum : int {
    SBK_QTHTTPSERVER_QLIST_INT_IDX                           = 0, // QList<int>
    SBK_QTHTTPSERVER_QHASH_QMETATYPE_QSTRING_IDX             = 1, // QHash<QMetaType,QString>
    SBK_QTHTTPSERVER_QLIST_QBYTEARRAY_IDX                    = 2, // QList<QByteArray>
    SBK_QTHTTPSERVER_STD_PAIR_QBYTEARRAY_QBYTEARRAY_IDX      = 3, // std::pair<QByteArray,QByteArray>
    SBK_QTHTTPSERVER_QLIST_STD_PAIR_QBYTEARRAY_QBYTEARRAY_IDX = 4, // QList<std::pair< QByteArray,QByteArray>>
    SBK_QTHTTPSERVER_QLIST_QOBJECTPTR_IDX                    = 5, // QList<QObject*>
    SBK_QTHTTPSERVER_QLIST_QUINT16_IDX                       = 6, // QList<quint16>
    SBK_QTHTTPSERVER_QLIST_QTCPSERVERPTR_IDX                 = 7, // QList<QTcpServer*>
    SBK_QTHTTPSERVER_QLIST_QVARIANT_IDX                      = 8, // QList<QVariant>
    SBK_QTHTTPSERVER_QLIST_QSTRING_IDX                       = 9, // QList<QString>
    SBK_QTHTTPSERVER_QMAP_QSTRING_QVARIANT_IDX               = 10, // QMap<QString,QVariant>
    SBK_QtHttpServer_CONVERTERS_IDX_COUNT                    = 11
};

// typedef entries
using QFutureHttpServerResponse = QFuture<QHttpServerResponse>;

// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractHttpServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QABSTRACTHTTPSERVER_IDX]); }
#if QT_CONFIG(future)
template<> inline PyTypeObject *SbkType< ::QFutureHttpServerResponse >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QFUTUREHTTPSERVERRESPONSE_IDX]); }
#endif
template<> inline PyTypeObject *SbkType< ::QHttpServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHttpServerRequest::Method >() { return SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVERREQUEST_METHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QHttpServerRequest::Method> >() { return SbkPySide6_QtHttpServerTypes[SBK_QFLAGS_QHTTPSERVERREQUEST_METHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHttpServerRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVERREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHttpServerResponder::StatusCode >() { return SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVERRESPONDER_STATUSCODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHttpServerResponder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVERRESPONDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHttpServerResponse >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVERRESPONSE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHttpServerRouter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVERROUTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHttpServerRouterRule >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtHttpServerTypes[SBK_QHTTPSERVERROUTERRULE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTHTTPSERVER_PYTHON_H

