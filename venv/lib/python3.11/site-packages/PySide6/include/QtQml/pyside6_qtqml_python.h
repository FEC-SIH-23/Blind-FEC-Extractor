// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTQML_PYTHON_H
#define SBK_QTQML_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>

// Bound library includes
#include <QtQml/qjsengine.h>
#include <QtQml/qjsmanagedvalue.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqml.h>
#include <QtQml/qqmlabstracturlinterceptor.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmldebug.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmlfile.h>
#include <QtQml/qqmlincubator.h>
#include <QtQml/qqmlproperty.h>
#include <QtQml/qqmlscriptstring.h>
class QJSValueIterator;
class QPyQmlParserStatus;
class QPyQmlPropertyValueSource;
class QQmlApplicationEngine;
class QQmlEngine;
class QQmlError;
class QQmlExpression;
class QQmlExtensionInterface;
class QQmlExtensionPlugin;
class QQmlFileSelector;
class QQmlIncubationController;
class QQmlListReference;
class QQmlNetworkAccessManagerFactory;
class QQmlParserStatus;
class QQmlPropertyMap;
class QQmlPropertyValueSource;
class QQmlTypesExtensionInterface;
// Begin code injection
// Volatile Bool Ptr type definition for QQmlIncubationController::incubateWhile(std::atomic<bool> *, int)
#include <atomic>

using AtomicBool = std::atomic<bool>;

struct QtQml_VolatileBoolObject {
    PyObject_HEAD
    AtomicBool *flag;
};
// End of code injection

// Type indices
enum : int {
    SBK_QJSENGINE_OBJECTOWNERSHIP_IDX                        = 4,
    SBK_QJSENGINE_EXTENSION_IDX                              = 3,
    SBK_QFLAGS_QJSENGINE_EXTENSION_IDX                       = 0,
    SBK_QJSENGINE_IDX                                        = 2,
    SBK_QJSMANAGEDVALUE_TYPE_IDX                             = 6,
    SBK_QJSMANAGEDVALUE_IDX                                  = 5,
    SBK_QJSPRIMITIVEVALUE_TYPE_IDX                           = 8,
    SBK_QJSPRIMITIVEVALUE_IDX                                = 7,
    SBK_QJSVALUE_SPECIALVALUE_IDX                            = 12,
    SBK_QJSVALUE_ERRORTYPE_IDX                               = 10,
    SBK_QJSVALUE_OBJECTCONVERSIONBEHAVIOR_IDX                = 11,
    SBK_QJSVALUE_IDX                                         = 9,
    SBK_QJSVALUEITERATOR_IDX                                 = 13,
    SBK_QPYQMLPARSERSTATUS_IDX                               = 15,
    SBK_QPYQMLPROPERTYVALUESOURCE_IDX                        = 16,
    SBK_QQMLABSTRACTURLINTERCEPTOR_DATATYPE_IDX              = 18,
    SBK_QQMLABSTRACTURLINTERCEPTOR_IDX                       = 17,
    SBK_QQMLAPPLICATIONENGINE_IDX                            = 19,
    SBK_QQMLCOMPONENT_COMPILATIONMODE_IDX                    = 21,
    SBK_QQMLCOMPONENT_STATUS_IDX                             = 22,
    SBK_QQMLCOMPONENT_IDX                                    = 20,
    SBK_QQMLCONTEXT_IDX                                      = 23,
    SBK_QQMLCONTEXT_PROPERTYPAIR_IDX                         = 24,
    SBK_QQMLDEBUGGINGENABLER_STARTMODE_IDX                   = 26,
    SBK_QQMLDEBUGGINGENABLER_IDX                             = 25,
    SBK_QQMLENGINE_IDX                                       = 27,
    SBK_QQMLERROR_IDX                                        = 28,
    SBK_QQMLEXPRESSION_IDX                                   = 29,
    SBK_QQMLEXTENSIONINTERFACE_IDX                           = 30,
    SBK_QQMLEXTENSIONPLUGIN_IDX                              = 31,
    SBK_QQMLFILE_STATUS_IDX                                  = 33,
    SBK_QQMLFILE_IDX                                         = 32,
    SBK_QQMLFILESELECTOR_IDX                                 = 34,
    SBK_QQMLIMAGEPROVIDERBASE_IMAGETYPE_IDX                  = 37,
    SBK_QQMLIMAGEPROVIDERBASE_FLAG_IDX                       = 36,
    SBK_QFLAGS_QQMLIMAGEPROVIDERBASE_FLAG_IDX                = 1,
    SBK_QQMLIMAGEPROVIDERBASE_IDX                            = 35,
    SBK_QQMLINCUBATIONCONTROLLER_IDX                         = 38,
    SBK_QQMLINCUBATOR_INCUBATIONMODE_IDX                     = 40,
    SBK_QQMLINCUBATOR_STATUS_IDX                             = 41,
    SBK_QQMLINCUBATOR_IDX                                    = 39,
    SBK_QQMLLISTREFERENCE_IDX                                = 42,
    SBK_QQMLNETWORKACCESSMANAGERFACTORY_IDX                  = 44,
    SBK_QQMLPARSERSTATUS_IDX                                 = 45,
    SBK_QQMLPROPERTY_PROPERTYTYPECATEGORY_IDX                = 47,
    SBK_QQMLPROPERTY_TYPE_IDX                                = 48,
    SBK_QQMLPROPERTY_IDX                                     = 46,
    SBK_QQMLPROPERTYMAP_IDX                                  = 49,
    SBK_QQMLPROPERTYVALUESOURCE_IDX                          = 50,
    SBK_QQMLSCRIPTSTRING_IDX                                 = 51,
    SBK_QQMLTYPESEXTENSIONINTERFACE_IDX                      = 52,
    SBK_QML_HAS_ATTACHED_PROPERTIES_IDX                      = 14,
    SBK_QQMLMODULEIMPORTSPECIALVERSIONS_IDX                  = 43,
    SBK_QtQml_IDX_COUNT                                      = 54
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtQmlTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtQmlModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtQmlTypeConverters;

// Converter indices
enum : int {
    SBK_QTQML_QLIST_INT_IDX                                  = 0, // QList<int>
    SBK_QTQML_QLIST_QQMLERROR_IDX                            = 1, // QList<QQmlError>
    SBK_QTQML_QMAP_QSTRING_QVARIANT_IDX                      = 2, // QMap<QString,QVariant>
    SBK_QTQML_QHASH_QSTRING_QVARIANT_IDX                     = 3, // QHash<QString,QVariant>
    SBK_QTQML_QLIST_QJSVALUE_IDX                             = 4, // QList<QJSValue>
    SBK_QTQML_QLIST_QOBJECTPTR_IDX                           = 5, // QList<QObject*>
    SBK_QTQML_QLIST_QBYTEARRAY_IDX                           = 6, // QList<QByteArray>
    SBK_QTQML_QLIST_QQMLCONTEXT_PROPERTYPAIR_IDX             = 7, // QList<QQmlContext::PropertyPair>
    SBK_QTQML_QLIST_QQMLABSTRACTURLINTERCEPTORPTR_IDX        = 8, // QList<QQmlAbstractUrlInterceptor*>
    SBK_QTQML_QLIST_QVARIANT_IDX                             = 9, // QList<QVariant>
    SBK_QTQML_QLIST_QSTRING_IDX                              = 10, // QList<QString>
    SBK_QtQml_CONVERTERS_IDX_COUNT                           = 11
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QQmlModuleImportSpecialVersions >() { return SbkPySide6_QtQmlTypes[SBK_QQMLMODULEIMPORTSPECIALVERSIONS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSEngine::ObjectOwnership >() { return SbkPySide6_QtQmlTypes[SBK_QJSENGINE_OBJECTOWNERSHIP_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSEngine::Extension >() { return SbkPySide6_QtQmlTypes[SBK_QJSENGINE_EXTENSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QJSEngine::Extension> >() { return SbkPySide6_QtQmlTypes[SBK_QFLAGS_QJSENGINE_EXTENSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QJSENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJSManagedValue::Type >() { return SbkPySide6_QtQmlTypes[SBK_QJSMANAGEDVALUE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSManagedValue >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QJSMANAGEDVALUE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJSPrimitiveValue::Type >() { return SbkPySide6_QtQmlTypes[SBK_QJSPRIMITIVEVALUE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSPrimitiveValue >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QJSPRIMITIVEVALUE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJSValue::SpecialValue >() { return SbkPySide6_QtQmlTypes[SBK_QJSVALUE_SPECIALVALUE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSValue::ErrorType >() { return SbkPySide6_QtQmlTypes[SBK_QJSVALUE_ERRORTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSValue::ObjectConversionBehavior >() { return SbkPySide6_QtQmlTypes[SBK_QJSVALUE_OBJECTCONVERSIONBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJSValue >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QJSVALUE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJSValueIterator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QJSVALUEITERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyQmlParserStatus >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QPYQMLPARSERSTATUS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyQmlPropertyValueSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QPYQMLPROPERTYVALUESOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlAbstractUrlInterceptor::DataType >() { return SbkPySide6_QtQmlTypes[SBK_QQMLABSTRACTURLINTERCEPTOR_DATATYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlAbstractUrlInterceptor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLABSTRACTURLINTERCEPTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlApplicationEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLAPPLICATIONENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlComponent::CompilationMode >() { return SbkPySide6_QtQmlTypes[SBK_QQMLCOMPONENT_COMPILATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlComponent::Status >() { return SbkPySide6_QtQmlTypes[SBK_QQMLCOMPONENT_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlComponent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLCOMPONENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlContext >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLCONTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlContext::PropertyPair >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLCONTEXT_PROPERTYPAIR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlDebuggingEnabler::StartMode >() { return SbkPySide6_QtQmlTypes[SBK_QQMLDEBUGGINGENABLER_STARTMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlDebuggingEnabler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLDEBUGGINGENABLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlExpression >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLEXPRESSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlExtensionInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLEXTENSIONINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlExtensionPlugin >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLEXTENSIONPLUGIN_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlFile::Status >() { return SbkPySide6_QtQmlTypes[SBK_QQMLFILE_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlFile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlFileSelector >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLFILESELECTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlImageProviderBase::ImageType >() { return SbkPySide6_QtQmlTypes[SBK_QQMLIMAGEPROVIDERBASE_IMAGETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlImageProviderBase::Flag >() { return SbkPySide6_QtQmlTypes[SBK_QQMLIMAGEPROVIDERBASE_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QQmlImageProviderBase::Flag> >() { return SbkPySide6_QtQmlTypes[SBK_QFLAGS_QQMLIMAGEPROVIDERBASE_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlImageProviderBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLIMAGEPROVIDERBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlIncubationController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLINCUBATIONCONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlIncubator::IncubationMode >() { return SbkPySide6_QtQmlTypes[SBK_QQMLINCUBATOR_INCUBATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlIncubator::Status >() { return SbkPySide6_QtQmlTypes[SBK_QQMLINCUBATOR_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlIncubator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLINCUBATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlListReference >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLLISTREFERENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlNetworkAccessManagerFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLNETWORKACCESSMANAGERFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlParserStatus >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLPARSERSTATUS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlProperty::PropertyTypeCategory >() { return SbkPySide6_QtQmlTypes[SBK_QQMLPROPERTY_PROPERTYTYPECATEGORY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlProperty::Type >() { return SbkPySide6_QtQmlTypes[SBK_QQMLPROPERTY_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQmlProperty >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLPROPERTY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlPropertyMap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLPROPERTYMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlPropertyValueSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLPROPERTYVALUESOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlScriptString >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLSCRIPTSTRING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQmlTypesExtensionInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtQmlTypes[SBK_QQMLTYPESEXTENSIONINTERFACE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTQML_PYTHON_H

