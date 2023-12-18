/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace LLVM {
class CConvAttr;
class ComdatAttr;
class AccessGroupAttr;
class AliasScopeAttr;
class AliasScopeDomainAttr;
class DIBasicTypeAttr;
class DICompileUnitAttr;
class DICompositeTypeAttr;
class DIDerivedTypeAttr;
class DIFileAttr;
class DILabelAttr;
class DILexicalBlockAttr;
class DILexicalBlockFileAttr;
class DILocalVariableAttr;
class DIModuleAttr;
class DINamespaceAttr;
class DINullTypeAttr;
class DISubprogramAttr;
class DISubrangeAttr;
class DISubroutineTypeAttr;
class FastmathFlagsAttr;
class MemoryEffectsAttr;
class TBAAMemberAttr;
class TBAARootAttr;
class TBAATagAttr;
class TBAATypeDescriptorAttr;
class VScaleRangeAttr;
class LinkageAttr;
class LoopAnnotationAttr;
class LoopDistributeAttr;
class LoopInterleaveAttr;
class LoopLICMAttr;
class LoopPeeledAttr;
class LoopPipelineAttr;
class LoopUnrollAndJamAttr;
class LoopUnrollAttr;
class LoopUnswitchAttr;
class LoopVectorizeAttr;
namespace detail {
struct CConvAttrStorage;
} // namespace detail
class CConvAttr : public ::mlir::Attribute::AttrBase<CConvAttr, ::mlir::Attribute, detail::CConvAttrStorage> {
public:
  using Base::Base;
  static CConvAttr get(::mlir::MLIRContext *context, CConv CallingConv);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"cconv"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  CConv getCallingConv() const;
};
namespace detail {
struct ComdatAttrStorage;
} // namespace detail
class ComdatAttr : public ::mlir::Attribute::AttrBase<ComdatAttr, ::mlir::Attribute, detail::ComdatAttrStorage> {
public:
  using Base::Base;
  static ComdatAttr get(::mlir::MLIRContext *context, comdat::Comdat comdat);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"comdat"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  comdat::Comdat getComdat() const;
};
namespace detail {
struct AccessGroupAttrStorage;
} // namespace detail
class AccessGroupAttr : public ::mlir::Attribute::AttrBase<AccessGroupAttr, ::mlir::Attribute, detail::AccessGroupAttrStorage> {
public:
  using Base::Base;
  static AccessGroupAttr get(::mlir::MLIRContext *context, DistinctAttr id);
  static AccessGroupAttr get(::mlir::MLIRContext *context);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"access_group"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DistinctAttr getId() const;
};
namespace detail {
struct AliasScopeAttrStorage;
} // namespace detail
class AliasScopeAttr : public ::mlir::Attribute::AttrBase<AliasScopeAttr, ::mlir::Attribute, detail::AliasScopeAttrStorage> {
public:
  using Base::Base;
  static AliasScopeAttr get(::mlir::MLIRContext *context, DistinctAttr id, AliasScopeDomainAttr domain, StringAttr description);
  static AliasScopeAttr get(AliasScopeDomainAttr domain, StringAttr description = {});
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"alias_scope"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DistinctAttr getId() const;
  AliasScopeDomainAttr getDomain() const;
  StringAttr getDescription() const;
};
namespace detail {
struct AliasScopeDomainAttrStorage;
} // namespace detail
class AliasScopeDomainAttr : public ::mlir::Attribute::AttrBase<AliasScopeDomainAttr, ::mlir::Attribute, detail::AliasScopeDomainAttrStorage> {
public:
  using Base::Base;
  static AliasScopeDomainAttr get(::mlir::MLIRContext *context, DistinctAttr id, StringAttr description);
  static AliasScopeDomainAttr get(::mlir::MLIRContext *context, StringAttr description = {});
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"alias_scope_domain"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DistinctAttr getId() const;
  StringAttr getDescription() const;
};
namespace detail {
struct DIBasicTypeAttrStorage;
} // namespace detail
class DIBasicTypeAttr : public ::mlir::Attribute::AttrBase<DIBasicTypeAttr, DITypeAttr, detail::DIBasicTypeAttrStorage> {
public:
  using Base::Base;
  static DIBasicTypeAttr get(::mlir::MLIRContext *context, unsigned tag, StringAttr name, uint64_t sizeInBits, unsigned encoding);
  static DIBasicTypeAttr get(::mlir::MLIRContext *context, unsigned tag, const Twine &name, uint64_t sizeInBits, unsigned encoding);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_basic_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getTag() const;
  StringAttr getName() const;
  uint64_t getSizeInBits() const;
  unsigned getEncoding() const;
};
namespace detail {
struct DICompileUnitAttrStorage;
} // namespace detail
class DICompileUnitAttr : public ::mlir::Attribute::AttrBase<DICompileUnitAttr, DIScopeAttr, detail::DICompileUnitAttrStorage> {
public:
  using Base::Base;
  static DICompileUnitAttr get(::mlir::MLIRContext *context, unsigned sourceLanguage, DIFileAttr file, StringAttr producer, bool isOptimized, DIEmissionKind emissionKind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_compile_unit"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getSourceLanguage() const;
  DIFileAttr getFile() const;
  StringAttr getProducer() const;
  bool getIsOptimized() const;
  DIEmissionKind getEmissionKind() const;
};
namespace detail {
struct DICompositeTypeAttrStorage;
} // namespace detail
class DICompositeTypeAttr : public ::mlir::Attribute::AttrBase<DICompositeTypeAttr, DITypeAttr, detail::DICompositeTypeAttrStorage> {
public:
  using Base::Base;
  static DICompositeTypeAttr get(::mlir::MLIRContext *context, unsigned tag, StringAttr name, DIFileAttr file, uint32_t line, DIScopeAttr scope, DITypeAttr baseType, DIFlags flags, uint64_t sizeInBits, uint64_t alignInBits, ::llvm::ArrayRef<DINodeAttr> elements);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_composite_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getTag() const;
  StringAttr getName() const;
  DIFileAttr getFile() const;
  uint32_t getLine() const;
  DIScopeAttr getScope() const;
  DITypeAttr getBaseType() const;
  DIFlags getFlags() const;
  uint64_t getSizeInBits() const;
  uint64_t getAlignInBits() const;
  ::llvm::ArrayRef<DINodeAttr> getElements() const;
};
namespace detail {
struct DIDerivedTypeAttrStorage;
} // namespace detail
class DIDerivedTypeAttr : public ::mlir::Attribute::AttrBase<DIDerivedTypeAttr, DITypeAttr, detail::DIDerivedTypeAttrStorage> {
public:
  using Base::Base;
  static DIDerivedTypeAttr get(::mlir::MLIRContext *context, unsigned tag, StringAttr name, DITypeAttr baseType, uint64_t sizeInBits, uint32_t alignInBits, uint64_t offsetInBits);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_derived_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getTag() const;
  StringAttr getName() const;
  DITypeAttr getBaseType() const;
  uint64_t getSizeInBits() const;
  uint32_t getAlignInBits() const;
  uint64_t getOffsetInBits() const;
};
namespace detail {
struct DIFileAttrStorage;
} // namespace detail
class DIFileAttr : public ::mlir::Attribute::AttrBase<DIFileAttr, DIScopeAttr, detail::DIFileAttrStorage> {
public:
  using Base::Base;
  static DIFileAttr get(::mlir::MLIRContext *context, StringAttr name, StringAttr directory);
  static DIFileAttr get(::mlir::MLIRContext *context, StringRef name, StringRef directory);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_file"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  StringAttr getName() const;
  StringAttr getDirectory() const;
};
namespace detail {
struct DILabelAttrStorage;
} // namespace detail
class DILabelAttr : public ::mlir::Attribute::AttrBase<DILabelAttr, DINodeAttr, detail::DILabelAttrStorage> {
public:
  using Base::Base;
  static DILabelAttr get(::mlir::MLIRContext *context, DIScopeAttr scope, StringAttr name, DIFileAttr file, unsigned line);
  static DILabelAttr get(DIScopeAttr scope, StringRef name, DIFileAttr file, unsigned line);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_label"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DIScopeAttr getScope() const;
  StringAttr getName() const;
  DIFileAttr getFile() const;
  unsigned getLine() const;
};
namespace detail {
struct DILexicalBlockAttrStorage;
} // namespace detail
class DILexicalBlockAttr : public ::mlir::Attribute::AttrBase<DILexicalBlockAttr, DIScopeAttr, detail::DILexicalBlockAttrStorage> {
public:
  using Base::Base;
  static DILexicalBlockAttr get(::mlir::MLIRContext *context, DIScopeAttr scope, DIFileAttr file, unsigned line, unsigned column);
  static DILexicalBlockAttr get(DIScopeAttr scope, DIFileAttr file, unsigned line, unsigned column);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_lexical_block"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DIScopeAttr getScope() const;
  DIFileAttr getFile() const;
  unsigned getLine() const;
  unsigned getColumn() const;
};
namespace detail {
struct DILexicalBlockFileAttrStorage;
} // namespace detail
class DILexicalBlockFileAttr : public ::mlir::Attribute::AttrBase<DILexicalBlockFileAttr, DIScopeAttr, detail::DILexicalBlockFileAttrStorage> {
public:
  using Base::Base;
  static DILexicalBlockFileAttr get(::mlir::MLIRContext *context, DIScopeAttr scope, DIFileAttr file, unsigned discriminator);
  static DILexicalBlockFileAttr get(DIScopeAttr scope, DIFileAttr file, unsigned discriminator);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_lexical_block_file"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DIScopeAttr getScope() const;
  DIFileAttr getFile() const;
  unsigned getDiscriminator() const;
};
namespace detail {
struct DILocalVariableAttrStorage;
} // namespace detail
class DILocalVariableAttr : public ::mlir::Attribute::AttrBase<DILocalVariableAttr, DINodeAttr, detail::DILocalVariableAttrStorage> {
public:
  using Base::Base;
  static DILocalVariableAttr get(::mlir::MLIRContext *context, DIScopeAttr scope, StringAttr name, DIFileAttr file, unsigned line, unsigned arg, unsigned alignInBits, DITypeAttr type);
  static DILocalVariableAttr get(DIScopeAttr scope, StringRef name, DIFileAttr file, unsigned line, unsigned arg, unsigned alignInBits, DITypeAttr type);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_local_variable"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DIScopeAttr getScope() const;
  StringAttr getName() const;
  DIFileAttr getFile() const;
  unsigned getLine() const;
  unsigned getArg() const;
  unsigned getAlignInBits() const;
  DITypeAttr getType() const;
};
namespace detail {
struct DIModuleAttrStorage;
} // namespace detail
class DIModuleAttr : public ::mlir::Attribute::AttrBase<DIModuleAttr, DIScopeAttr, detail::DIModuleAttrStorage> {
public:
  using Base::Base;
  static DIModuleAttr get(::mlir::MLIRContext *context, DIFileAttr file, DIScopeAttr scope, StringAttr name, StringAttr configMacros, StringAttr includePath, StringAttr apinotes, unsigned line, bool isDecl);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_module"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DIFileAttr getFile() const;
  DIScopeAttr getScope() const;
  StringAttr getName() const;
  StringAttr getConfigMacros() const;
  StringAttr getIncludePath() const;
  StringAttr getApinotes() const;
  unsigned getLine() const;
  bool getIsDecl() const;
};
namespace detail {
struct DINamespaceAttrStorage;
} // namespace detail
class DINamespaceAttr : public ::mlir::Attribute::AttrBase<DINamespaceAttr, DIScopeAttr, detail::DINamespaceAttrStorage> {
public:
  using Base::Base;
  static DINamespaceAttr get(::mlir::MLIRContext *context, StringAttr name, DIScopeAttr scope, bool exportSymbols);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_namespace"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  StringAttr getName() const;
  DIScopeAttr getScope() const;
  bool getExportSymbols() const;
};
class DINullTypeAttr : public ::mlir::Attribute::AttrBase<DINullTypeAttr, DITypeAttr, ::mlir::AttributeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_null_type"};
  }

};
namespace detail {
struct DISubprogramAttrStorage;
} // namespace detail
class DISubprogramAttr : public ::mlir::Attribute::AttrBase<DISubprogramAttr, DIScopeAttr, detail::DISubprogramAttrStorage> {
public:
  using Base::Base;
  static DISubprogramAttr get(::mlir::MLIRContext *context, DICompileUnitAttr compileUnit, DIScopeAttr scope, StringAttr name, StringAttr linkageName, DIFileAttr file, unsigned line, unsigned scopeLine, DISubprogramFlags subprogramFlags, DISubroutineTypeAttr type);
  static DISubprogramAttr get(DICompileUnitAttr compileUnit, DIScopeAttr scope, StringRef name, StringRef linkageName, DIFileAttr file, unsigned line, unsigned scopeLine, DISubprogramFlags subprogramFlags, DISubroutineTypeAttr type);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_subprogram"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DICompileUnitAttr getCompileUnit() const;
  DIScopeAttr getScope() const;
  StringAttr getName() const;
  StringAttr getLinkageName() const;
  DIFileAttr getFile() const;
  unsigned getLine() const;
  unsigned getScopeLine() const;
  DISubprogramFlags getSubprogramFlags() const;
  DISubroutineTypeAttr getType() const;
};
namespace detail {
struct DISubrangeAttrStorage;
} // namespace detail
class DISubrangeAttr : public ::mlir::Attribute::AttrBase<DISubrangeAttr, DINodeAttr, detail::DISubrangeAttrStorage> {
public:
  using Base::Base;
  static DISubrangeAttr get(::mlir::MLIRContext *context, IntegerAttr count, IntegerAttr lowerBound, IntegerAttr upperBound, IntegerAttr stride);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_subrange"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  IntegerAttr getCount() const;
  IntegerAttr getLowerBound() const;
  IntegerAttr getUpperBound() const;
  IntegerAttr getStride() const;
};
namespace detail {
struct DISubroutineTypeAttrStorage;
} // namespace detail
class DISubroutineTypeAttr : public ::mlir::Attribute::AttrBase<DISubroutineTypeAttr, DITypeAttr, detail::DISubroutineTypeAttrStorage> {
public:
  using Base::Base;
  static DISubroutineTypeAttr get(::mlir::MLIRContext *context, unsigned callingConvention, ::llvm::ArrayRef<DITypeAttr> types);
  static DISubroutineTypeAttr get(::mlir::MLIRContext *context, ArrayRef<DITypeAttr> types);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"di_subroutine_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getCallingConvention() const;
  ::llvm::ArrayRef<DITypeAttr> getTypes() const;
};
namespace detail {
struct FastmathFlagsAttrStorage;
} // namespace detail
class FastmathFlagsAttr : public ::mlir::Attribute::AttrBase<FastmathFlagsAttr, ::mlir::Attribute, detail::FastmathFlagsAttrStorage> {
public:
  using Base::Base;
  static FastmathFlagsAttr get(::mlir::MLIRContext *context, ::mlir::LLVM::FastmathFlags value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"fastmath"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::LLVM::FastmathFlags getValue() const;
};
namespace detail {
struct MemoryEffectsAttrStorage;
} // namespace detail
class MemoryEffectsAttr : public ::mlir::Attribute::AttrBase<MemoryEffectsAttr, ::mlir::Attribute, detail::MemoryEffectsAttrStorage> {
public:
  using Base::Base;
  bool isReadWrite();
  static MemoryEffectsAttr get(::mlir::MLIRContext *context, ModRefInfo other, ModRefInfo argMem, ModRefInfo inaccessibleMem);
  static MemoryEffectsAttr get(::mlir::MLIRContext *context, ArrayRef<ModRefInfo> memInfoArgs);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"memory_effects"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ModRefInfo getOther() const;
  ModRefInfo getArgMem() const;
  ModRefInfo getInaccessibleMem() const;
};
namespace detail {
struct TBAAMemberAttrStorage;
} // namespace detail
class TBAAMemberAttr : public ::mlir::Attribute::AttrBase<TBAAMemberAttr, ::mlir::Attribute, detail::TBAAMemberAttrStorage> {
public:
  using Base::Base;
  static TBAAMemberAttr get(::mlir::MLIRContext *context, TBAANodeAttr typeDesc, int64_t offset);
  static TBAAMemberAttr get(TBAANodeAttr typeDesc, int64_t offset);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"tbaa_member"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  TBAANodeAttr getTypeDesc() const;
  int64_t getOffset() const;
};
namespace detail {
struct TBAARootAttrStorage;
} // namespace detail
class TBAARootAttr : public ::mlir::Attribute::AttrBase<TBAARootAttr, TBAANodeAttr, detail::TBAARootAttrStorage> {
public:
  using Base::Base;
  static TBAARootAttr get(::mlir::MLIRContext *context, StringAttr id);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"tbaa_root"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  StringAttr getId() const;
};
namespace detail {
struct TBAATagAttrStorage;
} // namespace detail
class TBAATagAttr : public ::mlir::Attribute::AttrBase<TBAATagAttr, ::mlir::Attribute, detail::TBAATagAttrStorage> {
public:
  using Base::Base;
  static TBAATagAttr get(::mlir::MLIRContext *context, TBAATypeDescriptorAttr base_type, TBAATypeDescriptorAttr access_type, int64_t offset, bool constant);
  static TBAATagAttr get(TBAATypeDescriptorAttr baseType, TBAATypeDescriptorAttr accessType, int64_t offset);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"tbaa_tag"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  TBAATypeDescriptorAttr getBaseType() const;
  TBAATypeDescriptorAttr getAccessType() const;
  int64_t getOffset() const;
  bool getConstant() const;
};
namespace detail {
struct TBAATypeDescriptorAttrStorage;
} // namespace detail
class TBAATypeDescriptorAttr : public ::mlir::Attribute::AttrBase<TBAATypeDescriptorAttr, TBAANodeAttr, detail::TBAATypeDescriptorAttrStorage> {
public:
  using Base::Base;
  static TBAATypeDescriptorAttr get(::mlir::MLIRContext *context, ::llvm::StringRef id, ::llvm::ArrayRef<TBAAMemberAttr> members);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"tbaa_type_desc"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::StringRef getId() const;
  ::llvm::ArrayRef<TBAAMemberAttr> getMembers() const;
};
namespace detail {
struct VScaleRangeAttrStorage;
} // namespace detail
class VScaleRangeAttr : public ::mlir::Attribute::AttrBase<VScaleRangeAttr, ::mlir::Attribute, detail::VScaleRangeAttrStorage> {
public:
  using Base::Base;
  static VScaleRangeAttr get(::mlir::MLIRContext *context, IntegerAttr minRange, IntegerAttr maxRange);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"vscale_range"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  IntegerAttr getMinRange() const;
  IntegerAttr getMaxRange() const;
};
namespace detail {
struct LinkageAttrStorage;
} // namespace detail
class LinkageAttr : public ::mlir::Attribute::AttrBase<LinkageAttr, ::mlir::Attribute, detail::LinkageAttrStorage> {
public:
  using Base::Base;
  static LinkageAttr get(::mlir::MLIRContext *context, linkage::Linkage linkage);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"linkage"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  linkage::Linkage getLinkage() const;
};
namespace detail {
struct LoopAnnotationAttrStorage;
} // namespace detail
class LoopAnnotationAttr : public ::mlir::Attribute::AttrBase<LoopAnnotationAttr, ::mlir::Attribute, detail::LoopAnnotationAttrStorage> {
public:
  using Base::Base;
  static LoopAnnotationAttr get(::mlir::MLIRContext *context, BoolAttr disableNonforced, LoopVectorizeAttr vectorize, LoopInterleaveAttr interleave, LoopUnrollAttr unroll, LoopUnrollAndJamAttr unrollAndJam, LoopLICMAttr licm, LoopDistributeAttr distribute, LoopPipelineAttr pipeline, LoopPeeledAttr peeled, LoopUnswitchAttr unswitch, BoolAttr mustProgress, BoolAttr isVectorized, ::llvm::ArrayRef<AccessGroupAttr> parallelAccesses, FusedLoc startLoc, FusedLoc endLoc);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_annotation"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getDisableNonforced() const;
  LoopVectorizeAttr getVectorize() const;
  LoopInterleaveAttr getInterleave() const;
  LoopUnrollAttr getUnroll() const;
  LoopUnrollAndJamAttr getUnrollAndJam() const;
  LoopLICMAttr getLicm() const;
  LoopDistributeAttr getDistribute() const;
  LoopPipelineAttr getPipeline() const;
  LoopPeeledAttr getPeeled() const;
  LoopUnswitchAttr getUnswitch() const;
  BoolAttr getMustProgress() const;
  BoolAttr getIsVectorized() const;
  ::llvm::ArrayRef<AccessGroupAttr> getParallelAccesses() const;
  FusedLoc getStartLoc() const;
  FusedLoc getEndLoc() const;
};
namespace detail {
struct LoopDistributeAttrStorage;
} // namespace detail
class LoopDistributeAttr : public ::mlir::Attribute::AttrBase<LoopDistributeAttr, ::mlir::Attribute, detail::LoopDistributeAttrStorage> {
public:
  using Base::Base;
  static LoopDistributeAttr get(::mlir::MLIRContext *context, BoolAttr disable, LoopAnnotationAttr followupCoincident, LoopAnnotationAttr followupSequential, LoopAnnotationAttr followupFallback, LoopAnnotationAttr followupAll);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_distribute"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getDisable() const;
  LoopAnnotationAttr getFollowupCoincident() const;
  LoopAnnotationAttr getFollowupSequential() const;
  LoopAnnotationAttr getFollowupFallback() const;
  LoopAnnotationAttr getFollowupAll() const;
};
namespace detail {
struct LoopInterleaveAttrStorage;
} // namespace detail
class LoopInterleaveAttr : public ::mlir::Attribute::AttrBase<LoopInterleaveAttr, ::mlir::Attribute, detail::LoopInterleaveAttrStorage> {
public:
  using Base::Base;
  static LoopInterleaveAttr get(::mlir::MLIRContext *context, IntegerAttr count);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_interleave"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  IntegerAttr getCount() const;
};
namespace detail {
struct LoopLICMAttrStorage;
} // namespace detail
class LoopLICMAttr : public ::mlir::Attribute::AttrBase<LoopLICMAttr, ::mlir::Attribute, detail::LoopLICMAttrStorage> {
public:
  using Base::Base;
  static LoopLICMAttr get(::mlir::MLIRContext *context, BoolAttr disable, BoolAttr versioningDisable);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_licm"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getDisable() const;
  BoolAttr getVersioningDisable() const;
};
namespace detail {
struct LoopPeeledAttrStorage;
} // namespace detail
class LoopPeeledAttr : public ::mlir::Attribute::AttrBase<LoopPeeledAttr, ::mlir::Attribute, detail::LoopPeeledAttrStorage> {
public:
  using Base::Base;
  static LoopPeeledAttr get(::mlir::MLIRContext *context, IntegerAttr count);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_peeled"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  IntegerAttr getCount() const;
};
namespace detail {
struct LoopPipelineAttrStorage;
} // namespace detail
class LoopPipelineAttr : public ::mlir::Attribute::AttrBase<LoopPipelineAttr, ::mlir::Attribute, detail::LoopPipelineAttrStorage> {
public:
  using Base::Base;
  static LoopPipelineAttr get(::mlir::MLIRContext *context, BoolAttr disable, IntegerAttr initiationinterval);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_pipeline"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getDisable() const;
  IntegerAttr getInitiationinterval() const;
};
namespace detail {
struct LoopUnrollAndJamAttrStorage;
} // namespace detail
class LoopUnrollAndJamAttr : public ::mlir::Attribute::AttrBase<LoopUnrollAndJamAttr, ::mlir::Attribute, detail::LoopUnrollAndJamAttrStorage> {
public:
  using Base::Base;
  static LoopUnrollAndJamAttr get(::mlir::MLIRContext *context, BoolAttr disable, IntegerAttr count, LoopAnnotationAttr followupOuter, LoopAnnotationAttr followupInner, LoopAnnotationAttr followupRemainderOuter, LoopAnnotationAttr followupRemainderInner, LoopAnnotationAttr followupAll);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_unroll_and_jam"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getDisable() const;
  IntegerAttr getCount() const;
  LoopAnnotationAttr getFollowupOuter() const;
  LoopAnnotationAttr getFollowupInner() const;
  LoopAnnotationAttr getFollowupRemainderOuter() const;
  LoopAnnotationAttr getFollowupRemainderInner() const;
  LoopAnnotationAttr getFollowupAll() const;
};
namespace detail {
struct LoopUnrollAttrStorage;
} // namespace detail
class LoopUnrollAttr : public ::mlir::Attribute::AttrBase<LoopUnrollAttr, ::mlir::Attribute, detail::LoopUnrollAttrStorage> {
public:
  using Base::Base;
  static LoopUnrollAttr get(::mlir::MLIRContext *context, BoolAttr disable, IntegerAttr count, BoolAttr runtimeDisable, BoolAttr full, LoopAnnotationAttr followupUnrolled, LoopAnnotationAttr followupRemainder, LoopAnnotationAttr followupAll);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_unroll"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getDisable() const;
  IntegerAttr getCount() const;
  BoolAttr getRuntimeDisable() const;
  BoolAttr getFull() const;
  LoopAnnotationAttr getFollowupUnrolled() const;
  LoopAnnotationAttr getFollowupRemainder() const;
  LoopAnnotationAttr getFollowupAll() const;
};
namespace detail {
struct LoopUnswitchAttrStorage;
} // namespace detail
class LoopUnswitchAttr : public ::mlir::Attribute::AttrBase<LoopUnswitchAttr, ::mlir::Attribute, detail::LoopUnswitchAttrStorage> {
public:
  using Base::Base;
  static LoopUnswitchAttr get(::mlir::MLIRContext *context, BoolAttr partialDisable);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_unswitch"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getPartialDisable() const;
};
namespace detail {
struct LoopVectorizeAttrStorage;
} // namespace detail
class LoopVectorizeAttr : public ::mlir::Attribute::AttrBase<LoopVectorizeAttr, ::mlir::Attribute, detail::LoopVectorizeAttrStorage> {
public:
  using Base::Base;
  static LoopVectorizeAttr get(::mlir::MLIRContext *context, BoolAttr disable, BoolAttr predicateEnable, BoolAttr scalableEnable, IntegerAttr width, LoopAnnotationAttr followupVectorized, LoopAnnotationAttr followupEpilogue, LoopAnnotationAttr followupAll);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_vectorize"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BoolAttr getDisable() const;
  BoolAttr getPredicateEnable() const;
  BoolAttr getScalableEnable() const;
  IntegerAttr getWidth() const;
  LoopAnnotationAttr getFollowupVectorized() const;
  LoopAnnotationAttr getFollowupEpilogue() const;
  LoopAnnotationAttr getFollowupAll() const;
};
} // namespace LLVM
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::CConvAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::ComdatAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::AccessGroupAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::AliasScopeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::AliasScopeDomainAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DIBasicTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DICompileUnitAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DICompositeTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DIDerivedTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DIFileAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DILabelAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DILexicalBlockAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DILexicalBlockFileAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DILocalVariableAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DIModuleAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DINamespaceAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DINullTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DISubprogramAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DISubrangeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::DISubroutineTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::FastmathFlagsAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::MemoryEffectsAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::TBAAMemberAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::TBAARootAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::TBAATagAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::TBAATypeDescriptorAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::VScaleRangeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LinkageAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopAnnotationAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopDistributeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopInterleaveAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopLICMAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopPeeledAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopPipelineAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopUnrollAndJamAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopUnrollAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopUnswitchAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LoopVectorizeAttr)

#endif  // GET_ATTRDEF_CLASSES

