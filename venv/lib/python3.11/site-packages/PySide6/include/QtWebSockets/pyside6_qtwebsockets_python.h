// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTWEBSOCKETS_PYTHON_H
#define SBK_QTWEBSOCKETS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>

// Bound library includes
#include <QtWebSockets/qwebsocketprotocol.h>
#include <QtWebSockets/qwebsocketserver.h>
class QMaskGenerator;
class QWebSocket;
class QWebSocketCorsAuthenticator;
class QWebSocketHandshakeOptions;
// Type indices
enum : int {
    SBK_QMASKGENERATOR_IDX                                   = 0,
    SBK_QWEBSOCKET_IDX                                       = 1,
    SBK_QWEBSOCKETCORSAUTHENTICATOR_IDX                      = 2,
    SBK_QWEBSOCKETHANDSHAKEOPTIONS_IDX                       = 3,
    SBK_QWEBSOCKETPROTOCOL_VERSION_IDX                       = 6,
    SBK_QWEBSOCKETPROTOCOL_CLOSECODE_IDX                     = 5,
    SBK_QtWebSocketsQWEBSOCKETPROTOCOL_IDX                   = 4,
    SBK_QWEBSOCKETSERVER_SSLMODE_IDX                         = 8,
    SBK_QWEBSOCKETSERVER_IDX                                 = 7,
    SBK_QtWebSockets_IDX_COUNT                               = 9
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtWebSocketsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtWebSocketsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtWebSocketsTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBSOCKETS_QLIST_INT_IDX                           = 0, // QList<int>
    SBK_QTWEBSOCKETS_QLIST_QOBJECTPTR_IDX                    = 1, // QList<QObject*>
    SBK_QTWEBSOCKETS_QLIST_QBYTEARRAY_IDX                    = 2, // QList<QByteArray>
    SBK_QTWEBSOCKETS_QLIST_QSSLERROR_IDX                     = 3, // QList<QSslError>
    SBK_QTWEBSOCKETS_QLIST_QWEBSOCKETPROTOCOL_VERSION_IDX    = 4, // QList<QWebSocketProtocol::Version>
    SBK_QTWEBSOCKETS_QLIST_QVARIANT_IDX                      = 5, // QList<QVariant>
    SBK_QTWEBSOCKETS_QLIST_QSTRING_IDX                       = 6, // QList<QString>
    SBK_QTWEBSOCKETS_QMAP_QSTRING_QVARIANT_IDX               = 7, // QMap<QString,QVariant>
    SBK_QtWebSockets_CONVERTERS_IDX_COUNT                    = 8
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QMaskGenerator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebSocketsTypes[SBK_QMASKGENERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebSocket >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebSocketsTypes[SBK_QWEBSOCKET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebSocketCorsAuthenticator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebSocketsTypes[SBK_QWEBSOCKETCORSAUTHENTICATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebSocketHandshakeOptions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebSocketsTypes[SBK_QWEBSOCKETHANDSHAKEOPTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebSocketProtocol::Version >() { return SbkPySide6_QtWebSocketsTypes[SBK_QWEBSOCKETPROTOCOL_VERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebSocketProtocol::CloseCode >() { return SbkPySide6_QtWebSocketsTypes[SBK_QWEBSOCKETPROTOCOL_CLOSECODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebSocketServer::SslMode >() { return SbkPySide6_QtWebSocketsTypes[SBK_QWEBSOCKETSERVER_SSLMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebSocketServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebSocketsTypes[SBK_QWEBSOCKETSERVER_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTWEBSOCKETS_PYTHON_H

