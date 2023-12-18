// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QT3DINPUT_PYTHON_H
#define SBK_QT3DINPUT_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qt3dcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <Qt3DInput/qabstractactioninput.h>
#include <Qt3DInput/qaxisaccumulator.h>
#include <Qt3DInput/qmousedevice.h>
#include <Qt3DInput/qmouseevent.h>

namespace Qt3DInput {
    class QAbstractActionInput;
    class QAbstractAxisInput;
    class QAbstractPhysicalDevice;
    class QAction;
    class QActionInput;
    class QAnalogAxisInput;
    class QAxis;
    class QAxisSetting;
    class QButtonAxisInput;
    class QInputAspect;
    class QInputChord;
    class QInputSequence;
    class QInputSettings;
    class QKeyEvent;
    class QKeyboardDevice;
    class QKeyboardHandler;
    class QLogicalDevice;
    class QMouseHandler;
}
// Type indices
enum : int {
    SBK_Qt3DInputQT3DINPUT_IDX                               = 0,
    SBK_QT3DINPUT_QABSTRACTACTIONINPUT_IDX                   = 1,
    SBK_QT3DINPUT_QABSTRACTAXISINPUT_IDX                     = 2,
    SBK_QT3DINPUT_QABSTRACTPHYSICALDEVICE_IDX                = 3,
    SBK_QT3DINPUT_QACTION_IDX                                = 4,
    SBK_QT3DINPUT_QACTIONINPUT_IDX                           = 5,
    SBK_QT3DINPUT_QANALOGAXISINPUT_IDX                       = 6,
    SBK_QT3DINPUT_QAXIS_IDX                                  = 7,
    SBK_QT3DINPUT_QAXISACCUMULATOR_SOURCEAXISTYPE_IDX        = 9,
    SBK_QT3DINPUT_QAXISACCUMULATOR_IDX                       = 8,
    SBK_QT3DINPUT_QAXISSETTING_IDX                           = 10,
    SBK_QT3DINPUT_QBUTTONAXISINPUT_IDX                       = 11,
    SBK_QT3DINPUT_QINPUTASPECT_IDX                           = 12,
    SBK_QT3DINPUT_QINPUTCHORD_IDX                            = 13,
    SBK_QT3DINPUT_QINPUTSEQUENCE_IDX                         = 14,
    SBK_QT3DINPUT_QINPUTSETTINGS_IDX                         = 15,
    SBK_QT3DINPUT_QKEYEVENT_IDX                              = 16,
    SBK_QT3DINPUT_QKEYBOARDDEVICE_IDX                        = 17,
    SBK_QT3DINPUT_QKEYBOARDHANDLER_IDX                       = 18,
    SBK_QT3DINPUT_QLOGICALDEVICE_IDX                         = 19,
    SBK_QT3DINPUT_QMOUSEDEVICE_AXIS_IDX                      = 21,
    SBK_QT3DINPUT_QMOUSEDEVICE_IDX                           = 20,
    SBK_QT3DINPUT_QMOUSEEVENT_BUTTONS_IDX                    = 23,
    SBK_QT3DINPUT_QMOUSEEVENT_MODIFIERS_IDX                  = 24,
    SBK_QT3DINPUT_QMOUSEEVENT_IDX                            = 22,
    SBK_QT3DINPUT_QMOUSEHANDLER_IDX                          = 25,
    SBK_QT3DINPUT_QWHEELEVENT_BUTTONS_IDX                    = 27,
    SBK_QT3DINPUT_QWHEELEVENT_MODIFIERS_IDX                  = 28,
    SBK_QT3DINPUT_QWHEELEVENT_IDX                            = 26,
    SBK_Qt3DInput_IDX_COUNT                                  = 29
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_Qt3DInputTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_Qt3DInputModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_Qt3DInputTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DINPUT_QLIST_INT_IDX                              = 0, // QList<int>
    SBK_QT3DINPUT_QLIST_QT3DINPUT_QABSTRACTACTIONINPUTPTR_IDX = 1, // QList<Qt3DInput::QAbstractActionInput*>
    SBK_QT3DINPUT_QLIST_QT3DCORE_QNODEPTR_IDX                = 2, // QList<Qt3DCore::QNode*>
    SBK_QT3DINPUT_QLIST_QT3DINPUT_QAXISSETTINGPTR_IDX        = 3, // QList<Qt3DInput::QAxisSetting*>
    SBK_QT3DINPUT_QLIST_QT3DINPUT_QABSTRACTAXISINPUTPTR_IDX  = 4, // QList<Qt3DInput::QAbstractAxisInput*>
    SBK_QT3DINPUT_QLIST_QT3DCORE_QENTITYPTR_IDX              = 5, // QList<Qt3DCore::QEntity*>
    SBK_QT3DINPUT_STD_VECTOR_QSHAREDPOINTER_QT3DCORE_QASPECTJOB_IDX = 6, // std::vector<QSharedPointer< Qt3DCore::QAspectJob>>
    SBK_QT3DINPUT_QLIST_QOBJECTPTR_IDX                       = 7, // QList<QObject*>
    SBK_QT3DINPUT_QLIST_QBYTEARRAY_IDX                       = 8, // QList<QByteArray>
    SBK_QT3DINPUT_QLIST_QT3DINPUT_QACTIONPTR_IDX             = 9, // QList<Qt3DInput::QAction*>
    SBK_QT3DINPUT_QLIST_QT3DINPUT_QAXISPTR_IDX               = 10, // QList<Qt3DInput::QAxis*>
    SBK_QT3DINPUT_QLIST_QVARIANT_IDX                         = 11, // QList<QVariant>
    SBK_QT3DINPUT_QLIST_QSTRING_IDX                          = 12, // QList<QString>
    SBK_QT3DINPUT_QMAP_QSTRING_QVARIANT_IDX                  = 13, // QMap<QString,QVariant>
    SBK_Qt3DInput_CONVERTERS_IDX_COUNT                       = 14
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAbstractActionInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QABSTRACTACTIONINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAbstractAxisInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QABSTRACTAXISINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAbstractPhysicalDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QABSTRACTPHYSICALDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAction >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QACTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QActionInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QACTIONINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAnalogAxisInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QANALOGAXISINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxisAccumulator::SourceAxisType >() { return SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QAXISACCUMULATOR_SOURCEAXISTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxisAccumulator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QAXISACCUMULATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxisSetting >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QAXISSETTING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QButtonAxisInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QBUTTONAXISINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputAspect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTASPECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputChord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTCHORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputSequence >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTSEQUENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTSETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QKeyEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QKEYEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QKeyboardDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QKEYBOARDDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QKeyboardHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QKEYBOARDHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QLogicalDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QLOGICALDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseDevice::Axis >() { return SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEDEVICE_AXIS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseEvent::Buttons >() { return SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEEVENT_BUTTONS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseEvent::Modifiers >() { return SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEEVENT_MODIFIERS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QWheelEvent::Buttons >() { return SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QWHEELEVENT_BUTTONS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QWheelEvent::Modifiers >() { return SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QWHEELEVENT_MODIFIERS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QWheelEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DInputTypes[SBK_QT3DINPUT_QWHEELEVENT_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QT3DINPUT_PYTHON_H

