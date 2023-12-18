// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSQL_PYTHON_H
#define SBK_QTSQL_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtwidgets_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtSql/qsqldriver.h>
#include <QtSql/qsqlerror.h>
#include <QtSql/qsqlfield.h>
#include <QtSql/qsqlquery.h>
#include <QtSql/qsqlrelationaltablemodel.h>
#include <QtSql/qsqlresult.h>
#include <QtSql/qsqltablemodel.h>
#include <QtSql/qtsqlglobal.h>
class QSqlDatabase;
class QSqlDriverCreatorBase;
class QSqlIndex;
class QSqlQueryModel;
class QSqlRecord;
class QSqlRelation;
class QSqlRelationalDelegate;
// Type indices
enum : int {
    SBK_QSQL_LOCATION_IDX                                    = 2,
    SBK_QSQL_PARAMTYPEFLAG_IDX                               = 4,
    SBK_QFLAGS_QSQL_PARAMTYPEFLAG_IDX                        = 0,
    SBK_QSQL_TABLETYPE_IDX                                   = 5,
    SBK_QSQL_NUMERICALPRECISIONPOLICY_IDX                    = 3,
    SBK_QtSqlQSQL_IDX                                        = 1,
    SBK_QSQLDATABASE_IDX                                     = 6,
    SBK_QSQLDRIVER_DRIVERFEATURE_IDX                         = 9,
    SBK_QSQLDRIVER_STATEMENTTYPE_IDX                         = 12,
    SBK_QSQLDRIVER_IDENTIFIERTYPE_IDX                        = 10,
    SBK_QSQLDRIVER_NOTIFICATIONSOURCE_IDX                    = 11,
    SBK_QSQLDRIVER_DBMSTYPE_IDX                              = 8,
    SBK_QSQLDRIVER_IDX                                       = 7,
    SBK_QSQLDRIVERCREATORBASE_IDX                            = 13,
    SBK_QSQLERROR_ERRORTYPE_IDX                              = 15,
    SBK_QSQLERROR_IDX                                        = 14,
    SBK_QSQLFIELD_REQUIREDSTATUS_IDX                         = 17,
    SBK_QSQLFIELD_IDX                                        = 16,
    SBK_QSQLINDEX_IDX                                        = 18,
    SBK_QSQLQUERY_BATCHEXECUTIONMODE_IDX                     = 20,
    SBK_QSQLQUERY_IDX                                        = 19,
    SBK_QSQLQUERYMODEL_IDX                                   = 21,
    SBK_QSQLRECORD_IDX                                       = 22,
    SBK_QSQLRELATION_IDX                                     = 23,
    SBK_QSQLRELATIONALDELEGATE_IDX                           = 24,
    SBK_QSQLRELATIONALTABLEMODEL_JOINMODE_IDX                = 26,
    SBK_QSQLRELATIONALTABLEMODEL_IDX                         = 25,
    SBK_QSQLRESULT_BINDINGSYNTAX_IDX                         = 28,
    SBK_QSQLRESULT_VIRTUALHOOKOPERATION_IDX                  = 29,
    SBK_QSQLRESULT_IDX                                       = 27,
    SBK_QSQLTABLEMODEL_EDITSTRATEGY_IDX                      = 31,
    SBK_QSQLTABLEMODEL_IDX                                   = 30,
    SBK_QtSql_IDX_COUNT                                      = 32
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtSqlTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtSqlModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtSqlTypeConverters;

// Converter indices
enum : int {
    SBK_QTSQL_QLIST_INT_IDX                                  = 0, // QList<int>
    SBK_QTSQL_QLIST_QVARIANT_IDX                             = 1, // QList<QVariant>
    SBK_QTSQL_QLIST_QOBJECTPTR_IDX                           = 2, // QList<QObject*>
    SBK_QTSQL_QLIST_QBYTEARRAY_IDX                           = 3, // QList<QByteArray>
    SBK_QTSQL_QMAP_INT_QVARIANT_IDX                          = 4, // QMap<int,QVariant>
    SBK_QTSQL_QLIST_QMODELINDEX_IDX                          = 5, // QList<QModelIndex>
    SBK_QTSQL_QHASH_INT_QBYTEARRAY_IDX                       = 6, // QHash<int,QByteArray>
    SBK_QTSQL_QLIST_QSTRING_IDX                              = 7, // QList<QString>
    SBK_QTSQL_QMAP_QSTRING_QVARIANT_IDX                      = 8, // QMap<QString,QVariant>
    SBK_QtSql_CONVERTERS_IDX_COUNT                           = 9
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QSql::Location >() { return SbkPySide6_QtSqlTypes[SBK_QSQL_LOCATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSql::ParamTypeFlag >() { return SbkPySide6_QtSqlTypes[SBK_QSQL_PARAMTYPEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSql::ParamTypeFlag> >() { return SbkPySide6_QtSqlTypes[SBK_QFLAGS_QSQL_PARAMTYPEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSql::TableType >() { return SbkPySide6_QtSqlTypes[SBK_QSQL_TABLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSql::NumericalPrecisionPolicy >() { return SbkPySide6_QtSqlTypes[SBK_QSQL_NUMERICALPRECISIONPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDatabase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLDATABASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::DriverFeature >() { return SbkPySide6_QtSqlTypes[SBK_QSQLDRIVER_DRIVERFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::StatementType >() { return SbkPySide6_QtSqlTypes[SBK_QSQLDRIVER_STATEMENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::IdentifierType >() { return SbkPySide6_QtSqlTypes[SBK_QSQLDRIVER_IDENTIFIERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::NotificationSource >() { return SbkPySide6_QtSqlTypes[SBK_QSQLDRIVER_NOTIFICATIONSOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::DbmsType >() { return SbkPySide6_QtSqlTypes[SBK_QSQLDRIVER_DBMSTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLDRIVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlDriverCreatorBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLDRIVERCREATORBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlError::ErrorType >() { return SbkPySide6_QtSqlTypes[SBK_QSQLERROR_ERRORTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlField::RequiredStatus >() { return SbkPySide6_QtSqlTypes[SBK_QSQLFIELD_REQUIREDSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlField >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLFIELD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlIndex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLINDEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlQuery::BatchExecutionMode >() { return SbkPySide6_QtSqlTypes[SBK_QSQLQUERY_BATCHEXECUTIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlQuery >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLQUERY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlQueryModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLQUERYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRelation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLRELATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRelationalDelegate >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLRELATIONALDELEGATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRelationalTableModel::JoinMode >() { return SbkPySide6_QtSqlTypes[SBK_QSQLRELATIONALTABLEMODEL_JOINMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlRelationalTableModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLRELATIONALTABLEMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlResult::BindingSyntax >() { return SbkPySide6_QtSqlTypes[SBK_QSQLRESULT_BINDINGSYNTAX_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlResult::VirtualHookOperation >() { return SbkPySide6_QtSqlTypes[SBK_QSQLRESULT_VIRTUALHOOKOPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlTableModel::EditStrategy >() { return SbkPySide6_QtSqlTypes[SBK_QSQLTABLEMODEL_EDITSTRATEGY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlTableModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtSqlTypes[SBK_QSQLTABLEMODEL_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSQL_PYTHON_H

