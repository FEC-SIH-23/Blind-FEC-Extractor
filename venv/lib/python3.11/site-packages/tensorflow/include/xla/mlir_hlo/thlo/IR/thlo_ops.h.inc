/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: thlo_ops.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace thlo {
class ConcatenateOp;
} // namespace thlo
} // namespace mlir
namespace mlir {
namespace thlo {
class DynamicBroadcastInDimOp;
} // namespace thlo
} // namespace mlir
namespace mlir {
namespace thlo {
class GatherOp;
} // namespace thlo
} // namespace mlir
namespace mlir {
namespace thlo {
class ReverseOp;
} // namespace thlo
} // namespace mlir
namespace mlir {
namespace thlo {
class ScatterOp;
} // namespace thlo
} // namespace mlir
namespace mlir {
namespace thlo {
class SortOp;
} // namespace thlo
} // namespace mlir
namespace mlir {
namespace thlo {
class YieldOp;
} // namespace thlo
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace thlo {

//===----------------------------------------------------------------------===//
// ::mlir::thlo::ConcatenateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConcatenateOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConcatenateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConcatenateOpGenericAdaptorBase(ConcatenateOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimensionAttr();
  ::llvm::APInt getDimension();
};
} // namespace detail
template <typename RangeT>
class ConcatenateOpGenericAdaptor : public detail::ConcatenateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConcatenateOpGenericAdaptorBase;
public:
  ConcatenateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConcatenateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConcatenateOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConcatenateOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConcatenateOp>>>
  ConcatenateOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getInit() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConcatenateOpAdaptor : public ConcatenateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConcatenateOpGenericAdaptor::ConcatenateOpGenericAdaptor;
  ConcatenateOpAdaptor(ConcatenateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConcatenateOp : public ::mlir::Op<ConcatenateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::DestinationStyleOpInterface::Trait, ::mlir::TilingInterface::Trait, ::mlir::ReifyRankedShapedTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConcatenateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConcatenateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("thlo.concatenate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::TypedValue<::mlir::ShapedType> getInit();
  ::mlir::MutableOperandRange getInputsMutable();
  ::mlir::OpOperand &getInitMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResult();
  ::mlir::IntegerAttr getDimensionAttr();
  ::llvm::APInt getDimension();
  void setDimensionAttr(::mlir::IntegerAttr attr);
  void setDimension(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::ValueRange inputs, ::mlir::Value init, ::mlir::IntegerAttr dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::ValueRange inputs, ::mlir::Value init, ::llvm::APInt dimension);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  SmallVector<utils::IteratorType> getLoopIteratorTypes();
  SmallVector<Range> getIterationDomain(OpBuilder &b);
  FailureOr<TilingResult> getTiledImplementation(OpBuilder &b, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes);
  LogicalResult getResultTilePosition(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes, SmallVector<OpFoldResult> &resultOffsets, SmallVector<OpFoldResult> &resultSizes);
  FailureOr<TilingResult> generateResultTileValue(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult> offsets, ArrayRef<OpFoldResult> sizes);
  ::mlir::LogicalResult reifyResultShapes(::mlir::OpBuilder &builder, ::mlir::ReifiedRankedShapedTypeDims &reifiedReturnShapes);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  // Implement method necessary for DestinationStyleOpInterface.
  mlir::MutableOperandRange getDpsInitsMutable() {
    return getInitMutable();
  }
};
} // namespace thlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::thlo::ConcatenateOp)

namespace mlir {
namespace thlo {

//===----------------------------------------------------------------------===//
// ::mlir::thlo::DynamicBroadcastInDimOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DynamicBroadcastInDimOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DynamicBroadcastInDimOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DynamicBroadcastInDimOpGenericAdaptorBase(DynamicBroadcastInDimOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::llvm::ArrayRef<int64_t> getBroadcastDimensions();
  ::mlir::DenseI64ArrayAttr getKnownExpandingDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getKnownExpandingDimensions();
  ::mlir::DenseI64ArrayAttr getKnownNonexpandingDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getKnownNonexpandingDimensions();
};
} // namespace detail
template <typename RangeT>
class DynamicBroadcastInDimOpGenericAdaptor : public detail::DynamicBroadcastInDimOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DynamicBroadcastInDimOpGenericAdaptorBase;
public:
  DynamicBroadcastInDimOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DynamicBroadcastInDimOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DynamicBroadcastInDimOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DynamicBroadcastInDimOp, typename = std::enable_if_t<std::is_same_v<LateInst, DynamicBroadcastInDimOp>>>
  DynamicBroadcastInDimOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperand() {
    return (*getODSOperands(0).begin());
  }

  ValueT getInit() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DynamicBroadcastInDimOpAdaptor : public DynamicBroadcastInDimOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DynamicBroadcastInDimOpGenericAdaptor::DynamicBroadcastInDimOpGenericAdaptor;
  DynamicBroadcastInDimOpAdaptor(DynamicBroadcastInDimOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DynamicBroadcastInDimOp : public ::mlir::Op<DynamicBroadcastInDimOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::DestinationStyleOpInterface::Trait, ::mlir::TilingInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DynamicBroadcastInDimOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DynamicBroadcastInDimOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions"), ::llvm::StringRef("known_expanding_dimensions"), ::llvm::StringRef("known_nonexpanding_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getKnownExpandingDimensionsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getKnownExpandingDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getKnownNonexpandingDimensionsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getKnownNonexpandingDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("thlo.dynamic_broadcast_in_dim");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getOperand();
  ::mlir::TypedValue<::mlir::ShapedType> getInit();
  ::mlir::OpOperand &getOperandMutable();
  ::mlir::OpOperand &getInitMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResult();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::llvm::ArrayRef<int64_t> getBroadcastDimensions();
  ::mlir::DenseI64ArrayAttr getKnownExpandingDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getKnownExpandingDimensions();
  ::mlir::DenseI64ArrayAttr getKnownNonexpandingDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getKnownNonexpandingDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::llvm::ArrayRef<int64_t> attrValue);
  void setKnownExpandingDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setKnownExpandingDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setKnownNonexpandingDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setKnownNonexpandingDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeKnownExpandingDimensionsAttr();
  ::mlir::Attribute removeKnownNonexpandingDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::Value operand, ::mlir::Value init, ::mlir::DenseI64ArrayAttr broadcast_dimensions, /*optional*/::mlir::DenseI64ArrayAttr known_expanding_dimensions, /*optional*/::mlir::DenseI64ArrayAttr known_nonexpanding_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::Value operand, ::mlir::Value init, ::llvm::ArrayRef<int64_t> broadcast_dimensions, /*optional*/::mlir::DenseI64ArrayAttr known_expanding_dimensions, /*optional*/::mlir::DenseI64ArrayAttr known_nonexpanding_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  SmallVector<utils::IteratorType> getLoopIteratorTypes();
  SmallVector<Range> getIterationDomain(OpBuilder &b);
  FailureOr<TilingResult> getTiledImplementation(OpBuilder &b, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes);
  LogicalResult getResultTilePosition(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes, SmallVector<OpFoldResult> &resultOffsets, SmallVector<OpFoldResult> &resultSizes);
  FailureOr<TilingResult> generateResultTileValue(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult> offsets, ArrayRef<OpFoldResult> sizes);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  // Implement method necessary for DestinationStyleOpInterface.
  mlir::MutableOperandRange getDpsInitsMutable() {
    return getInitMutable();
  }
};
} // namespace thlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::thlo::DynamicBroadcastInDimOp)

namespace mlir {
namespace thlo {

//===----------------------------------------------------------------------===//
// ::mlir::thlo::GatherOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GatherOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GatherOpGenericAdaptorBase(GatherOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GatherOpGenericAdaptor : public detail::GatherOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GatherOpGenericAdaptorBase;
public:
  GatherOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GatherOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GatherOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GatherOp, typename = std::enable_if_t<std::is_same_v<LateInst, GatherOp>>>
  GatherOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperand() {
    return (*getODSOperands(0).begin());
  }

  ValueT getStartIndices() {
    return (*getODSOperands(1).begin());
  }

  ValueT getInit() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GatherOpAdaptor : public GatherOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GatherOpGenericAdaptor::GatherOpGenericAdaptor;
  GatherOpAdaptor(GatherOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GatherOp : public ::mlir::Op<GatherOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::DestinationStyleOpInterface::Trait, ::mlir::TilingInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GatherOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GatherOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("thlo.gather");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getOperand();
  ::mlir::TypedValue<::mlir::ShapedType> getStartIndices();
  ::mlir::TypedValue<::mlir::ShapedType> getInit();
  ::mlir::OpOperand &getOperandMutable();
  ::mlir::OpOperand &getStartIndicesMutable();
  ::mlir::OpOperand &getInitMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::Value init);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  SmallVector<utils::IteratorType> getLoopIteratorTypes();
  SmallVector<Range> getIterationDomain(OpBuilder &b);
  FailureOr<TilingResult> getTiledImplementation(OpBuilder &b, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes);
  LogicalResult getResultTilePosition(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes, SmallVector<OpFoldResult> &resultOffsets, SmallVector<OpFoldResult> &resultSizes);
  FailureOr<TilingResult> generateResultTileValue(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult> offsets, ArrayRef<OpFoldResult> sizes);
public:
  // Implement method necessary for DestinationStyleOpInterface.
  mlir::MutableOperandRange getDpsInitsMutable() {
    return getInitMutable();
  }
};
} // namespace thlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::thlo::GatherOp)

namespace mlir {
namespace thlo {

//===----------------------------------------------------------------------===//
// ::mlir::thlo::ReverseOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReverseOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReverseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ReverseOpGenericAdaptorBase(ReverseOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getReverseDimensionsAttr();
  ::llvm::ArrayRef<int64_t> getReverseDimensions();
};
} // namespace detail
template <typename RangeT>
class ReverseOpGenericAdaptor : public detail::ReverseOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReverseOpGenericAdaptorBase;
public:
  ReverseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReverseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReverseOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReverseOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReverseOp>>>
  ReverseOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  ValueT getInit() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReverseOpAdaptor : public ReverseOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReverseOpGenericAdaptor::ReverseOpGenericAdaptor;
  ReverseOpAdaptor(ReverseOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReverseOp : public ::mlir::Op<ReverseOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::ShapedType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::DestinationStyleOpInterface::Trait, ::mlir::TilingInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReverseOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReverseOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("reverse_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getReverseDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getReverseDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("thlo.reverse");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getInput();
  ::mlir::TypedValue<::mlir::ShapedType> getInit();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getInitMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getResult();
  ::mlir::DenseI64ArrayAttr getReverseDimensionsAttr();
  ::llvm::ArrayRef<int64_t> getReverseDimensions();
  void setReverseDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setReverseDimensions(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value input, ::mlir::Value init, ::mlir::DenseI64ArrayAttr reverse_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value init, ::mlir::DenseI64ArrayAttr reverse_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value input, ::mlir::Value init, ::llvm::ArrayRef<int64_t> reverse_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value init, ::llvm::ArrayRef<int64_t> reverse_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  SmallVector<utils::IteratorType> getLoopIteratorTypes();
  SmallVector<Range> getIterationDomain(OpBuilder &b);
  FailureOr<TilingResult> getTiledImplementation(OpBuilder &b, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes);
  LogicalResult getResultTilePosition(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes, SmallVector<OpFoldResult> &resultOffsets, SmallVector<OpFoldResult> &resultSizes);
  FailureOr<TilingResult> generateResultTileValue(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult> offsets, ArrayRef<OpFoldResult> sizes);
  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  // Implement method necessary for DestinationStyleOpInterface.
  mlir::MutableOperandRange getDpsInitsMutable() {
    return getInitMutable();
  }
};
} // namespace thlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::thlo::ReverseOp)

namespace mlir {
namespace thlo {

//===----------------------------------------------------------------------===//
// ::mlir::thlo::ScatterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScatterOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScatterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScatterOpGenericAdaptorBase(ScatterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getUpdateComputation();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ScatterOpGenericAdaptor : public detail::ScatterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScatterOpGenericAdaptorBase;
public:
  ScatterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScatterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScatterOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScatterOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScatterOp>>>
  ScatterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIndices() {
    return (*getODSOperands(0).begin());
  }

  ValueT getUpdates() {
    return (*getODSOperands(1).begin());
  }

  ValueT getInit() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScatterOpAdaptor : public ScatterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScatterOpGenericAdaptor::ScatterOpGenericAdaptor;
  ScatterOpAdaptor(ScatterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScatterOp : public ::mlir::Op<ScatterOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::DestinationStyleOpInterface::Trait, ::mlir::TilingInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScatterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScatterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("thlo.scatter");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getIndices();
  ::mlir::TypedValue<::mlir::ShapedType> getUpdates();
  ::mlir::TypedValue<::mlir::ShapedType> getInit();
  ::mlir::OpOperand &getIndicesMutable();
  ::mlir::OpOperand &getUpdatesMutable();
  ::mlir::OpOperand &getInitMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResult();
  ::mlir::Region &getUpdateComputation();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::Value indices, ::mlir::Value updates, ::mlir::Value init);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  SmallVector<utils::IteratorType> getLoopIteratorTypes();
  SmallVector<Range> getIterationDomain(OpBuilder &b);
  FailureOr<TilingResult> getTiledImplementation(OpBuilder &b, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes);
  LogicalResult getResultTilePosition(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes, SmallVector<OpFoldResult> &resultOffsets, SmallVector<OpFoldResult> &resultSizes);
  FailureOr<TilingResult> generateResultTileValue(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult> offsets, ArrayRef<OpFoldResult> sizes);
public:
  // Returns index vector dimension size, which is always statically-known.
  int64_t getIndexVectorDimSize() {
    return getIndices().getType().getDimSize(1);
  }

  // Returns the number of indices, i.e. number of scalar/tensor updates.
  int64_t getIndicesCount() { return getIndices().getType().getDimSize(0); }

  // Implement method necessary for DestinationStyleOpInterface.
  mlir::MutableOperandRange getDpsInitsMutable() {
    return getInitMutable();
  }
};
} // namespace thlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::thlo::ScatterOp)

namespace mlir {
namespace thlo {

//===----------------------------------------------------------------------===//
// ::mlir::thlo::SortOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SortOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SortOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  SortOpGenericAdaptorBase(SortOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimensionAttr();
  ::llvm::APInt getDimension();
  ::mlir::BoolAttr getIsStableAttr();
  bool getIsStable();
  ::mlir::Region &getComparator();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class SortOpGenericAdaptor : public detail::SortOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SortOpGenericAdaptorBase;
public:
  SortOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SortOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SortOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = SortOp, typename = std::enable_if_t<std::is_same_v<LateInst, SortOp>>>
  SortOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getInits() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SortOpAdaptor : public SortOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SortOpGenericAdaptor::SortOpGenericAdaptor;
  SortOpAdaptor(SortOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SortOp : public ::mlir::Op<SortOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::DestinationStyleOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait, ::mlir::TilingInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SortOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SortOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("is_stable")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsStableAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsStableAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("thlo.sort");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::Operation::operand_range getInits();
  ::mlir::MutableOperandRange getInputsMutable();
  ::mlir::MutableOperandRange getInitsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResult();
  ::mlir::Region &getComparator();
  ::mlir::IntegerAttr getDimensionAttr();
  ::llvm::APInt getDimension();
  ::mlir::BoolAttr getIsStableAttr();
  bool getIsStable();
  void setDimensionAttr(::mlir::IntegerAttr attr);
  void setDimension(::llvm::APInt attrValue);
  void setIsStableAttr(::mlir::BoolAttr attr);
  void setIsStable(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::ValueRange inputs, ::mlir::ValueRange inits, ::mlir::IntegerAttr dimension, ::mlir::BoolAttr is_stable);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::ValueRange inputs, ::mlir::ValueRange inits, ::llvm::APInt dimension, bool is_stable);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  void getAsmBlockArgumentNames(::mlir::Region&region, ::mlir::OpAsmSetValueNameFn setNameFn);
  SmallVector<utils::IteratorType> getLoopIteratorTypes();
  SmallVector<Range> getIterationDomain(OpBuilder &b);
  FailureOr<TilingResult> getTiledImplementation(OpBuilder &b, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes);
  LogicalResult getResultTilePosition(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult>  offsets, ArrayRef<OpFoldResult>  sizes, SmallVector<OpFoldResult> &resultOffsets, SmallVector<OpFoldResult> &resultSizes);
  FailureOr<TilingResult> generateResultTileValue(OpBuilder &b, unsigned resultNumber, ArrayRef<OpFoldResult> offsets, ArrayRef<OpFoldResult> sizes);
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
  // Implement method necessary for DestinationStyleOpInterface.
  mlir::MutableOperandRange getDpsInitsMutable() {
    return getInitsMutable();
  }
};
} // namespace thlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::thlo::SortOp)

namespace mlir {
namespace thlo {

//===----------------------------------------------------------------------===//
// ::mlir::thlo::YieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class YieldOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  YieldOpGenericAdaptorBase(YieldOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class YieldOpGenericAdaptor : public detail::YieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::YieldOpGenericAdaptorBase;
public:
  YieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  YieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : YieldOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = YieldOp, typename = std::enable_if_t<std::is_same_v<LateInst, YieldOp>>>
  YieldOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getValues() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class YieldOpAdaptor : public YieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using YieldOpGenericAdaptor::YieldOpGenericAdaptor;
  YieldOpAdaptor(YieldOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class YieldOp : public ::mlir::Op<YieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::HasParent<ScatterOp, SortOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::RegionBranchTerminatorOpInterface::Trait, ::mlir::OpTrait::ReturnLike, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = YieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = YieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("thlo.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getValues();
  ::mlir::MutableOperandRange getValuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange values);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::MutableOperandRange getMutableSuccessorOperands(::mlir::RegionBranchPoint point);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace thlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::thlo::YieldOp)


#endif  // GET_OP_CLASSES

