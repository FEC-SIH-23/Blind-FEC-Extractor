// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTDESIGNER_PYTHON_H
#define SBK_QTDESIGNER_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtwidgets_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtDesigner/abstractdnditem.h>
#include <QtDesigner/abstractformwindow.h>
#include <QtDesigner/abstractformwindowcursor.h>
#include <QtDesigner/abstractformwindowmanager.h>
#include <QtDesigner/abstractwidgetbox.h>
class QAbstractExtensionFactory;
class QAbstractExtensionManager;
class QAbstractFormBuilder;
class QDesignerActionEditorInterface;
class QDesignerContainerExtension;
class QDesignerCustomWidgetCollectionInterface;
class QDesignerCustomWidgetInterface;
class QDesignerDynamicPropertySheetExtension;
class QDesignerFormEditorInterface;
class QDesignerFormWindowToolInterface;
class QDesignerMemberSheetExtension;
class QDesignerObjectInspectorInterface;
class QDesignerPropertyEditorInterface;
class QDesignerPropertySheetExtension;
class QDesignerTaskMenuExtension;
class QExtensionFactory;
class QExtensionManager;
class QFormBuilder;
class QPyDesignerContainerExtension;
class QPyDesignerCustomWidgetCollection;
class QPyDesignerMemberSheetExtension;
class QPyDesignerPropertySheetExtension;
class QPyDesignerTaskMenuExtension;
// Type indices
enum : int {
    SBK_QABSTRACTEXTENSIONFACTORY_IDX                        = 0,
    SBK_QABSTRACTEXTENSIONMANAGER_IDX                        = 1,
    SBK_QABSTRACTFORMBUILDER_IDX                             = 2,
    SBK_QDESIGNERACTIONEDITORINTERFACE_IDX                   = 3,
    SBK_QDESIGNERCONTAINEREXTENSION_IDX                      = 4,
    SBK_QDESIGNERCUSTOMWIDGETCOLLECTIONINTERFACE_IDX         = 5,
    SBK_QDESIGNERCUSTOMWIDGETINTERFACE_IDX                   = 6,
    SBK_QDESIGNERDNDITEMINTERFACE_DROPTYPE_IDX               = 8,
    SBK_QDESIGNERDNDITEMINTERFACE_IDX                        = 7,
    SBK_QDESIGNERDYNAMICPROPERTYSHEETEXTENSION_IDX           = 9,
    SBK_QDESIGNERFORMEDITORINTERFACE_IDX                     = 10,
    SBK_QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_IDX = 13,
    SBK_QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEMODE_IDX      = 12,
    SBK_QDESIGNERFORMWINDOWCURSORINTERFACE_IDX               = 11,
    SBK_QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_IDX         = 15,
    SBK_QFLAGS_QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_IDX  = 33,
    SBK_QDESIGNERFORMWINDOWINTERFACE_RESOURCEFILESAVEMODE_IDX = 16,
    SBK_QDESIGNERFORMWINDOWINTERFACE_IDX                     = 14,
    SBK_QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_IDX       = 18,
    SBK_QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTIONGROUP_IDX  = 19,
    SBK_QDESIGNERFORMWINDOWMANAGERINTERFACE_IDX              = 17,
    SBK_QDESIGNERFORMWINDOWTOOLINTERFACE_IDX                 = 20,
    SBK_QDESIGNERMEMBERSHEETEXTENSION_IDX                    = 21,
    SBK_QDESIGNEROBJECTINSPECTORINTERFACE_IDX                = 22,
    SBK_QDESIGNERPROPERTYEDITORINTERFACE_IDX                 = 23,
    SBK_QDESIGNERPROPERTYSHEETEXTENSION_IDX                  = 24,
    SBK_QDESIGNERTASKMENUEXTENSION_IDX                       = 25,
    SBK_QDESIGNERWIDGETBOXINTERFACE_IDX                      = 26,
    SBK_QDESIGNERWIDGETBOXINTERFACE_CATEGORY_TYPE_IDX        = 28,
    SBK_QDESIGNERWIDGETBOXINTERFACE_CATEGORY_IDX             = 27,
    SBK_QDESIGNERWIDGETBOXINTERFACE_WIDGET_TYPE_IDX          = 30,
    SBK_QDESIGNERWIDGETBOXINTERFACE_WIDGET_IDX               = 29,
    SBK_QEXTENSIONFACTORY_IDX                                = 31,
    SBK_QEXTENSIONMANAGER_IDX                                = 32,
    SBK_QFORMBUILDER_IDX                                     = 34,
    SBK_QPYDESIGNERCONTAINEREXTENSION_IDX                    = 35,
    SBK_QPYDESIGNERCUSTOMWIDGETCOLLECTION_IDX                = 36,
    SBK_QPYDESIGNERMEMBERSHEETEXTENSION_IDX                  = 37,
    SBK_QPYDESIGNERPROPERTYSHEETEXTENSION_IDX                = 38,
    SBK_QPYDESIGNERTASKMENUEXTENSION_IDX                     = 39,
    SBK_QtDesigner_IDX_COUNT                                 = 40
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtDesignerTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtDesignerModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtDesignerTypeConverters;

// Converter indices
enum : int {
    SBK_QTDESIGNER_QLIST_INT_IDX                             = 0, // QList<int>
    SBK_QTDESIGNER_QLIST_QACTIONPTR_IDX                      = 1, // QList<QAction*>
    SBK_QTDESIGNER_QLIST_QBYTEARRAY_IDX                      = 2, // QList<QByteArray>
    SBK_QTDESIGNER_QLIST_QDESIGNERCUSTOMWIDGETINTERFACEPTR_IDX = 3, // QList<QDesignerCustomWidgetInterface*>
    SBK_QTDESIGNER_QLIST_QDESIGNERDNDITEMINTERFACEPTR_IDX    = 4, // QList<QDesignerDnDItemInterface*>
    SBK_QTDESIGNER_QLIST_QWIDGETPTR_IDX                      = 5, // QList<QWidget*>
    SBK_QTDESIGNER_QLIST_QOBJECTPTR_IDX                      = 6, // QList<QObject*>
    SBK_QTDESIGNER_QLIST_QVARIANT_IDX                        = 7, // QList<QVariant>
    SBK_QTDESIGNER_QLIST_QSTRING_IDX                         = 8, // QList<QString>
    SBK_QTDESIGNER_QMAP_QSTRING_QVARIANT_IDX                 = 9, // QMap<QString,QVariant>
    SBK_QtDesigner_CONVERTERS_IDX_COUNT                      = 10
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractExtensionFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QABSTRACTEXTENSIONFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractExtensionManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QABSTRACTEXTENSIONMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractFormBuilder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QABSTRACTFORMBUILDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerActionEditorInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERACTIONEDITORINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerContainerExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERCONTAINEREXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerCustomWidgetCollectionInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERCUSTOMWIDGETCOLLECTIONINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerCustomWidgetInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERCUSTOMWIDGETINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerDnDItemInterface::DropType >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERDNDITEMINTERFACE_DROPTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerDnDItemInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERDNDITEMINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerDynamicPropertySheetExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERDYNAMICPROPERTYSHEETEXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerFormEditorInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMEDITORINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowCursorInterface::MoveOperation >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowCursorInterface::MoveMode >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowCursorInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWCURSORINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowInterface::FeatureFlag >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QDesignerFormWindowInterface::FeatureFlag> >() { return SbkPySide6_QtDesignerTypes[SBK_QFLAGS_QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowInterface::ResourceFileSaveMode >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWINTERFACE_RESOURCEFILESAVEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowManagerInterface::Action >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowManagerInterface::ActionGroup >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTIONGROUP_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowManagerInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWMANAGERINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerFormWindowToolInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERFORMWINDOWTOOLINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerMemberSheetExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERMEMBERSHEETEXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerObjectInspectorInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNEROBJECTINSPECTORINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerPropertyEditorInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERPROPERTYEDITORINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerPropertySheetExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERPROPERTYSHEETEXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerTaskMenuExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERTASKMENUEXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerWidgetBoxInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERWIDGETBOXINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerWidgetBoxInterface::Category::Type >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERWIDGETBOXINTERFACE_CATEGORY_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerWidgetBoxInterface::Category >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERWIDGETBOXINTERFACE_CATEGORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesignerWidgetBoxInterface::Widget::Type >() { return SbkPySide6_QtDesignerTypes[SBK_QDESIGNERWIDGETBOXINTERFACE_WIDGET_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDesignerWidgetBoxInterface::Widget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QDESIGNERWIDGETBOXINTERFACE_WIDGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QExtensionFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QEXTENSIONFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QExtensionManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QEXTENSIONMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFormBuilder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QFORMBUILDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyDesignerContainerExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QPYDESIGNERCONTAINEREXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyDesignerCustomWidgetCollection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QPYDESIGNERCUSTOMWIDGETCOLLECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyDesignerMemberSheetExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QPYDESIGNERMEMBERSHEETEXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyDesignerPropertySheetExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QPYDESIGNERPROPERTYSHEETEXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyDesignerTaskMenuExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtDesignerTypes[SBK_QPYDESIGNERTASKMENUEXTENSION_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTDESIGNER_PYTHON_H

