// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSCXML_PYTHON_H
#define SBK_QTSCXML_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtScxml/qscxmlcompiler.h>
#include <QtScxml/qscxmldatamodel.h>
#include <QtScxml/qscxmlevent.h>
#include <QtScxml/qscxmlexecutablecontent.h>
class QScxmlCppDataModel;
class QScxmlDynamicScxmlServiceFactory;
class QScxmlError;
class QScxmlInvokableService;
class QScxmlInvokableServiceFactory;
class QScxmlNullDataModel;
class QScxmlStateMachine;
class QScxmlStaticScxmlServiceFactory;
class QScxmlTableData;

namespace QScxmlExecutableContent {
    struct AssignmentInfo;
    struct EvaluatorInfo;
    struct ForeachInfo;
    struct InvokeInfo;
    struct ParameterInfo;
}
// Type indices
enum : int {
    SBK_QSCXMLCOMPILER_IDX                                   = 0,
    SBK_QSCXMLCOMPILER_LOADER_IDX                            = 1,
    SBK_QSCXMLCPPDATAMODEL_IDX                               = 2,
    SBK_QSCXMLDATAMODEL_IDX                                  = 3,
    SBK_QSCXMLDATAMODEL_FOREACHLOOPBODY_IDX                  = 4,
    SBK_QSCXMLDYNAMICSCXMLSERVICEFACTORY_IDX                 = 5,
    SBK_QSCXMLERROR_IDX                                      = 6,
    SBK_QSCXMLEVENT_EVENTTYPE_IDX                            = 8,
    SBK_QSCXMLEVENT_IDX                                      = 7,
    SBK_QtScxmlQSCXMLEXECUTABLECONTENT_IDX                   = 9,
    SBK_QSCXMLEXECUTABLECONTENT_ASSIGNMENTINFO_IDX           = 10,
    SBK_QSCXMLEXECUTABLECONTENT_EVALUATORINFO_IDX            = 11,
    SBK_QSCXMLEXECUTABLECONTENT_FOREACHINFO_IDX              = 12,
    SBK_QSCXMLEXECUTABLECONTENT_INVOKEINFO_IDX               = 13,
    SBK_QSCXMLEXECUTABLECONTENT_PARAMETERINFO_IDX            = 14,
    SBK_QSCXMLINVOKABLESERVICE_IDX                           = 15,
    SBK_QSCXMLINVOKABLESERVICEFACTORY_IDX                    = 16,
    SBK_QSCXMLNULLDATAMODEL_IDX                              = 17,
    SBK_QSCXMLSTATEMACHINE_IDX                               = 18,
    SBK_QSCXMLSTATICSCXMLSERVICEFACTORY_IDX                  = 19,
    SBK_QSCXMLTABLEDATA_IDX                                  = 20,
    SBK_QtScxml_IDX_COUNT                                    = 21
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtScxmlTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtScxmlModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtScxmlTypeConverters;

// Converter indices
enum : int {
    SBK_QTSCXML_QLIST_INT_IDX                                = 0, // QList<int>
    SBK_QTSCXML_QLIST_QSCXMLERROR_IDX                        = 1, // QList<QScxmlError>
    SBK_QTSCXML_QLIST_QOBJECTPTR_IDX                         = 2, // QList<QObject*>
    SBK_QTSCXML_QLIST_QBYTEARRAY_IDX                         = 3, // QList<QByteArray>
    SBK_QTSCXML_QMAP_QSTRING_QVARIANT_IDX                    = 4, // QMap<QString,QVariant>
    SBK_QTSCXML_QLIST_QSCXMLINVOKABLESERVICEPTR_IDX          = 5, // QList<QScxmlInvokableService*>
    SBK_QTSCXML_QLIST_QSCXMLEXECUTABLECONTENT_PARAMETERINFO_IDX = 6, // QList<QScxmlExecutableContent::ParameterInfo>
    SBK_QTSCXML_QLIST_QVARIANT_IDX                           = 7, // QList<QVariant>
    SBK_QTSCXML_QLIST_QSTRING_IDX                            = 8, // QList<QString>
    SBK_QtScxml_CONVERTERS_IDX_COUNT                         = 9
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QScxmlCompiler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLCOMPILER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlCompiler::Loader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLCOMPILER_LOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlCppDataModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLCPPDATAMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlDataModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLDATAMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlDataModel::ForeachLoopBody >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLDATAMODEL_FOREACHLOOPBODY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlDynamicScxmlServiceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLDYNAMICSCXMLSERVICEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlEvent::EventType >() { return SbkPySide6_QtScxmlTypes[SBK_QSCXMLEVENT_EVENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QScxmlEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::AssignmentInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_ASSIGNMENTINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::EvaluatorInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_EVALUATORINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::ForeachInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_FOREACHINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::InvokeInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_INVOKEINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::ParameterInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_PARAMETERINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlInvokableService >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLINVOKABLESERVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlInvokableServiceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLINVOKABLESERVICEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlNullDataModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLNULLDATAMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlStateMachine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLSTATEMACHINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlStaticScxmlServiceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLSTATICSCXMLSERVICEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlTableData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtScxmlTypes[SBK_QSCXMLTABLEDATA_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSCXML_PYTHON_H

