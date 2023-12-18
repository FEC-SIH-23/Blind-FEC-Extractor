// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTTEST_PYTHON_H
#define SBK_QTTEST_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtwidgets_python.h>

// Bound library includes
#include <QtTest/qabstractitemmodeltester.h>
#include <QtTest/qbenchmarkmetric.h>
#include <QtTest/qtestkeyboard.h>
#include <QtTest/qtestmouse.h>
#include <QtTest/qttestglobal.h>
class QSignalSpy;

namespace QTest {
    class PySideQTouchEventSequence;
}
// Type indices
enum : int {
    SBK_QABSTRACTITEMMODELTESTER_FAILUREREPORTINGMODE_IDX    = 1,
    SBK_QABSTRACTITEMMODELTESTER_IDX                         = 0,
    SBK_QSIGNALSPY_IDX                                       = 2,
    SBK_QTEST_TESTFAILMODE_IDX                               = 9,
    SBK_QTEST_COMPARISONOPERATION_IDX                        = 4,
    SBK_QTEST_QBENCHMARKMETRIC_IDX                           = 8,
    SBK_QTEST_KEYACTION_IDX                                  = 5,
    SBK_QTEST_MOUSEACTION_IDX                                = 6,
    SBK_QtTestQTEST_IDX                                      = 3,
    SBK_QTEST_PYSIDEQTOUCHEVENTSEQUENCE_IDX                  = 7,
    SBK_QtTest_IDX_COUNT                                     = 10
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtTestTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtTestModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtTestTypeConverters;

// Converter indices
enum : int {
    SBK_QTTEST_QLIST_INT_IDX                                 = 0, // QList<int>
    SBK_QTTEST_QLIST_QVARIANT_IDX                            = 1, // QList<QVariant>
    SBK_QTTEST_QLIST_QOBJECTPTR_IDX                          = 2, // QList<QObject*>
    SBK_QTTEST_QLIST_QBYTEARRAY_IDX                          = 3, // QList<QByteArray>
    SBK_QTTEST_QLIST_QSTRING_IDX                             = 4, // QList<QString>
    SBK_QTTEST_QMAP_QSTRING_QVARIANT_IDX                     = 5, // QMap<QString,QVariant>
    SBK_QtTest_CONVERTERS_IDX_COUNT                          = 6
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractItemModelTester::FailureReportingMode >() { return SbkPySide6_QtTestTypes[SBK_QABSTRACTITEMMODELTESTER_FAILUREREPORTINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractItemModelTester >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtTestTypes[SBK_QABSTRACTITEMMODELTESTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSignalSpy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtTestTypes[SBK_QSIGNALSPY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTest::TestFailMode >() { return SbkPySide6_QtTestTypes[SBK_QTEST_TESTFAILMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTest::ComparisonOperation >() { return SbkPySide6_QtTestTypes[SBK_QTEST_COMPARISONOPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTest::QBenchmarkMetric >() { return SbkPySide6_QtTestTypes[SBK_QTEST_QBENCHMARKMETRIC_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTest::KeyAction >() { return SbkPySide6_QtTestTypes[SBK_QTEST_KEYACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTest::MouseAction >() { return SbkPySide6_QtTestTypes[SBK_QTEST_MOUSEACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTest::PySideQTouchEventSequence >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtTestTypes[SBK_QTEST_PYSIDEQTOUCHEVENTSEQUENCE_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTTEST_PYTHON_H

