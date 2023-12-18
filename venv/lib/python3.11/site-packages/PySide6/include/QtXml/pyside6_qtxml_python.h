// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTXML_PYTHON_H
#define SBK_QTXML_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QtXml/qdom.h>
class QDomAttr;
class QDomCDATASection;
class QDomCharacterData;
class QDomComment;
class QDomDocumentFragment;
class QDomDocumentType;
class QDomElement;
class QDomEntity;
class QDomEntityReference;
class QDomNamedNodeMap;
class QDomNodeList;
class QDomNotation;
class QDomProcessingInstruction;
class QDomText;
// Type indices
enum : int {
    SBK_QDOMATTR_IDX                                         = 0,
    SBK_QDOMCDATASECTION_IDX                                 = 1,
    SBK_QDOMCHARACTERDATA_IDX                                = 2,
    SBK_QDOMCOMMENT_IDX                                      = 3,
    SBK_QDOMDOCUMENT_PARSEOPTION_IDX                         = 5,
    SBK_QFLAGS_QDOMDOCUMENT_PARSEOPTION_IDX                  = 21,
    SBK_QDOMDOCUMENT_IDX                                     = 4,
    SBK_QDOMDOCUMENTFRAGMENT_IDX                             = 6,
    SBK_QDOMDOCUMENTTYPE_IDX                                 = 7,
    SBK_QDOMELEMENT_IDX                                      = 8,
    SBK_QDOMENTITY_IDX                                       = 9,
    SBK_QDOMENTITYREFERENCE_IDX                              = 10,
    SBK_QDOMIMPLEMENTATION_INVALIDDATAPOLICY_IDX             = 12,
    SBK_QDOMIMPLEMENTATION_IDX                               = 11,
    SBK_QDOMNAMEDNODEMAP_IDX                                 = 13,
    SBK_QDOMNODE_NODETYPE_IDX                                = 16,
    SBK_QDOMNODE_ENCODINGPOLICY_IDX                          = 15,
    SBK_QDOMNODE_IDX                                         = 14,
    SBK_QDOMNODELIST_IDX                                     = 17,
    SBK_QDOMNOTATION_IDX                                     = 18,
    SBK_QDOMPROCESSINGINSTRUCTION_IDX                        = 19,
    SBK_QDOMTEXT_IDX                                         = 20,
    SBK_QtXml_IDX_COUNT                                      = 22
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtXmlTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtXmlModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtXmlTypeConverters;

// Converter indices
enum : int {
    SBK_QTXML_QLIST_INT_IDX                                  = 0, // QList<int>
    SBK_QTXML_QLIST_QVARIANT_IDX                             = 1, // QList<QVariant>
    SBK_QTXML_QLIST_QSTRING_IDX                              = 2, // QList<QString>
    SBK_QTXML_QMAP_QSTRING_QVARIANT_IDX                      = 3, // QMap<QString,QVariant>
    SBK_QtXml_CONVERTERS_IDX_COUNT                           = 4
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QDomAttr >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMATTR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomCDATASection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMCDATASECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomCharacterData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMCHARACTERDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomComment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMCOMMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomDocument::ParseOption >() { return SbkPySide6_QtXmlTypes[SBK_QDOMDOCUMENT_PARSEOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QDomDocument::ParseOption> >() { return SbkPySide6_QtXmlTypes[SBK_QFLAGS_QDOMDOCUMENT_PARSEOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDomDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomDocumentFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMDOCUMENTFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomDocumentType >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMDOCUMENTTYPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomElement >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMELEMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomEntityReference >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMENTITYREFERENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomImplementation::InvalidDataPolicy >() { return SbkPySide6_QtXmlTypes[SBK_QDOMIMPLEMENTATION_INVALIDDATAPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDomImplementation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMIMPLEMENTATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNamedNodeMap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMNAMEDNODEMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNode::NodeType >() { return SbkPySide6_QtXmlTypes[SBK_QDOMNODE_NODETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDomNode::EncodingPolicy >() { return SbkPySide6_QtXmlTypes[SBK_QDOMNODE_ENCODINGPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDomNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNodeList >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMNODELIST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNotation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMNOTATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomProcessingInstruction >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMPROCESSINGINSTRUCTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomText >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtXmlTypes[SBK_QDOMTEXT_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTXML_PYTHON_H

