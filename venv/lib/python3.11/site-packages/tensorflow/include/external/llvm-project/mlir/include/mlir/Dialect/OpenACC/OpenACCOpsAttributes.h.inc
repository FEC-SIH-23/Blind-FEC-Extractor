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
namespace acc {
class DeclareActionAttr;
class DeclareAttr;
class ClauseDefaultValueAttr;
class DataClauseAttr;
class ReductionOperatorAttr;
class RoutineInfoAttr;
namespace detail {
struct DeclareActionAttrStorage;
} // namespace detail
class DeclareActionAttr : public ::mlir::Attribute::AttrBase<DeclareActionAttr, ::mlir::Attribute, detail::DeclareActionAttrStorage> {
public:
  using Base::Base;
  static DeclareActionAttr get(::mlir::MLIRContext *context, SymbolRefAttr preAlloc, SymbolRefAttr postAlloc, SymbolRefAttr preDealloc, SymbolRefAttr postDealloc);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"declare_action"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  SymbolRefAttr getPreAlloc() const;
  SymbolRefAttr getPostAlloc() const;
  SymbolRefAttr getPreDealloc() const;
  SymbolRefAttr getPostDealloc() const;
};
namespace detail {
struct DeclareAttrStorage;
} // namespace detail
class DeclareAttr : public ::mlir::Attribute::AttrBase<DeclareAttr, ::mlir::Attribute, detail::DeclareAttrStorage> {
public:
  using Base::Base;
  static DeclareAttr get(::mlir::MLIRContext *context, DataClauseAttr dataClause, bool implicit);
  static DeclareAttr get(::mlir::MLIRContext *context, DataClauseAttr dataClause);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"declare"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DataClauseAttr getDataClause() const;
  bool getImplicit() const;
};
namespace detail {
struct ClauseDefaultValueAttrStorage;
} // namespace detail
class ClauseDefaultValueAttr : public ::mlir::Attribute::AttrBase<ClauseDefaultValueAttr, ::mlir::Attribute, detail::ClauseDefaultValueAttrStorage> {
public:
  using Base::Base;
  static ClauseDefaultValueAttr get(::mlir::MLIRContext *context, ::mlir::acc::ClauseDefaultValue value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"defaultvalue"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::ClauseDefaultValue getValue() const;
};
namespace detail {
struct DataClauseAttrStorage;
} // namespace detail
class DataClauseAttr : public ::mlir::Attribute::AttrBase<DataClauseAttr, ::mlir::Attribute, detail::DataClauseAttrStorage> {
public:
  using Base::Base;
  static DataClauseAttr get(::mlir::MLIRContext *context, ::mlir::acc::DataClause value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"data_clause"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::DataClause getValue() const;
};
namespace detail {
struct ReductionOperatorAttrStorage;
} // namespace detail
class ReductionOperatorAttr : public ::mlir::Attribute::AttrBase<ReductionOperatorAttr, ::mlir::Attribute, detail::ReductionOperatorAttrStorage> {
public:
  using Base::Base;
  static ReductionOperatorAttr get(::mlir::MLIRContext *context, ::mlir::acc::ReductionOperator value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"reduction_operator"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::ReductionOperator getValue() const;
};
namespace detail {
struct RoutineInfoAttrStorage;
} // namespace detail
class RoutineInfoAttr : public ::mlir::Attribute::AttrBase<RoutineInfoAttr, ::mlir::Attribute, detail::RoutineInfoAttrStorage> {
public:
  using Base::Base;
  static RoutineInfoAttr get(::mlir::MLIRContext *context, ::llvm::ArrayRef<SymbolRefAttr> accRoutines);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"routine_info"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<SymbolRefAttr> getAccRoutines() const;
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareActionAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::ClauseDefaultValueAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DataClauseAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::ReductionOperatorAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::RoutineInfoAttr)

#endif  // GET_ATTRDEF_CLASSES

