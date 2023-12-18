/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: InterpreterOps.td                                                    *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace stablehlo {
namespace interpreter {
class RunParallelOp;
} // namespace interpreter
} // namespace stablehlo
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace stablehlo {
namespace interpreter {

//===----------------------------------------------------------------------===//
// ::mlir::stablehlo::interpreter::RunParallelOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RunParallelOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RunParallelOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RunParallelOpGenericAdaptorBase(RunParallelOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getInfeedAttr();
  ::std::optional< ::mlir::ArrayAttr > getInfeed();
  ::mlir::ArrayAttr getProgramsAttr();
  ::mlir::ArrayAttr getPrograms();
};
} // namespace detail
template <typename RangeT>
class RunParallelOpGenericAdaptor : public detail::RunParallelOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RunParallelOpGenericAdaptorBase;
public:
  RunParallelOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RunParallelOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RunParallelOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RunParallelOp, typename = std::enable_if_t<std::is_same_v<LateInst, RunParallelOp>>>
  RunParallelOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getInputs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RunParallelOpAdaptor : public RunParallelOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RunParallelOpGenericAdaptor::RunParallelOpGenericAdaptor;
  RunParallelOpAdaptor(RunParallelOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RunParallelOp : public ::mlir::Op<RunParallelOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RunParallelOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RunParallelOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("infeed"), ::llvm::StringRef("programs")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInfeedAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInfeedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getProgramsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getProgramsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("interpreter.run_parallel");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::MutableOperandRange getInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  ::mlir::ArrayAttr getInfeedAttr();
  ::std::optional< ::mlir::ArrayAttr > getInfeed();
  ::mlir::ArrayAttr getProgramsAttr();
  ::mlir::ArrayAttr getPrograms();
  void setInfeedAttr(::mlir::ArrayAttr attr);
  void setProgramsAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeInfeedAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange inputs, /*optional*/::mlir::ArrayAttr infeed, ::mlir::ArrayAttr programs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace interpreter
} // namespace stablehlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::stablehlo::interpreter::RunParallelOp)


#endif  // GET_OP_CLASSES

