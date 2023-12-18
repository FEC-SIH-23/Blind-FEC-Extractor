/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace deallocation {
class OwnershipIndicatorType;
class OwnershipIndicatorType : public ::mlir::Type::TypeBase<OwnershipIndicatorType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ownership"};
  }

};
} // namespace deallocation
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::deallocation::OwnershipIndicatorType)

#endif  // GET_TYPEDEF_CLASSES

