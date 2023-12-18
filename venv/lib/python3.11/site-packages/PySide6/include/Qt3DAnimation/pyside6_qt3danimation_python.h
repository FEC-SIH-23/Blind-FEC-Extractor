// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QT3DANIMATION_PYTHON_H
#define SBK_QT3DANIMATION_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qt3drender_python.h>
#include <pyside6_qt3dcore_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <Qt3DAnimation/qabstractanimation.h>
#include <Qt3DAnimation/qabstractclipanimator.h>
#include <Qt3DAnimation/qanimationcallback.h>
#include <Qt3DAnimation/qanimationcliploader.h>
#include <Qt3DAnimation/qkeyframe.h>
#include <Qt3DAnimation/qkeyframeanimation.h>
#include <Qt3DAnimation/qmorphinganimation.h>

namespace Qt3DAnimation {
    class QAbstractAnimationClip;
    class QAbstractChannelMapping;
    class QAbstractClipBlendNode;
    class QAdditiveClipBlend;
    class QAnimationAspect;
    class QAnimationClip;
    class QAnimationClipData;
    class QAnimationController;
    class QAnimationGroup;
    class QBlendedClipAnimator;
    class QChannel;
    class QChannelComponent;
    class QChannelMapper;
    class QChannelMapping;
    class QClipAnimator;
    class QClipBlendValue;
    class QClock;
    class QLerpClipBlend;
    class QMorphTarget;
    class QSkeletonMapping;
    class QVertexBlendAnimation;
}
// Type indices
enum : int {
    SBK_Qt3DAnimationQT3DANIMATION_IDX                       = 0,
    SBK_QT3DANIMATION_QABSTRACTANIMATION_ANIMATIONTYPE_IDX   = 2,
    SBK_QT3DANIMATION_QABSTRACTANIMATION_IDX                 = 1,
    SBK_QT3DANIMATION_QABSTRACTANIMATIONCLIP_IDX             = 3,
    SBK_QT3DANIMATION_QABSTRACTCHANNELMAPPING_IDX            = 4,
    SBK_QT3DANIMATION_QABSTRACTCLIPANIMATOR_LOOPS_IDX        = 6,
    SBK_QT3DANIMATION_QABSTRACTCLIPANIMATOR_IDX              = 5,
    SBK_QT3DANIMATION_QABSTRACTCLIPBLENDNODE_IDX             = 7,
    SBK_QT3DANIMATION_QADDITIVECLIPBLEND_IDX                 = 8,
    SBK_QT3DANIMATION_QANIMATIONASPECT_IDX                   = 9,
    SBK_QT3DANIMATION_QANIMATIONCALLBACK_FLAG_IDX            = 11,
    SBK_QT3DANIMATION_QANIMATIONCALLBACK_IDX                 = 10,
    SBK_QT3DANIMATION_QANIMATIONCLIP_IDX                     = 12,
    SBK_QT3DANIMATION_QANIMATIONCLIPDATA_IDX                 = 13,
    SBK_QT3DANIMATION_QANIMATIONCLIPLOADER_STATUS_IDX        = 15,
    SBK_QT3DANIMATION_QANIMATIONCLIPLOADER_IDX               = 14,
    SBK_QT3DANIMATION_QANIMATIONCONTROLLER_IDX               = 16,
    SBK_QT3DANIMATION_QANIMATIONGROUP_IDX                    = 17,
    SBK_QT3DANIMATION_QBLENDEDCLIPANIMATOR_IDX               = 18,
    SBK_QT3DANIMATION_QCHANNEL_IDX                           = 19,
    SBK_QT3DANIMATION_QCHANNELCOMPONENT_IDX                  = 20,
    SBK_QT3DANIMATION_QCHANNELMAPPER_IDX                     = 21,
    SBK_QT3DANIMATION_QCHANNELMAPPING_IDX                    = 22,
    SBK_QT3DANIMATION_QCLIPANIMATOR_IDX                      = 23,
    SBK_QT3DANIMATION_QCLIPBLENDVALUE_IDX                    = 24,
    SBK_QT3DANIMATION_QCLOCK_IDX                             = 25,
    SBK_QT3DANIMATION_QKEYFRAME_INTERPOLATIONTYPE_IDX        = 27,
    SBK_QT3DANIMATION_QKEYFRAME_IDX                          = 26,
    SBK_QT3DANIMATION_QKEYFRAMEANIMATION_REPEATMODE_IDX      = 29,
    SBK_QT3DANIMATION_QKEYFRAMEANIMATION_IDX                 = 28,
    SBK_QT3DANIMATION_QLERPCLIPBLEND_IDX                     = 30,
    SBK_QT3DANIMATION_QMORPHTARGET_IDX                       = 31,
    SBK_QT3DANIMATION_QMORPHINGANIMATION_METHOD_IDX          = 33,
    SBK_QT3DANIMATION_QMORPHINGANIMATION_IDX                 = 32,
    SBK_QT3DANIMATION_QSKELETONMAPPING_IDX                   = 34,
    SBK_QT3DANIMATION_QVERTEXBLENDANIMATION_IDX              = 35,
    SBK_Qt3DAnimation_IDX_COUNT                              = 36
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_Qt3DAnimationTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_Qt3DAnimationModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_Qt3DAnimationTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DANIMATION_QLIST_INT_IDX                          = 0, // QList<int>
    SBK_QT3DANIMATION_QLIST_FLOAT_IDX                        = 1, // QList<float>
    SBK_QT3DANIMATION_QLIST_QT3DCORE_QTRANSFORMPTR_IDX       = 2, // QList<Qt3DCore::QTransform*>
    SBK_QT3DANIMATION_QLIST_QT3DANIMATION_QMORPHTARGETPTR_IDX = 3, // QList<Qt3DAnimation::QMorphTarget*>
    SBK_QT3DANIMATION_QLIST_QOBJECTPTR_IDX                   = 4, // QList<QObject*>
    SBK_QT3DANIMATION_QLIST_QBYTEARRAY_IDX                   = 5, // QList<QByteArray>
    SBK_QT3DANIMATION_QLIST_QT3DCORE_QNODEPTR_IDX            = 6, // QList<Qt3DCore::QNode*>
    SBK_QT3DANIMATION_QLIST_QT3DANIMATION_QABSTRACTCHANNELMAPPINGPTR_IDX = 7, // QList<Qt3DAnimation::QAbstractChannelMapping*>
    SBK_QT3DANIMATION_QLIST_QT3DCORE_QENTITYPTR_IDX          = 8, // QList<Qt3DCore::QEntity*>
    SBK_QT3DANIMATION_STD_VECTOR_QSHAREDPOINTER_QT3DCORE_QASPECTJOB_IDX = 9, // std::vector<QSharedPointer< Qt3DCore::QAspectJob>>
    SBK_QT3DANIMATION_QLIST_QT3DANIMATION_QABSTRACTANIMATIONPTR_IDX = 10, // QList<Qt3DAnimation::QAbstractAnimation*>
    SBK_QT3DANIMATION_QLIST_QT3DANIMATION_QANIMATIONGROUPPTR_IDX = 11, // QList<Qt3DAnimation::QAnimationGroup*>
    SBK_QT3DANIMATION_QLIST_QT3DCORE_QATTRIBUTEPTR_IDX       = 12, // QList<Qt3DCore::QAttribute*>
    SBK_QT3DANIMATION_QLIST_QVARIANT_IDX                     = 13, // QList<QVariant>
    SBK_QT3DANIMATION_QLIST_QSTRING_IDX                      = 14, // QList<QString>
    SBK_QT3DANIMATION_QMAP_QSTRING_QVARIANT_IDX              = 15, // QMap<QString,QVariant>
    SBK_Qt3DAnimation_CONVERTERS_IDX_COUNT                   = 16
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAbstractAnimation::AnimationType >() { return SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QABSTRACTANIMATION_ANIMATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAbstractAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QABSTRACTANIMATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAbstractAnimationClip >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QABSTRACTANIMATIONCLIP_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAbstractChannelMapping >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QABSTRACTCHANNELMAPPING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAbstractClipAnimator::Loops >() { return SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QABSTRACTCLIPANIMATOR_LOOPS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAbstractClipAnimator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QABSTRACTCLIPANIMATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAbstractClipBlendNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QABSTRACTCLIPBLENDNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAdditiveClipBlend >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QADDITIVECLIPBLEND_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationAspect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONASPECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationCallback::Flag >() { return SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONCALLBACK_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationCallback >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONCALLBACK_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationClip >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONCLIP_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationClipData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONCLIPDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationClipLoader::Status >() { return SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONCLIPLOADER_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationClipLoader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONCLIPLOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONCONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QAnimationGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QANIMATIONGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QBlendedClipAnimator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QBLENDEDCLIPANIMATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QChannel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QCHANNEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QChannelComponent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QCHANNELCOMPONENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QChannelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QCHANNELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QChannelMapping >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QCHANNELMAPPING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QClipAnimator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QCLIPANIMATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QClipBlendValue >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QCLIPBLENDVALUE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QClock >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QCLOCK_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QKeyFrame::InterpolationType >() { return SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QKEYFRAME_INTERPOLATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QKeyFrame >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QKEYFRAME_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QKeyframeAnimation::RepeatMode >() { return SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QKEYFRAMEANIMATION_REPEATMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QKeyframeAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QKEYFRAMEANIMATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QLerpClipBlend >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QLERPCLIPBLEND_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QMorphTarget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QMORPHTARGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QMorphingAnimation::Method >() { return SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QMORPHINGANIMATION_METHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QMorphingAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QMORPHINGANIMATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QSkeletonMapping >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QSKELETONMAPPING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DAnimation::QVertexBlendAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_Qt3DAnimationTypes[SBK_QT3DANIMATION_QVERTEXBLENDANIMATION_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QT3DANIMATION_PYTHON_H

