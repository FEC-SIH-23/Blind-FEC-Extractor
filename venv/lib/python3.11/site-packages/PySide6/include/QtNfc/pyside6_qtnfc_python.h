// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTNFC_PYTHON_H
#define SBK_QTNFC_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtNfc/qndeffilter.h>
#include <QtNfc/qndefnfcsmartposterrecord.h>
#include <QtNfc/qndefnfctextrecord.h>
#include <QtNfc/qndefrecord.h>
#include <QtNfc/qnearfieldmanager.h>
#include <QtNfc/qnearfieldtarget.h>
class QNdefMessage;
class QNdefNfcIconRecord;
class QNdefNfcUriRecord;
// Type indices
enum : int {
    SBK_QNDEFFILTER_IDX                                      = 1,
    SBK_QNDEFFILTER_RECORD_IDX                               = 2,
    SBK_QNDEFMESSAGE_IDX                                     = 3,
    SBK_QNDEFNFCICONRECORD_IDX                               = 4,
    SBK_QNDEFNFCSMARTPOSTERRECORD_ACTION_IDX                 = 6,
    SBK_QNDEFNFCSMARTPOSTERRECORD_IDX                        = 5,
    SBK_QNDEFNFCTEXTRECORD_ENCODING_IDX                      = 8,
    SBK_QNDEFNFCTEXTRECORD_IDX                               = 7,
    SBK_QNDEFNFCURIRECORD_IDX                                = 9,
    SBK_QNDEFRECORD_TYPENAMEFORMAT_IDX                       = 11,
    SBK_QNDEFRECORD_IDX                                      = 10,
    SBK_QNEARFIELDMANAGER_ADAPTERSTATE_IDX                   = 13,
    SBK_QNEARFIELDMANAGER_IDX                                = 12,
    SBK_QNEARFIELDTARGET_TYPE_IDX                            = 17,
    SBK_QNEARFIELDTARGET_ACCESSMETHOD_IDX                    = 15,
    SBK_QFLAGS_QNEARFIELDTARGET_ACCESSMETHOD_IDX             = 0,
    SBK_QNEARFIELDTARGET_ERROR_IDX                           = 16,
    SBK_QNEARFIELDTARGET_IDX                                 = 14,
    SBK_QtNfc_IDX_COUNT                                      = 18
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtNfcTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtNfcModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtNfcTypeConverters;

// Converter indices
enum : int {
    SBK_QTNFC_QLIST_INT_IDX                                  = 0, // QList<int>
    SBK_QTNFC_QLIST_QNDEFRECORD_IDX                          = 1, // QList<QNdefRecord>
    SBK_QTNFC_QLIST_QOBJECTPTR_IDX                           = 2, // QList<QObject*>
    SBK_QTNFC_QLIST_QBYTEARRAY_IDX                           = 3, // QList<QByteArray>
    SBK_QTNFC_QLIST_QNDEFNFCICONRECORD_IDX                   = 4, // QList<QNdefNfcIconRecord>
    SBK_QTNFC_QLIST_QNDEFNFCTEXTRECORD_IDX                   = 5, // QList<QNdefNfcTextRecord>
    SBK_QTNFC_QLIST_QVARIANT_IDX                             = 6, // QList<QVariant>
    SBK_QTNFC_QLIST_QSTRING_IDX                              = 7, // QList<QString>
    SBK_QTNFC_QMAP_QSTRING_QVARIANT_IDX                      = 8, // QMap<QString,QVariant>
    SBK_QtNfc_CONVERTERS_IDX_COUNT                           = 9
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QNdefFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNdefFilter::Record >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFFILTER_RECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNdefMessage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFMESSAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNdefNfcIconRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFNFCICONRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNdefNfcSmartPosterRecord::Action >() { return SbkPySide6_QtNfcTypes[SBK_QNDEFNFCSMARTPOSTERRECORD_ACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNdefNfcSmartPosterRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFNFCSMARTPOSTERRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNdefNfcTextRecord::Encoding >() { return SbkPySide6_QtNfcTypes[SBK_QNDEFNFCTEXTRECORD_ENCODING_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNdefNfcTextRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFNFCTEXTRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNdefNfcUriRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFNFCURIRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNdefRecord::TypeNameFormat >() { return SbkPySide6_QtNfcTypes[SBK_QNDEFRECORD_TYPENAMEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNdefRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNDEFRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNearFieldManager::AdapterState >() { return SbkPySide6_QtNfcTypes[SBK_QNEARFIELDMANAGER_ADAPTERSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNearFieldManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNEARFIELDMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNearFieldTarget::Type >() { return SbkPySide6_QtNfcTypes[SBK_QNEARFIELDTARGET_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNearFieldTarget::AccessMethod >() { return SbkPySide6_QtNfcTypes[SBK_QNEARFIELDTARGET_ACCESSMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QNearFieldTarget::AccessMethod> >() { return SbkPySide6_QtNfcTypes[SBK_QFLAGS_QNEARFIELDTARGET_ACCESSMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNearFieldTarget::Error >() { return SbkPySide6_QtNfcTypes[SBK_QNEARFIELDTARGET_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNearFieldTarget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtNfcTypes[SBK_QNEARFIELDTARGET_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTNFC_PYTHON_H

