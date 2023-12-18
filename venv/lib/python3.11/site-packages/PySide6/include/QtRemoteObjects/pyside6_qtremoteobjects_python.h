// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTREMOTEOBJECTS_PYTHON_H
#define SBK_QTREMOTEOBJECTS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QtRemoteObjects/qremoteobjectpendingcall.h>
#include <QtRemoteObjects/qremoteobjectreplica.h>
class QAbstractItemModelReplica;
class QRemoteObjectAbstractPersistedStore;
class QRemoteObjectDynamicReplica;
class QRemoteObjectHost;
class QRemoteObjectPendingCallWatcher;
class QRemoteObjectRegistry;
class QRemoteObjectRegistryHost;
class QRemoteObjectSettingsStore;
struct QRemoteObjectSourceLocationInfo;
// Type indices
enum : int {
    SBK_QABSTRACTITEMMODELREPLICA_IDX                        = 0,
    SBK_QREMOTEOBJECTABSTRACTPERSISTEDSTORE_IDX              = 1,
    SBK_QREMOTEOBJECTDYNAMICREPLICA_IDX                      = 2,
    SBK_QREMOTEOBJECTHOST_IDX                                = 3,
    SBK_QREMOTEOBJECTHOSTBASE_ALLOWEDSCHEMAS_IDX             = 5,
    SBK_QREMOTEOBJECTHOSTBASE_IDX                            = 4,
    SBK_QREMOTEOBJECTNODE_ERRORCODE_IDX                      = 7,
    SBK_QREMOTEOBJECTNODE_IDX                                = 6,
    SBK_QREMOTEOBJECTPENDINGCALL_ERROR_IDX                   = 9,
    SBK_QREMOTEOBJECTPENDINGCALL_IDX                         = 8,
    SBK_QREMOTEOBJECTPENDINGCALLWATCHER_IDX                  = 10,
    SBK_QREMOTEOBJECTREGISTRY_IDX                            = 11,
    SBK_QREMOTEOBJECTREGISTRYHOST_IDX                        = 12,
    SBK_QREMOTEOBJECTREPLICA_STATE_IDX                       = 14,
    SBK_QREMOTEOBJECTREPLICA_IDX                             = 13,
    SBK_QREMOTEOBJECTSETTINGSSTORE_IDX                       = 15,
    SBK_QREMOTEOBJECTSOURCELOCATIONINFO_IDX                  = 16,
    SBK_QtRemoteObjects_IDX_COUNT                            = 17
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtRemoteObjectsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtRemoteObjectsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtRemoteObjectsTypeConverters;

// Converter indices
enum : int {
    SBK_QTREMOTEOBJECTS_QLIST_INT_IDX                        = 0, // QList<int>
    SBK_QTREMOTEOBJECTS_QLIST_QOBJECTPTR_IDX                 = 1, // QList<QObject*>
    SBK_QTREMOTEOBJECTS_QLIST_QBYTEARRAY_IDX                 = 2, // QList<QByteArray>
    SBK_QTREMOTEOBJECTS_QLIST_QVARIANT_IDX                   = 3, // QList<QVariant>
    SBK_QTREMOTEOBJECTS_STD_PAIR_QSTRING_QREMOTEOBJECTSOURCELOCATIONINFO_IDX = 4, // std::pair<QString,QRemoteObjectSourceLocationInfo>
    SBK_QTREMOTEOBJECTS_QHASH_QSTRING_QREMOTEOBJECTSOURCELOCATIONINFO_IDX = 5, // QHash<QString,QRemoteObjectSourceLocationInfo>
    SBK_QTREMOTEOBJECTS_QLIST_QMODELINDEX_IDX                = 6, // QList<QModelIndex>
    SBK_QTREMOTEOBJECTS_QMAP_INT_QVARIANT_IDX                = 7, // QMap<int,QVariant>
    SBK_QTREMOTEOBJECTS_QLIST_QPERSISTENTMODELINDEX_IDX      = 8, // QList<QPersistentModelIndex>
    SBK_QTREMOTEOBJECTS_QHASH_INT_QBYTEARRAY_IDX             = 9, // QHash<int,QByteArray>
    SBK_QTREMOTEOBJECTS_QLIST_QSTRING_IDX                    = 10, // QList<QString>
    SBK_QTREMOTEOBJECTS_QMAP_QSTRING_QVARIANT_IDX            = 11, // QMap<QString,QVariant>
    SBK_QtRemoteObjects_CONVERTERS_IDX_COUNT                 = 12
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractItemModelReplica >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QABSTRACTITEMMODELREPLICA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectAbstractPersistedStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTABSTRACTPERSISTEDSTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectDynamicReplica >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTDYNAMICREPLICA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectHost >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTHOST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectHostBase::AllowedSchemas >() { return SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTHOSTBASE_ALLOWEDSCHEMAS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectHostBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTHOSTBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectNode::ErrorCode >() { return SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTNODE_ERRORCODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectPendingCall::Error >() { return SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTPENDINGCALL_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectPendingCall >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTPENDINGCALL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectPendingCallWatcher >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTPENDINGCALLWATCHER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectRegistry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREGISTRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectRegistryHost >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREGISTRYHOST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectReplica::State >() { return SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREPLICA_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectReplica >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREPLICA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectSettingsStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTSETTINGSSTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectSourceLocationInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTSOURCELOCATIONINFO_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTREMOTEOBJECTS_PYTHON_H

