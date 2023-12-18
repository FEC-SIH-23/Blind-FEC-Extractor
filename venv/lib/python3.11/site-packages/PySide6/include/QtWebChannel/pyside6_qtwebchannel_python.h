// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTWEBCHANNEL_PYTHON_H
#define SBK_QTWEBCHANNEL_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
class QWebChannel;
class QWebChannelAbstractTransport;
// Type indices
enum : int {
    SBK_QWEBCHANNEL_IDX                                      = 0,
    SBK_QWEBCHANNELABSTRACTTRANSPORT_IDX                     = 1,
    SBK_QtWebChannel_IDX_COUNT                               = 2
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtWebChannelTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtWebChannelModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtWebChannelTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBCHANNEL_QLIST_INT_IDX                           = 0, // QList<int>
    SBK_QTWEBCHANNEL_QLIST_QOBJECTPTR_IDX                    = 1, // QList<QObject*>
    SBK_QTWEBCHANNEL_QLIST_QBYTEARRAY_IDX                    = 2, // QList<QByteArray>
    SBK_QTWEBCHANNEL_QHASH_QSTRING_QOBJECTPTR_IDX            = 3, // QHash<QString,QObject*>
    SBK_QTWEBCHANNEL_QLIST_QVARIANT_IDX                      = 4, // QList<QVariant>
    SBK_QTWEBCHANNEL_QLIST_QSTRING_IDX                       = 5, // QList<QString>
    SBK_QTWEBCHANNEL_QMAP_QSTRING_QVARIANT_IDX               = 6, // QMap<QString,QVariant>
    SBK_QtWebChannel_CONVERTERS_IDX_COUNT                    = 7
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QWebChannel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebChannelTypes[SBK_QWEBCHANNEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebChannelAbstractTransport >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtWebChannelTypes[SBK_QWEBCHANNELABSTRACTTRANSPORT_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTWEBCHANNEL_PYTHON_H

