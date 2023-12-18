// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSTATEMACHINE_PYTHON_H
#define SBK_QTSTATEMACHINE_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtStateMachine/qabstracttransition.h>
#include <QtStateMachine/qhistorystate.h>
#include <QtStateMachine/qstate.h>
#include <QtStateMachine/qstatemachine.h>
class QAbstractState;
class QEventTransition;
class QFinalState;
class QKeyEventTransition;
class QMouseEventTransition;
class QSignalTransition;
// Type indices
enum : int {
    SBK_QABSTRACTSTATE_IDX                                   = 0,
    SBK_QABSTRACTTRANSITION_TRANSITIONTYPE_IDX               = 2,
    SBK_QABSTRACTTRANSITION_IDX                              = 1,
    SBK_QEVENTTRANSITION_IDX                                 = 3,
    SBK_QFINALSTATE_IDX                                      = 4,
    SBK_QHISTORYSTATE_HISTORYTYPE_IDX                        = 6,
    SBK_QHISTORYSTATE_IDX                                    = 5,
    SBK_QKEYEVENTTRANSITION_IDX                              = 7,
    SBK_QMOUSEEVENTTRANSITION_IDX                            = 8,
    SBK_QSIGNALTRANSITION_IDX                                = 9,
    SBK_QSTATE_CHILDMODE_IDX                                 = 11,
    SBK_QSTATE_RESTOREPOLICY_IDX                             = 12,
    SBK_QSTATE_IDX                                           = 10,
    SBK_QSTATEMACHINE_EVENTPRIORITY_IDX                      = 15,
    SBK_QSTATEMACHINE_ERROR_IDX                              = 14,
    SBK_QSTATEMACHINE_IDX                                    = 13,
    SBK_QSTATEMACHINE_SIGNALEVENT_IDX                        = 16,
    SBK_QSTATEMACHINE_WRAPPEDEVENT_IDX                       = 17,
    SBK_QtStateMachine_IDX_COUNT                             = 18
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtStateMachineTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtStateMachineModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtStateMachineTypeConverters;

// Converter indices
enum : int {
    SBK_QTSTATEMACHINE_QLIST_INT_IDX                         = 0, // QList<int>
    SBK_QTSTATEMACHINE_QLIST_QABSTRACTANIMATIONPTR_IDX       = 1, // QList<QAbstractAnimation*>
    SBK_QTSTATEMACHINE_QLIST_QOBJECTPTR_IDX                  = 2, // QList<QObject*>
    SBK_QTSTATEMACHINE_QLIST_QBYTEARRAY_IDX                  = 3, // QList<QByteArray>
    SBK_QTSTATEMACHINE_QLIST_QABSTRACTSTATEPTR_IDX           = 4, // QList<QAbstractState*>
    SBK_QTSTATEMACHINE_QLIST_QABSTRACTTRANSITIONPTR_IDX      = 5, // QList<QAbstractTransition*>
    SBK_QTSTATEMACHINE_QSET_QABSTRACTSTATEPTR_IDX            = 6, // QSet<QAbstractState*>
    SBK_QTSTATEMACHINE_QLIST_QVARIANT_IDX                    = 7, // QList<QVariant>
    SBK_QTSTATEMACHINE_QLIST_QSTRING_IDX                     = 8, // QList<QString>
    SBK_QTSTATEMACHINE_QMAP_QSTRING_QVARIANT_IDX             = 9, // QMap<QString,QVariant>
    SBK_QtStateMachine_CONVERTERS_IDX_COUNT                  = 10
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QABSTRACTSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTransition::TransitionType >() { return SbkPySide6_QtStateMachineTypes[SBK_QABSTRACTTRANSITION_TRANSITIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QABSTRACTTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEventTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QEVENTTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFinalState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QFINALSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHistoryState::HistoryType >() { return SbkPySide6_QtStateMachineTypes[SBK_QHISTORYSTATE_HISTORYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHistoryState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QHISTORYSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeyEventTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QKEYEVENTTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMouseEventTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QMOUSEEVENTTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSignalTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QSIGNALTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QState::ChildMode >() { return SbkPySide6_QtStateMachineTypes[SBK_QSTATE_CHILDMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QState::RestorePolicy >() { return SbkPySide6_QtStateMachineTypes[SBK_QSTATE_RESTOREPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStateMachine::EventPriority >() { return SbkPySide6_QtStateMachineTypes[SBK_QSTATEMACHINE_EVENTPRIORITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStateMachine::Error >() { return SbkPySide6_QtStateMachineTypes[SBK_QSTATEMACHINE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStateMachine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QSTATEMACHINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStateMachine::SignalEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QSTATEMACHINE_SIGNALEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStateMachine::WrappedEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtStateMachineTypes[SBK_QSTATEMACHINE_WRAPPEDEVENT_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSTATEMACHINE_PYTHON_H

