/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: VhloOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::vhlo::AbsOpV1,
::mlir::vhlo::AddOpV1,
::mlir::vhlo::AfterAllOpV1,
::mlir::vhlo::AllGatherOpV1,
::mlir::vhlo::AllReduceOpV1,
::mlir::vhlo::AllToAllOpV1,
::mlir::vhlo::AndOpV1,
::mlir::vhlo::Atan2OpV1,
::mlir::vhlo::BatchNormGradOpV1,
::mlir::vhlo::BatchNormInferenceOpV1,
::mlir::vhlo::BatchNormTrainingOpV1,
::mlir::vhlo::BitcastConvertOpV1,
::mlir::vhlo::BroadcastInDimOpV1,
::mlir::vhlo::BroadcastOpV1,
::mlir::vhlo::CallOpV1,
::mlir::vhlo::CaseOpV1,
::mlir::vhlo::CbrtOpV1,
::mlir::vhlo::CeilOpV1,
::mlir::vhlo::CholeskyOpV1,
::mlir::vhlo::ClampOpV1,
::mlir::vhlo::ClzOpV1,
::mlir::vhlo::CollectivePermuteOpV1,
::mlir::vhlo::CompareOpV1,
::mlir::vhlo::ComplexOpV1,
::mlir::vhlo::ComputeReshapeShapeOpV1,
::mlir::vhlo::ConcatenateOpV1,
::mlir::vhlo::ConstantOpV1,
::mlir::vhlo::ConvertOpV1,
::mlir::vhlo::ConvolutionOpV1,
::mlir::vhlo::CosineOpV1,
::mlir::vhlo::CreateTokenOpV1,
::mlir::vhlo::CrossReplicaSumOpV1,
::mlir::vhlo::CstrReshapableOpV1,
::mlir::vhlo::CustomCallOpV1,
::mlir::vhlo::DivOpV1,
::mlir::vhlo::DotGeneralOpV1,
::mlir::vhlo::DotOpV1,
::mlir::vhlo::DynamicBroadcastInDimOpV1,
::mlir::vhlo::DynamicConvOpV1,
::mlir::vhlo::DynamicGatherOpV1,
::mlir::vhlo::DynamicIotaOpV1,
::mlir::vhlo::DynamicPadOpV1,
::mlir::vhlo::DynamicReshapeOpV1,
::mlir::vhlo::DynamicSliceOpV1,
::mlir::vhlo::DynamicUpdateSliceOpV1,
::mlir::vhlo::EinsumOpV1,
::mlir::vhlo::ExpOpV1,
::mlir::vhlo::Expm1OpV1,
::mlir::vhlo::FftOpV1,
::mlir::vhlo::FloorOpV1,
::mlir::vhlo::FuncOpV1,
::mlir::vhlo::GatherOpV1,
::mlir::vhlo::GetDimensionSizeOpV1,
::mlir::vhlo::GetTupleElementOpV1,
::mlir::vhlo::IfOpV1,
::mlir::vhlo::ImagOpV1,
::mlir::vhlo::InfeedOpV1,
::mlir::vhlo::IotaOpV1,
::mlir::vhlo::IsFiniteOpV1,
::mlir::vhlo::Log1pOpV1,
::mlir::vhlo::LogOpV1,
::mlir::vhlo::LogisticOpV1,
::mlir::vhlo::MapOpV1,
::mlir::vhlo::MaxOpV1,
::mlir::vhlo::MinOpV1,
::mlir::vhlo::MulOpV1,
::mlir::vhlo::NegOpV1,
::mlir::vhlo::NotOpV1,
::mlir::vhlo::OptimizationBarrierOpV1,
::mlir::vhlo::OrOpV1,
::mlir::vhlo::OutfeedOpV1,
::mlir::vhlo::PadOpV1,
::mlir::vhlo::PartitionIdOpV1,
::mlir::vhlo::PopulationCountOpV1,
::mlir::vhlo::PowOpV1,
::mlir::vhlo::RealDynamicSliceOpV1,
::mlir::vhlo::RealOpV1,
::mlir::vhlo::RecvOpV1,
::mlir::vhlo::ReduceOpV1,
::mlir::vhlo::ReducePrecisionOpV1,
::mlir::vhlo::ReduceScatterOpV1,
::mlir::vhlo::ReduceWindowOpV1,
::mlir::vhlo::RemOpV1,
::mlir::vhlo::ReplicaIdOpV1,
::mlir::vhlo::ReshapeOpV1,
::mlir::vhlo::ReturnOpV1,
::mlir::vhlo::ReverseOpV1,
::mlir::vhlo::RngBitGeneratorOpV1,
::mlir::vhlo::RngOpV1,
::mlir::vhlo::RoundNearestEvenOpV1,
::mlir::vhlo::RoundOpV1,
::mlir::vhlo::RsqrtOpV1,
::mlir::vhlo::ScatterOpV1,
::mlir::vhlo::SelectAndScatterOpV1,
::mlir::vhlo::SelectOpV1,
::mlir::vhlo::SendOpV1,
::mlir::vhlo::SetDimensionSizeOpV1,
::mlir::vhlo::ShiftLeftOpV1,
::mlir::vhlo::ShiftRightArithmeticOpV1,
::mlir::vhlo::ShiftRightLogicalOpV1,
::mlir::vhlo::SignOpV1,
::mlir::vhlo::SineOpV1,
::mlir::vhlo::SliceOpV1,
::mlir::vhlo::SortOpV1,
::mlir::vhlo::SqrtOpV1,
::mlir::vhlo::SubtractOpV1,
::mlir::vhlo::TanhOpV1,
::mlir::vhlo::TorchIndexSelectOpV1,
::mlir::vhlo::TraceOpV1,
::mlir::vhlo::TransposeOpV1,
::mlir::vhlo::TriangularSolveOpV1,
::mlir::vhlo::TupleOpV1,
::mlir::vhlo::UnaryEinsumOpV1,
::mlir::vhlo::UniformDequantizeOpV1,
::mlir::vhlo::UniformQuantizeOpV1,
::mlir::vhlo::WhileOpV1,
::mlir::vhlo::XorOpV1
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace vhlo {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VhloOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VhloOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((true)))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VhloOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VhloOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_VhloOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((true))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: any region";
  }
  return ::mlir::success();
}
} // namespace vhlo
} // namespace mlir
namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::AbsOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
AbsOpV1GenericAdaptorBase::AbsOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.abs_v1", odsAttrs.getContext());
}

AbsOpV1GenericAdaptorBase::AbsOpV1GenericAdaptorBase(AbsOpV1 op) : AbsOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AbsOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AbsOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AbsOpV1Adaptor::AbsOpV1Adaptor(AbsOpV1 op) : AbsOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AbsOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AbsOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AbsOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AbsOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AbsOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AbsOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void AbsOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AbsOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AbsOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AbsOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version AbsOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version AbsOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::AbsOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::AddOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
AddOpV1GenericAdaptorBase::AddOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.add_v1", odsAttrs.getContext());
}

AddOpV1GenericAdaptorBase::AddOpV1GenericAdaptorBase(AddOpV1 op) : AddOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AddOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AddOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AddOpV1Adaptor::AddOpV1Adaptor(AddOpV1 op) : AddOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AddOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AddOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AddOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AddOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AddOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AddOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void AddOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void AddOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AddOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AddOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version AddOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version AddOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::AddOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::AfterAllOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
AfterAllOpV1GenericAdaptorBase::AfterAllOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.after_all_v1", odsAttrs.getContext());
}

AfterAllOpV1GenericAdaptorBase::AfterAllOpV1GenericAdaptorBase(AfterAllOpV1 op) : AfterAllOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AfterAllOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr AfterAllOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AfterAllOpV1Adaptor::AfterAllOpV1Adaptor(AfterAllOpV1 op) : AfterAllOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AfterAllOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AfterAllOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range AfterAllOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AfterAllOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AfterAllOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AfterAllOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AfterAllOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AfterAllOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void AfterAllOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.addTypes(result);
}

void AfterAllOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AfterAllOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AfterAllOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version AfterAllOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version AfterAllOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::AfterAllOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::AllGatherOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllGatherOpV1GenericAdaptorBase::AllGatherOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.all_gather_v1", odsAttrs.getContext());
}

AllGatherOpV1GenericAdaptorBase::AllGatherOpV1GenericAdaptorBase(AllGatherOpV1 op) : AllGatherOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllGatherOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllGatherOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getAllGatherDimAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 3, AllGatherOpV1::getAllGatherDimAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getAllGatherDim() {
  auto attr = getAllGatherDimAttr();
  return attr;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getReplicaGroupsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 1, AllGatherOpV1::getReplicaGroupsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getChannelIdAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 2, AllGatherOpV1::getChannelIdAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getUseGlobalDeviceIdsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 0, AllGatherOpV1::getUseGlobalDeviceIdsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllGatherOpV1GenericAdaptorBase::getUseGlobalDeviceIds() {
  auto attr = getUseGlobalDeviceIdsAttr();
  return attr;
}

} // namespace detail
AllGatherOpV1Adaptor::AllGatherOpV1Adaptor(AllGatherOpV1 op) : AllGatherOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllGatherOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_all_gather_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_gather_v1' op ""requires attribute 'all_gather_dim'");
    if (namedAttrIt->getName() == AllGatherOpV1::getAllGatherDimAttrName(*odsOpName)) {
      tblgen_all_gather_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_gather_v1' op ""requires attribute 'channel_id'");
    if (namedAttrIt->getName() == AllGatherOpV1::getChannelIdAttrName(*odsOpName)) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_gather_v1' op ""requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == AllGatherOpV1::getReplicaGroupsAttrName(*odsOpName)) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_use_global_device_ids;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_gather_v1' op ""requires attribute 'use_global_device_ids'");
    if (namedAttrIt->getName() == AllGatherOpV1::getUseGlobalDeviceIdsAttrName(*odsOpName)) {
      tblgen_use_global_device_ids = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_all_gather_dim && !((true)))
    return emitError(loc, "'vhlo.all_gather_v1' op ""attribute 'all_gather_dim' failed to satisfy constraint: any attribute");

  if (tblgen_replica_groups && !((true)))
    return emitError(loc, "'vhlo.all_gather_v1' op ""attribute 'replica_groups' failed to satisfy constraint: any attribute");

  if (tblgen_channel_id && !((true)))
    return emitError(loc, "'vhlo.all_gather_v1' op ""attribute 'channel_id' failed to satisfy constraint: any attribute");

  if (tblgen_use_global_device_ids && !((true)))
    return emitError(loc, "'vhlo.all_gather_v1' op ""attribute 'use_global_device_ids' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllGatherOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllGatherOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllGatherOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AllGatherOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AllGatherOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllGatherOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllGatherOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute AllGatherOpV1::getAllGatherDimAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 3, getAllGatherDimAttrName()));
}

::mlir::Attribute AllGatherOpV1::getAllGatherDim() {
  auto attr = getAllGatherDimAttr();
  return attr;
}

::mlir::Attribute AllGatherOpV1::getReplicaGroupsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 1, getReplicaGroupsAttrName()));
}

::mlir::Attribute AllGatherOpV1::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute AllGatherOpV1::getChannelIdAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 2, getChannelIdAttrName()));
}

::mlir::Attribute AllGatherOpV1::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute AllGatherOpV1::getUseGlobalDeviceIdsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 0, getUseGlobalDeviceIdsAttrName()));
}

::mlir::Attribute AllGatherOpV1::getUseGlobalDeviceIds() {
  auto attr = getUseGlobalDeviceIdsAttr();
  return attr;
}

void AllGatherOpV1::setAllGatherDimAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getAllGatherDimAttrName(), attr);
}

void AllGatherOpV1::setReplicaGroupsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getReplicaGroupsAttrName(), attr);
}

void AllGatherOpV1::setChannelIdAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelIdAttrName(), attr);
}

void AllGatherOpV1::setUseGlobalDeviceIdsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getUseGlobalDeviceIdsAttrName(), attr);
}

void AllGatherOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute all_gather_dim, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id, ::mlir::Attribute use_global_device_ids) {
  odsState.addOperands(operand);
  odsState.addAttribute(getAllGatherDimAttrName(odsState.name), all_gather_dim);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getUseGlobalDeviceIdsAttrName(odsState.name), use_global_device_ids);
  odsState.addTypes(result);
}

void AllGatherOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute all_gather_dim, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id, ::mlir::Attribute use_global_device_ids) {
  odsState.addOperands(operand);
  odsState.addAttribute(getAllGatherDimAttrName(odsState.name), all_gather_dim);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getUseGlobalDeviceIdsAttrName(odsState.name), use_global_device_ids);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllGatherOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllGatherOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_all_gather_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'all_gather_dim'");
    if (namedAttrIt->getName() == getAllGatherDimAttrName()) {
      tblgen_all_gather_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_id'");
    if (namedAttrIt->getName() == getChannelIdAttrName()) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == getReplicaGroupsAttrName()) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_use_global_device_ids;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'use_global_device_ids'");
    if (namedAttrIt->getName() == getUseGlobalDeviceIdsAttrName()) {
      tblgen_use_global_device_ids = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_all_gather_dim, "all_gather_dim")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_replica_groups, "replica_groups")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_id, "channel_id")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_use_global_device_ids, "use_global_device_ids")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllGatherOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version AllGatherOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version AllGatherOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::AllGatherOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::AllReduceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllReduceOpV1GenericAdaptorBase::AllReduceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.all_reduce_v1", odsAttrs.getContext());
}

AllReduceOpV1GenericAdaptorBase::AllReduceOpV1GenericAdaptorBase(AllReduceOpV1 op) : AllReduceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllReduceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllReduceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute AllReduceOpV1GenericAdaptorBase::getReplicaGroupsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, AllReduceOpV1::getReplicaGroupsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllReduceOpV1GenericAdaptorBase::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute AllReduceOpV1GenericAdaptorBase::getChannelIdAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, AllReduceOpV1::getChannelIdAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllReduceOpV1GenericAdaptorBase::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute AllReduceOpV1GenericAdaptorBase::getUseGlobalDeviceIdsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 0, AllReduceOpV1::getUseGlobalDeviceIdsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllReduceOpV1GenericAdaptorBase::getUseGlobalDeviceIds() {
  auto attr = getUseGlobalDeviceIdsAttr();
  return attr;
}

::mlir::Region &AllReduceOpV1GenericAdaptorBase::getComputation() {
  return *odsRegions[0];
}

::mlir::RegionRange AllReduceOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
AllReduceOpV1Adaptor::AllReduceOpV1Adaptor(AllReduceOpV1 op) : AllReduceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllReduceOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_reduce_v1' op ""requires attribute 'channel_id'");
    if (namedAttrIt->getName() == AllReduceOpV1::getChannelIdAttrName(*odsOpName)) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_reduce_v1' op ""requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == AllReduceOpV1::getReplicaGroupsAttrName(*odsOpName)) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_use_global_device_ids;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_reduce_v1' op ""requires attribute 'use_global_device_ids'");
    if (namedAttrIt->getName() == AllReduceOpV1::getUseGlobalDeviceIdsAttrName(*odsOpName)) {
      tblgen_use_global_device_ids = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_replica_groups && !((true)))
    return emitError(loc, "'vhlo.all_reduce_v1' op ""attribute 'replica_groups' failed to satisfy constraint: any attribute");

  if (tblgen_channel_id && !((true)))
    return emitError(loc, "'vhlo.all_reduce_v1' op ""attribute 'channel_id' failed to satisfy constraint: any attribute");

  if (tblgen_use_global_device_ids && !((true)))
    return emitError(loc, "'vhlo.all_reduce_v1' op ""attribute 'use_global_device_ids' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllReduceOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllReduceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllReduceOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AllReduceOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AllReduceOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllReduceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllReduceOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &AllReduceOpV1::getComputation() {
  return (*this)->getRegion(0);
}

::mlir::Attribute AllReduceOpV1::getReplicaGroupsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getReplicaGroupsAttrName()));
}

::mlir::Attribute AllReduceOpV1::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute AllReduceOpV1::getChannelIdAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getChannelIdAttrName()));
}

::mlir::Attribute AllReduceOpV1::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute AllReduceOpV1::getUseGlobalDeviceIdsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 0, getUseGlobalDeviceIdsAttrName()));
}

::mlir::Attribute AllReduceOpV1::getUseGlobalDeviceIds() {
  auto attr = getUseGlobalDeviceIdsAttr();
  return attr;
}

void AllReduceOpV1::setReplicaGroupsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getReplicaGroupsAttrName(), attr);
}

void AllReduceOpV1::setChannelIdAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelIdAttrName(), attr);
}

void AllReduceOpV1::setUseGlobalDeviceIdsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getUseGlobalDeviceIdsAttrName(), attr);
}

void AllReduceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id, ::mlir::Attribute use_global_device_ids) {
  odsState.addOperands(operand);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getUseGlobalDeviceIdsAttrName(odsState.name), use_global_device_ids);
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void AllReduceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id, ::mlir::Attribute use_global_device_ids) {
  odsState.addOperands(operand);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getUseGlobalDeviceIdsAttrName(odsState.name), use_global_device_ids);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllReduceOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_id'");
    if (namedAttrIt->getName() == getChannelIdAttrName()) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == getReplicaGroupsAttrName()) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_use_global_device_ids;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'use_global_device_ids'");
    if (namedAttrIt->getName() == getUseGlobalDeviceIdsAttrName()) {
      tblgen_use_global_device_ids = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_replica_groups, "replica_groups")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_id, "channel_id")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_use_global_device_ids, "use_global_device_ids")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "computation", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllReduceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version AllReduceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version AllReduceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::AllReduceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::AllToAllOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllToAllOpV1GenericAdaptorBase::AllToAllOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.all_to_all_v1", odsAttrs.getContext());
}

AllToAllOpV1GenericAdaptorBase::AllToAllOpV1GenericAdaptorBase(AllToAllOpV1 op) : AllToAllOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllToAllOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllToAllOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getSplitDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 0, AllToAllOpV1::getSplitDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getSplitDimension() {
  auto attr = getSplitDimensionAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getConcatDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 3, AllToAllOpV1::getConcatDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getConcatDimension() {
  auto attr = getConcatDimensionAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getSplitCountAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 1, AllToAllOpV1::getSplitCountAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getSplitCount() {
  auto attr = getSplitCountAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getReplicaGroupsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 2, AllToAllOpV1::getReplicaGroupsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getChannelIdAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 4, AllToAllOpV1::getChannelIdAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute AllToAllOpV1GenericAdaptorBase::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

} // namespace detail
AllToAllOpV1Adaptor::AllToAllOpV1Adaptor(AllToAllOpV1 op) : AllToAllOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllToAllOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_to_all_v1' op ""requires attribute 'channel_id'");
    if (namedAttrIt->getName() == AllToAllOpV1::getChannelIdAttrName(*odsOpName)) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_concat_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_to_all_v1' op ""requires attribute 'concat_dimension'");
    if (namedAttrIt->getName() == AllToAllOpV1::getConcatDimensionAttrName(*odsOpName)) {
      tblgen_concat_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_to_all_v1' op ""requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == AllToAllOpV1::getReplicaGroupsAttrName(*odsOpName)) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_split_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_to_all_v1' op ""requires attribute 'split_count'");
    if (namedAttrIt->getName() == AllToAllOpV1::getSplitCountAttrName(*odsOpName)) {
      tblgen_split_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_split_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.all_to_all_v1' op ""requires attribute 'split_dimension'");
    if (namedAttrIt->getName() == AllToAllOpV1::getSplitDimensionAttrName(*odsOpName)) {
      tblgen_split_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_split_dimension && !((true)))
    return emitError(loc, "'vhlo.all_to_all_v1' op ""attribute 'split_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_concat_dimension && !((true)))
    return emitError(loc, "'vhlo.all_to_all_v1' op ""attribute 'concat_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_split_count && !((true)))
    return emitError(loc, "'vhlo.all_to_all_v1' op ""attribute 'split_count' failed to satisfy constraint: any attribute");

  if (tblgen_replica_groups && !((true)))
    return emitError(loc, "'vhlo.all_to_all_v1' op ""attribute 'replica_groups' failed to satisfy constraint: any attribute");

  if (tblgen_channel_id && !((true)))
    return emitError(loc, "'vhlo.all_to_all_v1' op ""attribute 'channel_id' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllToAllOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllToAllOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllToAllOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AllToAllOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AllToAllOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllToAllOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllToAllOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute AllToAllOpV1::getSplitDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 0, getSplitDimensionAttrName()));
}

::mlir::Attribute AllToAllOpV1::getSplitDimension() {
  auto attr = getSplitDimensionAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1::getConcatDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 3, getConcatDimensionAttrName()));
}

::mlir::Attribute AllToAllOpV1::getConcatDimension() {
  auto attr = getConcatDimensionAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1::getSplitCountAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 1, getSplitCountAttrName()));
}

::mlir::Attribute AllToAllOpV1::getSplitCount() {
  auto attr = getSplitCountAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1::getReplicaGroupsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 2, getReplicaGroupsAttrName()));
}

::mlir::Attribute AllToAllOpV1::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute AllToAllOpV1::getChannelIdAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 4, getChannelIdAttrName()));
}

::mlir::Attribute AllToAllOpV1::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

void AllToAllOpV1::setSplitDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getSplitDimensionAttrName(), attr);
}

void AllToAllOpV1::setConcatDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getConcatDimensionAttrName(), attr);
}

void AllToAllOpV1::setSplitCountAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getSplitCountAttrName(), attr);
}

void AllToAllOpV1::setReplicaGroupsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getReplicaGroupsAttrName(), attr);
}

void AllToAllOpV1::setChannelIdAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelIdAttrName(), attr);
}

void AllToAllOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute split_dimension, ::mlir::Attribute concat_dimension, ::mlir::Attribute split_count, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id) {
  odsState.addOperands(operand);
  odsState.addAttribute(getSplitDimensionAttrName(odsState.name), split_dimension);
  odsState.addAttribute(getConcatDimensionAttrName(odsState.name), concat_dimension);
  odsState.addAttribute(getSplitCountAttrName(odsState.name), split_count);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addTypes(result);
}

void AllToAllOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute split_dimension, ::mlir::Attribute concat_dimension, ::mlir::Attribute split_count, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id) {
  odsState.addOperands(operand);
  odsState.addAttribute(getSplitDimensionAttrName(odsState.name), split_dimension);
  odsState.addAttribute(getConcatDimensionAttrName(odsState.name), concat_dimension);
  odsState.addAttribute(getSplitCountAttrName(odsState.name), split_count);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllToAllOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllToAllOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_id'");
    if (namedAttrIt->getName() == getChannelIdAttrName()) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_concat_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'concat_dimension'");
    if (namedAttrIt->getName() == getConcatDimensionAttrName()) {
      tblgen_concat_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == getReplicaGroupsAttrName()) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_split_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'split_count'");
    if (namedAttrIt->getName() == getSplitCountAttrName()) {
      tblgen_split_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_split_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'split_dimension'");
    if (namedAttrIt->getName() == getSplitDimensionAttrName()) {
      tblgen_split_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_split_dimension, "split_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_concat_dimension, "concat_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_split_count, "split_count")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_replica_groups, "replica_groups")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_id, "channel_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllToAllOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version AllToAllOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version AllToAllOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::AllToAllOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::AndOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
AndOpV1GenericAdaptorBase::AndOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.and_v1", odsAttrs.getContext());
}

AndOpV1GenericAdaptorBase::AndOpV1GenericAdaptorBase(AndOpV1 op) : AndOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AndOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AndOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AndOpV1Adaptor::AndOpV1Adaptor(AndOpV1 op) : AndOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AndOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AndOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AndOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AndOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AndOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AndOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AndOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AndOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AndOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AndOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void AndOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void AndOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AndOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AndOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AndOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version AndOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version AndOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::AndOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::Atan2OpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
Atan2OpV1GenericAdaptorBase::Atan2OpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.atan2_v1", odsAttrs.getContext());
}

Atan2OpV1GenericAdaptorBase::Atan2OpV1GenericAdaptorBase(Atan2OpV1 op) : Atan2OpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Atan2OpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Atan2OpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Atan2OpV1Adaptor::Atan2OpV1Adaptor(Atan2OpV1 op) : Atan2OpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Atan2OpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Atan2OpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Atan2OpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Atan2OpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value Atan2OpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &Atan2OpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Atan2OpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Atan2OpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Atan2OpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Atan2OpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void Atan2OpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void Atan2OpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Atan2OpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Atan2OpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Atan2OpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version Atan2OpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version Atan2OpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::Atan2OpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::BatchNormGradOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
BatchNormGradOpV1GenericAdaptorBase::BatchNormGradOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.batch_norm_grad_v1", odsAttrs.getContext());
}

BatchNormGradOpV1GenericAdaptorBase::BatchNormGradOpV1GenericAdaptorBase(BatchNormGradOpV1 op) : BatchNormGradOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BatchNormGradOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BatchNormGradOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute BatchNormGradOpV1GenericAdaptorBase::getEpsilonAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, BatchNormGradOpV1::getEpsilonAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BatchNormGradOpV1GenericAdaptorBase::getEpsilon() {
  auto attr = getEpsilonAttr();
  return attr;
}

::mlir::Attribute BatchNormGradOpV1GenericAdaptorBase::getFeatureIndexAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, BatchNormGradOpV1::getFeatureIndexAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BatchNormGradOpV1GenericAdaptorBase::getFeatureIndex() {
  auto attr = getFeatureIndexAttr();
  return attr;
}

} // namespace detail
BatchNormGradOpV1Adaptor::BatchNormGradOpV1Adaptor(BatchNormGradOpV1 op) : BatchNormGradOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BatchNormGradOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_epsilon;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.batch_norm_grad_v1' op ""requires attribute 'epsilon'");
    if (namedAttrIt->getName() == BatchNormGradOpV1::getEpsilonAttrName(*odsOpName)) {
      tblgen_epsilon = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.batch_norm_grad_v1' op ""requires attribute 'feature_index'");
    if (namedAttrIt->getName() == BatchNormGradOpV1::getFeatureIndexAttrName(*odsOpName)) {
      tblgen_feature_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_epsilon && !((true)))
    return emitError(loc, "'vhlo.batch_norm_grad_v1' op ""attribute 'epsilon' failed to satisfy constraint: any attribute");

  if (tblgen_feature_index && !((true)))
    return emitError(loc, "'vhlo.batch_norm_grad_v1' op ""attribute 'feature_index' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

void BatchNormGradOpV1::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "grad_operand");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "grad_scale");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "grad_offset");
}

std::pair<unsigned, unsigned> BatchNormGradOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BatchNormGradOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormGradOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value BatchNormGradOpV1::getScale() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value BatchNormGradOpV1::getMean() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value BatchNormGradOpV1::getVariance() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value BatchNormGradOpV1::getGradOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &BatchNormGradOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormGradOpV1::getScaleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormGradOpV1::getMeanMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormGradOpV1::getVarianceMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormGradOpV1::getGradOutputMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BatchNormGradOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BatchNormGradOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormGradOpV1::getGradOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value BatchNormGradOpV1::getGradScale() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

::mlir::Value BatchNormGradOpV1::getGradOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(2).begin());
}

::mlir::Attribute BatchNormGradOpV1::getEpsilonAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getEpsilonAttrName()));
}

::mlir::Attribute BatchNormGradOpV1::getEpsilon() {
  auto attr = getEpsilonAttr();
  return attr;
}

::mlir::Attribute BatchNormGradOpV1::getFeatureIndexAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getFeatureIndexAttrName()));
}

::mlir::Attribute BatchNormGradOpV1::getFeatureIndex() {
  auto attr = getFeatureIndexAttr();
  return attr;
}

void BatchNormGradOpV1::setEpsilonAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getEpsilonAttrName(), attr);
}

void BatchNormGradOpV1::setFeatureIndexAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFeatureIndexAttrName(), attr);
}

void BatchNormGradOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type grad_operand, ::mlir::Type grad_scale, ::mlir::Type grad_offset, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value grad_output, ::mlir::Attribute epsilon, ::mlir::Attribute feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(grad_output);
  odsState.addAttribute(getEpsilonAttrName(odsState.name), epsilon);
  odsState.addAttribute(getFeatureIndexAttrName(odsState.name), feature_index);
  odsState.addTypes(grad_operand);
  odsState.addTypes(grad_scale);
  odsState.addTypes(grad_offset);
}

void BatchNormGradOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value grad_output, ::mlir::Attribute epsilon, ::mlir::Attribute feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(grad_output);
  odsState.addAttribute(getEpsilonAttrName(odsState.name), epsilon);
  odsState.addAttribute(getFeatureIndexAttrName(odsState.name), feature_index);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormGradOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BatchNormGradOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_epsilon;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'epsilon'");
    if (namedAttrIt->getName() == getEpsilonAttrName()) {
      tblgen_epsilon = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'feature_index'");
    if (namedAttrIt->getName() == getFeatureIndexAttrName()) {
      tblgen_feature_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_epsilon, "epsilon")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_feature_index, "feature_index")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BatchNormGradOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version BatchNormGradOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version BatchNormGradOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::BatchNormGradOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::BatchNormInferenceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
BatchNormInferenceOpV1GenericAdaptorBase::BatchNormInferenceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.batch_norm_inference_v1", odsAttrs.getContext());
}

BatchNormInferenceOpV1GenericAdaptorBase::BatchNormInferenceOpV1GenericAdaptorBase(BatchNormInferenceOpV1 op) : BatchNormInferenceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BatchNormInferenceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BatchNormInferenceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute BatchNormInferenceOpV1GenericAdaptorBase::getEpsilonAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, BatchNormInferenceOpV1::getEpsilonAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BatchNormInferenceOpV1GenericAdaptorBase::getEpsilon() {
  auto attr = getEpsilonAttr();
  return attr;
}

::mlir::Attribute BatchNormInferenceOpV1GenericAdaptorBase::getFeatureIndexAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, BatchNormInferenceOpV1::getFeatureIndexAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BatchNormInferenceOpV1GenericAdaptorBase::getFeatureIndex() {
  auto attr = getFeatureIndexAttr();
  return attr;
}

} // namespace detail
BatchNormInferenceOpV1Adaptor::BatchNormInferenceOpV1Adaptor(BatchNormInferenceOpV1 op) : BatchNormInferenceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BatchNormInferenceOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_epsilon;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.batch_norm_inference_v1' op ""requires attribute 'epsilon'");
    if (namedAttrIt->getName() == BatchNormInferenceOpV1::getEpsilonAttrName(*odsOpName)) {
      tblgen_epsilon = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.batch_norm_inference_v1' op ""requires attribute 'feature_index'");
    if (namedAttrIt->getName() == BatchNormInferenceOpV1::getFeatureIndexAttrName(*odsOpName)) {
      tblgen_feature_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_epsilon && !((true)))
    return emitError(loc, "'vhlo.batch_norm_inference_v1' op ""attribute 'epsilon' failed to satisfy constraint: any attribute");

  if (tblgen_feature_index && !((true)))
    return emitError(loc, "'vhlo.batch_norm_inference_v1' op ""attribute 'feature_index' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BatchNormInferenceOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BatchNormInferenceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormInferenceOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value BatchNormInferenceOpV1::getScale() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value BatchNormInferenceOpV1::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value BatchNormInferenceOpV1::getMean() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value BatchNormInferenceOpV1::getVariance() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &BatchNormInferenceOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormInferenceOpV1::getScaleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormInferenceOpV1::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormInferenceOpV1::getMeanMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormInferenceOpV1::getVarianceMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BatchNormInferenceOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BatchNormInferenceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormInferenceOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute BatchNormInferenceOpV1::getEpsilonAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getEpsilonAttrName()));
}

::mlir::Attribute BatchNormInferenceOpV1::getEpsilon() {
  auto attr = getEpsilonAttr();
  return attr;
}

::mlir::Attribute BatchNormInferenceOpV1::getFeatureIndexAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getFeatureIndexAttrName()));
}

::mlir::Attribute BatchNormInferenceOpV1::getFeatureIndex() {
  auto attr = getFeatureIndexAttr();
  return attr;
}

void BatchNormInferenceOpV1::setEpsilonAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getEpsilonAttrName(), attr);
}

void BatchNormInferenceOpV1::setFeatureIndexAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFeatureIndexAttrName(), attr);
}

void BatchNormInferenceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Attribute epsilon, ::mlir::Attribute feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addAttribute(getEpsilonAttrName(odsState.name), epsilon);
  odsState.addAttribute(getFeatureIndexAttrName(odsState.name), feature_index);
  odsState.addTypes(result);
}

void BatchNormInferenceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Attribute epsilon, ::mlir::Attribute feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addAttribute(getEpsilonAttrName(odsState.name), epsilon);
  odsState.addAttribute(getFeatureIndexAttrName(odsState.name), feature_index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormInferenceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BatchNormInferenceOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_epsilon;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'epsilon'");
    if (namedAttrIt->getName() == getEpsilonAttrName()) {
      tblgen_epsilon = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'feature_index'");
    if (namedAttrIt->getName() == getFeatureIndexAttrName()) {
      tblgen_feature_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_epsilon, "epsilon")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_feature_index, "feature_index")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BatchNormInferenceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version BatchNormInferenceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version BatchNormInferenceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::BatchNormInferenceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::BatchNormTrainingOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
BatchNormTrainingOpV1GenericAdaptorBase::BatchNormTrainingOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.batch_norm_training_v1", odsAttrs.getContext());
}

BatchNormTrainingOpV1GenericAdaptorBase::BatchNormTrainingOpV1GenericAdaptorBase(BatchNormTrainingOpV1 op) : BatchNormTrainingOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BatchNormTrainingOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BatchNormTrainingOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute BatchNormTrainingOpV1GenericAdaptorBase::getEpsilonAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, BatchNormTrainingOpV1::getEpsilonAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BatchNormTrainingOpV1GenericAdaptorBase::getEpsilon() {
  auto attr = getEpsilonAttr();
  return attr;
}

::mlir::Attribute BatchNormTrainingOpV1GenericAdaptorBase::getFeatureIndexAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, BatchNormTrainingOpV1::getFeatureIndexAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BatchNormTrainingOpV1GenericAdaptorBase::getFeatureIndex() {
  auto attr = getFeatureIndexAttr();
  return attr;
}

} // namespace detail
BatchNormTrainingOpV1Adaptor::BatchNormTrainingOpV1Adaptor(BatchNormTrainingOpV1 op) : BatchNormTrainingOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BatchNormTrainingOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_epsilon;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.batch_norm_training_v1' op ""requires attribute 'epsilon'");
    if (namedAttrIt->getName() == BatchNormTrainingOpV1::getEpsilonAttrName(*odsOpName)) {
      tblgen_epsilon = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.batch_norm_training_v1' op ""requires attribute 'feature_index'");
    if (namedAttrIt->getName() == BatchNormTrainingOpV1::getFeatureIndexAttrName(*odsOpName)) {
      tblgen_feature_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_epsilon && !((true)))
    return emitError(loc, "'vhlo.batch_norm_training_v1' op ""attribute 'epsilon' failed to satisfy constraint: any attribute");

  if (tblgen_feature_index && !((true)))
    return emitError(loc, "'vhlo.batch_norm_training_v1' op ""attribute 'feature_index' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

void BatchNormTrainingOpV1::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "output");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "batch_mean");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "batch_var");
}

std::pair<unsigned, unsigned> BatchNormTrainingOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BatchNormTrainingOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormTrainingOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value BatchNormTrainingOpV1::getScale() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value BatchNormTrainingOpV1::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &BatchNormTrainingOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormTrainingOpV1::getScaleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BatchNormTrainingOpV1::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BatchNormTrainingOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BatchNormTrainingOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormTrainingOpV1::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value BatchNormTrainingOpV1::getBatchMean() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

::mlir::Value BatchNormTrainingOpV1::getBatchVar() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(2).begin());
}

::mlir::Attribute BatchNormTrainingOpV1::getEpsilonAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getEpsilonAttrName()));
}

::mlir::Attribute BatchNormTrainingOpV1::getEpsilon() {
  auto attr = getEpsilonAttr();
  return attr;
}

::mlir::Attribute BatchNormTrainingOpV1::getFeatureIndexAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getFeatureIndexAttrName()));
}

::mlir::Attribute BatchNormTrainingOpV1::getFeatureIndex() {
  auto attr = getFeatureIndexAttr();
  return attr;
}

void BatchNormTrainingOpV1::setEpsilonAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getEpsilonAttrName(), attr);
}

void BatchNormTrainingOpV1::setFeatureIndexAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFeatureIndexAttrName(), attr);
}

void BatchNormTrainingOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Type batch_mean, ::mlir::Type batch_var, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Attribute epsilon, ::mlir::Attribute feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addAttribute(getEpsilonAttrName(odsState.name), epsilon);
  odsState.addAttribute(getFeatureIndexAttrName(odsState.name), feature_index);
  odsState.addTypes(output);
  odsState.addTypes(batch_mean);
  odsState.addTypes(batch_var);
}

void BatchNormTrainingOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Attribute epsilon, ::mlir::Attribute feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addAttribute(getEpsilonAttrName(odsState.name), epsilon);
  odsState.addAttribute(getFeatureIndexAttrName(odsState.name), feature_index);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormTrainingOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BatchNormTrainingOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_epsilon;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'epsilon'");
    if (namedAttrIt->getName() == getEpsilonAttrName()) {
      tblgen_epsilon = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'feature_index'");
    if (namedAttrIt->getName() == getFeatureIndexAttrName()) {
      tblgen_feature_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_epsilon, "epsilon")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_feature_index, "feature_index")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BatchNormTrainingOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version BatchNormTrainingOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version BatchNormTrainingOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::BatchNormTrainingOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::BitcastConvertOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitcastConvertOpV1GenericAdaptorBase::BitcastConvertOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.bitcast_convert_v1", odsAttrs.getContext());
}

BitcastConvertOpV1GenericAdaptorBase::BitcastConvertOpV1GenericAdaptorBase(BitcastConvertOpV1 op) : BitcastConvertOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BitcastConvertOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BitcastConvertOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BitcastConvertOpV1Adaptor::BitcastConvertOpV1Adaptor(BitcastConvertOpV1 op) : BitcastConvertOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BitcastConvertOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BitcastConvertOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitcastConvertOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BitcastConvertOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BitcastConvertOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BitcastConvertOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitcastConvertOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BitcastConvertOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BitcastConvertOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void BitcastConvertOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitcastConvertOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitcastConvertOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BitcastConvertOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version BitcastConvertOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version BitcastConvertOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::BitcastConvertOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::BroadcastInDimOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastInDimOpV1GenericAdaptorBase::BroadcastInDimOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.broadcast_in_dim_v1", odsAttrs.getContext());
}

BroadcastInDimOpV1GenericAdaptorBase::BroadcastInDimOpV1GenericAdaptorBase(BroadcastInDimOpV1 op) : BroadcastInDimOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastInDimOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastInDimOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute BroadcastInDimOpV1GenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastInDimOpV1::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BroadcastInDimOpV1GenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr;
}

} // namespace detail
BroadcastInDimOpV1Adaptor::BroadcastInDimOpV1Adaptor(BroadcastInDimOpV1 op) : BroadcastInDimOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastInDimOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.broadcast_in_dim_v1' op ""requires attribute 'broadcast_dimensions'");
    if (namedAttrIt->getName() == BroadcastInDimOpV1::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((true)))
    return emitError(loc, "'vhlo.broadcast_in_dim_v1' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastInDimOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastInDimOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastInDimOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BroadcastInDimOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastInDimOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastInDimOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastInDimOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute BroadcastInDimOpV1::getBroadcastDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::mlir::Attribute BroadcastInDimOpV1::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr;
}

void BroadcastInDimOpV1::setBroadcastDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastInDimOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute broadcast_dimensions) {
  odsState.addOperands(operand);
  odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  odsState.addTypes(result);
}

void BroadcastInDimOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute broadcast_dimensions) {
  odsState.addOperands(operand);
  odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastInDimOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastInDimOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'broadcast_dimensions'");
    if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastInDimOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version BroadcastInDimOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version BroadcastInDimOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::BroadcastInDimOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::BroadcastOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastOpV1GenericAdaptorBase::BroadcastOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.broadcast_v1", odsAttrs.getContext());
}

BroadcastOpV1GenericAdaptorBase::BroadcastOpV1GenericAdaptorBase(BroadcastOpV1 op) : BroadcastOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute BroadcastOpV1GenericAdaptorBase::getBroadcastSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastOpV1::getBroadcastSizesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute BroadcastOpV1GenericAdaptorBase::getBroadcastSizes() {
  auto attr = getBroadcastSizesAttr();
  return attr;
}

} // namespace detail
BroadcastOpV1Adaptor::BroadcastOpV1Adaptor(BroadcastOpV1 op) : BroadcastOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_sizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.broadcast_v1' op ""requires attribute 'broadcast_sizes'");
    if (namedAttrIt->getName() == BroadcastOpV1::getBroadcastSizesAttrName(*odsOpName)) {
      tblgen_broadcast_sizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_sizes && !((true)))
    return emitError(loc, "'vhlo.broadcast_v1' op ""attribute 'broadcast_sizes' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BroadcastOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute BroadcastOpV1::getBroadcastSizesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastSizesAttrName()));
}

::mlir::Attribute BroadcastOpV1::getBroadcastSizes() {
  auto attr = getBroadcastSizesAttr();
  return attr;
}

void BroadcastOpV1::setBroadcastSizesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBroadcastSizesAttrName(), attr);
}

void BroadcastOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute broadcast_sizes) {
  odsState.addOperands(operand);
  odsState.addAttribute(getBroadcastSizesAttrName(odsState.name), broadcast_sizes);
  odsState.addTypes(result);
}

void BroadcastOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute broadcast_sizes) {
  odsState.addOperands(operand);
  odsState.addAttribute(getBroadcastSizesAttrName(odsState.name), broadcast_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_sizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'broadcast_sizes'");
    if (namedAttrIt->getName() == getBroadcastSizesAttrName()) {
      tblgen_broadcast_sizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_broadcast_sizes, "broadcast_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version BroadcastOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version BroadcastOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::BroadcastOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CallOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CallOpV1GenericAdaptorBase::CallOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.call_v1", odsAttrs.getContext());
}

CallOpV1GenericAdaptorBase::CallOpV1GenericAdaptorBase(CallOpV1 op) : CallOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CallOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CallOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute CallOpV1GenericAdaptorBase::getCalleeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, CallOpV1::getCalleeAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CallOpV1GenericAdaptorBase::getCallee() {
  auto attr = getCalleeAttr();
  return attr;
}

} // namespace detail
CallOpV1Adaptor::CallOpV1Adaptor(CallOpV1 op) : CallOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CallOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_callee;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.call_v1' op ""requires attribute 'callee'");
    if (namedAttrIt->getName() == CallOpV1::getCalleeAttrName(*odsOpName)) {
      tblgen_callee = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_callee && !((true)))
    return emitError(loc, "'vhlo.call_v1' op ""attribute 'callee' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CallOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CallOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CallOpV1::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CallOpV1::getOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CallOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range CallOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range CallOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Attribute CallOpV1::getCalleeAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getCalleeAttrName()));
}

::mlir::Attribute CallOpV1::getCallee() {
  auto attr = getCalleeAttr();
  return attr;
}

void CallOpV1::setCalleeAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getCalleeAttrName(), attr);
}

void CallOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Attribute callee, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute(getCalleeAttrName(odsState.name), callee);
  odsState.addTypes(results);
}

void CallOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CallOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_callee;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'callee'");
    if (namedAttrIt->getName() == getCalleeAttrName()) {
      tblgen_callee = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_callee, "callee")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CallOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CallOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CallOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CallOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CaseOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CaseOpV1GenericAdaptorBase::CaseOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.case_v1", odsAttrs.getContext());
}

CaseOpV1GenericAdaptorBase::CaseOpV1GenericAdaptorBase(CaseOpV1 op) : CaseOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CaseOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CaseOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::RegionRange CaseOpV1GenericAdaptorBase::getBranches() {
  return odsRegions.drop_front(0);
}

::mlir::RegionRange CaseOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
CaseOpV1Adaptor::CaseOpV1Adaptor(CaseOpV1 op) : CaseOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CaseOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CaseOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CaseOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CaseOpV1::getIndex() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CaseOpV1::getIndexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CaseOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range CaseOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range CaseOpV1::getResults() {
  return getODSResults(0);
}

::mlir::MutableArrayRef<::mlir::Region> CaseOpV1::getBranches() {
  return (*this)->getRegions().drop_front(0);
}

void CaseOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value index, unsigned branchesCount) {
  odsState.addOperands(index);
  for (unsigned i = 0; i < branchesCount; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(results);
}

void CaseOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes, unsigned numRegions) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != numRegions; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CaseOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : getBranches())
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "branches", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult CaseOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CaseOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CaseOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CaseOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CbrtOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CbrtOpV1GenericAdaptorBase::CbrtOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.cbrt_v1", odsAttrs.getContext());
}

CbrtOpV1GenericAdaptorBase::CbrtOpV1GenericAdaptorBase(CbrtOpV1 op) : CbrtOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CbrtOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CbrtOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CbrtOpV1Adaptor::CbrtOpV1Adaptor(CbrtOpV1 op) : CbrtOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CbrtOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CbrtOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CbrtOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CbrtOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CbrtOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CbrtOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CbrtOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CbrtOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CbrtOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CbrtOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CbrtOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CbrtOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CbrtOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CbrtOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CbrtOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CbrtOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CeilOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CeilOpV1GenericAdaptorBase::CeilOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.ceil_v1", odsAttrs.getContext());
}

CeilOpV1GenericAdaptorBase::CeilOpV1GenericAdaptorBase(CeilOpV1 op) : CeilOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CeilOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CeilOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CeilOpV1Adaptor::CeilOpV1Adaptor(CeilOpV1 op) : CeilOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CeilOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CeilOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CeilOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CeilOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CeilOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CeilOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CeilOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CeilOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CeilOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CeilOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CeilOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CeilOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CeilOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CeilOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CholeskyOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CholeskyOpV1GenericAdaptorBase::CholeskyOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.cholesky_v1", odsAttrs.getContext());
}

CholeskyOpV1GenericAdaptorBase::CholeskyOpV1GenericAdaptorBase(CholeskyOpV1 op) : CholeskyOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CholeskyOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CholeskyOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute CholeskyOpV1GenericAdaptorBase::getLowerAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, CholeskyOpV1::getLowerAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CholeskyOpV1GenericAdaptorBase::getLower() {
  auto attr = getLowerAttr();
  return attr;
}

} // namespace detail
CholeskyOpV1Adaptor::CholeskyOpV1Adaptor(CholeskyOpV1 op) : CholeskyOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CholeskyOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_lower;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.cholesky_v1' op ""requires attribute 'lower'");
    if (namedAttrIt->getName() == CholeskyOpV1::getLowerAttrName(*odsOpName)) {
      tblgen_lower = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_lower && !((true)))
    return emitError(loc, "'vhlo.cholesky_v1' op ""attribute 'lower' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CholeskyOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CholeskyOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CholeskyOpV1::getA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CholeskyOpV1::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CholeskyOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CholeskyOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CholeskyOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute CholeskyOpV1::getLowerAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getLowerAttrName()));
}

::mlir::Attribute CholeskyOpV1::getLower() {
  auto attr = getLowerAttr();
  return attr;
}

void CholeskyOpV1::setLowerAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLowerAttrName(), attr);
}

void CholeskyOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value a, ::mlir::Attribute lower) {
  odsState.addOperands(a);
  odsState.addAttribute(getLowerAttrName(odsState.name), lower);
  odsState.addTypes(result);
}

void CholeskyOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Attribute lower) {
  odsState.addOperands(a);
  odsState.addAttribute(getLowerAttrName(odsState.name), lower);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CholeskyOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CholeskyOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_lower;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'lower'");
    if (namedAttrIt->getName() == getLowerAttrName()) {
      tblgen_lower = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_lower, "lower")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CholeskyOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CholeskyOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CholeskyOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CholeskyOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ClampOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClampOpV1GenericAdaptorBase::ClampOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.clamp_v1", odsAttrs.getContext());
}

ClampOpV1GenericAdaptorBase::ClampOpV1GenericAdaptorBase(ClampOpV1 op) : ClampOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClampOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClampOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClampOpV1Adaptor::ClampOpV1Adaptor(ClampOpV1 op) : ClampOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClampOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClampOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClampOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClampOpV1::getMin() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ClampOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value ClampOpV1::getMax() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ClampOpV1::getMinMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ClampOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ClampOpV1::getMaxMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ClampOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClampOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClampOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClampOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value min, ::mlir::Value operand, ::mlir::Value max) {
  odsState.addOperands(min);
  odsState.addOperands(operand);
  odsState.addOperands(max);
  odsState.addTypes(result);
}

void ClampOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value min, ::mlir::Value operand, ::mlir::Value max) {
  odsState.addOperands(min);
  odsState.addOperands(operand);
  odsState.addOperands(max);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClampOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClampOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClampOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ClampOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ClampOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ClampOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ClzOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClzOpV1GenericAdaptorBase::ClzOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.count_leading_zeros_v1", odsAttrs.getContext());
}

ClzOpV1GenericAdaptorBase::ClzOpV1GenericAdaptorBase(ClzOpV1 op) : ClzOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClzOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClzOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClzOpV1Adaptor::ClzOpV1Adaptor(ClzOpV1 op) : ClzOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClzOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClzOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClzOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClzOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ClzOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ClzOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClzOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClzOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClzOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ClzOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClzOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClzOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClzOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ClzOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ClzOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ClzOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CollectivePermuteOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CollectivePermuteOpV1GenericAdaptorBase::CollectivePermuteOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.collective_permute_v1", odsAttrs.getContext());
}

CollectivePermuteOpV1GenericAdaptorBase::CollectivePermuteOpV1GenericAdaptorBase(CollectivePermuteOpV1 op) : CollectivePermuteOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CollectivePermuteOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CollectivePermuteOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute CollectivePermuteOpV1GenericAdaptorBase::getSourceTargetPairsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, CollectivePermuteOpV1::getSourceTargetPairsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CollectivePermuteOpV1GenericAdaptorBase::getSourceTargetPairs() {
  auto attr = getSourceTargetPairsAttr();
  return attr;
}

::mlir::Attribute CollectivePermuteOpV1GenericAdaptorBase::getChannelIdAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, CollectivePermuteOpV1::getChannelIdAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CollectivePermuteOpV1GenericAdaptorBase::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

} // namespace detail
CollectivePermuteOpV1Adaptor::CollectivePermuteOpV1Adaptor(CollectivePermuteOpV1 op) : CollectivePermuteOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CollectivePermuteOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.collective_permute_v1' op ""requires attribute 'channel_id'");
    if (namedAttrIt->getName() == CollectivePermuteOpV1::getChannelIdAttrName(*odsOpName)) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_source_target_pairs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.collective_permute_v1' op ""requires attribute 'source_target_pairs'");
    if (namedAttrIt->getName() == CollectivePermuteOpV1::getSourceTargetPairsAttrName(*odsOpName)) {
      tblgen_source_target_pairs = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_source_target_pairs && !((true)))
    return emitError(loc, "'vhlo.collective_permute_v1' op ""attribute 'source_target_pairs' failed to satisfy constraint: any attribute");

  if (tblgen_channel_id && !((true)))
    return emitError(loc, "'vhlo.collective_permute_v1' op ""attribute 'channel_id' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CollectivePermuteOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CollectivePermuteOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CollectivePermuteOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CollectivePermuteOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CollectivePermuteOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CollectivePermuteOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CollectivePermuteOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute CollectivePermuteOpV1::getSourceTargetPairsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getSourceTargetPairsAttrName()));
}

::mlir::Attribute CollectivePermuteOpV1::getSourceTargetPairs() {
  auto attr = getSourceTargetPairsAttr();
  return attr;
}

::mlir::Attribute CollectivePermuteOpV1::getChannelIdAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getChannelIdAttrName()));
}

::mlir::Attribute CollectivePermuteOpV1::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

void CollectivePermuteOpV1::setSourceTargetPairsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getSourceTargetPairsAttrName(), attr);
}

void CollectivePermuteOpV1::setChannelIdAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelIdAttrName(), attr);
}

void CollectivePermuteOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute source_target_pairs, ::mlir::Attribute channel_id) {
  odsState.addOperands(operand);
  odsState.addAttribute(getSourceTargetPairsAttrName(odsState.name), source_target_pairs);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addTypes(result);
}

void CollectivePermuteOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute source_target_pairs, ::mlir::Attribute channel_id) {
  odsState.addOperands(operand);
  odsState.addAttribute(getSourceTargetPairsAttrName(odsState.name), source_target_pairs);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CollectivePermuteOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CollectivePermuteOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_id'");
    if (namedAttrIt->getName() == getChannelIdAttrName()) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_source_target_pairs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'source_target_pairs'");
    if (namedAttrIt->getName() == getSourceTargetPairsAttrName()) {
      tblgen_source_target_pairs = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_source_target_pairs, "source_target_pairs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_id, "channel_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CollectivePermuteOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CollectivePermuteOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CollectivePermuteOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CollectivePermuteOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CompareOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CompareOpV1GenericAdaptorBase::CompareOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.compare_v1", odsAttrs.getContext());
}

CompareOpV1GenericAdaptorBase::CompareOpV1GenericAdaptorBase(CompareOpV1 op) : CompareOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CompareOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CompareOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute CompareOpV1GenericAdaptorBase::getComparisonDirectionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, CompareOpV1::getComparisonDirectionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CompareOpV1GenericAdaptorBase::getComparisonDirection() {
  auto attr = getComparisonDirectionAttr();
  return attr;
}

::mlir::Attribute CompareOpV1GenericAdaptorBase::getCompareTypeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, CompareOpV1::getCompareTypeAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CompareOpV1GenericAdaptorBase::getCompareType() {
  auto attr = getCompareTypeAttr();
  return attr;
}

} // namespace detail
CompareOpV1Adaptor::CompareOpV1Adaptor(CompareOpV1 op) : CompareOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CompareOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_compare_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.compare_v1' op ""requires attribute 'compare_type'");
    if (namedAttrIt->getName() == CompareOpV1::getCompareTypeAttrName(*odsOpName)) {
      tblgen_compare_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_comparison_direction;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.compare_v1' op ""requires attribute 'comparison_direction'");
    if (namedAttrIt->getName() == CompareOpV1::getComparisonDirectionAttrName(*odsOpName)) {
      tblgen_comparison_direction = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_comparison_direction && !((true)))
    return emitError(loc, "'vhlo.compare_v1' op ""attribute 'comparison_direction' failed to satisfy constraint: any attribute");

  if (tblgen_compare_type && !((true)))
    return emitError(loc, "'vhlo.compare_v1' op ""attribute 'compare_type' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CompareOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CompareOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CompareOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CompareOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CompareOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CompareOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CompareOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CompareOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CompareOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute CompareOpV1::getComparisonDirectionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getComparisonDirectionAttrName()));
}

::mlir::Attribute CompareOpV1::getComparisonDirection() {
  auto attr = getComparisonDirectionAttr();
  return attr;
}

::mlir::Attribute CompareOpV1::getCompareTypeAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getCompareTypeAttrName()));
}

::mlir::Attribute CompareOpV1::getCompareType() {
  auto attr = getCompareTypeAttr();
  return attr;
}

void CompareOpV1::setComparisonDirectionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getComparisonDirectionAttrName(), attr);
}

void CompareOpV1::setCompareTypeAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getCompareTypeAttrName(), attr);
}

void CompareOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute comparison_direction, ::mlir::Attribute compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), comparison_direction);
  odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  odsState.addTypes(result);
}

void CompareOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute comparison_direction, ::mlir::Attribute compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), comparison_direction);
  odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CompareOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CompareOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_compare_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'compare_type'");
    if (namedAttrIt->getName() == getCompareTypeAttrName()) {
      tblgen_compare_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_comparison_direction;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'comparison_direction'");
    if (namedAttrIt->getName() == getComparisonDirectionAttrName()) {
      tblgen_comparison_direction = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_comparison_direction, "comparison_direction")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_compare_type, "compare_type")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CompareOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CompareOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CompareOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CompareOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ComplexOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ComplexOpV1GenericAdaptorBase::ComplexOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.complex_v1", odsAttrs.getContext());
}

ComplexOpV1GenericAdaptorBase::ComplexOpV1GenericAdaptorBase(ComplexOpV1 op) : ComplexOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ComplexOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ComplexOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ComplexOpV1Adaptor::ComplexOpV1Adaptor(ComplexOpV1 op) : ComplexOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ComplexOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ComplexOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ComplexOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ComplexOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ComplexOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ComplexOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ComplexOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ComplexOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ComplexOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ComplexOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ComplexOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ComplexOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ComplexOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ComplexOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ComplexOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ComplexOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ComplexOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ComplexOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ComputeReshapeShapeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ComputeReshapeShapeOpV1GenericAdaptorBase::ComputeReshapeShapeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.compute_reshape_shape_v1", odsAttrs.getContext());
}

ComputeReshapeShapeOpV1GenericAdaptorBase::ComputeReshapeShapeOpV1GenericAdaptorBase(ComputeReshapeShapeOpV1 op) : ComputeReshapeShapeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ComputeReshapeShapeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ComputeReshapeShapeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ComputeReshapeShapeOpV1Adaptor::ComputeReshapeShapeOpV1Adaptor(ComputeReshapeShapeOpV1 op) : ComputeReshapeShapeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ComputeReshapeShapeOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ComputeReshapeShapeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ComputeReshapeShapeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ComputeReshapeShapeOpV1::getNumElements() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ComputeReshapeShapeOpV1::getDynamicShape() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ComputeReshapeShapeOpV1::getNumElementsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ComputeReshapeShapeOpV1::getDynamicShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ComputeReshapeShapeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ComputeReshapeShapeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ComputeReshapeShapeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ComputeReshapeShapeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value num_elements, ::mlir::Value dynamic_shape) {
  odsState.addOperands(num_elements);
  odsState.addOperands(dynamic_shape);
  odsState.addTypes(result);
}

void ComputeReshapeShapeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value num_elements, ::mlir::Value dynamic_shape) {
  odsState.addOperands(num_elements);
  odsState.addOperands(dynamic_shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ComputeReshapeShapeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ComputeReshapeShapeOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ComputeReshapeShapeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ComputeReshapeShapeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ComputeReshapeShapeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ComputeReshapeShapeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ConcatenateOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConcatenateOpV1GenericAdaptorBase::ConcatenateOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.concatenate_v1", odsAttrs.getContext());
}

ConcatenateOpV1GenericAdaptorBase::ConcatenateOpV1GenericAdaptorBase(ConcatenateOpV1 op) : ConcatenateOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConcatenateOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ConcatenateOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ConcatenateOpV1GenericAdaptorBase::getDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ConcatenateOpV1::getDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConcatenateOpV1GenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

} // namespace detail
ConcatenateOpV1Adaptor::ConcatenateOpV1Adaptor(ConcatenateOpV1 op) : ConcatenateOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConcatenateOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.concatenate_v1' op ""requires attribute 'dimension'");
    if (namedAttrIt->getName() == ConcatenateOpV1::getDimensionAttrName(*odsOpName)) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimension && !((true)))
    return emitError(loc, "'vhlo.concatenate_v1' op ""attribute 'dimension' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConcatenateOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ConcatenateOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ConcatenateOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ConcatenateOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ConcatenateOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConcatenateOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConcatenateOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute ConcatenateOpV1::getDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDimensionAttrName()));
}

::mlir::Attribute ConcatenateOpV1::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

void ConcatenateOpV1::setDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void ConcatenateOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::Attribute dimension) {
  odsState.addOperands(inputs);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addTypes(result);
}

void ConcatenateOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Attribute dimension) {
  odsState.addOperands(inputs);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatenateOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConcatenateOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimension'");
    if (namedAttrIt->getName() == getDimensionAttrName()) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConcatenateOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ConcatenateOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ConcatenateOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ConcatenateOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ConstantOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConstantOpV1GenericAdaptorBase::ConstantOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.constant_v1", odsAttrs.getContext());
}

ConstantOpV1GenericAdaptorBase::ConstantOpV1GenericAdaptorBase(ConstantOpV1 op) : ConstantOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConstantOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConstantOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ConstantOpV1GenericAdaptorBase::getValueAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ConstantOpV1::getValueAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConstantOpV1GenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
ConstantOpV1Adaptor::ConstantOpV1Adaptor(ConstantOpV1 op) : ConstantOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConstantOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.constant_v1' op ""requires attribute 'value'");
    if (namedAttrIt->getName() == ConstantOpV1::getValueAttrName(*odsOpName)) {
      tblgen_value = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_value && !((true)))
    return emitError(loc, "'vhlo.constant_v1' op ""attribute 'value' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConstantOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstantOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstantOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstantOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstantOpV1::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute ConstantOpV1::getValueAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getValueAttrName()));
}

::mlir::Attribute ConstantOpV1::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void ConstantOpV1::setValueAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void ConstantOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Attribute value) {
  odsState.addAttribute(getValueAttrName(odsState.name), value);
  odsState.addTypes(output);
}

void ConstantOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute value) {
  odsState.addAttribute(getValueAttrName(odsState.name), value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConstantOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'value'");
    if (namedAttrIt->getName() == getValueAttrName()) {
      tblgen_value = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConstantOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ConstantOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ConstantOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ConstantOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ConvertOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertOpV1GenericAdaptorBase::ConvertOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.convert_v1", odsAttrs.getContext());
}

ConvertOpV1GenericAdaptorBase::ConvertOpV1GenericAdaptorBase(ConvertOpV1 op) : ConvertOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvertOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertOpV1Adaptor::ConvertOpV1Adaptor(ConvertOpV1 op) : ConvertOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvertOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvertOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConvertOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvertOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ConvertOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ConvertOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConvertOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ConvertOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ConvertOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ConvertOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ConvolutionOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvolutionOpV1GenericAdaptorBase::ConvolutionOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.convolution_v1", odsAttrs.getContext());
}

ConvolutionOpV1GenericAdaptorBase::ConvolutionOpV1GenericAdaptorBase(ConvolutionOpV1 op) : ConvolutionOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvolutionOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvolutionOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getWindowStridesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 16, odsAttrs.end() - 0, ConvolutionOpV1::getWindowStridesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getPaddingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 12, odsAttrs.end() - 4, ConvolutionOpV1::getPaddingAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getLhsDilationAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 8, odsAttrs.end() - 8, ConvolutionOpV1::getLhsDilationAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getLhsDilation() {
  auto attr = getLhsDilationAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getRhsDilationAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 14, odsAttrs.end() - 2, ConvolutionOpV1::getRhsDilationAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getRhsDilation() {
  auto attr = getRhsDilationAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getWindowReversalAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 15, odsAttrs.end() - 1, ConvolutionOpV1::getWindowReversalAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getWindowReversal() {
  auto attr = getWindowReversalAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getInputBatchDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 14, ConvolutionOpV1::getInputBatchDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getInputBatchDimension() {
  auto attr = getInputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getInputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 13, ConvolutionOpV1::getInputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getInputFeatureDimension() {
  auto attr = getInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getInputSpatialDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 12, ConvolutionOpV1::getInputSpatialDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getInputSpatialDimensions() {
  auto attr = getInputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getKernelInputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 5, odsAttrs.end() - 11, ConvolutionOpV1::getKernelInputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getKernelInputFeatureDimension() {
  auto attr = getKernelInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getKernelOutputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 6, odsAttrs.end() - 10, ConvolutionOpV1::getKernelOutputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getKernelOutputFeatureDimension() {
  auto attr = getKernelOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getKernelSpatialDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 7, odsAttrs.end() - 9, ConvolutionOpV1::getKernelSpatialDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getKernelSpatialDimensions() {
  auto attr = getKernelSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getOutputBatchDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 9, odsAttrs.end() - 7, ConvolutionOpV1::getOutputBatchDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getOutputBatchDimension() {
  auto attr = getOutputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getOutputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 10, odsAttrs.end() - 6, ConvolutionOpV1::getOutputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getOutputFeatureDimension() {
  auto attr = getOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getOutputSpatialDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 11, odsAttrs.end() - 5, ConvolutionOpV1::getOutputSpatialDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getOutputSpatialDimensions() {
  auto attr = getOutputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getFeatureGroupCountAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 15, ConvolutionOpV1::getFeatureGroupCountAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getFeatureGroupCount() {
  auto attr = getFeatureGroupCountAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getBatchGroupCountAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 16, ConvolutionOpV1::getBatchGroupCountAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getBatchGroupCount() {
  auto attr = getBatchGroupCountAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getPrecisionConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 13, odsAttrs.end() - 3, ConvolutionOpV1::getPrecisionConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ConvolutionOpV1GenericAdaptorBase::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

} // namespace detail
ConvolutionOpV1Adaptor::ConvolutionOpV1Adaptor(ConvolutionOpV1 op) : ConvolutionOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvolutionOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_batch_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'batch_group_count'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getBatchGroupCountAttrName(*odsOpName)) {
      tblgen_batch_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'feature_group_count'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getFeatureGroupCountAttrName(*odsOpName)) {
      tblgen_feature_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'input_batch_dimension'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getInputBatchDimensionAttrName(*odsOpName)) {
      tblgen_input_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'input_feature_dimension'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getInputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'input_spatial_dimensions'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getInputSpatialDimensionsAttrName(*odsOpName)) {
      tblgen_input_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'kernel_input_feature_dimension'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getKernelInputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_kernel_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'kernel_output_feature_dimension'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getKernelOutputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_kernel_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'kernel_spatial_dimensions'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getKernelSpatialDimensionsAttrName(*odsOpName)) {
      tblgen_kernel_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'lhs_dilation'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getLhsDilationAttrName(*odsOpName)) {
      tblgen_lhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'output_batch_dimension'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getOutputBatchDimensionAttrName(*odsOpName)) {
      tblgen_output_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'output_feature_dimension'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getOutputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'output_spatial_dimensions'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getOutputSpatialDimensionsAttrName(*odsOpName)) {
      tblgen_output_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'padding'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getPaddingAttrName(*odsOpName)) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'precision_config'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getPrecisionConfigAttrName(*odsOpName)) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'rhs_dilation'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getRhsDilationAttrName(*odsOpName)) {
      tblgen_rhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_reversal;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'window_reversal'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getWindowReversalAttrName(*odsOpName)) {
      tblgen_window_reversal = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.convolution_v1' op ""requires attribute 'window_strides'");
    if (namedAttrIt->getName() == ConvolutionOpV1::getWindowStridesAttrName(*odsOpName)) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_window_strides && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'window_strides' failed to satisfy constraint: any attribute");

  if (tblgen_padding && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'padding' failed to satisfy constraint: any attribute");

  if (tblgen_lhs_dilation && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'lhs_dilation' failed to satisfy constraint: any attribute");

  if (tblgen_rhs_dilation && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'rhs_dilation' failed to satisfy constraint: any attribute");

  if (tblgen_window_reversal && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'window_reversal' failed to satisfy constraint: any attribute");

  if (tblgen_input_batch_dimension && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'input_batch_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_input_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'input_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_input_spatial_dimensions && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'input_spatial_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_kernel_input_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'kernel_input_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_kernel_output_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'kernel_output_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_kernel_spatial_dimensions && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'kernel_spatial_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_output_batch_dimension && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'output_batch_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_output_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'output_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_output_spatial_dimensions && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'output_spatial_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_feature_group_count && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'feature_group_count' failed to satisfy constraint: any attribute");

  if (tblgen_batch_group_count && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'batch_group_count' failed to satisfy constraint: any attribute");

  if (tblgen_precision_config && !((true)))
    return emitError(loc, "'vhlo.convolution_v1' op ""attribute 'precision_config' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvolutionOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvolutionOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvolutionOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ConvolutionOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ConvolutionOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ConvolutionOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvolutionOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvolutionOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvolutionOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute ConvolutionOpV1::getWindowStridesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 16, (*this)->getAttrs().end() - 0, getWindowStridesAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getPaddingAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 12, (*this)->getAttrs().end() - 4, getPaddingAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getLhsDilationAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 8, (*this)->getAttrs().end() - 8, getLhsDilationAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getLhsDilation() {
  auto attr = getLhsDilationAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getRhsDilationAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 14, (*this)->getAttrs().end() - 2, getRhsDilationAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getRhsDilation() {
  auto attr = getRhsDilationAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getWindowReversalAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 15, (*this)->getAttrs().end() - 1, getWindowReversalAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getWindowReversal() {
  auto attr = getWindowReversalAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getInputBatchDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 14, getInputBatchDimensionAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getInputBatchDimension() {
  auto attr = getInputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getInputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 13, getInputFeatureDimensionAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getInputFeatureDimension() {
  auto attr = getInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getInputSpatialDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 12, getInputSpatialDimensionsAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getInputSpatialDimensions() {
  auto attr = getInputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getKernelInputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 5, (*this)->getAttrs().end() - 11, getKernelInputFeatureDimensionAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getKernelInputFeatureDimension() {
  auto attr = getKernelInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getKernelOutputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 6, (*this)->getAttrs().end() - 10, getKernelOutputFeatureDimensionAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getKernelOutputFeatureDimension() {
  auto attr = getKernelOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getKernelSpatialDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 7, (*this)->getAttrs().end() - 9, getKernelSpatialDimensionsAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getKernelSpatialDimensions() {
  auto attr = getKernelSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getOutputBatchDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 9, (*this)->getAttrs().end() - 7, getOutputBatchDimensionAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getOutputBatchDimension() {
  auto attr = getOutputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getOutputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 10, (*this)->getAttrs().end() - 6, getOutputFeatureDimensionAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getOutputFeatureDimension() {
  auto attr = getOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getOutputSpatialDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 11, (*this)->getAttrs().end() - 5, getOutputSpatialDimensionsAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getOutputSpatialDimensions() {
  auto attr = getOutputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getFeatureGroupCountAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 15, getFeatureGroupCountAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getFeatureGroupCount() {
  auto attr = getFeatureGroupCountAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getBatchGroupCountAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 16, getBatchGroupCountAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getBatchGroupCount() {
  auto attr = getBatchGroupCountAttr();
  return attr;
}

::mlir::Attribute ConvolutionOpV1::getPrecisionConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 13, (*this)->getAttrs().end() - 3, getPrecisionConfigAttrName()));
}

::mlir::Attribute ConvolutionOpV1::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

void ConvolutionOpV1::setWindowStridesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowStridesAttrName(), attr);
}

void ConvolutionOpV1::setPaddingAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPaddingAttrName(), attr);
}

void ConvolutionOpV1::setLhsDilationAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLhsDilationAttrName(), attr);
}

void ConvolutionOpV1::setRhsDilationAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getRhsDilationAttrName(), attr);
}

void ConvolutionOpV1::setWindowReversalAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowReversalAttrName(), attr);
}

void ConvolutionOpV1::setInputBatchDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInputBatchDimensionAttrName(), attr);
}

void ConvolutionOpV1::setInputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInputFeatureDimensionAttrName(), attr);
}

void ConvolutionOpV1::setInputSpatialDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInputSpatialDimensionsAttrName(), attr);
}

void ConvolutionOpV1::setKernelInputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKernelInputFeatureDimensionAttrName(), attr);
}

void ConvolutionOpV1::setKernelOutputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKernelOutputFeatureDimensionAttrName(), attr);
}

void ConvolutionOpV1::setKernelSpatialDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKernelSpatialDimensionsAttrName(), attr);
}

void ConvolutionOpV1::setOutputBatchDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutputBatchDimensionAttrName(), attr);
}

void ConvolutionOpV1::setOutputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutputFeatureDimensionAttrName(), attr);
}

void ConvolutionOpV1::setOutputSpatialDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutputSpatialDimensionsAttrName(), attr);
}

void ConvolutionOpV1::setFeatureGroupCountAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFeatureGroupCountAttrName(), attr);
}

void ConvolutionOpV1::setBatchGroupCountAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBatchGroupCountAttrName(), attr);
}

void ConvolutionOpV1::setPrecisionConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPrecisionConfigAttrName(), attr);
}

void ConvolutionOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute window_strides, ::mlir::Attribute padding, ::mlir::Attribute lhs_dilation, ::mlir::Attribute rhs_dilation, ::mlir::Attribute window_reversal, ::mlir::Attribute input_batch_dimension, ::mlir::Attribute input_feature_dimension, ::mlir::Attribute input_spatial_dimensions, ::mlir::Attribute kernel_input_feature_dimension, ::mlir::Attribute kernel_output_feature_dimension, ::mlir::Attribute kernel_spatial_dimensions, ::mlir::Attribute output_batch_dimension, ::mlir::Attribute output_feature_dimension, ::mlir::Attribute output_spatial_dimensions, ::mlir::Attribute feature_group_count, ::mlir::Attribute batch_group_count, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getWindowStridesAttrName(odsState.name), window_strides);
  odsState.addAttribute(getPaddingAttrName(odsState.name), padding);
  odsState.addAttribute(getLhsDilationAttrName(odsState.name), lhs_dilation);
  odsState.addAttribute(getRhsDilationAttrName(odsState.name), rhs_dilation);
  odsState.addAttribute(getWindowReversalAttrName(odsState.name), window_reversal);
  odsState.addAttribute(getInputBatchDimensionAttrName(odsState.name), input_batch_dimension);
  odsState.addAttribute(getInputFeatureDimensionAttrName(odsState.name), input_feature_dimension);
  odsState.addAttribute(getInputSpatialDimensionsAttrName(odsState.name), input_spatial_dimensions);
  odsState.addAttribute(getKernelInputFeatureDimensionAttrName(odsState.name), kernel_input_feature_dimension);
  odsState.addAttribute(getKernelOutputFeatureDimensionAttrName(odsState.name), kernel_output_feature_dimension);
  odsState.addAttribute(getKernelSpatialDimensionsAttrName(odsState.name), kernel_spatial_dimensions);
  odsState.addAttribute(getOutputBatchDimensionAttrName(odsState.name), output_batch_dimension);
  odsState.addAttribute(getOutputFeatureDimensionAttrName(odsState.name), output_feature_dimension);
  odsState.addAttribute(getOutputSpatialDimensionsAttrName(odsState.name), output_spatial_dimensions);
  odsState.addAttribute(getFeatureGroupCountAttrName(odsState.name), feature_group_count);
  odsState.addAttribute(getBatchGroupCountAttrName(odsState.name), batch_group_count);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  odsState.addTypes(result);
}

void ConvolutionOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute window_strides, ::mlir::Attribute padding, ::mlir::Attribute lhs_dilation, ::mlir::Attribute rhs_dilation, ::mlir::Attribute window_reversal, ::mlir::Attribute input_batch_dimension, ::mlir::Attribute input_feature_dimension, ::mlir::Attribute input_spatial_dimensions, ::mlir::Attribute kernel_input_feature_dimension, ::mlir::Attribute kernel_output_feature_dimension, ::mlir::Attribute kernel_spatial_dimensions, ::mlir::Attribute output_batch_dimension, ::mlir::Attribute output_feature_dimension, ::mlir::Attribute output_spatial_dimensions, ::mlir::Attribute feature_group_count, ::mlir::Attribute batch_group_count, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getWindowStridesAttrName(odsState.name), window_strides);
  odsState.addAttribute(getPaddingAttrName(odsState.name), padding);
  odsState.addAttribute(getLhsDilationAttrName(odsState.name), lhs_dilation);
  odsState.addAttribute(getRhsDilationAttrName(odsState.name), rhs_dilation);
  odsState.addAttribute(getWindowReversalAttrName(odsState.name), window_reversal);
  odsState.addAttribute(getInputBatchDimensionAttrName(odsState.name), input_batch_dimension);
  odsState.addAttribute(getInputFeatureDimensionAttrName(odsState.name), input_feature_dimension);
  odsState.addAttribute(getInputSpatialDimensionsAttrName(odsState.name), input_spatial_dimensions);
  odsState.addAttribute(getKernelInputFeatureDimensionAttrName(odsState.name), kernel_input_feature_dimension);
  odsState.addAttribute(getKernelOutputFeatureDimensionAttrName(odsState.name), kernel_output_feature_dimension);
  odsState.addAttribute(getKernelSpatialDimensionsAttrName(odsState.name), kernel_spatial_dimensions);
  odsState.addAttribute(getOutputBatchDimensionAttrName(odsState.name), output_batch_dimension);
  odsState.addAttribute(getOutputFeatureDimensionAttrName(odsState.name), output_feature_dimension);
  odsState.addAttribute(getOutputSpatialDimensionsAttrName(odsState.name), output_spatial_dimensions);
  odsState.addAttribute(getFeatureGroupCountAttrName(odsState.name), feature_group_count);
  odsState.addAttribute(getBatchGroupCountAttrName(odsState.name), batch_group_count);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvolutionOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvolutionOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_batch_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'batch_group_count'");
    if (namedAttrIt->getName() == getBatchGroupCountAttrName()) {
      tblgen_batch_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'feature_group_count'");
    if (namedAttrIt->getName() == getFeatureGroupCountAttrName()) {
      tblgen_feature_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'input_batch_dimension'");
    if (namedAttrIt->getName() == getInputBatchDimensionAttrName()) {
      tblgen_input_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'input_feature_dimension'");
    if (namedAttrIt->getName() == getInputFeatureDimensionAttrName()) {
      tblgen_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'input_spatial_dimensions'");
    if (namedAttrIt->getName() == getInputSpatialDimensionsAttrName()) {
      tblgen_input_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'kernel_input_feature_dimension'");
    if (namedAttrIt->getName() == getKernelInputFeatureDimensionAttrName()) {
      tblgen_kernel_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'kernel_output_feature_dimension'");
    if (namedAttrIt->getName() == getKernelOutputFeatureDimensionAttrName()) {
      tblgen_kernel_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'kernel_spatial_dimensions'");
    if (namedAttrIt->getName() == getKernelSpatialDimensionsAttrName()) {
      tblgen_kernel_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'lhs_dilation'");
    if (namedAttrIt->getName() == getLhsDilationAttrName()) {
      tblgen_lhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'output_batch_dimension'");
    if (namedAttrIt->getName() == getOutputBatchDimensionAttrName()) {
      tblgen_output_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'output_feature_dimension'");
    if (namedAttrIt->getName() == getOutputFeatureDimensionAttrName()) {
      tblgen_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'output_spatial_dimensions'");
    if (namedAttrIt->getName() == getOutputSpatialDimensionsAttrName()) {
      tblgen_output_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'padding'");
    if (namedAttrIt->getName() == getPaddingAttrName()) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'precision_config'");
    if (namedAttrIt->getName() == getPrecisionConfigAttrName()) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'rhs_dilation'");
    if (namedAttrIt->getName() == getRhsDilationAttrName()) {
      tblgen_rhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_reversal;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_reversal'");
    if (namedAttrIt->getName() == getWindowReversalAttrName()) {
      tblgen_window_reversal = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_strides'");
    if (namedAttrIt->getName() == getWindowStridesAttrName()) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_strides, "window_strides")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_padding, "padding")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_lhs_dilation, "lhs_dilation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_rhs_dilation, "rhs_dilation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_reversal, "window_reversal")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_input_batch_dimension, "input_batch_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_input_feature_dimension, "input_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_input_spatial_dimensions, "input_spatial_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_kernel_input_feature_dimension, "kernel_input_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_kernel_output_feature_dimension, "kernel_output_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_kernel_spatial_dimensions, "kernel_spatial_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_output_batch_dimension, "output_batch_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_output_feature_dimension, "output_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_output_spatial_dimensions, "output_spatial_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_feature_group_count, "feature_group_count")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_batch_group_count, "batch_group_count")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_precision_config, "precision_config")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConvolutionOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ConvolutionOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ConvolutionOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ConvolutionOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CosineOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CosineOpV1GenericAdaptorBase::CosineOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.cosine_v1", odsAttrs.getContext());
}

CosineOpV1GenericAdaptorBase::CosineOpV1GenericAdaptorBase(CosineOpV1 op) : CosineOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CosineOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CosineOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CosineOpV1Adaptor::CosineOpV1Adaptor(CosineOpV1 op) : CosineOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CosineOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CosineOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CosineOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CosineOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CosineOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CosineOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CosineOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CosineOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CosineOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CosineOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CosineOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CosineOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CosineOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CosineOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CosineOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CosineOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CreateTokenOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateTokenOpV1GenericAdaptorBase::CreateTokenOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.create_token_v1", odsAttrs.getContext());
}

CreateTokenOpV1GenericAdaptorBase::CreateTokenOpV1GenericAdaptorBase(CreateTokenOpV1 op) : CreateTokenOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateTokenOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CreateTokenOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateTokenOpV1Adaptor::CreateTokenOpV1Adaptor(CreateTokenOpV1 op) : CreateTokenOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateTokenOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CreateTokenOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CreateTokenOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CreateTokenOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CreateTokenOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CreateTokenOpV1::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CreateTokenOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output) {
  odsState.addTypes(output);
}

void CreateTokenOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateTokenOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateTokenOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateTokenOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CreateTokenOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CreateTokenOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CreateTokenOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CrossReplicaSumOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CrossReplicaSumOpV1GenericAdaptorBase::CrossReplicaSumOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.cross-replica-sum_v1", odsAttrs.getContext());
}

CrossReplicaSumOpV1GenericAdaptorBase::CrossReplicaSumOpV1GenericAdaptorBase(CrossReplicaSumOpV1 op) : CrossReplicaSumOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CrossReplicaSumOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CrossReplicaSumOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute CrossReplicaSumOpV1GenericAdaptorBase::getReplicaGroupsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, CrossReplicaSumOpV1::getReplicaGroupsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CrossReplicaSumOpV1GenericAdaptorBase::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

} // namespace detail
CrossReplicaSumOpV1Adaptor::CrossReplicaSumOpV1Adaptor(CrossReplicaSumOpV1 op) : CrossReplicaSumOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CrossReplicaSumOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.cross-replica-sum_v1' op ""requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == CrossReplicaSumOpV1::getReplicaGroupsAttrName(*odsOpName)) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_replica_groups && !((true)))
    return emitError(loc, "'vhlo.cross-replica-sum_v1' op ""attribute 'replica_groups' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CrossReplicaSumOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CrossReplicaSumOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CrossReplicaSumOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CrossReplicaSumOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CrossReplicaSumOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CrossReplicaSumOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CrossReplicaSumOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute CrossReplicaSumOpV1::getReplicaGroupsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getReplicaGroupsAttrName()));
}

::mlir::Attribute CrossReplicaSumOpV1::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

void CrossReplicaSumOpV1::setReplicaGroupsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getReplicaGroupsAttrName(), attr);
}

void CrossReplicaSumOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute replica_groups) {
  odsState.addOperands(operand);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addTypes(result);
}

void CrossReplicaSumOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute replica_groups) {
  odsState.addOperands(operand);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CrossReplicaSumOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CrossReplicaSumOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == getReplicaGroupsAttrName()) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_replica_groups, "replica_groups")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CrossReplicaSumOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CrossReplicaSumOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CrossReplicaSumOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CrossReplicaSumOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CstrReshapableOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CstrReshapableOpV1GenericAdaptorBase::CstrReshapableOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.cstr_reshapable_v1", odsAttrs.getContext());
}

CstrReshapableOpV1GenericAdaptorBase::CstrReshapableOpV1GenericAdaptorBase(CstrReshapableOpV1 op) : CstrReshapableOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CstrReshapableOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CstrReshapableOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CstrReshapableOpV1Adaptor::CstrReshapableOpV1Adaptor(CstrReshapableOpV1 op) : CstrReshapableOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CstrReshapableOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CstrReshapableOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CstrReshapableOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CstrReshapableOpV1::getNumElements() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CstrReshapableOpV1::getDynamicShape() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CstrReshapableOpV1::getNumElementsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CstrReshapableOpV1::getDynamicShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CstrReshapableOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CstrReshapableOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CstrReshapableOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CstrReshapableOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value num_elements, ::mlir::Value dynamic_shape) {
  odsState.addOperands(num_elements);
  odsState.addOperands(dynamic_shape);
  odsState.addTypes(result);
}

void CstrReshapableOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value num_elements, ::mlir::Value dynamic_shape) {
  odsState.addOperands(num_elements);
  odsState.addOperands(dynamic_shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CstrReshapableOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CstrReshapableOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CstrReshapableOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CstrReshapableOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CstrReshapableOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CstrReshapableOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::CustomCallOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
CustomCallOpV1GenericAdaptorBase::CustomCallOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.custom_call_v1", odsAttrs.getContext());
}

CustomCallOpV1GenericAdaptorBase::CustomCallOpV1GenericAdaptorBase(CustomCallOpV1 op) : CustomCallOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CustomCallOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CustomCallOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getCallTargetNameAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 5, CustomCallOpV1::getCallTargetNameAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getCallTargetName() {
  auto attr = getCallTargetNameAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getHasSideEffectAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 3, CustomCallOpV1::getHasSideEffectAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getHasSideEffect() {
  auto attr = getHasSideEffectAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getBackendConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 6, CustomCallOpV1::getBackendConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getBackendConfig() {
  auto attr = getBackendConfigAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getApiVersionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 7, CustomCallOpV1::getApiVersionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getApiVersion() {
  auto attr = getApiVersionAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getCalledComputationsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 4, CustomCallOpV1::getCalledComputationsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getCalledComputations() {
  auto attr = getCalledComputationsAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getOperandLayoutsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 5, odsAttrs.end() - 2, CustomCallOpV1::getOperandLayoutsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getOperandLayouts() {
  auto attr = getOperandLayoutsAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getResultLayoutsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 7, odsAttrs.end() - 0, CustomCallOpV1::getResultLayoutsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getResultLayouts() {
  auto attr = getResultLayoutsAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getOutputOperandAliasesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 6, odsAttrs.end() - 1, CustomCallOpV1::getOutputOperandAliasesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute CustomCallOpV1GenericAdaptorBase::getOutputOperandAliases() {
  auto attr = getOutputOperandAliasesAttr();
  return attr;
}

} // namespace detail
CustomCallOpV1Adaptor::CustomCallOpV1Adaptor(CustomCallOpV1 op) : CustomCallOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CustomCallOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_api_version;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'api_version'");
    if (namedAttrIt->getName() == CustomCallOpV1::getApiVersionAttrName(*odsOpName)) {
      tblgen_api_version = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_backend_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'backend_config'");
    if (namedAttrIt->getName() == CustomCallOpV1::getBackendConfigAttrName(*odsOpName)) {
      tblgen_backend_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_call_target_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'call_target_name'");
    if (namedAttrIt->getName() == CustomCallOpV1::getCallTargetNameAttrName(*odsOpName)) {
      tblgen_call_target_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_called_computations;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'called_computations'");
    if (namedAttrIt->getName() == CustomCallOpV1::getCalledComputationsAttrName(*odsOpName)) {
      tblgen_called_computations = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_has_side_effect;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'has_side_effect'");
    if (namedAttrIt->getName() == CustomCallOpV1::getHasSideEffectAttrName(*odsOpName)) {
      tblgen_has_side_effect = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_operand_layouts;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'operand_layouts'");
    if (namedAttrIt->getName() == CustomCallOpV1::getOperandLayoutsAttrName(*odsOpName)) {
      tblgen_operand_layouts = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_operand_aliases;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'output_operand_aliases'");
    if (namedAttrIt->getName() == CustomCallOpV1::getOutputOperandAliasesAttrName(*odsOpName)) {
      tblgen_output_operand_aliases = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_result_layouts;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.custom_call_v1' op ""requires attribute 'result_layouts'");
    if (namedAttrIt->getName() == CustomCallOpV1::getResultLayoutsAttrName(*odsOpName)) {
      tblgen_result_layouts = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_call_target_name && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'call_target_name' failed to satisfy constraint: any attribute");

  if (tblgen_has_side_effect && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'has_side_effect' failed to satisfy constraint: any attribute");

  if (tblgen_backend_config && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'backend_config' failed to satisfy constraint: any attribute");

  if (tblgen_api_version && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'api_version' failed to satisfy constraint: any attribute");

  if (tblgen_called_computations && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'called_computations' failed to satisfy constraint: any attribute");

  if (tblgen_operand_layouts && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'operand_layouts' failed to satisfy constraint: any attribute");

  if (tblgen_result_layouts && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'result_layouts' failed to satisfy constraint: any attribute");

  if (tblgen_output_operand_aliases && !((true)))
    return emitError(loc, "'vhlo.custom_call_v1' op ""attribute 'output_operand_aliases' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CustomCallOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CustomCallOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CustomCallOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CustomCallOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CustomCallOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range CustomCallOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range CustomCallOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Attribute CustomCallOpV1::getCallTargetNameAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 5, getCallTargetNameAttrName()));
}

::mlir::Attribute CustomCallOpV1::getCallTargetName() {
  auto attr = getCallTargetNameAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1::getHasSideEffectAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 3, getHasSideEffectAttrName()));
}

::mlir::Attribute CustomCallOpV1::getHasSideEffect() {
  auto attr = getHasSideEffectAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1::getBackendConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 6, getBackendConfigAttrName()));
}

::mlir::Attribute CustomCallOpV1::getBackendConfig() {
  auto attr = getBackendConfigAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1::getApiVersionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 7, getApiVersionAttrName()));
}

::mlir::Attribute CustomCallOpV1::getApiVersion() {
  auto attr = getApiVersionAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1::getCalledComputationsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 4, getCalledComputationsAttrName()));
}

::mlir::Attribute CustomCallOpV1::getCalledComputations() {
  auto attr = getCalledComputationsAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1::getOperandLayoutsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 5, (*this)->getAttrs().end() - 2, getOperandLayoutsAttrName()));
}

::mlir::Attribute CustomCallOpV1::getOperandLayouts() {
  auto attr = getOperandLayoutsAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1::getResultLayoutsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 7, (*this)->getAttrs().end() - 0, getResultLayoutsAttrName()));
}

::mlir::Attribute CustomCallOpV1::getResultLayouts() {
  auto attr = getResultLayoutsAttr();
  return attr;
}

::mlir::Attribute CustomCallOpV1::getOutputOperandAliasesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 6, (*this)->getAttrs().end() - 1, getOutputOperandAliasesAttrName()));
}

::mlir::Attribute CustomCallOpV1::getOutputOperandAliases() {
  auto attr = getOutputOperandAliasesAttr();
  return attr;
}

void CustomCallOpV1::setCallTargetNameAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getCallTargetNameAttrName(), attr);
}

void CustomCallOpV1::setHasSideEffectAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getHasSideEffectAttrName(), attr);
}

void CustomCallOpV1::setBackendConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBackendConfigAttrName(), attr);
}

void CustomCallOpV1::setApiVersionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getApiVersionAttrName(), attr);
}

void CustomCallOpV1::setCalledComputationsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getCalledComputationsAttrName(), attr);
}

void CustomCallOpV1::setOperandLayoutsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOperandLayoutsAttrName(), attr);
}

void CustomCallOpV1::setResultLayoutsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getResultLayoutsAttrName(), attr);
}

void CustomCallOpV1::setOutputOperandAliasesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutputOperandAliasesAttrName(), attr);
}

void CustomCallOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange inputs, ::mlir::Attribute call_target_name, ::mlir::Attribute has_side_effect, ::mlir::Attribute backend_config, ::mlir::Attribute api_version, ::mlir::Attribute called_computations, ::mlir::Attribute operand_layouts, ::mlir::Attribute result_layouts, ::mlir::Attribute output_operand_aliases) {
  odsState.addOperands(inputs);
  odsState.addAttribute(getCallTargetNameAttrName(odsState.name), call_target_name);
  odsState.addAttribute(getHasSideEffectAttrName(odsState.name), has_side_effect);
  odsState.addAttribute(getBackendConfigAttrName(odsState.name), backend_config);
  odsState.addAttribute(getApiVersionAttrName(odsState.name), api_version);
  odsState.addAttribute(getCalledComputationsAttrName(odsState.name), called_computations);
  odsState.addAttribute(getOperandLayoutsAttrName(odsState.name), operand_layouts);
  odsState.addAttribute(getResultLayoutsAttrName(odsState.name), result_layouts);
  odsState.addAttribute(getOutputOperandAliasesAttrName(odsState.name), output_operand_aliases);
  odsState.addTypes(results);
}

void CustomCallOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CustomCallOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_api_version;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'api_version'");
    if (namedAttrIt->getName() == getApiVersionAttrName()) {
      tblgen_api_version = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_backend_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'backend_config'");
    if (namedAttrIt->getName() == getBackendConfigAttrName()) {
      tblgen_backend_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_call_target_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'call_target_name'");
    if (namedAttrIt->getName() == getCallTargetNameAttrName()) {
      tblgen_call_target_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_called_computations;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'called_computations'");
    if (namedAttrIt->getName() == getCalledComputationsAttrName()) {
      tblgen_called_computations = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_has_side_effect;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'has_side_effect'");
    if (namedAttrIt->getName() == getHasSideEffectAttrName()) {
      tblgen_has_side_effect = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_operand_layouts;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operand_layouts'");
    if (namedAttrIt->getName() == getOperandLayoutsAttrName()) {
      tblgen_operand_layouts = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_operand_aliases;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'output_operand_aliases'");
    if (namedAttrIt->getName() == getOutputOperandAliasesAttrName()) {
      tblgen_output_operand_aliases = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_result_layouts;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'result_layouts'");
    if (namedAttrIt->getName() == getResultLayoutsAttrName()) {
      tblgen_result_layouts = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_call_target_name, "call_target_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_has_side_effect, "has_side_effect")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_backend_config, "backend_config")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_api_version, "api_version")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_called_computations, "called_computations")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_operand_layouts, "operand_layouts")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_result_layouts, "result_layouts")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_output_operand_aliases, "output_operand_aliases")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CustomCallOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version CustomCallOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version CustomCallOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::CustomCallOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DivOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DivOpV1GenericAdaptorBase::DivOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.divide_v1", odsAttrs.getContext());
}

DivOpV1GenericAdaptorBase::DivOpV1GenericAdaptorBase(DivOpV1 op) : DivOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DivOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DivOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DivOpV1Adaptor::DivOpV1Adaptor(DivOpV1 op) : DivOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DivOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DivOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DivOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DivOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DivOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DivOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DivOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DivOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void DivOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void DivOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DivOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DivOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DivOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DivOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DivOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DotGeneralOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DotGeneralOpV1GenericAdaptorBase::DotGeneralOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dot_general_v1", odsAttrs.getContext());
}

DotGeneralOpV1GenericAdaptorBase::DotGeneralOpV1GenericAdaptorBase(DotGeneralOpV1 op) : DotGeneralOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DotGeneralOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DotGeneralOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getLhsBatchingDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 4, DotGeneralOpV1::getLhsBatchingDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getLhsBatchingDimensions() {
  auto attr = getLhsBatchingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getRhsBatchingDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 1, DotGeneralOpV1::getRhsBatchingDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getRhsBatchingDimensions() {
  auto attr = getRhsBatchingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getLhsContractingDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 3, DotGeneralOpV1::getLhsContractingDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getLhsContractingDimensions() {
  auto attr = getLhsContractingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getRhsContractingDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 0, DotGeneralOpV1::getRhsContractingDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getRhsContractingDimensions() {
  auto attr = getRhsContractingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getPrecisionConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 2, DotGeneralOpV1::getPrecisionConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DotGeneralOpV1GenericAdaptorBase::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

} // namespace detail
DotGeneralOpV1Adaptor::DotGeneralOpV1Adaptor(DotGeneralOpV1 op) : DotGeneralOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DotGeneralOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_lhs_batching_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dot_general_v1' op ""requires attribute 'lhs_batching_dimensions'");
    if (namedAttrIt->getName() == DotGeneralOpV1::getLhsBatchingDimensionsAttrName(*odsOpName)) {
      tblgen_lhs_batching_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lhs_contracting_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dot_general_v1' op ""requires attribute 'lhs_contracting_dimensions'");
    if (namedAttrIt->getName() == DotGeneralOpV1::getLhsContractingDimensionsAttrName(*odsOpName)) {
      tblgen_lhs_contracting_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dot_general_v1' op ""requires attribute 'precision_config'");
    if (namedAttrIt->getName() == DotGeneralOpV1::getPrecisionConfigAttrName(*odsOpName)) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_batching_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dot_general_v1' op ""requires attribute 'rhs_batching_dimensions'");
    if (namedAttrIt->getName() == DotGeneralOpV1::getRhsBatchingDimensionsAttrName(*odsOpName)) {
      tblgen_rhs_batching_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_contracting_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dot_general_v1' op ""requires attribute 'rhs_contracting_dimensions'");
    if (namedAttrIt->getName() == DotGeneralOpV1::getRhsContractingDimensionsAttrName(*odsOpName)) {
      tblgen_rhs_contracting_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_lhs_batching_dimensions && !((true)))
    return emitError(loc, "'vhlo.dot_general_v1' op ""attribute 'lhs_batching_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_rhs_batching_dimensions && !((true)))
    return emitError(loc, "'vhlo.dot_general_v1' op ""attribute 'rhs_batching_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_lhs_contracting_dimensions && !((true)))
    return emitError(loc, "'vhlo.dot_general_v1' op ""attribute 'lhs_contracting_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_rhs_contracting_dimensions && !((true)))
    return emitError(loc, "'vhlo.dot_general_v1' op ""attribute 'rhs_contracting_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_precision_config && !((true)))
    return emitError(loc, "'vhlo.dot_general_v1' op ""attribute 'precision_config' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DotGeneralOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DotGeneralOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DotGeneralOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DotGeneralOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DotGeneralOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DotGeneralOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DotGeneralOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DotGeneralOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DotGeneralOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute DotGeneralOpV1::getLhsBatchingDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 4, getLhsBatchingDimensionsAttrName()));
}

::mlir::Attribute DotGeneralOpV1::getLhsBatchingDimensions() {
  auto attr = getLhsBatchingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1::getRhsBatchingDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 1, getRhsBatchingDimensionsAttrName()));
}

::mlir::Attribute DotGeneralOpV1::getRhsBatchingDimensions() {
  auto attr = getRhsBatchingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1::getLhsContractingDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 3, getLhsContractingDimensionsAttrName()));
}

::mlir::Attribute DotGeneralOpV1::getLhsContractingDimensions() {
  auto attr = getLhsContractingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1::getRhsContractingDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 0, getRhsContractingDimensionsAttrName()));
}

::mlir::Attribute DotGeneralOpV1::getRhsContractingDimensions() {
  auto attr = getRhsContractingDimensionsAttr();
  return attr;
}

::mlir::Attribute DotGeneralOpV1::getPrecisionConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 2, getPrecisionConfigAttrName()));
}

::mlir::Attribute DotGeneralOpV1::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

void DotGeneralOpV1::setLhsBatchingDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLhsBatchingDimensionsAttrName(), attr);
}

void DotGeneralOpV1::setRhsBatchingDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getRhsBatchingDimensionsAttrName(), attr);
}

void DotGeneralOpV1::setLhsContractingDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLhsContractingDimensionsAttrName(), attr);
}

void DotGeneralOpV1::setRhsContractingDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getRhsContractingDimensionsAttrName(), attr);
}

void DotGeneralOpV1::setPrecisionConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPrecisionConfigAttrName(), attr);
}

void DotGeneralOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute lhs_batching_dimensions, ::mlir::Attribute rhs_batching_dimensions, ::mlir::Attribute lhs_contracting_dimensions, ::mlir::Attribute rhs_contracting_dimensions, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getLhsBatchingDimensionsAttrName(odsState.name), lhs_batching_dimensions);
  odsState.addAttribute(getRhsBatchingDimensionsAttrName(odsState.name), rhs_batching_dimensions);
  odsState.addAttribute(getLhsContractingDimensionsAttrName(odsState.name), lhs_contracting_dimensions);
  odsState.addAttribute(getRhsContractingDimensionsAttrName(odsState.name), rhs_contracting_dimensions);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  odsState.addTypes(result);
}

void DotGeneralOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute lhs_batching_dimensions, ::mlir::Attribute rhs_batching_dimensions, ::mlir::Attribute lhs_contracting_dimensions, ::mlir::Attribute rhs_contracting_dimensions, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getLhsBatchingDimensionsAttrName(odsState.name), lhs_batching_dimensions);
  odsState.addAttribute(getRhsBatchingDimensionsAttrName(odsState.name), rhs_batching_dimensions);
  odsState.addAttribute(getLhsContractingDimensionsAttrName(odsState.name), lhs_contracting_dimensions);
  odsState.addAttribute(getRhsContractingDimensionsAttrName(odsState.name), rhs_contracting_dimensions);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotGeneralOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DotGeneralOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_lhs_batching_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'lhs_batching_dimensions'");
    if (namedAttrIt->getName() == getLhsBatchingDimensionsAttrName()) {
      tblgen_lhs_batching_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lhs_contracting_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'lhs_contracting_dimensions'");
    if (namedAttrIt->getName() == getLhsContractingDimensionsAttrName()) {
      tblgen_lhs_contracting_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'precision_config'");
    if (namedAttrIt->getName() == getPrecisionConfigAttrName()) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_batching_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'rhs_batching_dimensions'");
    if (namedAttrIt->getName() == getRhsBatchingDimensionsAttrName()) {
      tblgen_rhs_batching_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_contracting_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'rhs_contracting_dimensions'");
    if (namedAttrIt->getName() == getRhsContractingDimensionsAttrName()) {
      tblgen_rhs_contracting_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_lhs_batching_dimensions, "lhs_batching_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_rhs_batching_dimensions, "rhs_batching_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_lhs_contracting_dimensions, "lhs_contracting_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_rhs_contracting_dimensions, "rhs_contracting_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_precision_config, "precision_config")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DotGeneralOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DotGeneralOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DotGeneralOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DotGeneralOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DotOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DotOpV1GenericAdaptorBase::DotOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dot_v1", odsAttrs.getContext());
}

DotOpV1GenericAdaptorBase::DotOpV1GenericAdaptorBase(DotOpV1 op) : DotOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DotOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DotOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute DotOpV1GenericAdaptorBase::getPrecisionConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, DotOpV1::getPrecisionConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DotOpV1GenericAdaptorBase::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

} // namespace detail
DotOpV1Adaptor::DotOpV1Adaptor(DotOpV1 op) : DotOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DotOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dot_v1' op ""requires attribute 'precision_config'");
    if (namedAttrIt->getName() == DotOpV1::getPrecisionConfigAttrName(*odsOpName)) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_precision_config && !((true)))
    return emitError(loc, "'vhlo.dot_v1' op ""attribute 'precision_config' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DotOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DotOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DotOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DotOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DotOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DotOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DotOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DotOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DotOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute DotOpV1::getPrecisionConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getPrecisionConfigAttrName()));
}

::mlir::Attribute DotOpV1::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

void DotOpV1::setPrecisionConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPrecisionConfigAttrName(), attr);
}

void DotOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  odsState.addTypes(result);
}

void DotOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DotOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'precision_config'");
    if (namedAttrIt->getName() == getPrecisionConfigAttrName()) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_precision_config, "precision_config")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DotOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DotOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DotOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DotOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicBroadcastInDimOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicBroadcastInDimOpV1GenericAdaptorBase::DynamicBroadcastInDimOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_broadcast_in_dim_v1", odsAttrs.getContext());
}

DynamicBroadcastInDimOpV1GenericAdaptorBase::DynamicBroadcastInDimOpV1GenericAdaptorBase(DynamicBroadcastInDimOpV1 op) : DynamicBroadcastInDimOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicBroadcastInDimOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicBroadcastInDimOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute DynamicBroadcastInDimOpV1GenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, DynamicBroadcastInDimOpV1::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicBroadcastInDimOpV1GenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicBroadcastInDimOpV1GenericAdaptorBase::getKnownExpandingDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, DynamicBroadcastInDimOpV1::getKnownExpandingDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicBroadcastInDimOpV1GenericAdaptorBase::getKnownExpandingDimensions() {
  auto attr = getKnownExpandingDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicBroadcastInDimOpV1GenericAdaptorBase::getKnownNonexpandingDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 0, DynamicBroadcastInDimOpV1::getKnownNonexpandingDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicBroadcastInDimOpV1GenericAdaptorBase::getKnownNonexpandingDimensions() {
  auto attr = getKnownNonexpandingDimensionsAttr();
  return attr;
}

} // namespace detail
DynamicBroadcastInDimOpV1Adaptor::DynamicBroadcastInDimOpV1Adaptor(DynamicBroadcastInDimOpV1 op) : DynamicBroadcastInDimOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicBroadcastInDimOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_broadcast_in_dim_v1' op ""requires attribute 'broadcast_dimensions'");
    if (namedAttrIt->getName() == DynamicBroadcastInDimOpV1::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_known_expanding_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_broadcast_in_dim_v1' op ""requires attribute 'known_expanding_dimensions'");
    if (namedAttrIt->getName() == DynamicBroadcastInDimOpV1::getKnownExpandingDimensionsAttrName(*odsOpName)) {
      tblgen_known_expanding_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_known_nonexpanding_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_broadcast_in_dim_v1' op ""requires attribute 'known_nonexpanding_dimensions'");
    if (namedAttrIt->getName() == DynamicBroadcastInDimOpV1::getKnownNonexpandingDimensionsAttrName(*odsOpName)) {
      tblgen_known_nonexpanding_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((true)))
    return emitError(loc, "'vhlo.dynamic_broadcast_in_dim_v1' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_known_expanding_dimensions && !((true)))
    return emitError(loc, "'vhlo.dynamic_broadcast_in_dim_v1' op ""attribute 'known_expanding_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_known_nonexpanding_dimensions && !((true)))
    return emitError(loc, "'vhlo.dynamic_broadcast_in_dim_v1' op ""attribute 'known_nonexpanding_dimensions' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicBroadcastInDimOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicBroadcastInDimOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicBroadcastInDimOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DynamicBroadcastInDimOpV1::getOutputDimensions() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DynamicBroadcastInDimOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicBroadcastInDimOpV1::getOutputDimensionsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DynamicBroadcastInDimOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicBroadcastInDimOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicBroadcastInDimOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute DynamicBroadcastInDimOpV1::getBroadcastDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getBroadcastDimensionsAttrName()));
}

::mlir::Attribute DynamicBroadcastInDimOpV1::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicBroadcastInDimOpV1::getKnownExpandingDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getKnownExpandingDimensionsAttrName()));
}

::mlir::Attribute DynamicBroadcastInDimOpV1::getKnownExpandingDimensions() {
  auto attr = getKnownExpandingDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicBroadcastInDimOpV1::getKnownNonexpandingDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 0, getKnownNonexpandingDimensionsAttrName()));
}

::mlir::Attribute DynamicBroadcastInDimOpV1::getKnownNonexpandingDimensions() {
  auto attr = getKnownNonexpandingDimensionsAttr();
  return attr;
}

void DynamicBroadcastInDimOpV1::setBroadcastDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void DynamicBroadcastInDimOpV1::setKnownExpandingDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKnownExpandingDimensionsAttrName(), attr);
}

void DynamicBroadcastInDimOpV1::setKnownNonexpandingDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKnownNonexpandingDimensionsAttrName(), attr);
}

void DynamicBroadcastInDimOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value output_dimensions, ::mlir::Attribute broadcast_dimensions, ::mlir::Attribute known_expanding_dimensions, ::mlir::Attribute known_nonexpanding_dimensions) {
  odsState.addOperands(operand);
  odsState.addOperands(output_dimensions);
  odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  odsState.addAttribute(getKnownExpandingDimensionsAttrName(odsState.name), known_expanding_dimensions);
  odsState.addAttribute(getKnownNonexpandingDimensionsAttrName(odsState.name), known_nonexpanding_dimensions);
  odsState.addTypes(result);
}

void DynamicBroadcastInDimOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output_dimensions, ::mlir::Attribute broadcast_dimensions, ::mlir::Attribute known_expanding_dimensions, ::mlir::Attribute known_nonexpanding_dimensions) {
  odsState.addOperands(operand);
  odsState.addOperands(output_dimensions);
  odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  odsState.addAttribute(getKnownExpandingDimensionsAttrName(odsState.name), known_expanding_dimensions);
  odsState.addAttribute(getKnownNonexpandingDimensionsAttrName(odsState.name), known_nonexpanding_dimensions);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicBroadcastInDimOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicBroadcastInDimOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'broadcast_dimensions'");
    if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_known_expanding_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'known_expanding_dimensions'");
    if (namedAttrIt->getName() == getKnownExpandingDimensionsAttrName()) {
      tblgen_known_expanding_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_known_nonexpanding_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'known_nonexpanding_dimensions'");
    if (namedAttrIt->getName() == getKnownNonexpandingDimensionsAttrName()) {
      tblgen_known_nonexpanding_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_known_expanding_dimensions, "known_expanding_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_known_nonexpanding_dimensions, "known_nonexpanding_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicBroadcastInDimOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicBroadcastInDimOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicBroadcastInDimOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicBroadcastInDimOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicConvOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicConvOpV1GenericAdaptorBase::DynamicConvOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_conv_v1", odsAttrs.getContext());
}

DynamicConvOpV1GenericAdaptorBase::DynamicConvOpV1GenericAdaptorBase(DynamicConvOpV1 op) : DynamicConvOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicConvOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicConvOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getWindowStridesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 16, odsAttrs.end() - 0, DynamicConvOpV1::getWindowStridesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getPaddingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 12, odsAttrs.end() - 4, DynamicConvOpV1::getPaddingAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getLhsDilationAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 8, odsAttrs.end() - 8, DynamicConvOpV1::getLhsDilationAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getLhsDilation() {
  auto attr = getLhsDilationAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getRhsDilationAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 14, odsAttrs.end() - 2, DynamicConvOpV1::getRhsDilationAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getRhsDilation() {
  auto attr = getRhsDilationAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getWindowReversalAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 15, odsAttrs.end() - 1, DynamicConvOpV1::getWindowReversalAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getWindowReversal() {
  auto attr = getWindowReversalAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getInputBatchDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 14, DynamicConvOpV1::getInputBatchDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getInputBatchDimension() {
  auto attr = getInputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getInputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 13, DynamicConvOpV1::getInputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getInputFeatureDimension() {
  auto attr = getInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getInputSpatialDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 12, DynamicConvOpV1::getInputSpatialDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getInputSpatialDimensions() {
  auto attr = getInputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getKernelInputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 5, odsAttrs.end() - 11, DynamicConvOpV1::getKernelInputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getKernelInputFeatureDimension() {
  auto attr = getKernelInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getKernelOutputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 6, odsAttrs.end() - 10, DynamicConvOpV1::getKernelOutputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getKernelOutputFeatureDimension() {
  auto attr = getKernelOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getKernelSpatialDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 7, odsAttrs.end() - 9, DynamicConvOpV1::getKernelSpatialDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getKernelSpatialDimensions() {
  auto attr = getKernelSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getOutputBatchDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 9, odsAttrs.end() - 7, DynamicConvOpV1::getOutputBatchDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getOutputBatchDimension() {
  auto attr = getOutputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getOutputFeatureDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 10, odsAttrs.end() - 6, DynamicConvOpV1::getOutputFeatureDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getOutputFeatureDimension() {
  auto attr = getOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getOutputSpatialDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 11, odsAttrs.end() - 5, DynamicConvOpV1::getOutputSpatialDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getOutputSpatialDimensions() {
  auto attr = getOutputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getFeatureGroupCountAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 15, DynamicConvOpV1::getFeatureGroupCountAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getFeatureGroupCount() {
  auto attr = getFeatureGroupCountAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getBatchGroupCountAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 16, DynamicConvOpV1::getBatchGroupCountAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getBatchGroupCount() {
  auto attr = getBatchGroupCountAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getPrecisionConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 13, odsAttrs.end() - 3, DynamicConvOpV1::getPrecisionConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicConvOpV1GenericAdaptorBase::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

} // namespace detail
DynamicConvOpV1Adaptor::DynamicConvOpV1Adaptor(DynamicConvOpV1 op) : DynamicConvOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicConvOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_batch_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'batch_group_count'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getBatchGroupCountAttrName(*odsOpName)) {
      tblgen_batch_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'feature_group_count'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getFeatureGroupCountAttrName(*odsOpName)) {
      tblgen_feature_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'input_batch_dimension'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getInputBatchDimensionAttrName(*odsOpName)) {
      tblgen_input_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'input_feature_dimension'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getInputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'input_spatial_dimensions'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getInputSpatialDimensionsAttrName(*odsOpName)) {
      tblgen_input_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'kernel_input_feature_dimension'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getKernelInputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_kernel_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'kernel_output_feature_dimension'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getKernelOutputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_kernel_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'kernel_spatial_dimensions'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getKernelSpatialDimensionsAttrName(*odsOpName)) {
      tblgen_kernel_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'lhs_dilation'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getLhsDilationAttrName(*odsOpName)) {
      tblgen_lhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'output_batch_dimension'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getOutputBatchDimensionAttrName(*odsOpName)) {
      tblgen_output_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'output_feature_dimension'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getOutputFeatureDimensionAttrName(*odsOpName)) {
      tblgen_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'output_spatial_dimensions'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getOutputSpatialDimensionsAttrName(*odsOpName)) {
      tblgen_output_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'padding'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getPaddingAttrName(*odsOpName)) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'precision_config'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getPrecisionConfigAttrName(*odsOpName)) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'rhs_dilation'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getRhsDilationAttrName(*odsOpName)) {
      tblgen_rhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_reversal;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'window_reversal'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getWindowReversalAttrName(*odsOpName)) {
      tblgen_window_reversal = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_conv_v1' op ""requires attribute 'window_strides'");
    if (namedAttrIt->getName() == DynamicConvOpV1::getWindowStridesAttrName(*odsOpName)) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_window_strides && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'window_strides' failed to satisfy constraint: any attribute");

  if (tblgen_padding && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'padding' failed to satisfy constraint: any attribute");

  if (tblgen_lhs_dilation && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'lhs_dilation' failed to satisfy constraint: any attribute");

  if (tblgen_rhs_dilation && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'rhs_dilation' failed to satisfy constraint: any attribute");

  if (tblgen_window_reversal && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'window_reversal' failed to satisfy constraint: any attribute");

  if (tblgen_input_batch_dimension && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'input_batch_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_input_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'input_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_input_spatial_dimensions && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'input_spatial_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_kernel_input_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'kernel_input_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_kernel_output_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'kernel_output_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_kernel_spatial_dimensions && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'kernel_spatial_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_output_batch_dimension && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'output_batch_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_output_feature_dimension && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'output_feature_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_output_spatial_dimensions && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'output_spatial_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_feature_group_count && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'feature_group_count' failed to satisfy constraint: any attribute");

  if (tblgen_batch_group_count && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'batch_group_count' failed to satisfy constraint: any attribute");

  if (tblgen_precision_config && !((true)))
    return emitError(loc, "'vhlo.dynamic_conv_v1' op ""attribute 'precision_config' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicConvOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicConvOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicConvOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DynamicConvOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value DynamicConvOpV1::getDPadding() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &DynamicConvOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicConvOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicConvOpV1::getDPaddingMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DynamicConvOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicConvOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicConvOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute DynamicConvOpV1::getWindowStridesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 16, (*this)->getAttrs().end() - 0, getWindowStridesAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getPaddingAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 12, (*this)->getAttrs().end() - 4, getPaddingAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getLhsDilationAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 8, (*this)->getAttrs().end() - 8, getLhsDilationAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getLhsDilation() {
  auto attr = getLhsDilationAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getRhsDilationAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 14, (*this)->getAttrs().end() - 2, getRhsDilationAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getRhsDilation() {
  auto attr = getRhsDilationAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getWindowReversalAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 15, (*this)->getAttrs().end() - 1, getWindowReversalAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getWindowReversal() {
  auto attr = getWindowReversalAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getInputBatchDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 14, getInputBatchDimensionAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getInputBatchDimension() {
  auto attr = getInputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getInputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 13, getInputFeatureDimensionAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getInputFeatureDimension() {
  auto attr = getInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getInputSpatialDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 12, getInputSpatialDimensionsAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getInputSpatialDimensions() {
  auto attr = getInputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getKernelInputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 5, (*this)->getAttrs().end() - 11, getKernelInputFeatureDimensionAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getKernelInputFeatureDimension() {
  auto attr = getKernelInputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getKernelOutputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 6, (*this)->getAttrs().end() - 10, getKernelOutputFeatureDimensionAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getKernelOutputFeatureDimension() {
  auto attr = getKernelOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getKernelSpatialDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 7, (*this)->getAttrs().end() - 9, getKernelSpatialDimensionsAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getKernelSpatialDimensions() {
  auto attr = getKernelSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getOutputBatchDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 9, (*this)->getAttrs().end() - 7, getOutputBatchDimensionAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getOutputBatchDimension() {
  auto attr = getOutputBatchDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getOutputFeatureDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 10, (*this)->getAttrs().end() - 6, getOutputFeatureDimensionAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getOutputFeatureDimension() {
  auto attr = getOutputFeatureDimensionAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getOutputSpatialDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 11, (*this)->getAttrs().end() - 5, getOutputSpatialDimensionsAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getOutputSpatialDimensions() {
  auto attr = getOutputSpatialDimensionsAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getFeatureGroupCountAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 15, getFeatureGroupCountAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getFeatureGroupCount() {
  auto attr = getFeatureGroupCountAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getBatchGroupCountAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 16, getBatchGroupCountAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getBatchGroupCount() {
  auto attr = getBatchGroupCountAttr();
  return attr;
}

::mlir::Attribute DynamicConvOpV1::getPrecisionConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 13, (*this)->getAttrs().end() - 3, getPrecisionConfigAttrName()));
}

::mlir::Attribute DynamicConvOpV1::getPrecisionConfig() {
  auto attr = getPrecisionConfigAttr();
  return attr;
}

void DynamicConvOpV1::setWindowStridesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowStridesAttrName(), attr);
}

void DynamicConvOpV1::setPaddingAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPaddingAttrName(), attr);
}

void DynamicConvOpV1::setLhsDilationAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLhsDilationAttrName(), attr);
}

void DynamicConvOpV1::setRhsDilationAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getRhsDilationAttrName(), attr);
}

void DynamicConvOpV1::setWindowReversalAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowReversalAttrName(), attr);
}

void DynamicConvOpV1::setInputBatchDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInputBatchDimensionAttrName(), attr);
}

void DynamicConvOpV1::setInputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInputFeatureDimensionAttrName(), attr);
}

void DynamicConvOpV1::setInputSpatialDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInputSpatialDimensionsAttrName(), attr);
}

void DynamicConvOpV1::setKernelInputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKernelInputFeatureDimensionAttrName(), attr);
}

void DynamicConvOpV1::setKernelOutputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKernelOutputFeatureDimensionAttrName(), attr);
}

void DynamicConvOpV1::setKernelSpatialDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getKernelSpatialDimensionsAttrName(), attr);
}

void DynamicConvOpV1::setOutputBatchDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutputBatchDimensionAttrName(), attr);
}

void DynamicConvOpV1::setOutputFeatureDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutputFeatureDimensionAttrName(), attr);
}

void DynamicConvOpV1::setOutputSpatialDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutputSpatialDimensionsAttrName(), attr);
}

void DynamicConvOpV1::setFeatureGroupCountAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFeatureGroupCountAttrName(), attr);
}

void DynamicConvOpV1::setBatchGroupCountAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBatchGroupCountAttrName(), attr);
}

void DynamicConvOpV1::setPrecisionConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPrecisionConfigAttrName(), attr);
}

void DynamicConvOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value d_padding, ::mlir::Attribute window_strides, ::mlir::Attribute padding, ::mlir::Attribute lhs_dilation, ::mlir::Attribute rhs_dilation, ::mlir::Attribute window_reversal, ::mlir::Attribute input_batch_dimension, ::mlir::Attribute input_feature_dimension, ::mlir::Attribute input_spatial_dimensions, ::mlir::Attribute kernel_input_feature_dimension, ::mlir::Attribute kernel_output_feature_dimension, ::mlir::Attribute kernel_spatial_dimensions, ::mlir::Attribute output_batch_dimension, ::mlir::Attribute output_feature_dimension, ::mlir::Attribute output_spatial_dimensions, ::mlir::Attribute feature_group_count, ::mlir::Attribute batch_group_count, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(d_padding);
  odsState.addAttribute(getWindowStridesAttrName(odsState.name), window_strides);
  odsState.addAttribute(getPaddingAttrName(odsState.name), padding);
  odsState.addAttribute(getLhsDilationAttrName(odsState.name), lhs_dilation);
  odsState.addAttribute(getRhsDilationAttrName(odsState.name), rhs_dilation);
  odsState.addAttribute(getWindowReversalAttrName(odsState.name), window_reversal);
  odsState.addAttribute(getInputBatchDimensionAttrName(odsState.name), input_batch_dimension);
  odsState.addAttribute(getInputFeatureDimensionAttrName(odsState.name), input_feature_dimension);
  odsState.addAttribute(getInputSpatialDimensionsAttrName(odsState.name), input_spatial_dimensions);
  odsState.addAttribute(getKernelInputFeatureDimensionAttrName(odsState.name), kernel_input_feature_dimension);
  odsState.addAttribute(getKernelOutputFeatureDimensionAttrName(odsState.name), kernel_output_feature_dimension);
  odsState.addAttribute(getKernelSpatialDimensionsAttrName(odsState.name), kernel_spatial_dimensions);
  odsState.addAttribute(getOutputBatchDimensionAttrName(odsState.name), output_batch_dimension);
  odsState.addAttribute(getOutputFeatureDimensionAttrName(odsState.name), output_feature_dimension);
  odsState.addAttribute(getOutputSpatialDimensionsAttrName(odsState.name), output_spatial_dimensions);
  odsState.addAttribute(getFeatureGroupCountAttrName(odsState.name), feature_group_count);
  odsState.addAttribute(getBatchGroupCountAttrName(odsState.name), batch_group_count);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  odsState.addTypes(result);
}

void DynamicConvOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value d_padding, ::mlir::Attribute window_strides, ::mlir::Attribute padding, ::mlir::Attribute lhs_dilation, ::mlir::Attribute rhs_dilation, ::mlir::Attribute window_reversal, ::mlir::Attribute input_batch_dimension, ::mlir::Attribute input_feature_dimension, ::mlir::Attribute input_spatial_dimensions, ::mlir::Attribute kernel_input_feature_dimension, ::mlir::Attribute kernel_output_feature_dimension, ::mlir::Attribute kernel_spatial_dimensions, ::mlir::Attribute output_batch_dimension, ::mlir::Attribute output_feature_dimension, ::mlir::Attribute output_spatial_dimensions, ::mlir::Attribute feature_group_count, ::mlir::Attribute batch_group_count, ::mlir::Attribute precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(d_padding);
  odsState.addAttribute(getWindowStridesAttrName(odsState.name), window_strides);
  odsState.addAttribute(getPaddingAttrName(odsState.name), padding);
  odsState.addAttribute(getLhsDilationAttrName(odsState.name), lhs_dilation);
  odsState.addAttribute(getRhsDilationAttrName(odsState.name), rhs_dilation);
  odsState.addAttribute(getWindowReversalAttrName(odsState.name), window_reversal);
  odsState.addAttribute(getInputBatchDimensionAttrName(odsState.name), input_batch_dimension);
  odsState.addAttribute(getInputFeatureDimensionAttrName(odsState.name), input_feature_dimension);
  odsState.addAttribute(getInputSpatialDimensionsAttrName(odsState.name), input_spatial_dimensions);
  odsState.addAttribute(getKernelInputFeatureDimensionAttrName(odsState.name), kernel_input_feature_dimension);
  odsState.addAttribute(getKernelOutputFeatureDimensionAttrName(odsState.name), kernel_output_feature_dimension);
  odsState.addAttribute(getKernelSpatialDimensionsAttrName(odsState.name), kernel_spatial_dimensions);
  odsState.addAttribute(getOutputBatchDimensionAttrName(odsState.name), output_batch_dimension);
  odsState.addAttribute(getOutputFeatureDimensionAttrName(odsState.name), output_feature_dimension);
  odsState.addAttribute(getOutputSpatialDimensionsAttrName(odsState.name), output_spatial_dimensions);
  odsState.addAttribute(getFeatureGroupCountAttrName(odsState.name), feature_group_count);
  odsState.addAttribute(getBatchGroupCountAttrName(odsState.name), batch_group_count);
  odsState.addAttribute(getPrecisionConfigAttrName(odsState.name), precision_config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicConvOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicConvOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_batch_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'batch_group_count'");
    if (namedAttrIt->getName() == getBatchGroupCountAttrName()) {
      tblgen_batch_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_feature_group_count;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'feature_group_count'");
    if (namedAttrIt->getName() == getFeatureGroupCountAttrName()) {
      tblgen_feature_group_count = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'input_batch_dimension'");
    if (namedAttrIt->getName() == getInputBatchDimensionAttrName()) {
      tblgen_input_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'input_feature_dimension'");
    if (namedAttrIt->getName() == getInputFeatureDimensionAttrName()) {
      tblgen_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_input_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'input_spatial_dimensions'");
    if (namedAttrIt->getName() == getInputSpatialDimensionsAttrName()) {
      tblgen_input_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_input_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'kernel_input_feature_dimension'");
    if (namedAttrIt->getName() == getKernelInputFeatureDimensionAttrName()) {
      tblgen_kernel_input_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'kernel_output_feature_dimension'");
    if (namedAttrIt->getName() == getKernelOutputFeatureDimensionAttrName()) {
      tblgen_kernel_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_kernel_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'kernel_spatial_dimensions'");
    if (namedAttrIt->getName() == getKernelSpatialDimensionsAttrName()) {
      tblgen_kernel_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'lhs_dilation'");
    if (namedAttrIt->getName() == getLhsDilationAttrName()) {
      tblgen_lhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_batch_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'output_batch_dimension'");
    if (namedAttrIt->getName() == getOutputBatchDimensionAttrName()) {
      tblgen_output_batch_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_feature_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'output_feature_dimension'");
    if (namedAttrIt->getName() == getOutputFeatureDimensionAttrName()) {
      tblgen_output_feature_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_output_spatial_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'output_spatial_dimensions'");
    if (namedAttrIt->getName() == getOutputSpatialDimensionsAttrName()) {
      tblgen_output_spatial_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'padding'");
    if (namedAttrIt->getName() == getPaddingAttrName()) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_precision_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'precision_config'");
    if (namedAttrIt->getName() == getPrecisionConfigAttrName()) {
      tblgen_precision_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_rhs_dilation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'rhs_dilation'");
    if (namedAttrIt->getName() == getRhsDilationAttrName()) {
      tblgen_rhs_dilation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_reversal;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_reversal'");
    if (namedAttrIt->getName() == getWindowReversalAttrName()) {
      tblgen_window_reversal = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_strides'");
    if (namedAttrIt->getName() == getWindowStridesAttrName()) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_strides, "window_strides")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_padding, "padding")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_lhs_dilation, "lhs_dilation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_rhs_dilation, "rhs_dilation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_reversal, "window_reversal")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_input_batch_dimension, "input_batch_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_input_feature_dimension, "input_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_input_spatial_dimensions, "input_spatial_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_kernel_input_feature_dimension, "kernel_input_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_kernel_output_feature_dimension, "kernel_output_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_kernel_spatial_dimensions, "kernel_spatial_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_output_batch_dimension, "output_batch_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_output_feature_dimension, "output_feature_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_output_spatial_dimensions, "output_spatial_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_feature_group_count, "feature_group_count")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_batch_group_count, "batch_group_count")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_precision_config, "precision_config")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicConvOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicConvOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicConvOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicConvOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicGatherOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicGatherOpV1GenericAdaptorBase::DynamicGatherOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_gather_v1", odsAttrs.getContext());
}

DynamicGatherOpV1GenericAdaptorBase::DynamicGatherOpV1GenericAdaptorBase(DynamicGatherOpV1 op) : DynamicGatherOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicGatherOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicGatherOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getOffsetDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 1, DynamicGatherOpV1::getOffsetDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getOffsetDims() {
  auto attr = getOffsetDimsAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getCollapsedSliceDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 4, DynamicGatherOpV1::getCollapsedSliceDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getCollapsedSliceDims() {
  auto attr = getCollapsedSliceDimsAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getStartIndexMapAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 0, DynamicGatherOpV1::getStartIndexMapAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getStartIndexMap() {
  auto attr = getStartIndexMapAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getIndexVectorDimAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 3, DynamicGatherOpV1::getIndexVectorDimAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getIndexVectorDim() {
  auto attr = getIndexVectorDimAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getIndicesAreSortedAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 2, DynamicGatherOpV1::getIndicesAreSortedAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicGatherOpV1GenericAdaptorBase::getIndicesAreSorted() {
  auto attr = getIndicesAreSortedAttr();
  return attr;
}

} // namespace detail
DynamicGatherOpV1Adaptor::DynamicGatherOpV1Adaptor(DynamicGatherOpV1 op) : DynamicGatherOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicGatherOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_collapsed_slice_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_gather_v1' op ""requires attribute 'collapsed_slice_dims'");
    if (namedAttrIt->getName() == DynamicGatherOpV1::getCollapsedSliceDimsAttrName(*odsOpName)) {
      tblgen_collapsed_slice_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_index_vector_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_gather_v1' op ""requires attribute 'index_vector_dim'");
    if (namedAttrIt->getName() == DynamicGatherOpV1::getIndexVectorDimAttrName(*odsOpName)) {
      tblgen_index_vector_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_indices_are_sorted;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_gather_v1' op ""requires attribute 'indices_are_sorted'");
    if (namedAttrIt->getName() == DynamicGatherOpV1::getIndicesAreSortedAttrName(*odsOpName)) {
      tblgen_indices_are_sorted = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_offset_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_gather_v1' op ""requires attribute 'offset_dims'");
    if (namedAttrIt->getName() == DynamicGatherOpV1::getOffsetDimsAttrName(*odsOpName)) {
      tblgen_offset_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_start_index_map;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_gather_v1' op ""requires attribute 'start_index_map'");
    if (namedAttrIt->getName() == DynamicGatherOpV1::getStartIndexMapAttrName(*odsOpName)) {
      tblgen_start_index_map = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_offset_dims && !((true)))
    return emitError(loc, "'vhlo.dynamic_gather_v1' op ""attribute 'offset_dims' failed to satisfy constraint: any attribute");

  if (tblgen_collapsed_slice_dims && !((true)))
    return emitError(loc, "'vhlo.dynamic_gather_v1' op ""attribute 'collapsed_slice_dims' failed to satisfy constraint: any attribute");

  if (tblgen_start_index_map && !((true)))
    return emitError(loc, "'vhlo.dynamic_gather_v1' op ""attribute 'start_index_map' failed to satisfy constraint: any attribute");

  if (tblgen_index_vector_dim && !((true)))
    return emitError(loc, "'vhlo.dynamic_gather_v1' op ""attribute 'index_vector_dim' failed to satisfy constraint: any attribute");

  if (tblgen_indices_are_sorted && !((true)))
    return emitError(loc, "'vhlo.dynamic_gather_v1' op ""attribute 'indices_are_sorted' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicGatherOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicGatherOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicGatherOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DynamicGatherOpV1::getStartIndices() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value DynamicGatherOpV1::getSliceSizes() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &DynamicGatherOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicGatherOpV1::getStartIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicGatherOpV1::getSliceSizesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DynamicGatherOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicGatherOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicGatherOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute DynamicGatherOpV1::getOffsetDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 1, getOffsetDimsAttrName()));
}

::mlir::Attribute DynamicGatherOpV1::getOffsetDims() {
  auto attr = getOffsetDimsAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1::getCollapsedSliceDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 4, getCollapsedSliceDimsAttrName()));
}

::mlir::Attribute DynamicGatherOpV1::getCollapsedSliceDims() {
  auto attr = getCollapsedSliceDimsAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1::getStartIndexMapAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 0, getStartIndexMapAttrName()));
}

::mlir::Attribute DynamicGatherOpV1::getStartIndexMap() {
  auto attr = getStartIndexMapAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1::getIndexVectorDimAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 3, getIndexVectorDimAttrName()));
}

::mlir::Attribute DynamicGatherOpV1::getIndexVectorDim() {
  auto attr = getIndexVectorDimAttr();
  return attr;
}

::mlir::Attribute DynamicGatherOpV1::getIndicesAreSortedAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 2, getIndicesAreSortedAttrName()));
}

::mlir::Attribute DynamicGatherOpV1::getIndicesAreSorted() {
  auto attr = getIndicesAreSortedAttr();
  return attr;
}

void DynamicGatherOpV1::setOffsetDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOffsetDimsAttrName(), attr);
}

void DynamicGatherOpV1::setCollapsedSliceDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getCollapsedSliceDimsAttrName(), attr);
}

void DynamicGatherOpV1::setStartIndexMapAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getStartIndexMapAttrName(), attr);
}

void DynamicGatherOpV1::setIndexVectorDimAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIndexVectorDimAttrName(), attr);
}

void DynamicGatherOpV1::setIndicesAreSortedAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIndicesAreSortedAttrName(), attr);
}

void DynamicGatherOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::Value slice_sizes, ::mlir::Attribute offset_dims, ::mlir::Attribute collapsed_slice_dims, ::mlir::Attribute start_index_map, ::mlir::Attribute index_vector_dim, ::mlir::Attribute indices_are_sorted) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(slice_sizes);
  odsState.addAttribute(getOffsetDimsAttrName(odsState.name), offset_dims);
  odsState.addAttribute(getCollapsedSliceDimsAttrName(odsState.name), collapsed_slice_dims);
  odsState.addAttribute(getStartIndexMapAttrName(odsState.name), start_index_map);
  odsState.addAttribute(getIndexVectorDimAttrName(odsState.name), index_vector_dim);
  odsState.addAttribute(getIndicesAreSortedAttrName(odsState.name), indices_are_sorted);
  odsState.addTypes(result);
}

void DynamicGatherOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::Value slice_sizes, ::mlir::Attribute offset_dims, ::mlir::Attribute collapsed_slice_dims, ::mlir::Attribute start_index_map, ::mlir::Attribute index_vector_dim, ::mlir::Attribute indices_are_sorted) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(slice_sizes);
  odsState.addAttribute(getOffsetDimsAttrName(odsState.name), offset_dims);
  odsState.addAttribute(getCollapsedSliceDimsAttrName(odsState.name), collapsed_slice_dims);
  odsState.addAttribute(getStartIndexMapAttrName(odsState.name), start_index_map);
  odsState.addAttribute(getIndexVectorDimAttrName(odsState.name), index_vector_dim);
  odsState.addAttribute(getIndicesAreSortedAttrName(odsState.name), indices_are_sorted);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicGatherOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicGatherOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_collapsed_slice_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'collapsed_slice_dims'");
    if (namedAttrIt->getName() == getCollapsedSliceDimsAttrName()) {
      tblgen_collapsed_slice_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_index_vector_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'index_vector_dim'");
    if (namedAttrIt->getName() == getIndexVectorDimAttrName()) {
      tblgen_index_vector_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_indices_are_sorted;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'indices_are_sorted'");
    if (namedAttrIt->getName() == getIndicesAreSortedAttrName()) {
      tblgen_indices_are_sorted = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_offset_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'offset_dims'");
    if (namedAttrIt->getName() == getOffsetDimsAttrName()) {
      tblgen_offset_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_start_index_map;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'start_index_map'");
    if (namedAttrIt->getName() == getStartIndexMapAttrName()) {
      tblgen_start_index_map = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_offset_dims, "offset_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_collapsed_slice_dims, "collapsed_slice_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_start_index_map, "start_index_map")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_index_vector_dim, "index_vector_dim")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_indices_are_sorted, "indices_are_sorted")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicGatherOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicGatherOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicGatherOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicGatherOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicIotaOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicIotaOpV1GenericAdaptorBase::DynamicIotaOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_iota_v1", odsAttrs.getContext());
}

DynamicIotaOpV1GenericAdaptorBase::DynamicIotaOpV1GenericAdaptorBase(DynamicIotaOpV1 op) : DynamicIotaOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicIotaOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicIotaOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute DynamicIotaOpV1GenericAdaptorBase::getIotaDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, DynamicIotaOpV1::getIotaDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicIotaOpV1GenericAdaptorBase::getIotaDimension() {
  auto attr = getIotaDimensionAttr();
  return attr;
}

} // namespace detail
DynamicIotaOpV1Adaptor::DynamicIotaOpV1Adaptor(DynamicIotaOpV1 op) : DynamicIotaOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicIotaOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_iota_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_iota_v1' op ""requires attribute 'iota_dimension'");
    if (namedAttrIt->getName() == DynamicIotaOpV1::getIotaDimensionAttrName(*odsOpName)) {
      tblgen_iota_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_iota_dimension && !((true)))
    return emitError(loc, "'vhlo.dynamic_iota_v1' op ""attribute 'iota_dimension' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicIotaOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicIotaOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicIotaOpV1::getOutputShape() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &DynamicIotaOpV1::getOutputShapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DynamicIotaOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicIotaOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicIotaOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute DynamicIotaOpV1::getIotaDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getIotaDimensionAttrName()));
}

::mlir::Attribute DynamicIotaOpV1::getIotaDimension() {
  auto attr = getIotaDimensionAttr();
  return attr;
}

void DynamicIotaOpV1::setIotaDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIotaDimensionAttrName(), attr);
}

void DynamicIotaOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value output_shape, ::mlir::Attribute iota_dimension) {
  odsState.addOperands(output_shape);
  odsState.addAttribute(getIotaDimensionAttrName(odsState.name), iota_dimension);
  odsState.addTypes(result);
}

void DynamicIotaOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value output_shape, ::mlir::Attribute iota_dimension) {
  odsState.addOperands(output_shape);
  odsState.addAttribute(getIotaDimensionAttrName(odsState.name), iota_dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicIotaOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicIotaOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_iota_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'iota_dimension'");
    if (namedAttrIt->getName() == getIotaDimensionAttrName()) {
      tblgen_iota_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_iota_dimension, "iota_dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicIotaOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicIotaOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicIotaOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicIotaOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicPadOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicPadOpV1GenericAdaptorBase::DynamicPadOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_pad_v1", odsAttrs.getContext());
}

DynamicPadOpV1GenericAdaptorBase::DynamicPadOpV1GenericAdaptorBase(DynamicPadOpV1 op) : DynamicPadOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicPadOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicPadOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DynamicPadOpV1Adaptor::DynamicPadOpV1Adaptor(DynamicPadOpV1 op) : DynamicPadOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicPadOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicPadOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicPadOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicPadOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DynamicPadOpV1::getPaddingValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value DynamicPadOpV1::getEdgePaddingLow() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value DynamicPadOpV1::getEdgePaddingHigh() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value DynamicPadOpV1::getInteriorPadding() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &DynamicPadOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicPadOpV1::getPaddingValueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicPadOpV1::getEdgePaddingLowMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicPadOpV1::getEdgePaddingHighMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicPadOpV1::getInteriorPaddingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DynamicPadOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicPadOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicPadOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void DynamicPadOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value padding_value, ::mlir::Value edge_padding_low, ::mlir::Value edge_padding_high, ::mlir::Value interior_padding) {
  odsState.addOperands(operand);
  odsState.addOperands(padding_value);
  odsState.addOperands(edge_padding_low);
  odsState.addOperands(edge_padding_high);
  odsState.addOperands(interior_padding);
  odsState.addTypes(result);
}

void DynamicPadOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value padding_value, ::mlir::Value edge_padding_low, ::mlir::Value edge_padding_high, ::mlir::Value interior_padding) {
  odsState.addOperands(operand);
  odsState.addOperands(padding_value);
  odsState.addOperands(edge_padding_low);
  odsState.addOperands(edge_padding_high);
  odsState.addOperands(interior_padding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicPadOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicPadOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicPadOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicPadOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicPadOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicPadOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicReshapeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicReshapeOpV1GenericAdaptorBase::DynamicReshapeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_reshape_v1", odsAttrs.getContext());
}

DynamicReshapeOpV1GenericAdaptorBase::DynamicReshapeOpV1GenericAdaptorBase(DynamicReshapeOpV1 op) : DynamicReshapeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicReshapeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicReshapeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DynamicReshapeOpV1Adaptor::DynamicReshapeOpV1Adaptor(DynamicReshapeOpV1 op) : DynamicReshapeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicReshapeOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicReshapeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicReshapeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicReshapeOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DynamicReshapeOpV1::getOutputShape() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DynamicReshapeOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicReshapeOpV1::getOutputShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DynamicReshapeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicReshapeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicReshapeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void DynamicReshapeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value output_shape) {
  odsState.addOperands(operand);
  odsState.addOperands(output_shape);
  odsState.addTypes(result);
}

void DynamicReshapeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output_shape) {
  odsState.addOperands(operand);
  odsState.addOperands(output_shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicReshapeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicReshapeOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicReshapeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicReshapeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicReshapeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicReshapeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicSliceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicSliceOpV1GenericAdaptorBase::DynamicSliceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_slice_v1", odsAttrs.getContext());
}

DynamicSliceOpV1GenericAdaptorBase::DynamicSliceOpV1GenericAdaptorBase(DynamicSliceOpV1 op) : DynamicSliceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicSliceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr DynamicSliceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute DynamicSliceOpV1GenericAdaptorBase::getSliceSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, DynamicSliceOpV1::getSliceSizesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute DynamicSliceOpV1GenericAdaptorBase::getSliceSizes() {
  auto attr = getSliceSizesAttr();
  return attr;
}

} // namespace detail
DynamicSliceOpV1Adaptor::DynamicSliceOpV1Adaptor(DynamicSliceOpV1 op) : DynamicSliceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicSliceOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_slice_sizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.dynamic_slice_v1' op ""requires attribute 'slice_sizes'");
    if (namedAttrIt->getName() == DynamicSliceOpV1::getSliceSizesAttrName(*odsOpName)) {
      tblgen_slice_sizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_slice_sizes && !((true)))
    return emitError(loc, "'vhlo.dynamic_slice_v1' op ""attribute 'slice_sizes' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicSliceOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range DynamicSliceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicSliceOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range DynamicSliceOpV1::getStartIndices() {
  return getODSOperands(1);
}

::mlir::OpOperand &DynamicSliceOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange DynamicSliceOpV1::getStartIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DynamicSliceOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicSliceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicSliceOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute DynamicSliceOpV1::getSliceSizesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getSliceSizesAttrName()));
}

::mlir::Attribute DynamicSliceOpV1::getSliceSizes() {
  auto attr = getSliceSizesAttr();
  return attr;
}

void DynamicSliceOpV1::setSliceSizesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getSliceSizesAttrName(), attr);
}

void DynamicSliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::ValueRange start_indices, ::mlir::Attribute slice_sizes) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addAttribute(getSliceSizesAttrName(odsState.name), slice_sizes);
  odsState.addTypes(result);
}

void DynamicSliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::ValueRange start_indices, ::mlir::Attribute slice_sizes) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addAttribute(getSliceSizesAttrName(odsState.name), slice_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicSliceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicSliceOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_slice_sizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'slice_sizes'");
    if (namedAttrIt->getName() == getSliceSizesAttrName()) {
      tblgen_slice_sizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_slice_sizes, "slice_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicSliceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicSliceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicSliceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicSliceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::DynamicUpdateSliceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicUpdateSliceOpV1GenericAdaptorBase::DynamicUpdateSliceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.dynamic_update_slice_v1", odsAttrs.getContext());
}

DynamicUpdateSliceOpV1GenericAdaptorBase::DynamicUpdateSliceOpV1GenericAdaptorBase(DynamicUpdateSliceOpV1 op) : DynamicUpdateSliceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicUpdateSliceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr DynamicUpdateSliceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DynamicUpdateSliceOpV1Adaptor::DynamicUpdateSliceOpV1Adaptor(DynamicUpdateSliceOpV1 op) : DynamicUpdateSliceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicUpdateSliceOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicUpdateSliceOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range DynamicUpdateSliceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicUpdateSliceOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DynamicUpdateSliceOpV1::getUpdate() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range DynamicUpdateSliceOpV1::getStartIndices() {
  return getODSOperands(2);
}

::mlir::OpOperand &DynamicUpdateSliceOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicUpdateSliceOpV1::getUpdateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange DynamicUpdateSliceOpV1::getStartIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DynamicUpdateSliceOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicUpdateSliceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicUpdateSliceOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void DynamicUpdateSliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value update, ::mlir::ValueRange start_indices) {
  odsState.addOperands(operand);
  odsState.addOperands(update);
  odsState.addOperands(start_indices);
  odsState.addTypes(result);
}

void DynamicUpdateSliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value update, ::mlir::ValueRange start_indices) {
  odsState.addOperands(operand);
  odsState.addOperands(update);
  odsState.addOperands(start_indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicUpdateSliceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicUpdateSliceOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicUpdateSliceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version DynamicUpdateSliceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version DynamicUpdateSliceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::DynamicUpdateSliceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::EinsumOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
EinsumOpV1GenericAdaptorBase::EinsumOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.einsum_v1", odsAttrs.getContext());
}

EinsumOpV1GenericAdaptorBase::EinsumOpV1GenericAdaptorBase(EinsumOpV1 op) : EinsumOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> EinsumOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr EinsumOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute EinsumOpV1GenericAdaptorBase::getEinsumConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, EinsumOpV1::getEinsumConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute EinsumOpV1GenericAdaptorBase::getEinsumConfig() {
  auto attr = getEinsumConfigAttr();
  return attr;
}

} // namespace detail
EinsumOpV1Adaptor::EinsumOpV1Adaptor(EinsumOpV1 op) : EinsumOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult EinsumOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_einsum_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.einsum_v1' op ""requires attribute 'einsum_config'");
    if (namedAttrIt->getName() == EinsumOpV1::getEinsumConfigAttrName(*odsOpName)) {
      tblgen_einsum_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_einsum_config && !((true)))
    return emitError(loc, "'vhlo.einsum_v1' op ""attribute 'einsum_config' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EinsumOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range EinsumOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value EinsumOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value EinsumOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &EinsumOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &EinsumOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> EinsumOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EinsumOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value EinsumOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute EinsumOpV1::getEinsumConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getEinsumConfigAttrName()));
}

::mlir::Attribute EinsumOpV1::getEinsumConfig() {
  auto attr = getEinsumConfigAttr();
  return attr;
}

void EinsumOpV1::setEinsumConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getEinsumConfigAttrName(), attr);
}

void EinsumOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute einsum_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getEinsumConfigAttrName(odsState.name), einsum_config);
  odsState.addTypes(result);
}

void EinsumOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Attribute einsum_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getEinsumConfigAttrName(odsState.name), einsum_config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EinsumOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult EinsumOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_einsum_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'einsum_config'");
    if (namedAttrIt->getName() == getEinsumConfigAttrName()) {
      tblgen_einsum_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_einsum_config, "einsum_config")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult EinsumOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version EinsumOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version EinsumOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::EinsumOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ExpOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExpOpV1GenericAdaptorBase::ExpOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.exponential_v1", odsAttrs.getContext());
}

ExpOpV1GenericAdaptorBase::ExpOpV1GenericAdaptorBase(ExpOpV1 op) : ExpOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExpOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExpOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExpOpV1Adaptor::ExpOpV1Adaptor(ExpOpV1 op) : ExpOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExpOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExpOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExpOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExpOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExpOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExpOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExpOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExpOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ExpOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ExpOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExpOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExpOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ExpOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ExpOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ExpOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::Expm1OpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
Expm1OpV1GenericAdaptorBase::Expm1OpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.exponential_minus_one_v1", odsAttrs.getContext());
}

Expm1OpV1GenericAdaptorBase::Expm1OpV1GenericAdaptorBase(Expm1OpV1 op) : Expm1OpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Expm1OpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Expm1OpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Expm1OpV1Adaptor::Expm1OpV1Adaptor(Expm1OpV1 op) : Expm1OpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Expm1OpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Expm1OpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Expm1OpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Expm1OpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Expm1OpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Expm1OpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Expm1OpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Expm1OpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void Expm1OpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void Expm1OpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Expm1OpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Expm1OpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Expm1OpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version Expm1OpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version Expm1OpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::Expm1OpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::FftOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
FftOpV1GenericAdaptorBase::FftOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.fft_v1", odsAttrs.getContext());
}

FftOpV1GenericAdaptorBase::FftOpV1GenericAdaptorBase(FftOpV1 op) : FftOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FftOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FftOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute FftOpV1GenericAdaptorBase::getFftTypeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, FftOpV1::getFftTypeAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute FftOpV1GenericAdaptorBase::getFftType() {
  auto attr = getFftTypeAttr();
  return attr;
}

::mlir::Attribute FftOpV1GenericAdaptorBase::getFftLengthAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, FftOpV1::getFftLengthAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute FftOpV1GenericAdaptorBase::getFftLength() {
  auto attr = getFftLengthAttr();
  return attr;
}

} // namespace detail
FftOpV1Adaptor::FftOpV1Adaptor(FftOpV1 op) : FftOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FftOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fft_length;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.fft_v1' op ""requires attribute 'fft_length'");
    if (namedAttrIt->getName() == FftOpV1::getFftLengthAttrName(*odsOpName)) {
      tblgen_fft_length = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_fft_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.fft_v1' op ""requires attribute 'fft_type'");
    if (namedAttrIt->getName() == FftOpV1::getFftTypeAttrName(*odsOpName)) {
      tblgen_fft_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_fft_type && !((true)))
    return emitError(loc, "'vhlo.fft_v1' op ""attribute 'fft_type' failed to satisfy constraint: any attribute");

  if (tblgen_fft_length && !((true)))
    return emitError(loc, "'vhlo.fft_v1' op ""attribute 'fft_length' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FftOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FftOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FftOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &FftOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FftOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FftOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FftOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute FftOpV1::getFftTypeAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getFftTypeAttrName()));
}

::mlir::Attribute FftOpV1::getFftType() {
  auto attr = getFftTypeAttr();
  return attr;
}

::mlir::Attribute FftOpV1::getFftLengthAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getFftLengthAttrName()));
}

::mlir::Attribute FftOpV1::getFftLength() {
  auto attr = getFftLengthAttr();
  return attr;
}

void FftOpV1::setFftTypeAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFftTypeAttrName(), attr);
}

void FftOpV1::setFftLengthAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFftLengthAttrName(), attr);
}

void FftOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute fft_type, ::mlir::Attribute fft_length) {
  odsState.addOperands(operand);
  odsState.addAttribute(getFftTypeAttrName(odsState.name), fft_type);
  odsState.addAttribute(getFftLengthAttrName(odsState.name), fft_length);
  odsState.addTypes(result);
}

void FftOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute fft_type, ::mlir::Attribute fft_length) {
  odsState.addOperands(operand);
  odsState.addAttribute(getFftTypeAttrName(odsState.name), fft_type);
  odsState.addAttribute(getFftLengthAttrName(odsState.name), fft_length);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FftOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FftOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fft_length;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'fft_length'");
    if (namedAttrIt->getName() == getFftLengthAttrName()) {
      tblgen_fft_length = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_fft_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'fft_type'");
    if (namedAttrIt->getName() == getFftTypeAttrName()) {
      tblgen_fft_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_fft_type, "fft_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_fft_length, "fft_length")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FftOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version FftOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version FftOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::FftOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::FloorOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
FloorOpV1GenericAdaptorBase::FloorOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.floor_v1", odsAttrs.getContext());
}

FloorOpV1GenericAdaptorBase::FloorOpV1GenericAdaptorBase(FloorOpV1 op) : FloorOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FloorOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FloorOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FloorOpV1Adaptor::FloorOpV1Adaptor(FloorOpV1 op) : FloorOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FloorOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FloorOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FloorOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FloorOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &FloorOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FloorOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FloorOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FloorOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void FloorOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void FloorOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FloorOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FloorOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FloorOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version FloorOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version FloorOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::FloorOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::FuncOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuncOpV1GenericAdaptorBase::FuncOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.func_v1", odsAttrs.getContext());
}

FuncOpV1GenericAdaptorBase::FuncOpV1GenericAdaptorBase(FuncOpV1 op) : FuncOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FuncOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FuncOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getSymNameAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 1, FuncOpV1::getSymNameAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getFunctionTypeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 3, FuncOpV1::getFunctionTypeAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getSymVisibilityAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 0, FuncOpV1::getSymVisibilityAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getArgAttrsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 4, FuncOpV1::getArgAttrsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getResAttrsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 2, FuncOpV1::getResAttrsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute FuncOpV1GenericAdaptorBase::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr;
}

::mlir::Region &FuncOpV1GenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange FuncOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
FuncOpV1Adaptor::FuncOpV1Adaptor(FuncOpV1 op) : FuncOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FuncOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_arg_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.func_v1' op ""requires attribute 'arg_attrs'");
    if (namedAttrIt->getName() == FuncOpV1::getArgAttrsAttrName(*odsOpName)) {
      tblgen_arg_attrs = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_function_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.func_v1' op ""requires attribute 'function_type'");
    if (namedAttrIt->getName() == FuncOpV1::getFunctionTypeAttrName(*odsOpName)) {
      tblgen_function_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_res_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.func_v1' op ""requires attribute 'res_attrs'");
    if (namedAttrIt->getName() == FuncOpV1::getResAttrsAttrName(*odsOpName)) {
      tblgen_res_attrs = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_sym_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.func_v1' op ""requires attribute 'sym_name'");
    if (namedAttrIt->getName() == FuncOpV1::getSymNameAttrName(*odsOpName)) {
      tblgen_sym_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_sym_visibility;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.func_v1' op ""requires attribute 'sym_visibility'");
    if (namedAttrIt->getName() == FuncOpV1::getSymVisibilityAttrName(*odsOpName)) {
      tblgen_sym_visibility = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_sym_name && !((true)))
    return emitError(loc, "'vhlo.func_v1' op ""attribute 'sym_name' failed to satisfy constraint: any attribute");

  if (tblgen_function_type && !((true)))
    return emitError(loc, "'vhlo.func_v1' op ""attribute 'function_type' failed to satisfy constraint: any attribute");

  if (tblgen_sym_visibility && !((true)))
    return emitError(loc, "'vhlo.func_v1' op ""attribute 'sym_visibility' failed to satisfy constraint: any attribute");

  if (tblgen_arg_attrs && !((true)))
    return emitError(loc, "'vhlo.func_v1' op ""attribute 'arg_attrs' failed to satisfy constraint: any attribute");

  if (tblgen_res_attrs && !((true)))
    return emitError(loc, "'vhlo.func_v1' op ""attribute 'res_attrs' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FuncOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FuncOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> FuncOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FuncOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &FuncOpV1::getBody() {
  return (*this)->getRegion(0);
}

::mlir::Attribute FuncOpV1::getSymNameAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 1, getSymNameAttrName()));
}

::mlir::Attribute FuncOpV1::getSymName() {
  auto attr = getSymNameAttr();
  return attr;
}

::mlir::Attribute FuncOpV1::getFunctionTypeAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 3, getFunctionTypeAttrName()));
}

::mlir::Attribute FuncOpV1::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return attr;
}

::mlir::Attribute FuncOpV1::getSymVisibilityAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 0, getSymVisibilityAttrName()));
}

::mlir::Attribute FuncOpV1::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr;
}

::mlir::Attribute FuncOpV1::getArgAttrsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 4, getArgAttrsAttrName()));
}

::mlir::Attribute FuncOpV1::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr;
}

::mlir::Attribute FuncOpV1::getResAttrsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 2, getResAttrsAttrName()));
}

::mlir::Attribute FuncOpV1::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr;
}

void FuncOpV1::setSymNameAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void FuncOpV1::setFunctionTypeAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getFunctionTypeAttrName(), attr);
}

void FuncOpV1::setSymVisibilityAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getSymVisibilityAttrName(), attr);
}

void FuncOpV1::setArgAttrsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getArgAttrsAttrName(), attr);
}

void FuncOpV1::setResAttrsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getResAttrsAttrName(), attr);
}

void FuncOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Attribute sym_name, ::mlir::Attribute function_type, ::mlir::Attribute sym_visibility, ::mlir::Attribute arg_attrs, ::mlir::Attribute res_attrs) {
  odsState.addAttribute(getSymNameAttrName(odsState.name), sym_name);
  odsState.addAttribute(getFunctionTypeAttrName(odsState.name), function_type);
  odsState.addAttribute(getSymVisibilityAttrName(odsState.name), sym_visibility);
  odsState.addAttribute(getArgAttrsAttrName(odsState.name), arg_attrs);
  odsState.addAttribute(getResAttrsAttrName(odsState.name), res_attrs);
  (void)odsState.addRegion();
}

void FuncOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute sym_name, ::mlir::Attribute function_type, ::mlir::Attribute sym_visibility, ::mlir::Attribute arg_attrs, ::mlir::Attribute res_attrs) {
  odsState.addAttribute(getSymNameAttrName(odsState.name), sym_name);
  odsState.addAttribute(getFunctionTypeAttrName(odsState.name), function_type);
  odsState.addAttribute(getSymVisibilityAttrName(odsState.name), sym_visibility);
  odsState.addAttribute(getArgAttrsAttrName(odsState.name), arg_attrs);
  odsState.addAttribute(getResAttrsAttrName(odsState.name), res_attrs);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuncOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FuncOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_arg_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'arg_attrs'");
    if (namedAttrIt->getName() == getArgAttrsAttrName()) {
      tblgen_arg_attrs = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_function_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'function_type'");
    if (namedAttrIt->getName() == getFunctionTypeAttrName()) {
      tblgen_function_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_res_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'res_attrs'");
    if (namedAttrIt->getName() == getResAttrsAttrName()) {
      tblgen_res_attrs = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_sym_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'sym_name'");
    if (namedAttrIt->getName() == getSymNameAttrName()) {
      tblgen_sym_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_sym_visibility;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'sym_visibility'");
    if (namedAttrIt->getName() == getSymVisibilityAttrName()) {
      tblgen_sym_visibility = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_function_type, "function_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_sym_visibility, "sym_visibility")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_arg_attrs, "arg_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_res_attrs, "res_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult FuncOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FuncOpV1::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Attribute sym_nameAttr;
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();
  ::mlir::Attribute function_typeAttr;
  {
    auto odsResult = parseFunctionBody(parser, sym_nameAttr, *bodyRegion, function_typeAttr);
    if (odsResult) return ::mlir::failure();
    result.addAttribute("sym_name", sym_nameAttr);
    result.addAttribute("function_type", function_typeAttr);
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addRegion(std::move(bodyRegion));
  return ::mlir::success();
}

void FuncOpV1::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printFunctionBody(_odsPrinter, *this, getSymNameAttr(), getBody(), getFunctionTypeAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("sym_name");
  elidedAttrs.push_back("function_type");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

mlir::vhlo::Version FuncOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version FuncOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::FuncOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::GatherOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
GatherOpV1GenericAdaptorBase::GatherOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.gather_v1", odsAttrs.getContext());
}

GatherOpV1GenericAdaptorBase::GatherOpV1GenericAdaptorBase(GatherOpV1 op) : GatherOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GatherOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GatherOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getOffsetDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 2, GatherOpV1::getOffsetDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getOffsetDims() {
  auto attr = getOffsetDimsAttr();
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getCollapsedSliceDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 5, GatherOpV1::getCollapsedSliceDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getCollapsedSliceDims() {
  auto attr = getCollapsedSliceDimsAttr();
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getStartIndexMapAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 5, odsAttrs.end() - 0, GatherOpV1::getStartIndexMapAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getStartIndexMap() {
  auto attr = getStartIndexMapAttr();
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getIndexVectorDimAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 4, GatherOpV1::getIndexVectorDimAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getIndexVectorDim() {
  auto attr = getIndexVectorDimAttr();
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getSliceSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 1, GatherOpV1::getSliceSizesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getSliceSizes() {
  auto attr = getSliceSizesAttr();
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getIndicesAreSortedAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 3, GatherOpV1::getIndicesAreSortedAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GatherOpV1GenericAdaptorBase::getIndicesAreSorted() {
  auto attr = getIndicesAreSortedAttr();
  return attr;
}

} // namespace detail
GatherOpV1Adaptor::GatherOpV1Adaptor(GatherOpV1 op) : GatherOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GatherOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_collapsed_slice_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.gather_v1' op ""requires attribute 'collapsed_slice_dims'");
    if (namedAttrIt->getName() == GatherOpV1::getCollapsedSliceDimsAttrName(*odsOpName)) {
      tblgen_collapsed_slice_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_index_vector_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.gather_v1' op ""requires attribute 'index_vector_dim'");
    if (namedAttrIt->getName() == GatherOpV1::getIndexVectorDimAttrName(*odsOpName)) {
      tblgen_index_vector_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_indices_are_sorted;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.gather_v1' op ""requires attribute 'indices_are_sorted'");
    if (namedAttrIt->getName() == GatherOpV1::getIndicesAreSortedAttrName(*odsOpName)) {
      tblgen_indices_are_sorted = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_offset_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.gather_v1' op ""requires attribute 'offset_dims'");
    if (namedAttrIt->getName() == GatherOpV1::getOffsetDimsAttrName(*odsOpName)) {
      tblgen_offset_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_slice_sizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.gather_v1' op ""requires attribute 'slice_sizes'");
    if (namedAttrIt->getName() == GatherOpV1::getSliceSizesAttrName(*odsOpName)) {
      tblgen_slice_sizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_start_index_map;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.gather_v1' op ""requires attribute 'start_index_map'");
    if (namedAttrIt->getName() == GatherOpV1::getStartIndexMapAttrName(*odsOpName)) {
      tblgen_start_index_map = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_offset_dims && !((true)))
    return emitError(loc, "'vhlo.gather_v1' op ""attribute 'offset_dims' failed to satisfy constraint: any attribute");

  if (tblgen_collapsed_slice_dims && !((true)))
    return emitError(loc, "'vhlo.gather_v1' op ""attribute 'collapsed_slice_dims' failed to satisfy constraint: any attribute");

  if (tblgen_start_index_map && !((true)))
    return emitError(loc, "'vhlo.gather_v1' op ""attribute 'start_index_map' failed to satisfy constraint: any attribute");

  if (tblgen_index_vector_dim && !((true)))
    return emitError(loc, "'vhlo.gather_v1' op ""attribute 'index_vector_dim' failed to satisfy constraint: any attribute");

  if (tblgen_slice_sizes && !((true)))
    return emitError(loc, "'vhlo.gather_v1' op ""attribute 'slice_sizes' failed to satisfy constraint: any attribute");

  if (tblgen_indices_are_sorted && !((true)))
    return emitError(loc, "'vhlo.gather_v1' op ""attribute 'indices_are_sorted' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GatherOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GatherOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value GatherOpV1::getStartIndices() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &GatherOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &GatherOpV1::getStartIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GatherOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GatherOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute GatherOpV1::getOffsetDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 2, getOffsetDimsAttrName()));
}

::mlir::Attribute GatherOpV1::getOffsetDims() {
  auto attr = getOffsetDimsAttr();
  return attr;
}

::mlir::Attribute GatherOpV1::getCollapsedSliceDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 5, getCollapsedSliceDimsAttrName()));
}

::mlir::Attribute GatherOpV1::getCollapsedSliceDims() {
  auto attr = getCollapsedSliceDimsAttr();
  return attr;
}

::mlir::Attribute GatherOpV1::getStartIndexMapAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 5, (*this)->getAttrs().end() - 0, getStartIndexMapAttrName()));
}

::mlir::Attribute GatherOpV1::getStartIndexMap() {
  auto attr = getStartIndexMapAttr();
  return attr;
}

::mlir::Attribute GatherOpV1::getIndexVectorDimAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 4, getIndexVectorDimAttrName()));
}

::mlir::Attribute GatherOpV1::getIndexVectorDim() {
  auto attr = getIndexVectorDimAttr();
  return attr;
}

::mlir::Attribute GatherOpV1::getSliceSizesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 1, getSliceSizesAttrName()));
}

::mlir::Attribute GatherOpV1::getSliceSizes() {
  auto attr = getSliceSizesAttr();
  return attr;
}

::mlir::Attribute GatherOpV1::getIndicesAreSortedAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 3, getIndicesAreSortedAttrName()));
}

::mlir::Attribute GatherOpV1::getIndicesAreSorted() {
  auto attr = getIndicesAreSortedAttr();
  return attr;
}

void GatherOpV1::setOffsetDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOffsetDimsAttrName(), attr);
}

void GatherOpV1::setCollapsedSliceDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getCollapsedSliceDimsAttrName(), attr);
}

void GatherOpV1::setStartIndexMapAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getStartIndexMapAttrName(), attr);
}

void GatherOpV1::setIndexVectorDimAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIndexVectorDimAttrName(), attr);
}

void GatherOpV1::setSliceSizesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getSliceSizesAttrName(), attr);
}

void GatherOpV1::setIndicesAreSortedAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIndicesAreSortedAttrName(), attr);
}

void GatherOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::Attribute offset_dims, ::mlir::Attribute collapsed_slice_dims, ::mlir::Attribute start_index_map, ::mlir::Attribute index_vector_dim, ::mlir::Attribute slice_sizes, ::mlir::Attribute indices_are_sorted) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addAttribute(getOffsetDimsAttrName(odsState.name), offset_dims);
  odsState.addAttribute(getCollapsedSliceDimsAttrName(odsState.name), collapsed_slice_dims);
  odsState.addAttribute(getStartIndexMapAttrName(odsState.name), start_index_map);
  odsState.addAttribute(getIndexVectorDimAttrName(odsState.name), index_vector_dim);
  odsState.addAttribute(getSliceSizesAttrName(odsState.name), slice_sizes);
  odsState.addAttribute(getIndicesAreSortedAttrName(odsState.name), indices_are_sorted);
  odsState.addTypes(result);
}

void GatherOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::Attribute offset_dims, ::mlir::Attribute collapsed_slice_dims, ::mlir::Attribute start_index_map, ::mlir::Attribute index_vector_dim, ::mlir::Attribute slice_sizes, ::mlir::Attribute indices_are_sorted) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addAttribute(getOffsetDimsAttrName(odsState.name), offset_dims);
  odsState.addAttribute(getCollapsedSliceDimsAttrName(odsState.name), collapsed_slice_dims);
  odsState.addAttribute(getStartIndexMapAttrName(odsState.name), start_index_map);
  odsState.addAttribute(getIndexVectorDimAttrName(odsState.name), index_vector_dim);
  odsState.addAttribute(getSliceSizesAttrName(odsState.name), slice_sizes);
  odsState.addAttribute(getIndicesAreSortedAttrName(odsState.name), indices_are_sorted);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GatherOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_collapsed_slice_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'collapsed_slice_dims'");
    if (namedAttrIt->getName() == getCollapsedSliceDimsAttrName()) {
      tblgen_collapsed_slice_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_index_vector_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'index_vector_dim'");
    if (namedAttrIt->getName() == getIndexVectorDimAttrName()) {
      tblgen_index_vector_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_indices_are_sorted;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'indices_are_sorted'");
    if (namedAttrIt->getName() == getIndicesAreSortedAttrName()) {
      tblgen_indices_are_sorted = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_offset_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'offset_dims'");
    if (namedAttrIt->getName() == getOffsetDimsAttrName()) {
      tblgen_offset_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_slice_sizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'slice_sizes'");
    if (namedAttrIt->getName() == getSliceSizesAttrName()) {
      tblgen_slice_sizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_start_index_map;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'start_index_map'");
    if (namedAttrIt->getName() == getStartIndexMapAttrName()) {
      tblgen_start_index_map = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_offset_dims, "offset_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_collapsed_slice_dims, "collapsed_slice_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_start_index_map, "start_index_map")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_index_vector_dim, "index_vector_dim")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_slice_sizes, "slice_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_indices_are_sorted, "indices_are_sorted")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GatherOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version GatherOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version GatherOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::GatherOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::GetDimensionSizeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetDimensionSizeOpV1GenericAdaptorBase::GetDimensionSizeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.get_dimension_size_v1", odsAttrs.getContext());
}

GetDimensionSizeOpV1GenericAdaptorBase::GetDimensionSizeOpV1GenericAdaptorBase(GetDimensionSizeOpV1 op) : GetDimensionSizeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetDimensionSizeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetDimensionSizeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute GetDimensionSizeOpV1GenericAdaptorBase::getDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, GetDimensionSizeOpV1::getDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GetDimensionSizeOpV1GenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

} // namespace detail
GetDimensionSizeOpV1Adaptor::GetDimensionSizeOpV1Adaptor(GetDimensionSizeOpV1 op) : GetDimensionSizeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetDimensionSizeOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.get_dimension_size_v1' op ""requires attribute 'dimension'");
    if (namedAttrIt->getName() == GetDimensionSizeOpV1::getDimensionAttrName(*odsOpName)) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimension && !((true)))
    return emitError(loc, "'vhlo.get_dimension_size_v1' op ""attribute 'dimension' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetDimensionSizeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetDimensionSizeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetDimensionSizeOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetDimensionSizeOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetDimensionSizeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetDimensionSizeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetDimensionSizeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute GetDimensionSizeOpV1::getDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDimensionAttrName()));
}

::mlir::Attribute GetDimensionSizeOpV1::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

void GetDimensionSizeOpV1::setDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void GetDimensionSizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute dimension) {
  odsState.addOperands(operand);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addTypes(result);
}

void GetDimensionSizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute dimension) {
  odsState.addOperands(operand);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetDimensionSizeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetDimensionSizeOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimension'");
    if (namedAttrIt->getName() == getDimensionAttrName()) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetDimensionSizeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version GetDimensionSizeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version GetDimensionSizeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::GetDimensionSizeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::GetTupleElementOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetTupleElementOpV1GenericAdaptorBase::GetTupleElementOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.get_tuple_element_v1", odsAttrs.getContext());
}

GetTupleElementOpV1GenericAdaptorBase::GetTupleElementOpV1GenericAdaptorBase(GetTupleElementOpV1 op) : GetTupleElementOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetTupleElementOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetTupleElementOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute GetTupleElementOpV1GenericAdaptorBase::getIndexAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, GetTupleElementOpV1::getIndexAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute GetTupleElementOpV1GenericAdaptorBase::getIndex() {
  auto attr = getIndexAttr();
  return attr;
}

} // namespace detail
GetTupleElementOpV1Adaptor::GetTupleElementOpV1Adaptor(GetTupleElementOpV1 op) : GetTupleElementOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetTupleElementOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.get_tuple_element_v1' op ""requires attribute 'index'");
    if (namedAttrIt->getName() == GetTupleElementOpV1::getIndexAttrName(*odsOpName)) {
      tblgen_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_index && !((true)))
    return emitError(loc, "'vhlo.get_tuple_element_v1' op ""attribute 'index' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetTupleElementOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetTupleElementOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetTupleElementOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetTupleElementOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetTupleElementOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetTupleElementOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetTupleElementOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute GetTupleElementOpV1::getIndexAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getIndexAttrName()));
}

::mlir::Attribute GetTupleElementOpV1::getIndex() {
  auto attr = getIndexAttr();
  return attr;
}

void GetTupleElementOpV1::setIndexAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIndexAttrName(), attr);
}

void GetTupleElementOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute index) {
  odsState.addOperands(operand);
  odsState.addAttribute(getIndexAttrName(odsState.name), index);
  odsState.addTypes(result);
}

void GetTupleElementOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute index) {
  odsState.addOperands(operand);
  odsState.addAttribute(getIndexAttrName(odsState.name), index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetTupleElementOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetTupleElementOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_index;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'index'");
    if (namedAttrIt->getName() == getIndexAttrName()) {
      tblgen_index = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_index, "index")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetTupleElementOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version GetTupleElementOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version GetTupleElementOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::GetTupleElementOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::IfOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
IfOpV1GenericAdaptorBase::IfOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.if_v1", odsAttrs.getContext());
}

IfOpV1GenericAdaptorBase::IfOpV1GenericAdaptorBase(IfOpV1 op) : IfOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IfOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IfOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &IfOpV1GenericAdaptorBase::getTrueBranch() {
  return *odsRegions[0];
}

::mlir::Region &IfOpV1GenericAdaptorBase::getFalseBranch() {
  return *odsRegions[1];
}

::mlir::RegionRange IfOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
IfOpV1Adaptor::IfOpV1Adaptor(IfOpV1 op) : IfOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IfOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IfOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IfOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IfOpV1::getPred() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IfOpV1::getPredMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IfOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range IfOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range IfOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Region &IfOpV1::getTrueBranch() {
  return (*this)->getRegion(0);
}

::mlir::Region &IfOpV1::getFalseBranch() {
  return (*this)->getRegion(1);
}

void IfOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value pred) {
  odsState.addOperands(pred);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void IfOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IfOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "true_branch", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "false_branch", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult IfOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version IfOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version IfOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::IfOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ImagOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ImagOpV1GenericAdaptorBase::ImagOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.imag_v1", odsAttrs.getContext());
}

ImagOpV1GenericAdaptorBase::ImagOpV1GenericAdaptorBase(ImagOpV1 op) : ImagOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ImagOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ImagOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ImagOpV1Adaptor::ImagOpV1Adaptor(ImagOpV1 op) : ImagOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ImagOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ImagOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ImagOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ImagOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ImagOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ImagOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ImagOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ImagOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ImagOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ImagOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ImagOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ImagOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ImagOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ImagOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ImagOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ImagOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::InfeedOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
InfeedOpV1GenericAdaptorBase::InfeedOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.infeed_v1", odsAttrs.getContext());
}

InfeedOpV1GenericAdaptorBase::InfeedOpV1GenericAdaptorBase(InfeedOpV1 op) : InfeedOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> InfeedOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr InfeedOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute InfeedOpV1GenericAdaptorBase::getInfeedConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, InfeedOpV1::getInfeedConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute InfeedOpV1GenericAdaptorBase::getInfeedConfig() {
  auto attr = getInfeedConfigAttr();
  return attr;
}

::mlir::Attribute InfeedOpV1GenericAdaptorBase::getLayoutAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, InfeedOpV1::getLayoutAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute InfeedOpV1GenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr;
}

} // namespace detail
InfeedOpV1Adaptor::InfeedOpV1Adaptor(InfeedOpV1 op) : InfeedOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult InfeedOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_infeed_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.infeed_v1' op ""requires attribute 'infeed_config'");
    if (namedAttrIt->getName() == InfeedOpV1::getInfeedConfigAttrName(*odsOpName)) {
      tblgen_infeed_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_layout;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.infeed_v1' op ""requires attribute 'layout'");
    if (namedAttrIt->getName() == InfeedOpV1::getLayoutAttrName(*odsOpName)) {
      tblgen_layout = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_infeed_config && !((true)))
    return emitError(loc, "'vhlo.infeed_v1' op ""attribute 'infeed_config' failed to satisfy constraint: any attribute");

  if (tblgen_layout && !((true)))
    return emitError(loc, "'vhlo.infeed_v1' op ""attribute 'layout' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InfeedOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InfeedOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InfeedOpV1::getToken() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &InfeedOpV1::getTokenMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> InfeedOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range InfeedOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range InfeedOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Attribute InfeedOpV1::getInfeedConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getInfeedConfigAttrName()));
}

::mlir::Attribute InfeedOpV1::getInfeedConfig() {
  auto attr = getInfeedConfigAttr();
  return attr;
}

::mlir::Attribute InfeedOpV1::getLayoutAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getLayoutAttrName()));
}

::mlir::Attribute InfeedOpV1::getLayout() {
  auto attr = getLayoutAttr();
  return attr;
}

void InfeedOpV1::setInfeedConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInfeedConfigAttrName(), attr);
}

void InfeedOpV1::setLayoutAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void InfeedOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value token, ::mlir::Attribute infeed_config, ::mlir::Attribute layout) {
  odsState.addOperands(token);
  odsState.addAttribute(getInfeedConfigAttrName(odsState.name), infeed_config);
  odsState.addAttribute(getLayoutAttrName(odsState.name), layout);
  odsState.addTypes(results);
}

void InfeedOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InfeedOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_infeed_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'infeed_config'");
    if (namedAttrIt->getName() == getInfeedConfigAttrName()) {
      tblgen_infeed_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_layout;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'layout'");
    if (namedAttrIt->getName() == getLayoutAttrName()) {
      tblgen_layout = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_infeed_config, "infeed_config")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult InfeedOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version InfeedOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version InfeedOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::InfeedOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::IotaOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
IotaOpV1GenericAdaptorBase::IotaOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.iota_v1", odsAttrs.getContext());
}

IotaOpV1GenericAdaptorBase::IotaOpV1GenericAdaptorBase(IotaOpV1 op) : IotaOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IotaOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IotaOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute IotaOpV1GenericAdaptorBase::getIotaDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, IotaOpV1::getIotaDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute IotaOpV1GenericAdaptorBase::getIotaDimension() {
  auto attr = getIotaDimensionAttr();
  return attr;
}

} // namespace detail
IotaOpV1Adaptor::IotaOpV1Adaptor(IotaOpV1 op) : IotaOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IotaOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_iota_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.iota_v1' op ""requires attribute 'iota_dimension'");
    if (namedAttrIt->getName() == IotaOpV1::getIotaDimensionAttrName(*odsOpName)) {
      tblgen_iota_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_iota_dimension && !((true)))
    return emitError(loc, "'vhlo.iota_v1' op ""attribute 'iota_dimension' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IotaOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IotaOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> IotaOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IotaOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IotaOpV1::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute IotaOpV1::getIotaDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getIotaDimensionAttrName()));
}

::mlir::Attribute IotaOpV1::getIotaDimension() {
  auto attr = getIotaDimensionAttr();
  return attr;
}

void IotaOpV1::setIotaDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIotaDimensionAttrName(), attr);
}

void IotaOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Attribute iota_dimension) {
  odsState.addAttribute(getIotaDimensionAttrName(odsState.name), iota_dimension);
  odsState.addTypes(output);
}

void IotaOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute iota_dimension) {
  odsState.addAttribute(getIotaDimensionAttrName(odsState.name), iota_dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IotaOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IotaOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_iota_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'iota_dimension'");
    if (namedAttrIt->getName() == getIotaDimensionAttrName()) {
      tblgen_iota_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_iota_dimension, "iota_dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IotaOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version IotaOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version IotaOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::IotaOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::IsFiniteOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
IsFiniteOpV1GenericAdaptorBase::IsFiniteOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.is_finite_v1", odsAttrs.getContext());
}

IsFiniteOpV1GenericAdaptorBase::IsFiniteOpV1GenericAdaptorBase(IsFiniteOpV1 op) : IsFiniteOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IsFiniteOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IsFiniteOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IsFiniteOpV1Adaptor::IsFiniteOpV1Adaptor(IsFiniteOpV1 op) : IsFiniteOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IsFiniteOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IsFiniteOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsFiniteOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsFiniteOpV1::getX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IsFiniteOpV1::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IsFiniteOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsFiniteOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsFiniteOpV1::getY() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void IsFiniteOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type y, ::mlir::Value x) {
  odsState.addOperands(x);
  odsState.addTypes(y);
}

void IsFiniteOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x) {
  odsState.addOperands(x);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsFiniteOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IsFiniteOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IsFiniteOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version IsFiniteOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version IsFiniteOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::IsFiniteOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::Log1pOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
Log1pOpV1GenericAdaptorBase::Log1pOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.log_plus_one_v1", odsAttrs.getContext());
}

Log1pOpV1GenericAdaptorBase::Log1pOpV1GenericAdaptorBase(Log1pOpV1 op) : Log1pOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Log1pOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Log1pOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Log1pOpV1Adaptor::Log1pOpV1Adaptor(Log1pOpV1 op) : Log1pOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Log1pOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Log1pOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Log1pOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log1pOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Log1pOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Log1pOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Log1pOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log1pOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void Log1pOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void Log1pOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log1pOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Log1pOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Log1pOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version Log1pOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version Log1pOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::Log1pOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::LogOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogOpV1GenericAdaptorBase::LogOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.log_v1", odsAttrs.getContext());
}

LogOpV1GenericAdaptorBase::LogOpV1GenericAdaptorBase(LogOpV1 op) : LogOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogOpV1Adaptor::LogOpV1Adaptor(LogOpV1 op) : LogOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LogOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void LogOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void LogOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version LogOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version LogOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::LogOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::LogisticOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogisticOpV1GenericAdaptorBase::LogisticOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.logistic_v1", odsAttrs.getContext());
}

LogisticOpV1GenericAdaptorBase::LogisticOpV1GenericAdaptorBase(LogisticOpV1 op) : LogisticOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogisticOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogisticOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogisticOpV1Adaptor::LogisticOpV1Adaptor(LogisticOpV1 op) : LogisticOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogisticOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogisticOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogisticOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogisticOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LogisticOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogisticOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogisticOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogisticOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void LogisticOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void LogisticOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogisticOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogisticOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogisticOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version LogisticOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version LogisticOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::LogisticOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::MapOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapOpV1GenericAdaptorBase::MapOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.map_v1", odsAttrs.getContext());
}

MapOpV1GenericAdaptorBase::MapOpV1GenericAdaptorBase(MapOpV1 op) : MapOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MapOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MapOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute MapOpV1GenericAdaptorBase::getDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MapOpV1::getDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute MapOpV1GenericAdaptorBase::getDimensions() {
  auto attr = getDimensionsAttr();
  return attr;
}

::mlir::Region &MapOpV1GenericAdaptorBase::getComputation() {
  return *odsRegions[0];
}

::mlir::RegionRange MapOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
MapOpV1Adaptor::MapOpV1Adaptor(MapOpV1 op) : MapOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MapOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.map_v1' op ""requires attribute 'dimensions'");
    if (namedAttrIt->getName() == MapOpV1::getDimensionsAttrName(*odsOpName)) {
      tblgen_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimensions && !((true)))
    return emitError(loc, "'vhlo.map_v1' op ""attribute 'dimensions' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MapOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MapOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MapOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MapOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MapOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MapOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MapOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &MapOpV1::getComputation() {
  return (*this)->getRegion(0);
}

::mlir::Attribute MapOpV1::getDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDimensionsAttrName()));
}

::mlir::Attribute MapOpV1::getDimensions() {
  auto attr = getDimensionsAttr();
  return attr;
}

void MapOpV1::setDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimensionsAttrName(), attr);
}

void MapOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::Attribute dimensions) {
  odsState.addOperands(inputs);
  odsState.addAttribute(getDimensionsAttrName(odsState.name), dimensions);
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void MapOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Attribute dimensions) {
  odsState.addOperands(inputs);
  odsState.addAttribute(getDimensionsAttrName(odsState.name), dimensions);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MapOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimensions'");
    if (namedAttrIt->getName() == getDimensionsAttrName()) {
      tblgen_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dimensions, "dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "computation", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult MapOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version MapOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version MapOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::MapOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::MaxOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaxOpV1GenericAdaptorBase::MaxOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.maximum_v1", odsAttrs.getContext());
}

MaxOpV1GenericAdaptorBase::MaxOpV1GenericAdaptorBase(MaxOpV1 op) : MaxOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaxOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaxOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaxOpV1Adaptor::MaxOpV1Adaptor(MaxOpV1 op) : MaxOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaxOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaxOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaxOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MaxOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MaxOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaxOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaxOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaxOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaxOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MaxOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaxOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaxOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version MaxOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version MaxOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::MaxOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::MinOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
MinOpV1GenericAdaptorBase::MinOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.minimum_v1", odsAttrs.getContext());
}

MinOpV1GenericAdaptorBase::MinOpV1GenericAdaptorBase(MinOpV1 op) : MinOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MinOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MinOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MinOpV1Adaptor::MinOpV1Adaptor(MinOpV1 op) : MinOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MinOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MinOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MinOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MinOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MinOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MinOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MinOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MinOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MinOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MinOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MinOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MinOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version MinOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version MinOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::MinOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::MulOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
MulOpV1GenericAdaptorBase::MulOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.multiply_v1", odsAttrs.getContext());
}

MulOpV1GenericAdaptorBase::MulOpV1GenericAdaptorBase(MulOpV1 op) : MulOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MulOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MulOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MulOpV1Adaptor::MulOpV1Adaptor(MulOpV1 op) : MulOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MulOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MulOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MulOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MulOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MulOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MulOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MulOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MulOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MulOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MulOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version MulOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version MulOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::MulOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::NegOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
NegOpV1GenericAdaptorBase::NegOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.negate_v1", odsAttrs.getContext());
}

NegOpV1GenericAdaptorBase::NegOpV1GenericAdaptorBase(NegOpV1 op) : NegOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NegOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NegOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NegOpV1Adaptor::NegOpV1Adaptor(NegOpV1 op) : NegOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NegOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NegOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NegOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NegOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NegOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NegOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NegOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NegOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void NegOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void NegOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NegOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NegOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version NegOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version NegOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::NegOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::NotOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
NotOpV1GenericAdaptorBase::NotOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.not_v1", odsAttrs.getContext());
}

NotOpV1GenericAdaptorBase::NotOpV1GenericAdaptorBase(NotOpV1 op) : NotOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NotOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NotOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NotOpV1Adaptor::NotOpV1Adaptor(NotOpV1 op) : NotOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NotOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NotOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NotOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NotOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NotOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NotOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NotOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NotOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void NotOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void NotOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NotOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NotOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NotOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version NotOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version NotOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::NotOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::OptimizationBarrierOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
OptimizationBarrierOpV1GenericAdaptorBase::OptimizationBarrierOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.optimization_barrier_v1", odsAttrs.getContext());
}

OptimizationBarrierOpV1GenericAdaptorBase::OptimizationBarrierOpV1GenericAdaptorBase(OptimizationBarrierOpV1 op) : OptimizationBarrierOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OptimizationBarrierOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr OptimizationBarrierOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
OptimizationBarrierOpV1Adaptor::OptimizationBarrierOpV1Adaptor(OptimizationBarrierOpV1 op) : OptimizationBarrierOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OptimizationBarrierOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OptimizationBarrierOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range OptimizationBarrierOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range OptimizationBarrierOpV1::getOperand() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange OptimizationBarrierOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> OptimizationBarrierOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range OptimizationBarrierOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range OptimizationBarrierOpV1::getResult() {
  return getODSResults(0);
}

void OptimizationBarrierOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OptimizationBarrierOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OptimizationBarrierOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version OptimizationBarrierOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version OptimizationBarrierOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::OptimizationBarrierOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::OrOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
OrOpV1GenericAdaptorBase::OrOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.or_v1", odsAttrs.getContext());
}

OrOpV1GenericAdaptorBase::OrOpV1GenericAdaptorBase(OrOpV1 op) : OrOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OrOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr OrOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
OrOpV1Adaptor::OrOpV1Adaptor(OrOpV1 op) : OrOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OrOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OrOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range OrOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OrOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value OrOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &OrOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &OrOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> OrOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OrOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OrOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void OrOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void OrOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OrOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OrOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version OrOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version OrOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::OrOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::OutfeedOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
OutfeedOpV1GenericAdaptorBase::OutfeedOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.outfeed_v1", odsAttrs.getContext());
}

OutfeedOpV1GenericAdaptorBase::OutfeedOpV1GenericAdaptorBase(OutfeedOpV1 op) : OutfeedOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OutfeedOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr OutfeedOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute OutfeedOpV1GenericAdaptorBase::getOutfeedConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, OutfeedOpV1::getOutfeedConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute OutfeedOpV1GenericAdaptorBase::getOutfeedConfig() {
  auto attr = getOutfeedConfigAttr();
  return attr;
}

} // namespace detail
OutfeedOpV1Adaptor::OutfeedOpV1Adaptor(OutfeedOpV1 op) : OutfeedOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OutfeedOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_outfeed_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.outfeed_v1' op ""requires attribute 'outfeed_config'");
    if (namedAttrIt->getName() == OutfeedOpV1::getOutfeedConfigAttrName(*odsOpName)) {
      tblgen_outfeed_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_outfeed_config && !((true)))
    return emitError(loc, "'vhlo.outfeed_v1' op ""attribute 'outfeed_config' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OutfeedOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range OutfeedOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range OutfeedOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::Value OutfeedOpV1::getToken() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange OutfeedOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &OutfeedOpV1::getTokenMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> OutfeedOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OutfeedOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OutfeedOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute OutfeedOpV1::getOutfeedConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOutfeedConfigAttrName()));
}

::mlir::Attribute OutfeedOpV1::getOutfeedConfig() {
  auto attr = getOutfeedConfigAttr();
  return attr;
}

void OutfeedOpV1::setOutfeedConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOutfeedConfigAttrName(), attr);
}

void OutfeedOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::Value token, ::mlir::Attribute outfeed_config) {
  odsState.addOperands(inputs);
  odsState.addOperands(token);
  odsState.addAttribute(getOutfeedConfigAttrName(odsState.name), outfeed_config);
  odsState.addTypes(result);
}

void OutfeedOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Value token, ::mlir::Attribute outfeed_config) {
  odsState.addOperands(inputs);
  odsState.addOperands(token);
  odsState.addAttribute(getOutfeedConfigAttrName(odsState.name), outfeed_config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OutfeedOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OutfeedOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_outfeed_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'outfeed_config'");
    if (namedAttrIt->getName() == getOutfeedConfigAttrName()) {
      tblgen_outfeed_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_outfeed_config, "outfeed_config")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OutfeedOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version OutfeedOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version OutfeedOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::OutfeedOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::PadOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
PadOpV1GenericAdaptorBase::PadOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.pad_v1", odsAttrs.getContext());
}

PadOpV1GenericAdaptorBase::PadOpV1GenericAdaptorBase(PadOpV1 op) : PadOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PadOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PadOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute PadOpV1GenericAdaptorBase::getEdgePaddingLowAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, PadOpV1::getEdgePaddingLowAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute PadOpV1GenericAdaptorBase::getEdgePaddingLow() {
  auto attr = getEdgePaddingLowAttr();
  return attr;
}

::mlir::Attribute PadOpV1GenericAdaptorBase::getEdgePaddingHighAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, PadOpV1::getEdgePaddingHighAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute PadOpV1GenericAdaptorBase::getEdgePaddingHigh() {
  auto attr = getEdgePaddingHighAttr();
  return attr;
}

::mlir::Attribute PadOpV1GenericAdaptorBase::getInteriorPaddingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 0, PadOpV1::getInteriorPaddingAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute PadOpV1GenericAdaptorBase::getInteriorPadding() {
  auto attr = getInteriorPaddingAttr();
  return attr;
}

} // namespace detail
PadOpV1Adaptor::PadOpV1Adaptor(PadOpV1 op) : PadOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PadOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_edge_padding_high;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.pad_v1' op ""requires attribute 'edge_padding_high'");
    if (namedAttrIt->getName() == PadOpV1::getEdgePaddingHighAttrName(*odsOpName)) {
      tblgen_edge_padding_high = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_edge_padding_low;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.pad_v1' op ""requires attribute 'edge_padding_low'");
    if (namedAttrIt->getName() == PadOpV1::getEdgePaddingLowAttrName(*odsOpName)) {
      tblgen_edge_padding_low = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_interior_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.pad_v1' op ""requires attribute 'interior_padding'");
    if (namedAttrIt->getName() == PadOpV1::getInteriorPaddingAttrName(*odsOpName)) {
      tblgen_interior_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_edge_padding_low && !((true)))
    return emitError(loc, "'vhlo.pad_v1' op ""attribute 'edge_padding_low' failed to satisfy constraint: any attribute");

  if (tblgen_edge_padding_high && !((true)))
    return emitError(loc, "'vhlo.pad_v1' op ""attribute 'edge_padding_high' failed to satisfy constraint: any attribute");

  if (tblgen_interior_padding && !((true)))
    return emitError(loc, "'vhlo.pad_v1' op ""attribute 'interior_padding' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PadOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PadOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PadOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value PadOpV1::getPaddingValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &PadOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PadOpV1::getPaddingValueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> PadOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PadOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PadOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute PadOpV1::getEdgePaddingLowAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getEdgePaddingLowAttrName()));
}

::mlir::Attribute PadOpV1::getEdgePaddingLow() {
  auto attr = getEdgePaddingLowAttr();
  return attr;
}

::mlir::Attribute PadOpV1::getEdgePaddingHighAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getEdgePaddingHighAttrName()));
}

::mlir::Attribute PadOpV1::getEdgePaddingHigh() {
  auto attr = getEdgePaddingHighAttr();
  return attr;
}

::mlir::Attribute PadOpV1::getInteriorPaddingAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 0, getInteriorPaddingAttrName()));
}

::mlir::Attribute PadOpV1::getInteriorPadding() {
  auto attr = getInteriorPaddingAttr();
  return attr;
}

void PadOpV1::setEdgePaddingLowAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getEdgePaddingLowAttrName(), attr);
}

void PadOpV1::setEdgePaddingHighAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getEdgePaddingHighAttrName(), attr);
}

void PadOpV1::setInteriorPaddingAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInteriorPaddingAttrName(), attr);
}

void PadOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value padding_value, ::mlir::Attribute edge_padding_low, ::mlir::Attribute edge_padding_high, ::mlir::Attribute interior_padding) {
  odsState.addOperands(operand);
  odsState.addOperands(padding_value);
  odsState.addAttribute(getEdgePaddingLowAttrName(odsState.name), edge_padding_low);
  odsState.addAttribute(getEdgePaddingHighAttrName(odsState.name), edge_padding_high);
  odsState.addAttribute(getInteriorPaddingAttrName(odsState.name), interior_padding);
  odsState.addTypes(result);
}

void PadOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value padding_value, ::mlir::Attribute edge_padding_low, ::mlir::Attribute edge_padding_high, ::mlir::Attribute interior_padding) {
  odsState.addOperands(operand);
  odsState.addOperands(padding_value);
  odsState.addAttribute(getEdgePaddingLowAttrName(odsState.name), edge_padding_low);
  odsState.addAttribute(getEdgePaddingHighAttrName(odsState.name), edge_padding_high);
  odsState.addAttribute(getInteriorPaddingAttrName(odsState.name), interior_padding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PadOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_edge_padding_high;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'edge_padding_high'");
    if (namedAttrIt->getName() == getEdgePaddingHighAttrName()) {
      tblgen_edge_padding_high = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_edge_padding_low;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'edge_padding_low'");
    if (namedAttrIt->getName() == getEdgePaddingLowAttrName()) {
      tblgen_edge_padding_low = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_interior_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'interior_padding'");
    if (namedAttrIt->getName() == getInteriorPaddingAttrName()) {
      tblgen_interior_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_edge_padding_low, "edge_padding_low")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_edge_padding_high, "edge_padding_high")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_interior_padding, "interior_padding")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PadOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version PadOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version PadOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::PadOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::PartitionIdOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
PartitionIdOpV1GenericAdaptorBase::PartitionIdOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.partition_id_v1", odsAttrs.getContext());
}

PartitionIdOpV1GenericAdaptorBase::PartitionIdOpV1GenericAdaptorBase(PartitionIdOpV1 op) : PartitionIdOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PartitionIdOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PartitionIdOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
PartitionIdOpV1Adaptor::PartitionIdOpV1Adaptor(PartitionIdOpV1 op) : PartitionIdOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PartitionIdOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PartitionIdOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PartitionIdOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> PartitionIdOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PartitionIdOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PartitionIdOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void PartitionIdOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void PartitionIdOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PartitionIdOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PartitionIdOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PartitionIdOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version PartitionIdOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version PartitionIdOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::PartitionIdOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::PopulationCountOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
PopulationCountOpV1GenericAdaptorBase::PopulationCountOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.popcnt_v1", odsAttrs.getContext());
}

PopulationCountOpV1GenericAdaptorBase::PopulationCountOpV1GenericAdaptorBase(PopulationCountOpV1 op) : PopulationCountOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PopulationCountOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PopulationCountOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
PopulationCountOpV1Adaptor::PopulationCountOpV1Adaptor(PopulationCountOpV1 op) : PopulationCountOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PopulationCountOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PopulationCountOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PopulationCountOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PopulationCountOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &PopulationCountOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> PopulationCountOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PopulationCountOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PopulationCountOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void PopulationCountOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void PopulationCountOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PopulationCountOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PopulationCountOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PopulationCountOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version PopulationCountOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version PopulationCountOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::PopulationCountOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::PowOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
PowOpV1GenericAdaptorBase::PowOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.power_v1", odsAttrs.getContext());
}

PowOpV1GenericAdaptorBase::PowOpV1GenericAdaptorBase(PowOpV1 op) : PowOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PowOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PowOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
PowOpV1Adaptor::PowOpV1Adaptor(PowOpV1 op) : PowOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PowOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PowOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PowOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PowOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value PowOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &PowOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PowOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> PowOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PowOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PowOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void PowOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void PowOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PowOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PowOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PowOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version PowOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version PowOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::PowOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RealDynamicSliceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RealDynamicSliceOpV1GenericAdaptorBase::RealDynamicSliceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.real_dynamic_slice_v1", odsAttrs.getContext());
}

RealDynamicSliceOpV1GenericAdaptorBase::RealDynamicSliceOpV1GenericAdaptorBase(RealDynamicSliceOpV1 op) : RealDynamicSliceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RealDynamicSliceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RealDynamicSliceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RealDynamicSliceOpV1Adaptor::RealDynamicSliceOpV1Adaptor(RealDynamicSliceOpV1 op) : RealDynamicSliceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RealDynamicSliceOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RealDynamicSliceOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RealDynamicSliceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RealDynamicSliceOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RealDynamicSliceOpV1::getStartIndices() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RealDynamicSliceOpV1::getLimitIndices() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value RealDynamicSliceOpV1::getStrides() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::OpOperand &RealDynamicSliceOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RealDynamicSliceOpV1::getStartIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RealDynamicSliceOpV1::getLimitIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RealDynamicSliceOpV1::getStridesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RealDynamicSliceOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RealDynamicSliceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RealDynamicSliceOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RealDynamicSliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::Value limit_indices, ::mlir::Value strides) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(limit_indices);
  odsState.addOperands(strides);
  odsState.addTypes(result);
}

void RealDynamicSliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::Value limit_indices, ::mlir::Value strides) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(limit_indices);
  odsState.addOperands(strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RealDynamicSliceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RealDynamicSliceOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RealDynamicSliceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RealDynamicSliceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RealDynamicSliceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RealDynamicSliceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RealOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RealOpV1GenericAdaptorBase::RealOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.real_v1", odsAttrs.getContext());
}

RealOpV1GenericAdaptorBase::RealOpV1GenericAdaptorBase(RealOpV1 op) : RealOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RealOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RealOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RealOpV1Adaptor::RealOpV1Adaptor(RealOpV1 op) : RealOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RealOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RealOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RealOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RealOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RealOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RealOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RealOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RealOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RealOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void RealOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RealOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RealOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RealOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RealOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RealOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RealOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RecvOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RecvOpV1GenericAdaptorBase::RecvOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.recv_v1", odsAttrs.getContext());
}

RecvOpV1GenericAdaptorBase::RecvOpV1GenericAdaptorBase(RecvOpV1 op) : RecvOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RecvOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RecvOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute RecvOpV1GenericAdaptorBase::getChannelIdAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, RecvOpV1::getChannelIdAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute RecvOpV1GenericAdaptorBase::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute RecvOpV1GenericAdaptorBase::getChannelTypeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, RecvOpV1::getChannelTypeAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute RecvOpV1GenericAdaptorBase::getChannelType() {
  auto attr = getChannelTypeAttr();
  return attr;
}

::mlir::Attribute RecvOpV1GenericAdaptorBase::getIsHostTransferAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 0, RecvOpV1::getIsHostTransferAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute RecvOpV1GenericAdaptorBase::getIsHostTransfer() {
  auto attr = getIsHostTransferAttr();
  return attr;
}

} // namespace detail
RecvOpV1Adaptor::RecvOpV1Adaptor(RecvOpV1 op) : RecvOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RecvOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.recv_v1' op ""requires attribute 'channel_id'");
    if (namedAttrIt->getName() == RecvOpV1::getChannelIdAttrName(*odsOpName)) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_channel_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.recv_v1' op ""requires attribute 'channel_type'");
    if (namedAttrIt->getName() == RecvOpV1::getChannelTypeAttrName(*odsOpName)) {
      tblgen_channel_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_is_host_transfer;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.recv_v1' op ""requires attribute 'is_host_transfer'");
    if (namedAttrIt->getName() == RecvOpV1::getIsHostTransferAttrName(*odsOpName)) {
      tblgen_is_host_transfer = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_channel_id && !((true)))
    return emitError(loc, "'vhlo.recv_v1' op ""attribute 'channel_id' failed to satisfy constraint: any attribute");

  if (tblgen_channel_type && !((true)))
    return emitError(loc, "'vhlo.recv_v1' op ""attribute 'channel_type' failed to satisfy constraint: any attribute");

  if (tblgen_is_host_transfer && !((true)))
    return emitError(loc, "'vhlo.recv_v1' op ""attribute 'is_host_transfer' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RecvOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RecvOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RecvOpV1::getToken() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RecvOpV1::getTokenMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RecvOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range RecvOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range RecvOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Attribute RecvOpV1::getChannelIdAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getChannelIdAttrName()));
}

::mlir::Attribute RecvOpV1::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute RecvOpV1::getChannelTypeAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getChannelTypeAttrName()));
}

::mlir::Attribute RecvOpV1::getChannelType() {
  auto attr = getChannelTypeAttr();
  return attr;
}

::mlir::Attribute RecvOpV1::getIsHostTransferAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 0, getIsHostTransferAttrName()));
}

::mlir::Attribute RecvOpV1::getIsHostTransfer() {
  auto attr = getIsHostTransferAttr();
  return attr;
}

void RecvOpV1::setChannelIdAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelIdAttrName(), attr);
}

void RecvOpV1::setChannelTypeAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelTypeAttrName(), attr);
}

void RecvOpV1::setIsHostTransferAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIsHostTransferAttrName(), attr);
}

void RecvOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value token, ::mlir::Attribute channel_id, ::mlir::Attribute channel_type, ::mlir::Attribute is_host_transfer) {
  odsState.addOperands(token);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getChannelTypeAttrName(odsState.name), channel_type);
  odsState.addAttribute(getIsHostTransferAttrName(odsState.name), is_host_transfer);
  odsState.addTypes(results);
}

void RecvOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RecvOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_id'");
    if (namedAttrIt->getName() == getChannelIdAttrName()) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_channel_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_type'");
    if (namedAttrIt->getName() == getChannelTypeAttrName()) {
      tblgen_channel_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_is_host_transfer;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'is_host_transfer'");
    if (namedAttrIt->getName() == getIsHostTransferAttrName()) {
      tblgen_is_host_transfer = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_id, "channel_id")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_type, "channel_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_is_host_transfer, "is_host_transfer")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RecvOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RecvOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RecvOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RecvOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReduceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceOpV1GenericAdaptorBase::ReduceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.reduce_v1", odsAttrs.getContext());
}

ReduceOpV1GenericAdaptorBase::ReduceOpV1GenericAdaptorBase(ReduceOpV1 op) : ReduceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ReduceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ReduceOpV1GenericAdaptorBase::getDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ReduceOpV1::getDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceOpV1GenericAdaptorBase::getDimensions() {
  auto attr = getDimensionsAttr();
  return attr;
}

::mlir::Region &ReduceOpV1GenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange ReduceOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ReduceOpV1Adaptor::ReduceOpV1Adaptor(ReduceOpV1 op) : ReduceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_v1' op ""requires attribute 'dimensions'");
    if (namedAttrIt->getName() == ReduceOpV1::getDimensionsAttrName(*odsOpName)) {
      tblgen_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimensions && !((true)))
    return emitError(loc, "'vhlo.reduce_v1' op ""attribute 'dimensions' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ReduceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ReduceOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range ReduceOpV1::getInitValues() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ReduceOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange ReduceOpV1::getInitValuesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReduceOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range ReduceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range ReduceOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Region &ReduceOpV1::getBody() {
  return (*this)->getRegion(0);
}

::mlir::Attribute ReduceOpV1::getDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDimensionsAttrName()));
}

::mlir::Attribute ReduceOpV1::getDimensions() {
  auto attr = getDimensionsAttr();
  return attr;
}

void ReduceOpV1::setDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimensionsAttrName(), attr);
}

void ReduceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange inputs, ::mlir::ValueRange init_values, ::mlir::Attribute dimensions) {
  odsState.addOperands(inputs);
  odsState.addOperands(init_values);
  odsState.addAttribute(getDimensionsAttrName(odsState.name), dimensions);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void ReduceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReduceOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimensions'");
    if (namedAttrIt->getName() == getDimensionsAttrName()) {
      tblgen_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dimensions, "dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReduceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReduceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReduceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReducePrecisionOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReducePrecisionOpV1GenericAdaptorBase::ReducePrecisionOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.reduce_precision_v1", odsAttrs.getContext());
}

ReducePrecisionOpV1GenericAdaptorBase::ReducePrecisionOpV1GenericAdaptorBase(ReducePrecisionOpV1 op) : ReducePrecisionOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReducePrecisionOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReducePrecisionOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ReducePrecisionOpV1GenericAdaptorBase::getExponentBitsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, ReducePrecisionOpV1::getExponentBitsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReducePrecisionOpV1GenericAdaptorBase::getExponentBits() {
  auto attr = getExponentBitsAttr();
  return attr;
}

::mlir::Attribute ReducePrecisionOpV1GenericAdaptorBase::getMantissaBitsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, ReducePrecisionOpV1::getMantissaBitsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReducePrecisionOpV1GenericAdaptorBase::getMantissaBits() {
  auto attr = getMantissaBitsAttr();
  return attr;
}

} // namespace detail
ReducePrecisionOpV1Adaptor::ReducePrecisionOpV1Adaptor(ReducePrecisionOpV1 op) : ReducePrecisionOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReducePrecisionOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_exponent_bits;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_precision_v1' op ""requires attribute 'exponent_bits'");
    if (namedAttrIt->getName() == ReducePrecisionOpV1::getExponentBitsAttrName(*odsOpName)) {
      tblgen_exponent_bits = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_mantissa_bits;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_precision_v1' op ""requires attribute 'mantissa_bits'");
    if (namedAttrIt->getName() == ReducePrecisionOpV1::getMantissaBitsAttrName(*odsOpName)) {
      tblgen_mantissa_bits = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_exponent_bits && !((true)))
    return emitError(loc, "'vhlo.reduce_precision_v1' op ""attribute 'exponent_bits' failed to satisfy constraint: any attribute");

  if (tblgen_mantissa_bits && !((true)))
    return emitError(loc, "'vhlo.reduce_precision_v1' op ""attribute 'mantissa_bits' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReducePrecisionOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReducePrecisionOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReducePrecisionOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReducePrecisionOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReducePrecisionOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReducePrecisionOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReducePrecisionOpV1::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute ReducePrecisionOpV1::getExponentBitsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getExponentBitsAttrName()));
}

::mlir::Attribute ReducePrecisionOpV1::getExponentBits() {
  auto attr = getExponentBitsAttr();
  return attr;
}

::mlir::Attribute ReducePrecisionOpV1::getMantissaBitsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getMantissaBitsAttrName()));
}

::mlir::Attribute ReducePrecisionOpV1::getMantissaBits() {
  auto attr = getMantissaBitsAttr();
  return attr;
}

void ReducePrecisionOpV1::setExponentBitsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getExponentBitsAttrName(), attr);
}

void ReducePrecisionOpV1::setMantissaBitsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getMantissaBitsAttrName(), attr);
}

void ReducePrecisionOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value operand, ::mlir::Attribute exponent_bits, ::mlir::Attribute mantissa_bits) {
  odsState.addOperands(operand);
  odsState.addAttribute(getExponentBitsAttrName(odsState.name), exponent_bits);
  odsState.addAttribute(getMantissaBitsAttrName(odsState.name), mantissa_bits);
  odsState.addTypes(output);
}

void ReducePrecisionOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute exponent_bits, ::mlir::Attribute mantissa_bits) {
  odsState.addOperands(operand);
  odsState.addAttribute(getExponentBitsAttrName(odsState.name), exponent_bits);
  odsState.addAttribute(getMantissaBitsAttrName(odsState.name), mantissa_bits);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReducePrecisionOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReducePrecisionOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_exponent_bits;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'exponent_bits'");
    if (namedAttrIt->getName() == getExponentBitsAttrName()) {
      tblgen_exponent_bits = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_mantissa_bits;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'mantissa_bits'");
    if (namedAttrIt->getName() == getMantissaBitsAttrName()) {
      tblgen_mantissa_bits = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_exponent_bits, "exponent_bits")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_mantissa_bits, "mantissa_bits")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReducePrecisionOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReducePrecisionOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReducePrecisionOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReducePrecisionOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReduceScatterOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceScatterOpV1GenericAdaptorBase::ReduceScatterOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.reduce_scatter_v1", odsAttrs.getContext());
}

ReduceScatterOpV1GenericAdaptorBase::ReduceScatterOpV1GenericAdaptorBase(ReduceScatterOpV1 op) : ReduceScatterOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceScatterOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceScatterOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getScatterDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 1, ReduceScatterOpV1::getScatterDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getScatterDimension() {
  auto attr = getScatterDimensionAttr();
  return attr;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getReplicaGroupsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 2, ReduceScatterOpV1::getReplicaGroupsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getChannelIdAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 3, ReduceScatterOpV1::getChannelIdAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getUseGlobalDeviceIdsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 0, ReduceScatterOpV1::getUseGlobalDeviceIdsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceScatterOpV1GenericAdaptorBase::getUseGlobalDeviceIds() {
  auto attr = getUseGlobalDeviceIdsAttr();
  return attr;
}

::mlir::Region &ReduceScatterOpV1GenericAdaptorBase::getComputation() {
  return *odsRegions[0];
}

::mlir::RegionRange ReduceScatterOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ReduceScatterOpV1Adaptor::ReduceScatterOpV1Adaptor(ReduceScatterOpV1 op) : ReduceScatterOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceScatterOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_scatter_v1' op ""requires attribute 'channel_id'");
    if (namedAttrIt->getName() == ReduceScatterOpV1::getChannelIdAttrName(*odsOpName)) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_scatter_v1' op ""requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == ReduceScatterOpV1::getReplicaGroupsAttrName(*odsOpName)) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_scatter_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_scatter_v1' op ""requires attribute 'scatter_dimension'");
    if (namedAttrIt->getName() == ReduceScatterOpV1::getScatterDimensionAttrName(*odsOpName)) {
      tblgen_scatter_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_use_global_device_ids;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_scatter_v1' op ""requires attribute 'use_global_device_ids'");
    if (namedAttrIt->getName() == ReduceScatterOpV1::getUseGlobalDeviceIdsAttrName(*odsOpName)) {
      tblgen_use_global_device_ids = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_scatter_dimension && !((true)))
    return emitError(loc, "'vhlo.reduce_scatter_v1' op ""attribute 'scatter_dimension' failed to satisfy constraint: any attribute");

  if (tblgen_replica_groups && !((true)))
    return emitError(loc, "'vhlo.reduce_scatter_v1' op ""attribute 'replica_groups' failed to satisfy constraint: any attribute");

  if (tblgen_channel_id && !((true)))
    return emitError(loc, "'vhlo.reduce_scatter_v1' op ""attribute 'channel_id' failed to satisfy constraint: any attribute");

  if (tblgen_use_global_device_ids && !((true)))
    return emitError(loc, "'vhlo.reduce_scatter_v1' op ""attribute 'use_global_device_ids' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceScatterOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceScatterOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceScatterOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceScatterOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceScatterOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceScatterOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceScatterOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &ReduceScatterOpV1::getComputation() {
  return (*this)->getRegion(0);
}

::mlir::Attribute ReduceScatterOpV1::getScatterDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 1, getScatterDimensionAttrName()));
}

::mlir::Attribute ReduceScatterOpV1::getScatterDimension() {
  auto attr = getScatterDimensionAttr();
  return attr;
}

::mlir::Attribute ReduceScatterOpV1::getReplicaGroupsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 2, getReplicaGroupsAttrName()));
}

::mlir::Attribute ReduceScatterOpV1::getReplicaGroups() {
  auto attr = getReplicaGroupsAttr();
  return attr;
}

::mlir::Attribute ReduceScatterOpV1::getChannelIdAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 3, getChannelIdAttrName()));
}

::mlir::Attribute ReduceScatterOpV1::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute ReduceScatterOpV1::getUseGlobalDeviceIdsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 0, getUseGlobalDeviceIdsAttrName()));
}

::mlir::Attribute ReduceScatterOpV1::getUseGlobalDeviceIds() {
  auto attr = getUseGlobalDeviceIdsAttr();
  return attr;
}

void ReduceScatterOpV1::setScatterDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getScatterDimensionAttrName(), attr);
}

void ReduceScatterOpV1::setReplicaGroupsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getReplicaGroupsAttrName(), attr);
}

void ReduceScatterOpV1::setChannelIdAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelIdAttrName(), attr);
}

void ReduceScatterOpV1::setUseGlobalDeviceIdsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getUseGlobalDeviceIdsAttrName(), attr);
}

void ReduceScatterOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute scatter_dimension, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id, ::mlir::Attribute use_global_device_ids) {
  odsState.addOperands(operand);
  odsState.addAttribute(getScatterDimensionAttrName(odsState.name), scatter_dimension);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getUseGlobalDeviceIdsAttrName(odsState.name), use_global_device_ids);
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void ReduceScatterOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute scatter_dimension, ::mlir::Attribute replica_groups, ::mlir::Attribute channel_id, ::mlir::Attribute use_global_device_ids) {
  odsState.addOperands(operand);
  odsState.addAttribute(getScatterDimensionAttrName(odsState.name), scatter_dimension);
  odsState.addAttribute(getReplicaGroupsAttrName(odsState.name), replica_groups);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getUseGlobalDeviceIdsAttrName(odsState.name), use_global_device_ids);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceScatterOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReduceScatterOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_id'");
    if (namedAttrIt->getName() == getChannelIdAttrName()) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_replica_groups;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'replica_groups'");
    if (namedAttrIt->getName() == getReplicaGroupsAttrName()) {
      tblgen_replica_groups = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_scatter_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'scatter_dimension'");
    if (namedAttrIt->getName() == getScatterDimensionAttrName()) {
      tblgen_scatter_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_use_global_device_ids;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'use_global_device_ids'");
    if (namedAttrIt->getName() == getUseGlobalDeviceIdsAttrName()) {
      tblgen_use_global_device_ids = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_scatter_dimension, "scatter_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_replica_groups, "replica_groups")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_id, "channel_id")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_use_global_device_ids, "use_global_device_ids")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "computation", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceScatterOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReduceScatterOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReduceScatterOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReduceScatterOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReduceWindowOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceWindowOpV1GenericAdaptorBase::ReduceWindowOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.reduce_window_v1", odsAttrs.getContext());
}

ReduceWindowOpV1GenericAdaptorBase::ReduceWindowOpV1GenericAdaptorBase(ReduceWindowOpV1 op) : ReduceWindowOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceWindowOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ReduceWindowOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getWindowDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 1, ReduceWindowOpV1::getWindowDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getWindowDimensions() {
  auto attr = getWindowDimensionsAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getWindowStridesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 0, ReduceWindowOpV1::getWindowStridesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getBaseDilationsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 4, ReduceWindowOpV1::getBaseDilationsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getBaseDilations() {
  auto attr = getBaseDilationsAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getWindowDilationsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 2, ReduceWindowOpV1::getWindowDilationsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getWindowDilations() {
  auto attr = getWindowDilationsAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getPaddingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 3, ReduceWindowOpV1::getPaddingAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReduceWindowOpV1GenericAdaptorBase::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

::mlir::Region &ReduceWindowOpV1GenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange ReduceWindowOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ReduceWindowOpV1Adaptor::ReduceWindowOpV1Adaptor(ReduceWindowOpV1 op) : ReduceWindowOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceWindowOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_base_dilations;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_window_v1' op ""requires attribute 'base_dilations'");
    if (namedAttrIt->getName() == ReduceWindowOpV1::getBaseDilationsAttrName(*odsOpName)) {
      tblgen_base_dilations = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_window_v1' op ""requires attribute 'padding'");
    if (namedAttrIt->getName() == ReduceWindowOpV1::getPaddingAttrName(*odsOpName)) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_dilations;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_window_v1' op ""requires attribute 'window_dilations'");
    if (namedAttrIt->getName() == ReduceWindowOpV1::getWindowDilationsAttrName(*odsOpName)) {
      tblgen_window_dilations = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_window_v1' op ""requires attribute 'window_dimensions'");
    if (namedAttrIt->getName() == ReduceWindowOpV1::getWindowDimensionsAttrName(*odsOpName)) {
      tblgen_window_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reduce_window_v1' op ""requires attribute 'window_strides'");
    if (namedAttrIt->getName() == ReduceWindowOpV1::getWindowStridesAttrName(*odsOpName)) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_window_dimensions && !((true)))
    return emitError(loc, "'vhlo.reduce_window_v1' op ""attribute 'window_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_window_strides && !((true)))
    return emitError(loc, "'vhlo.reduce_window_v1' op ""attribute 'window_strides' failed to satisfy constraint: any attribute");

  if (tblgen_base_dilations && !((true)))
    return emitError(loc, "'vhlo.reduce_window_v1' op ""attribute 'base_dilations' failed to satisfy constraint: any attribute");

  if (tblgen_window_dilations && !((true)))
    return emitError(loc, "'vhlo.reduce_window_v1' op ""attribute 'window_dilations' failed to satisfy constraint: any attribute");

  if (tblgen_padding && !((true)))
    return emitError(loc, "'vhlo.reduce_window_v1' op ""attribute 'padding' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceWindowOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ReduceWindowOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ReduceWindowOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range ReduceWindowOpV1::getInitValues() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ReduceWindowOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange ReduceWindowOpV1::getInitValuesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReduceWindowOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range ReduceWindowOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range ReduceWindowOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Region &ReduceWindowOpV1::getBody() {
  return (*this)->getRegion(0);
}

::mlir::Attribute ReduceWindowOpV1::getWindowDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 1, getWindowDimensionsAttrName()));
}

::mlir::Attribute ReduceWindowOpV1::getWindowDimensions() {
  auto attr = getWindowDimensionsAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1::getWindowStridesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 0, getWindowStridesAttrName()));
}

::mlir::Attribute ReduceWindowOpV1::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1::getBaseDilationsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 4, getBaseDilationsAttrName()));
}

::mlir::Attribute ReduceWindowOpV1::getBaseDilations() {
  auto attr = getBaseDilationsAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1::getWindowDilationsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 2, getWindowDilationsAttrName()));
}

::mlir::Attribute ReduceWindowOpV1::getWindowDilations() {
  auto attr = getWindowDilationsAttr();
  return attr;
}

::mlir::Attribute ReduceWindowOpV1::getPaddingAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 3, getPaddingAttrName()));
}

::mlir::Attribute ReduceWindowOpV1::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

void ReduceWindowOpV1::setWindowDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowDimensionsAttrName(), attr);
}

void ReduceWindowOpV1::setWindowStridesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowStridesAttrName(), attr);
}

void ReduceWindowOpV1::setBaseDilationsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBaseDilationsAttrName(), attr);
}

void ReduceWindowOpV1::setWindowDilationsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowDilationsAttrName(), attr);
}

void ReduceWindowOpV1::setPaddingAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPaddingAttrName(), attr);
}

void ReduceWindowOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange inputs, ::mlir::ValueRange init_values, ::mlir::Attribute window_dimensions, ::mlir::Attribute window_strides, ::mlir::Attribute base_dilations, ::mlir::Attribute window_dilations, ::mlir::Attribute padding) {
  odsState.addOperands(inputs);
  odsState.addOperands(init_values);
  odsState.addAttribute(getWindowDimensionsAttrName(odsState.name), window_dimensions);
  odsState.addAttribute(getWindowStridesAttrName(odsState.name), window_strides);
  odsState.addAttribute(getBaseDilationsAttrName(odsState.name), base_dilations);
  odsState.addAttribute(getWindowDilationsAttrName(odsState.name), window_dilations);
  odsState.addAttribute(getPaddingAttrName(odsState.name), padding);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void ReduceWindowOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReduceWindowOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_base_dilations;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'base_dilations'");
    if (namedAttrIt->getName() == getBaseDilationsAttrName()) {
      tblgen_base_dilations = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'padding'");
    if (namedAttrIt->getName() == getPaddingAttrName()) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_dilations;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_dilations'");
    if (namedAttrIt->getName() == getWindowDilationsAttrName()) {
      tblgen_window_dilations = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_dimensions'");
    if (namedAttrIt->getName() == getWindowDimensionsAttrName()) {
      tblgen_window_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_strides'");
    if (namedAttrIt->getName() == getWindowStridesAttrName()) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_dimensions, "window_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_strides, "window_strides")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_base_dilations, "base_dilations")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_dilations, "window_dilations")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_padding, "padding")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceWindowOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReduceWindowOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReduceWindowOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReduceWindowOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RemOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RemOpV1GenericAdaptorBase::RemOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.remainder_v1", odsAttrs.getContext());
}

RemOpV1GenericAdaptorBase::RemOpV1GenericAdaptorBase(RemOpV1 op) : RemOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RemOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RemOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RemOpV1Adaptor::RemOpV1Adaptor(RemOpV1 op) : RemOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RemOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RemOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RemOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RemOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &RemOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RemOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RemOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RemOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RemOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void RemOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RemOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RemOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RemOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RemOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RemOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RemOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReplicaIdOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReplicaIdOpV1GenericAdaptorBase::ReplicaIdOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.replica_id_v1", odsAttrs.getContext());
}

ReplicaIdOpV1GenericAdaptorBase::ReplicaIdOpV1GenericAdaptorBase(ReplicaIdOpV1 op) : ReplicaIdOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReplicaIdOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReplicaIdOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReplicaIdOpV1Adaptor::ReplicaIdOpV1Adaptor(ReplicaIdOpV1 op) : ReplicaIdOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReplicaIdOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReplicaIdOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReplicaIdOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ReplicaIdOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReplicaIdOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReplicaIdOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ReplicaIdOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void ReplicaIdOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReplicaIdOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReplicaIdOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReplicaIdOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReplicaIdOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReplicaIdOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReplicaIdOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReshapeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReshapeOpV1GenericAdaptorBase::ReshapeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.reshape_v1", odsAttrs.getContext());
}

ReshapeOpV1GenericAdaptorBase::ReshapeOpV1GenericAdaptorBase(ReshapeOpV1 op) : ReshapeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReshapeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReshapeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReshapeOpV1Adaptor::ReshapeOpV1Adaptor(ReshapeOpV1 op) : ReshapeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReshapeOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReshapeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReshapeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReshapeOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReshapeOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReshapeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReshapeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReshapeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ReshapeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ReshapeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReshapeOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReshapeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReshapeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReshapeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReshapeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReturnOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReturnOpV1GenericAdaptorBase::ReturnOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.return_v1", odsAttrs.getContext());
}

ReturnOpV1GenericAdaptorBase::ReturnOpV1GenericAdaptorBase(ReturnOpV1 op) : ReturnOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReturnOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ReturnOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReturnOpV1Adaptor::ReturnOpV1Adaptor(ReturnOpV1 op) : ReturnOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReturnOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReturnOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ReturnOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ReturnOpV1::getResults() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ReturnOpV1::getResultsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReturnOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReturnOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReturnOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange results) {
  odsState.addOperands(results);
}

void ReturnOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReturnOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReturnOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReturnOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReturnOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReturnOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ReverseOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReverseOpV1GenericAdaptorBase::ReverseOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.reverse_v1", odsAttrs.getContext());
}

ReverseOpV1GenericAdaptorBase::ReverseOpV1GenericAdaptorBase(ReverseOpV1 op) : ReverseOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReverseOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReverseOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ReverseOpV1GenericAdaptorBase::getDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ReverseOpV1::getDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ReverseOpV1GenericAdaptorBase::getDimensions() {
  auto attr = getDimensionsAttr();
  return attr;
}

} // namespace detail
ReverseOpV1Adaptor::ReverseOpV1Adaptor(ReverseOpV1 op) : ReverseOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReverseOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.reverse_v1' op ""requires attribute 'dimensions'");
    if (namedAttrIt->getName() == ReverseOpV1::getDimensionsAttrName(*odsOpName)) {
      tblgen_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimensions && !((true)))
    return emitError(loc, "'vhlo.reverse_v1' op ""attribute 'dimensions' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReverseOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReverseOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReverseOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReverseOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReverseOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReverseOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReverseOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute ReverseOpV1::getDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDimensionsAttrName()));
}

::mlir::Attribute ReverseOpV1::getDimensions() {
  auto attr = getDimensionsAttr();
  return attr;
}

void ReverseOpV1::setDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimensionsAttrName(), attr);
}

void ReverseOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute dimensions) {
  odsState.addOperands(operand);
  odsState.addAttribute(getDimensionsAttrName(odsState.name), dimensions);
  odsState.addTypes(result);
}

void ReverseOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute dimensions) {
  odsState.addOperands(operand);
  odsState.addAttribute(getDimensionsAttrName(odsState.name), dimensions);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReverseOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReverseOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimensions'");
    if (namedAttrIt->getName() == getDimensionsAttrName()) {
      tblgen_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dimensions, "dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReverseOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ReverseOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ReverseOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ReverseOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RngBitGeneratorOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RngBitGeneratorOpV1GenericAdaptorBase::RngBitGeneratorOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.rng_bit_generator_v1", odsAttrs.getContext());
}

RngBitGeneratorOpV1GenericAdaptorBase::RngBitGeneratorOpV1GenericAdaptorBase(RngBitGeneratorOpV1 op) : RngBitGeneratorOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RngBitGeneratorOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RngBitGeneratorOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute RngBitGeneratorOpV1GenericAdaptorBase::getRngAlgorithmAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, RngBitGeneratorOpV1::getRngAlgorithmAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute RngBitGeneratorOpV1GenericAdaptorBase::getRngAlgorithm() {
  auto attr = getRngAlgorithmAttr();
  return attr;
}

} // namespace detail
RngBitGeneratorOpV1Adaptor::RngBitGeneratorOpV1Adaptor(RngBitGeneratorOpV1 op) : RngBitGeneratorOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RngBitGeneratorOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_rng_algorithm;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.rng_bit_generator_v1' op ""requires attribute 'rng_algorithm'");
    if (namedAttrIt->getName() == RngBitGeneratorOpV1::getRngAlgorithmAttrName(*odsOpName)) {
      tblgen_rng_algorithm = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_rng_algorithm && !((true)))
    return emitError(loc, "'vhlo.rng_bit_generator_v1' op ""attribute 'rng_algorithm' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

void RngBitGeneratorOpV1::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "output_state");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "output");
}

std::pair<unsigned, unsigned> RngBitGeneratorOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RngBitGeneratorOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RngBitGeneratorOpV1::getInitialState() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RngBitGeneratorOpV1::getInitialStateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RngBitGeneratorOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RngBitGeneratorOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RngBitGeneratorOpV1::getOutputState() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value RngBitGeneratorOpV1::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

::mlir::Attribute RngBitGeneratorOpV1::getRngAlgorithmAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getRngAlgorithmAttrName()));
}

::mlir::Attribute RngBitGeneratorOpV1::getRngAlgorithm() {
  auto attr = getRngAlgorithmAttr();
  return attr;
}

void RngBitGeneratorOpV1::setRngAlgorithmAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getRngAlgorithmAttrName(), attr);
}

void RngBitGeneratorOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output_state, ::mlir::Type output, ::mlir::Attribute rng_algorithm, ::mlir::Value initial_state) {
  odsState.addOperands(initial_state);
  odsState.addAttribute(getRngAlgorithmAttrName(odsState.name), rng_algorithm);
  odsState.addTypes(output_state);
  odsState.addTypes(output);
}

void RngBitGeneratorOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute rng_algorithm, ::mlir::Value initial_state) {
  odsState.addOperands(initial_state);
  odsState.addAttribute(getRngAlgorithmAttrName(odsState.name), rng_algorithm);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RngBitGeneratorOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RngBitGeneratorOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_rng_algorithm;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'rng_algorithm'");
    if (namedAttrIt->getName() == getRngAlgorithmAttrName()) {
      tblgen_rng_algorithm = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_rng_algorithm, "rng_algorithm")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RngBitGeneratorOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RngBitGeneratorOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RngBitGeneratorOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RngBitGeneratorOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RngOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RngOpV1GenericAdaptorBase::RngOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.rng_v1", odsAttrs.getContext());
}

RngOpV1GenericAdaptorBase::RngOpV1GenericAdaptorBase(RngOpV1 op) : RngOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RngOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RngOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute RngOpV1GenericAdaptorBase::getRngDistributionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, RngOpV1::getRngDistributionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute RngOpV1GenericAdaptorBase::getRngDistribution() {
  auto attr = getRngDistributionAttr();
  return attr;
}

} // namespace detail
RngOpV1Adaptor::RngOpV1Adaptor(RngOpV1 op) : RngOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RngOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_rng_distribution;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.rng_v1' op ""requires attribute 'rng_distribution'");
    if (namedAttrIt->getName() == RngOpV1::getRngDistributionAttrName(*odsOpName)) {
      tblgen_rng_distribution = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_rng_distribution && !((true)))
    return emitError(loc, "'vhlo.rng_v1' op ""attribute 'rng_distribution' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RngOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RngOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RngOpV1::getA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RngOpV1::getB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RngOpV1::getShape() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &RngOpV1::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RngOpV1::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RngOpV1::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RngOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RngOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RngOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute RngOpV1::getRngDistributionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getRngDistributionAttrName()));
}

::mlir::Attribute RngOpV1::getRngDistribution() {
  auto attr = getRngDistributionAttr();
  return attr;
}

void RngOpV1::setRngDistributionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getRngDistributionAttrName(), attr);
}

void RngOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value a, ::mlir::Value b, ::mlir::Value shape, ::mlir::Attribute rng_distribution) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(shape);
  odsState.addAttribute(getRngDistributionAttrName(odsState.name), rng_distribution);
  odsState.addTypes(result);
}

void RngOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value shape, ::mlir::Attribute rng_distribution) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(shape);
  odsState.addAttribute(getRngDistributionAttrName(odsState.name), rng_distribution);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RngOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RngOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_rng_distribution;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'rng_distribution'");
    if (namedAttrIt->getName() == getRngDistributionAttrName()) {
      tblgen_rng_distribution = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_rng_distribution, "rng_distribution")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RngOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RngOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RngOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RngOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RoundNearestEvenOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RoundNearestEvenOpV1GenericAdaptorBase::RoundNearestEvenOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.round_nearest_even_v1", odsAttrs.getContext());
}

RoundNearestEvenOpV1GenericAdaptorBase::RoundNearestEvenOpV1GenericAdaptorBase(RoundNearestEvenOpV1 op) : RoundNearestEvenOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RoundNearestEvenOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RoundNearestEvenOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RoundNearestEvenOpV1Adaptor::RoundNearestEvenOpV1Adaptor(RoundNearestEvenOpV1 op) : RoundNearestEvenOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RoundNearestEvenOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RoundNearestEvenOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RoundNearestEvenOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundNearestEvenOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RoundNearestEvenOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RoundNearestEvenOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RoundNearestEvenOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundNearestEvenOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RoundNearestEvenOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void RoundNearestEvenOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RoundNearestEvenOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RoundNearestEvenOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RoundNearestEvenOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RoundNearestEvenOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RoundNearestEvenOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RoundNearestEvenOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RoundOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RoundOpV1GenericAdaptorBase::RoundOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.round_nearest_afz_v1", odsAttrs.getContext());
}

RoundOpV1GenericAdaptorBase::RoundOpV1GenericAdaptorBase(RoundOpV1 op) : RoundOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RoundOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RoundOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RoundOpV1Adaptor::RoundOpV1Adaptor(RoundOpV1 op) : RoundOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RoundOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RoundOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RoundOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RoundOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RoundOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RoundOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RoundOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void RoundOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RoundOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RoundOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RoundOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RoundOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RoundOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RoundOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::RsqrtOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
RsqrtOpV1GenericAdaptorBase::RsqrtOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.rsqrt_v1", odsAttrs.getContext());
}

RsqrtOpV1GenericAdaptorBase::RsqrtOpV1GenericAdaptorBase(RsqrtOpV1 op) : RsqrtOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RsqrtOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RsqrtOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RsqrtOpV1Adaptor::RsqrtOpV1Adaptor(RsqrtOpV1 op) : RsqrtOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RsqrtOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RsqrtOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RsqrtOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RsqrtOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RsqrtOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RsqrtOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RsqrtOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RsqrtOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RsqrtOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void RsqrtOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RsqrtOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RsqrtOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RsqrtOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version RsqrtOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version RsqrtOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::RsqrtOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ScatterOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScatterOpV1GenericAdaptorBase::ScatterOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.scatter_v1", odsAttrs.getContext());
}

ScatterOpV1GenericAdaptorBase::ScatterOpV1GenericAdaptorBase(ScatterOpV1 op) : ScatterOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScatterOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ScatterOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getUpdateWindowDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 5, odsAttrs.end() - 0, ScatterOpV1::getUpdateWindowDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getUpdateWindowDims() {
  auto attr = getUpdateWindowDimsAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getInsertedWindowDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 3, ScatterOpV1::getInsertedWindowDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getInsertedWindowDims() {
  auto attr = getInsertedWindowDimsAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getScatterDimsToOperandDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 2, ScatterOpV1::getScatterDimsToOperandDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getScatterDimsToOperandDims() {
  auto attr = getScatterDimsToOperandDimsAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getIndexVectorDimAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 5, ScatterOpV1::getIndexVectorDimAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getIndexVectorDim() {
  auto attr = getIndexVectorDimAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getIndicesAreSortedAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 4, ScatterOpV1::getIndicesAreSortedAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getIndicesAreSorted() {
  auto attr = getIndicesAreSortedAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getUniqueIndicesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 4, odsAttrs.end() - 1, ScatterOpV1::getUniqueIndicesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute ScatterOpV1GenericAdaptorBase::getUniqueIndices() {
  auto attr = getUniqueIndicesAttr();
  return attr;
}

::mlir::Region &ScatterOpV1GenericAdaptorBase::getUpdateComputation() {
  return *odsRegions[0];
}

::mlir::RegionRange ScatterOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ScatterOpV1Adaptor::ScatterOpV1Adaptor(ScatterOpV1 op) : ScatterOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScatterOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_index_vector_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.scatter_v1' op ""requires attribute 'index_vector_dim'");
    if (namedAttrIt->getName() == ScatterOpV1::getIndexVectorDimAttrName(*odsOpName)) {
      tblgen_index_vector_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_indices_are_sorted;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.scatter_v1' op ""requires attribute 'indices_are_sorted'");
    if (namedAttrIt->getName() == ScatterOpV1::getIndicesAreSortedAttrName(*odsOpName)) {
      tblgen_indices_are_sorted = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_inserted_window_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.scatter_v1' op ""requires attribute 'inserted_window_dims'");
    if (namedAttrIt->getName() == ScatterOpV1::getInsertedWindowDimsAttrName(*odsOpName)) {
      tblgen_inserted_window_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_scatter_dims_to_operand_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.scatter_v1' op ""requires attribute 'scatter_dims_to_operand_dims'");
    if (namedAttrIt->getName() == ScatterOpV1::getScatterDimsToOperandDimsAttrName(*odsOpName)) {
      tblgen_scatter_dims_to_operand_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_unique_indices;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.scatter_v1' op ""requires attribute 'unique_indices'");
    if (namedAttrIt->getName() == ScatterOpV1::getUniqueIndicesAttrName(*odsOpName)) {
      tblgen_unique_indices = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_update_window_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.scatter_v1' op ""requires attribute 'update_window_dims'");
    if (namedAttrIt->getName() == ScatterOpV1::getUpdateWindowDimsAttrName(*odsOpName)) {
      tblgen_update_window_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_update_window_dims && !((true)))
    return emitError(loc, "'vhlo.scatter_v1' op ""attribute 'update_window_dims' failed to satisfy constraint: any attribute");

  if (tblgen_inserted_window_dims && !((true)))
    return emitError(loc, "'vhlo.scatter_v1' op ""attribute 'inserted_window_dims' failed to satisfy constraint: any attribute");

  if (tblgen_scatter_dims_to_operand_dims && !((true)))
    return emitError(loc, "'vhlo.scatter_v1' op ""attribute 'scatter_dims_to_operand_dims' failed to satisfy constraint: any attribute");

  if (tblgen_index_vector_dim && !((true)))
    return emitError(loc, "'vhlo.scatter_v1' op ""attribute 'index_vector_dim' failed to satisfy constraint: any attribute");

  if (tblgen_indices_are_sorted && !((true)))
    return emitError(loc, "'vhlo.scatter_v1' op ""attribute 'indices_are_sorted' failed to satisfy constraint: any attribute");

  if (tblgen_unique_indices && !((true)))
    return emitError(loc, "'vhlo.scatter_v1' op ""attribute 'unique_indices' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScatterOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ScatterOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ScatterOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::Value ScatterOpV1::getScatterIndices() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range ScatterOpV1::getUpdates() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ScatterOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &ScatterOpV1::getScatterIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ScatterOpV1::getUpdatesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ScatterOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range ScatterOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range ScatterOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Region &ScatterOpV1::getUpdateComputation() {
  return (*this)->getRegion(0);
}

::mlir::Attribute ScatterOpV1::getUpdateWindowDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 5, (*this)->getAttrs().end() - 0, getUpdateWindowDimsAttrName()));
}

::mlir::Attribute ScatterOpV1::getUpdateWindowDims() {
  auto attr = getUpdateWindowDimsAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1::getInsertedWindowDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 3, getInsertedWindowDimsAttrName()));
}

::mlir::Attribute ScatterOpV1::getInsertedWindowDims() {
  auto attr = getInsertedWindowDimsAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1::getScatterDimsToOperandDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 2, getScatterDimsToOperandDimsAttrName()));
}

::mlir::Attribute ScatterOpV1::getScatterDimsToOperandDims() {
  auto attr = getScatterDimsToOperandDimsAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1::getIndexVectorDimAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 5, getIndexVectorDimAttrName()));
}

::mlir::Attribute ScatterOpV1::getIndexVectorDim() {
  auto attr = getIndexVectorDimAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1::getIndicesAreSortedAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 4, getIndicesAreSortedAttrName()));
}

::mlir::Attribute ScatterOpV1::getIndicesAreSorted() {
  auto attr = getIndicesAreSortedAttr();
  return attr;
}

::mlir::Attribute ScatterOpV1::getUniqueIndicesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 4, (*this)->getAttrs().end() - 1, getUniqueIndicesAttrName()));
}

::mlir::Attribute ScatterOpV1::getUniqueIndices() {
  auto attr = getUniqueIndicesAttr();
  return attr;
}

void ScatterOpV1::setUpdateWindowDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getUpdateWindowDimsAttrName(), attr);
}

void ScatterOpV1::setInsertedWindowDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInsertedWindowDimsAttrName(), attr);
}

void ScatterOpV1::setScatterDimsToOperandDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getScatterDimsToOperandDimsAttrName(), attr);
}

void ScatterOpV1::setIndexVectorDimAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIndexVectorDimAttrName(), attr);
}

void ScatterOpV1::setIndicesAreSortedAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIndicesAreSortedAttrName(), attr);
}

void ScatterOpV1::setUniqueIndicesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getUniqueIndicesAttrName(), attr);
}

void ScatterOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange inputs, ::mlir::Value scatter_indices, ::mlir::ValueRange updates, ::mlir::Attribute update_window_dims, ::mlir::Attribute inserted_window_dims, ::mlir::Attribute scatter_dims_to_operand_dims, ::mlir::Attribute index_vector_dim, ::mlir::Attribute indices_are_sorted, ::mlir::Attribute unique_indices) {
  odsState.addOperands(inputs);
  odsState.addOperands(scatter_indices);
  odsState.addOperands(updates);
  odsState.addAttribute(getUpdateWindowDimsAttrName(odsState.name), update_window_dims);
  odsState.addAttribute(getInsertedWindowDimsAttrName(odsState.name), inserted_window_dims);
  odsState.addAttribute(getScatterDimsToOperandDimsAttrName(odsState.name), scatter_dims_to_operand_dims);
  odsState.addAttribute(getIndexVectorDimAttrName(odsState.name), index_vector_dim);
  odsState.addAttribute(getIndicesAreSortedAttrName(odsState.name), indices_are_sorted);
  odsState.addAttribute(getUniqueIndicesAttrName(odsState.name), unique_indices);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void ScatterOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScatterOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_index_vector_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'index_vector_dim'");
    if (namedAttrIt->getName() == getIndexVectorDimAttrName()) {
      tblgen_index_vector_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_indices_are_sorted;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'indices_are_sorted'");
    if (namedAttrIt->getName() == getIndicesAreSortedAttrName()) {
      tblgen_indices_are_sorted = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_inserted_window_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'inserted_window_dims'");
    if (namedAttrIt->getName() == getInsertedWindowDimsAttrName()) {
      tblgen_inserted_window_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_scatter_dims_to_operand_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'scatter_dims_to_operand_dims'");
    if (namedAttrIt->getName() == getScatterDimsToOperandDimsAttrName()) {
      tblgen_scatter_dims_to_operand_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_unique_indices;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'unique_indices'");
    if (namedAttrIt->getName() == getUniqueIndicesAttrName()) {
      tblgen_unique_indices = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_update_window_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'update_window_dims'");
    if (namedAttrIt->getName() == getUpdateWindowDimsAttrName()) {
      tblgen_update_window_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_update_window_dims, "update_window_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_inserted_window_dims, "inserted_window_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_scatter_dims_to_operand_dims, "scatter_dims_to_operand_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_index_vector_dim, "index_vector_dim")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_indices_are_sorted, "indices_are_sorted")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_unique_indices, "unique_indices")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "update_computation", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScatterOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ScatterOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ScatterOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ScatterOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SelectAndScatterOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SelectAndScatterOpV1GenericAdaptorBase::SelectAndScatterOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.select_and_scatter_v1", odsAttrs.getContext());
}

SelectAndScatterOpV1GenericAdaptorBase::SelectAndScatterOpV1GenericAdaptorBase(SelectAndScatterOpV1 op) : SelectAndScatterOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SelectAndScatterOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SelectAndScatterOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute SelectAndScatterOpV1GenericAdaptorBase::getWindowDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, SelectAndScatterOpV1::getWindowDimensionsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SelectAndScatterOpV1GenericAdaptorBase::getWindowDimensions() {
  auto attr = getWindowDimensionsAttr();
  return attr;
}

::mlir::Attribute SelectAndScatterOpV1GenericAdaptorBase::getWindowStridesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 0, SelectAndScatterOpV1::getWindowStridesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SelectAndScatterOpV1GenericAdaptorBase::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute SelectAndScatterOpV1GenericAdaptorBase::getPaddingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, SelectAndScatterOpV1::getPaddingAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SelectAndScatterOpV1GenericAdaptorBase::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

::mlir::Region &SelectAndScatterOpV1GenericAdaptorBase::getSelect() {
  return *odsRegions[0];
}

::mlir::Region &SelectAndScatterOpV1GenericAdaptorBase::getScatter() {
  return *odsRegions[1];
}

::mlir::RegionRange SelectAndScatterOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SelectAndScatterOpV1Adaptor::SelectAndScatterOpV1Adaptor(SelectAndScatterOpV1 op) : SelectAndScatterOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SelectAndScatterOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.select_and_scatter_v1' op ""requires attribute 'padding'");
    if (namedAttrIt->getName() == SelectAndScatterOpV1::getPaddingAttrName(*odsOpName)) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.select_and_scatter_v1' op ""requires attribute 'window_dimensions'");
    if (namedAttrIt->getName() == SelectAndScatterOpV1::getWindowDimensionsAttrName(*odsOpName)) {
      tblgen_window_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.select_and_scatter_v1' op ""requires attribute 'window_strides'");
    if (namedAttrIt->getName() == SelectAndScatterOpV1::getWindowStridesAttrName(*odsOpName)) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_window_dimensions && !((true)))
    return emitError(loc, "'vhlo.select_and_scatter_v1' op ""attribute 'window_dimensions' failed to satisfy constraint: any attribute");

  if (tblgen_window_strides && !((true)))
    return emitError(loc, "'vhlo.select_and_scatter_v1' op ""attribute 'window_strides' failed to satisfy constraint: any attribute");

  if (tblgen_padding && !((true)))
    return emitError(loc, "'vhlo.select_and_scatter_v1' op ""attribute 'padding' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SelectAndScatterOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SelectAndScatterOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectAndScatterOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SelectAndScatterOpV1::getSource() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SelectAndScatterOpV1::getInitValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SelectAndScatterOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectAndScatterOpV1::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectAndScatterOpV1::getInitValueMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SelectAndScatterOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SelectAndScatterOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectAndScatterOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &SelectAndScatterOpV1::getSelect() {
  return (*this)->getRegion(0);
}

::mlir::Region &SelectAndScatterOpV1::getScatter() {
  return (*this)->getRegion(1);
}

::mlir::Attribute SelectAndScatterOpV1::getWindowDimensionsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getWindowDimensionsAttrName()));
}

::mlir::Attribute SelectAndScatterOpV1::getWindowDimensions() {
  auto attr = getWindowDimensionsAttr();
  return attr;
}

::mlir::Attribute SelectAndScatterOpV1::getWindowStridesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 0, getWindowStridesAttrName()));
}

::mlir::Attribute SelectAndScatterOpV1::getWindowStrides() {
  auto attr = getWindowStridesAttr();
  return attr;
}

::mlir::Attribute SelectAndScatterOpV1::getPaddingAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getPaddingAttrName()));
}

::mlir::Attribute SelectAndScatterOpV1::getPadding() {
  auto attr = getPaddingAttr();
  return attr;
}

void SelectAndScatterOpV1::setWindowDimensionsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowDimensionsAttrName(), attr);
}

void SelectAndScatterOpV1::setWindowStridesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getWindowStridesAttrName(), attr);
}

void SelectAndScatterOpV1::setPaddingAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPaddingAttrName(), attr);
}

void SelectAndScatterOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value source, ::mlir::Value init_value, ::mlir::Attribute window_dimensions, ::mlir::Attribute window_strides, ::mlir::Attribute padding) {
  odsState.addOperands(operand);
  odsState.addOperands(source);
  odsState.addOperands(init_value);
  odsState.addAttribute(getWindowDimensionsAttrName(odsState.name), window_dimensions);
  odsState.addAttribute(getWindowStridesAttrName(odsState.name), window_strides);
  odsState.addAttribute(getPaddingAttrName(odsState.name), padding);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void SelectAndScatterOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value source, ::mlir::Value init_value, ::mlir::Attribute window_dimensions, ::mlir::Attribute window_strides, ::mlir::Attribute padding) {
  odsState.addOperands(operand);
  odsState.addOperands(source);
  odsState.addOperands(init_value);
  odsState.addAttribute(getWindowDimensionsAttrName(odsState.name), window_dimensions);
  odsState.addAttribute(getWindowStridesAttrName(odsState.name), window_strides);
  odsState.addAttribute(getPaddingAttrName(odsState.name), padding);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectAndScatterOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SelectAndScatterOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_padding;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'padding'");
    if (namedAttrIt->getName() == getPaddingAttrName()) {
      tblgen_padding = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_dimensions;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_dimensions'");
    if (namedAttrIt->getName() == getWindowDimensionsAttrName()) {
      tblgen_window_dimensions = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_window_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'window_strides'");
    if (namedAttrIt->getName() == getWindowStridesAttrName()) {
      tblgen_window_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_dimensions, "window_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_window_strides, "window_strides")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_padding, "padding")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "select", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "scatter", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SelectAndScatterOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SelectAndScatterOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SelectAndScatterOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SelectAndScatterOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SelectOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SelectOpV1GenericAdaptorBase::SelectOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.select_v1", odsAttrs.getContext());
}

SelectOpV1GenericAdaptorBase::SelectOpV1GenericAdaptorBase(SelectOpV1 op) : SelectOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SelectOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SelectOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SelectOpV1Adaptor::SelectOpV1Adaptor(SelectOpV1 op) : SelectOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SelectOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SelectOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SelectOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectOpV1::getPred() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SelectOpV1::getOnTrue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SelectOpV1::getOnFalse() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SelectOpV1::getPredMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectOpV1::getOnTrueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectOpV1::getOnFalseMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SelectOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SelectOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SelectOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  odsState.addTypes(result);
}

void SelectOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SelectOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SelectOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SelectOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SelectOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SelectOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SendOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SendOpV1GenericAdaptorBase::SendOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.send_v1", odsAttrs.getContext());
}

SendOpV1GenericAdaptorBase::SendOpV1GenericAdaptorBase(SendOpV1 op) : SendOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SendOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SendOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute SendOpV1GenericAdaptorBase::getChannelIdAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, SendOpV1::getChannelIdAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SendOpV1GenericAdaptorBase::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute SendOpV1GenericAdaptorBase::getChannelTypeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, SendOpV1::getChannelTypeAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SendOpV1GenericAdaptorBase::getChannelType() {
  auto attr = getChannelTypeAttr();
  return attr;
}

::mlir::Attribute SendOpV1GenericAdaptorBase::getIsHostTransferAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 0, SendOpV1::getIsHostTransferAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SendOpV1GenericAdaptorBase::getIsHostTransfer() {
  auto attr = getIsHostTransferAttr();
  return attr;
}

} // namespace detail
SendOpV1Adaptor::SendOpV1Adaptor(SendOpV1 op) : SendOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SendOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.send_v1' op ""requires attribute 'channel_id'");
    if (namedAttrIt->getName() == SendOpV1::getChannelIdAttrName(*odsOpName)) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_channel_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.send_v1' op ""requires attribute 'channel_type'");
    if (namedAttrIt->getName() == SendOpV1::getChannelTypeAttrName(*odsOpName)) {
      tblgen_channel_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_is_host_transfer;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.send_v1' op ""requires attribute 'is_host_transfer'");
    if (namedAttrIt->getName() == SendOpV1::getIsHostTransferAttrName(*odsOpName)) {
      tblgen_is_host_transfer = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_channel_id && !((true)))
    return emitError(loc, "'vhlo.send_v1' op ""attribute 'channel_id' failed to satisfy constraint: any attribute");

  if (tblgen_channel_type && !((true)))
    return emitError(loc, "'vhlo.send_v1' op ""attribute 'channel_type' failed to satisfy constraint: any attribute");

  if (tblgen_is_host_transfer && !((true)))
    return emitError(loc, "'vhlo.send_v1' op ""attribute 'is_host_transfer' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SendOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SendOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SendOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::Value SendOpV1::getToken() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange SendOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SendOpV1::getTokenMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SendOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SendOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SendOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute SendOpV1::getChannelIdAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getChannelIdAttrName()));
}

::mlir::Attribute SendOpV1::getChannelId() {
  auto attr = getChannelIdAttr();
  return attr;
}

::mlir::Attribute SendOpV1::getChannelTypeAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getChannelTypeAttrName()));
}

::mlir::Attribute SendOpV1::getChannelType() {
  auto attr = getChannelTypeAttr();
  return attr;
}

::mlir::Attribute SendOpV1::getIsHostTransferAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 0, getIsHostTransferAttrName()));
}

::mlir::Attribute SendOpV1::getIsHostTransfer() {
  auto attr = getIsHostTransferAttr();
  return attr;
}

void SendOpV1::setChannelIdAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelIdAttrName(), attr);
}

void SendOpV1::setChannelTypeAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getChannelTypeAttrName(), attr);
}

void SendOpV1::setIsHostTransferAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIsHostTransferAttrName(), attr);
}

void SendOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::Value token, ::mlir::Attribute channel_id, ::mlir::Attribute channel_type, ::mlir::Attribute is_host_transfer) {
  odsState.addOperands(inputs);
  odsState.addOperands(token);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getChannelTypeAttrName(odsState.name), channel_type);
  odsState.addAttribute(getIsHostTransferAttrName(odsState.name), is_host_transfer);
  odsState.addTypes(result);
}

void SendOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Value token, ::mlir::Attribute channel_id, ::mlir::Attribute channel_type, ::mlir::Attribute is_host_transfer) {
  odsState.addOperands(inputs);
  odsState.addOperands(token);
  odsState.addAttribute(getChannelIdAttrName(odsState.name), channel_id);
  odsState.addAttribute(getChannelTypeAttrName(odsState.name), channel_type);
  odsState.addAttribute(getIsHostTransferAttrName(odsState.name), is_host_transfer);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SendOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SendOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_channel_id;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_id'");
    if (namedAttrIt->getName() == getChannelIdAttrName()) {
      tblgen_channel_id = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_channel_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'channel_type'");
    if (namedAttrIt->getName() == getChannelTypeAttrName()) {
      tblgen_channel_type = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_is_host_transfer;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'is_host_transfer'");
    if (namedAttrIt->getName() == getIsHostTransferAttrName()) {
      tblgen_is_host_transfer = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_id, "channel_id")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_channel_type, "channel_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_is_host_transfer, "is_host_transfer")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SendOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SendOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SendOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SendOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SetDimensionSizeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SetDimensionSizeOpV1GenericAdaptorBase::SetDimensionSizeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.set_dimension_size_v1", odsAttrs.getContext());
}

SetDimensionSizeOpV1GenericAdaptorBase::SetDimensionSizeOpV1GenericAdaptorBase(SetDimensionSizeOpV1 op) : SetDimensionSizeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SetDimensionSizeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SetDimensionSizeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute SetDimensionSizeOpV1GenericAdaptorBase::getDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SetDimensionSizeOpV1::getDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SetDimensionSizeOpV1GenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

} // namespace detail
SetDimensionSizeOpV1Adaptor::SetDimensionSizeOpV1Adaptor(SetDimensionSizeOpV1 op) : SetDimensionSizeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SetDimensionSizeOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.set_dimension_size_v1' op ""requires attribute 'dimension'");
    if (namedAttrIt->getName() == SetDimensionSizeOpV1::getDimensionAttrName(*odsOpName)) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimension && !((true)))
    return emitError(loc, "'vhlo.set_dimension_size_v1' op ""attribute 'dimension' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SetDimensionSizeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SetDimensionSizeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SetDimensionSizeOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SetDimensionSizeOpV1::getSize() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SetDimensionSizeOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SetDimensionSizeOpV1::getSizeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SetDimensionSizeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SetDimensionSizeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SetDimensionSizeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute SetDimensionSizeOpV1::getDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDimensionAttrName()));
}

::mlir::Attribute SetDimensionSizeOpV1::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

void SetDimensionSizeOpV1::setDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void SetDimensionSizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value size, ::mlir::Attribute dimension) {
  odsState.addOperands(operand);
  odsState.addOperands(size);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addTypes(result);
}

void SetDimensionSizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value size, ::mlir::Attribute dimension) {
  odsState.addOperands(operand);
  odsState.addOperands(size);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SetDimensionSizeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SetDimensionSizeOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimension'");
    if (namedAttrIt->getName() == getDimensionAttrName()) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SetDimensionSizeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SetDimensionSizeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SetDimensionSizeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SetDimensionSizeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ShiftLeftOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShiftLeftOpV1GenericAdaptorBase::ShiftLeftOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.shift_left_v1", odsAttrs.getContext());
}

ShiftLeftOpV1GenericAdaptorBase::ShiftLeftOpV1GenericAdaptorBase(ShiftLeftOpV1 op) : ShiftLeftOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShiftLeftOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShiftLeftOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ShiftLeftOpV1Adaptor::ShiftLeftOpV1Adaptor(ShiftLeftOpV1 op) : ShiftLeftOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShiftLeftOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShiftLeftOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShiftLeftOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftLeftOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ShiftLeftOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ShiftLeftOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShiftLeftOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShiftLeftOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShiftLeftOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftLeftOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ShiftLeftOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ShiftLeftOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftLeftOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShiftLeftOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShiftLeftOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ShiftLeftOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ShiftLeftOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ShiftLeftOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ShiftRightArithmeticOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShiftRightArithmeticOpV1GenericAdaptorBase::ShiftRightArithmeticOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.shift_right_arithmetic_v1", odsAttrs.getContext());
}

ShiftRightArithmeticOpV1GenericAdaptorBase::ShiftRightArithmeticOpV1GenericAdaptorBase(ShiftRightArithmeticOpV1 op) : ShiftRightArithmeticOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShiftRightArithmeticOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShiftRightArithmeticOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ShiftRightArithmeticOpV1Adaptor::ShiftRightArithmeticOpV1Adaptor(ShiftRightArithmeticOpV1 op) : ShiftRightArithmeticOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShiftRightArithmeticOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShiftRightArithmeticOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShiftRightArithmeticOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightArithmeticOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ShiftRightArithmeticOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ShiftRightArithmeticOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShiftRightArithmeticOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShiftRightArithmeticOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShiftRightArithmeticOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightArithmeticOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ShiftRightArithmeticOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ShiftRightArithmeticOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftRightArithmeticOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShiftRightArithmeticOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShiftRightArithmeticOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ShiftRightArithmeticOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ShiftRightArithmeticOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ShiftRightArithmeticOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::ShiftRightLogicalOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShiftRightLogicalOpV1GenericAdaptorBase::ShiftRightLogicalOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.shift_right_logical_v1", odsAttrs.getContext());
}

ShiftRightLogicalOpV1GenericAdaptorBase::ShiftRightLogicalOpV1GenericAdaptorBase(ShiftRightLogicalOpV1 op) : ShiftRightLogicalOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShiftRightLogicalOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShiftRightLogicalOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ShiftRightLogicalOpV1Adaptor::ShiftRightLogicalOpV1Adaptor(ShiftRightLogicalOpV1 op) : ShiftRightLogicalOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShiftRightLogicalOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShiftRightLogicalOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShiftRightLogicalOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightLogicalOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ShiftRightLogicalOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ShiftRightLogicalOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShiftRightLogicalOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShiftRightLogicalOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShiftRightLogicalOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightLogicalOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ShiftRightLogicalOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ShiftRightLogicalOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftRightLogicalOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShiftRightLogicalOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShiftRightLogicalOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version ShiftRightLogicalOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version ShiftRightLogicalOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::ShiftRightLogicalOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SignOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SignOpV1GenericAdaptorBase::SignOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.sign_v1", odsAttrs.getContext());
}

SignOpV1GenericAdaptorBase::SignOpV1GenericAdaptorBase(SignOpV1 op) : SignOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SignOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SignOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SignOpV1Adaptor::SignOpV1Adaptor(SignOpV1 op) : SignOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SignOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SignOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SignOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SignOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SignOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SignOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SignOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SignOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SignOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void SignOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SignOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SignOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SignOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SignOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SignOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SineOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SineOpV1GenericAdaptorBase::SineOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.sine_v1", odsAttrs.getContext());
}

SineOpV1GenericAdaptorBase::SineOpV1GenericAdaptorBase(SineOpV1 op) : SineOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SineOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SineOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SineOpV1Adaptor::SineOpV1Adaptor(SineOpV1 op) : SineOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SineOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SineOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SineOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SineOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SineOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SineOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SineOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SineOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SineOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void SineOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SineOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SineOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SineOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SineOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SineOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SineOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SliceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SliceOpV1GenericAdaptorBase::SliceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.slice_v1", odsAttrs.getContext());
}

SliceOpV1GenericAdaptorBase::SliceOpV1GenericAdaptorBase(SliceOpV1 op) : SliceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SliceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SliceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute SliceOpV1GenericAdaptorBase::getStartIndicesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, SliceOpV1::getStartIndicesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SliceOpV1GenericAdaptorBase::getStartIndices() {
  auto attr = getStartIndicesAttr();
  return attr;
}

::mlir::Attribute SliceOpV1GenericAdaptorBase::getLimitIndicesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, SliceOpV1::getLimitIndicesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SliceOpV1GenericAdaptorBase::getLimitIndices() {
  auto attr = getLimitIndicesAttr();
  return attr;
}

::mlir::Attribute SliceOpV1GenericAdaptorBase::getStridesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 0, SliceOpV1::getStridesAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SliceOpV1GenericAdaptorBase::getStrides() {
  auto attr = getStridesAttr();
  return attr;
}

} // namespace detail
SliceOpV1Adaptor::SliceOpV1Adaptor(SliceOpV1 op) : SliceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SliceOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_limit_indices;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.slice_v1' op ""requires attribute 'limit_indices'");
    if (namedAttrIt->getName() == SliceOpV1::getLimitIndicesAttrName(*odsOpName)) {
      tblgen_limit_indices = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_start_indices;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.slice_v1' op ""requires attribute 'start_indices'");
    if (namedAttrIt->getName() == SliceOpV1::getStartIndicesAttrName(*odsOpName)) {
      tblgen_start_indices = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.slice_v1' op ""requires attribute 'strides'");
    if (namedAttrIt->getName() == SliceOpV1::getStridesAttrName(*odsOpName)) {
      tblgen_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_start_indices && !((true)))
    return emitError(loc, "'vhlo.slice_v1' op ""attribute 'start_indices' failed to satisfy constraint: any attribute");

  if (tblgen_limit_indices && !((true)))
    return emitError(loc, "'vhlo.slice_v1' op ""attribute 'limit_indices' failed to satisfy constraint: any attribute");

  if (tblgen_strides && !((true)))
    return emitError(loc, "'vhlo.slice_v1' op ""attribute 'strides' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SliceOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SliceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SliceOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SliceOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SliceOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SliceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SliceOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute SliceOpV1::getStartIndicesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getStartIndicesAttrName()));
}

::mlir::Attribute SliceOpV1::getStartIndices() {
  auto attr = getStartIndicesAttr();
  return attr;
}

::mlir::Attribute SliceOpV1::getLimitIndicesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getLimitIndicesAttrName()));
}

::mlir::Attribute SliceOpV1::getLimitIndices() {
  auto attr = getLimitIndicesAttr();
  return attr;
}

::mlir::Attribute SliceOpV1::getStridesAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 0, getStridesAttrName()));
}

::mlir::Attribute SliceOpV1::getStrides() {
  auto attr = getStridesAttr();
  return attr;
}

void SliceOpV1::setStartIndicesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getStartIndicesAttrName(), attr);
}

void SliceOpV1::setLimitIndicesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLimitIndicesAttrName(), attr);
}

void SliceOpV1::setStridesAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getStridesAttrName(), attr);
}

void SliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute start_indices, ::mlir::Attribute limit_indices, ::mlir::Attribute strides) {
  odsState.addOperands(operand);
  odsState.addAttribute(getStartIndicesAttrName(odsState.name), start_indices);
  odsState.addAttribute(getLimitIndicesAttrName(odsState.name), limit_indices);
  odsState.addAttribute(getStridesAttrName(odsState.name), strides);
  odsState.addTypes(result);
}

void SliceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute start_indices, ::mlir::Attribute limit_indices, ::mlir::Attribute strides) {
  odsState.addOperands(operand);
  odsState.addAttribute(getStartIndicesAttrName(odsState.name), start_indices);
  odsState.addAttribute(getLimitIndicesAttrName(odsState.name), limit_indices);
  odsState.addAttribute(getStridesAttrName(odsState.name), strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SliceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SliceOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_limit_indices;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'limit_indices'");
    if (namedAttrIt->getName() == getLimitIndicesAttrName()) {
      tblgen_limit_indices = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_start_indices;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'start_indices'");
    if (namedAttrIt->getName() == getStartIndicesAttrName()) {
      tblgen_start_indices = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_strides;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'strides'");
    if (namedAttrIt->getName() == getStridesAttrName()) {
      tblgen_strides = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_start_indices, "start_indices")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_limit_indices, "limit_indices")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_strides, "strides")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SliceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SliceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SliceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SliceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SortOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SortOpV1GenericAdaptorBase::SortOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.sort_v1", odsAttrs.getContext());
}

SortOpV1GenericAdaptorBase::SortOpV1GenericAdaptorBase(SortOpV1 op) : SortOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SortOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SortOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute SortOpV1GenericAdaptorBase::getDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, SortOpV1::getDimensionAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SortOpV1GenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

::mlir::Attribute SortOpV1GenericAdaptorBase::getIsStableAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, SortOpV1::getIsStableAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute SortOpV1GenericAdaptorBase::getIsStable() {
  auto attr = getIsStableAttr();
  return attr;
}

::mlir::Region &SortOpV1GenericAdaptorBase::getComparator() {
  return *odsRegions[0];
}

::mlir::RegionRange SortOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SortOpV1Adaptor::SortOpV1Adaptor(SortOpV1 op) : SortOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SortOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.sort_v1' op ""requires attribute 'dimension'");
    if (namedAttrIt->getName() == SortOpV1::getDimensionAttrName(*odsOpName)) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_is_stable;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.sort_v1' op ""requires attribute 'is_stable'");
    if (namedAttrIt->getName() == SortOpV1::getIsStableAttrName(*odsOpName)) {
      tblgen_is_stable = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimension && !((true)))
    return emitError(loc, "'vhlo.sort_v1' op ""attribute 'dimension' failed to satisfy constraint: any attribute");

  if (tblgen_is_stable && !((true)))
    return emitError(loc, "'vhlo.sort_v1' op ""attribute 'is_stable' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SortOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SortOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SortOpV1::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange SortOpV1::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SortOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range SortOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range SortOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Region &SortOpV1::getComparator() {
  return (*this)->getRegion(0);
}

::mlir::Attribute SortOpV1::getDimensionAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getDimensionAttrName()));
}

::mlir::Attribute SortOpV1::getDimension() {
  auto attr = getDimensionAttr();
  return attr;
}

::mlir::Attribute SortOpV1::getIsStableAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getIsStableAttrName()));
}

::mlir::Attribute SortOpV1::getIsStable() {
  auto attr = getIsStableAttr();
  return attr;
}

void SortOpV1::setDimensionAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void SortOpV1::setIsStableAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getIsStableAttrName(), attr);
}

void SortOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange inputs, ::mlir::Attribute dimension, ::mlir::Attribute is_stable) {
  odsState.addOperands(inputs);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addAttribute(getIsStableAttrName(odsState.name), is_stable);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void SortOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SortOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimension'");
    if (namedAttrIt->getName() == getDimensionAttrName()) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_is_stable;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'is_stable'");
    if (namedAttrIt->getName() == getIsStableAttrName()) {
      tblgen_is_stable = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_is_stable, "is_stable")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "comparator", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SortOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SortOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SortOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SortOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SqrtOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SqrtOpV1GenericAdaptorBase::SqrtOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.sqrt_v1", odsAttrs.getContext());
}

SqrtOpV1GenericAdaptorBase::SqrtOpV1GenericAdaptorBase(SqrtOpV1 op) : SqrtOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SqrtOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SqrtOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SqrtOpV1Adaptor::SqrtOpV1Adaptor(SqrtOpV1 op) : SqrtOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SqrtOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SqrtOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SqrtOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SqrtOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SqrtOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SqrtOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SqrtOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SqrtOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SqrtOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void SqrtOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SqrtOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SqrtOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SqrtOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SqrtOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SqrtOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SqrtOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::SubtractOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubtractOpV1GenericAdaptorBase::SubtractOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.subtract_v1", odsAttrs.getContext());
}

SubtractOpV1GenericAdaptorBase::SubtractOpV1GenericAdaptorBase(SubtractOpV1 op) : SubtractOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubtractOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubtractOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SubtractOpV1Adaptor::SubtractOpV1Adaptor(SubtractOpV1 op) : SubtractOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubtractOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubtractOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubtractOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubtractOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SubtractOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SubtractOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubtractOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SubtractOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubtractOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubtractOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SubtractOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void SubtractOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubtractOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubtractOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubtractOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version SubtractOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version SubtractOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::SubtractOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::TanhOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
TanhOpV1GenericAdaptorBase::TanhOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.tanh_v1", odsAttrs.getContext());
}

TanhOpV1GenericAdaptorBase::TanhOpV1GenericAdaptorBase(TanhOpV1 op) : TanhOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TanhOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TanhOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TanhOpV1Adaptor::TanhOpV1Adaptor(TanhOpV1 op) : TanhOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TanhOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TanhOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TanhOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TanhOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TanhOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TanhOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TanhOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TanhOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void TanhOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void TanhOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanhOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TanhOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TanhOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version TanhOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version TanhOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::TanhOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::TorchIndexSelectOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
TorchIndexSelectOpV1GenericAdaptorBase::TorchIndexSelectOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.torch_index_select_v1", odsAttrs.getContext());
}

TorchIndexSelectOpV1GenericAdaptorBase::TorchIndexSelectOpV1GenericAdaptorBase(TorchIndexSelectOpV1 op) : TorchIndexSelectOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TorchIndexSelectOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TorchIndexSelectOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute TorchIndexSelectOpV1GenericAdaptorBase::getDimAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, TorchIndexSelectOpV1::getDimAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TorchIndexSelectOpV1GenericAdaptorBase::getDim() {
  auto attr = getDimAttr();
  return attr;
}

::mlir::Attribute TorchIndexSelectOpV1GenericAdaptorBase::getBatchDimsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, TorchIndexSelectOpV1::getBatchDimsAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TorchIndexSelectOpV1GenericAdaptorBase::getBatchDims() {
  auto attr = getBatchDimsAttr();
  return attr;
}

} // namespace detail
TorchIndexSelectOpV1Adaptor::TorchIndexSelectOpV1Adaptor(TorchIndexSelectOpV1 op) : TorchIndexSelectOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TorchIndexSelectOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_batch_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.torch_index_select_v1' op ""requires attribute 'batch_dims'");
    if (namedAttrIt->getName() == TorchIndexSelectOpV1::getBatchDimsAttrName(*odsOpName)) {
      tblgen_batch_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.torch_index_select_v1' op ""requires attribute 'dim'");
    if (namedAttrIt->getName() == TorchIndexSelectOpV1::getDimAttrName(*odsOpName)) {
      tblgen_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dim && !((true)))
    return emitError(loc, "'vhlo.torch_index_select_v1' op ""attribute 'dim' failed to satisfy constraint: any attribute");

  if (tblgen_batch_dims && !((true)))
    return emitError(loc, "'vhlo.torch_index_select_v1' op ""attribute 'batch_dims' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TorchIndexSelectOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TorchIndexSelectOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TorchIndexSelectOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value TorchIndexSelectOpV1::getIndex() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &TorchIndexSelectOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TorchIndexSelectOpV1::getIndexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TorchIndexSelectOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TorchIndexSelectOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TorchIndexSelectOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute TorchIndexSelectOpV1::getDimAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getDimAttrName()));
}

::mlir::Attribute TorchIndexSelectOpV1::getDim() {
  auto attr = getDimAttr();
  return attr;
}

::mlir::Attribute TorchIndexSelectOpV1::getBatchDimsAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getBatchDimsAttrName()));
}

::mlir::Attribute TorchIndexSelectOpV1::getBatchDims() {
  auto attr = getBatchDimsAttr();
  return attr;
}

void TorchIndexSelectOpV1::setDimAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getDimAttrName(), attr);
}

void TorchIndexSelectOpV1::setBatchDimsAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getBatchDimsAttrName(), attr);
}

void TorchIndexSelectOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value index, ::mlir::Attribute dim, ::mlir::Attribute batch_dims) {
  odsState.addOperands(operand);
  odsState.addOperands(index);
  odsState.addAttribute(getDimAttrName(odsState.name), dim);
  odsState.addAttribute(getBatchDimsAttrName(odsState.name), batch_dims);
  odsState.addTypes(result);
}

void TorchIndexSelectOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value index, ::mlir::Attribute dim, ::mlir::Attribute batch_dims) {
  odsState.addOperands(operand);
  odsState.addOperands(index);
  odsState.addAttribute(getDimAttrName(odsState.name), dim);
  odsState.addAttribute(getBatchDimsAttrName(odsState.name), batch_dims);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TorchIndexSelectOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TorchIndexSelectOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_batch_dims;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'batch_dims'");
    if (namedAttrIt->getName() == getBatchDimsAttrName()) {
      tblgen_batch_dims = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dim'");
    if (namedAttrIt->getName() == getDimAttrName()) {
      tblgen_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_dim, "dim")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_batch_dims, "batch_dims")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TorchIndexSelectOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version TorchIndexSelectOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version TorchIndexSelectOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::TorchIndexSelectOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::TraceOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
TraceOpV1GenericAdaptorBase::TraceOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.trace_v1", odsAttrs.getContext());
}

TraceOpV1GenericAdaptorBase::TraceOpV1GenericAdaptorBase(TraceOpV1 op) : TraceOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TraceOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TraceOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute TraceOpV1GenericAdaptorBase::getTagAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TraceOpV1::getTagAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TraceOpV1GenericAdaptorBase::getTag() {
  auto attr = getTagAttr();
  return attr;
}

} // namespace detail
TraceOpV1Adaptor::TraceOpV1Adaptor(TraceOpV1 op) : TraceOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TraceOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_tag;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.trace_v1' op ""requires attribute 'tag'");
    if (namedAttrIt->getName() == TraceOpV1::getTagAttrName(*odsOpName)) {
      tblgen_tag = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_tag && !((true)))
    return emitError(loc, "'vhlo.trace_v1' op ""attribute 'tag' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TraceOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TraceOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TraceOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TraceOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TraceOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TraceOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Attribute TraceOpV1::getTagAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTagAttrName()));
}

::mlir::Attribute TraceOpV1::getTag() {
  auto attr = getTagAttr();
  return attr;
}

void TraceOpV1::setTagAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getTagAttrName(), attr);
}

void TraceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Attribute tag) {
  odsState.addOperands(operand);
  odsState.addAttribute(getTagAttrName(odsState.name), tag);
}

void TraceOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute tag) {
  odsState.addOperands(operand);
  odsState.addAttribute(getTagAttrName(odsState.name), tag);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TraceOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TraceOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_tag;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'tag'");
    if (namedAttrIt->getName() == getTagAttrName()) {
      tblgen_tag = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_tag, "tag")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TraceOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version TraceOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version TraceOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::TraceOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::TransposeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransposeOpV1GenericAdaptorBase::TransposeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.transpose_v1", odsAttrs.getContext());
}

TransposeOpV1GenericAdaptorBase::TransposeOpV1GenericAdaptorBase(TransposeOpV1 op) : TransposeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TransposeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TransposeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute TransposeOpV1GenericAdaptorBase::getPermutationAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TransposeOpV1::getPermutationAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TransposeOpV1GenericAdaptorBase::getPermutation() {
  auto attr = getPermutationAttr();
  return attr;
}

} // namespace detail
TransposeOpV1Adaptor::TransposeOpV1Adaptor(TransposeOpV1 op) : TransposeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TransposeOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_permutation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.transpose_v1' op ""requires attribute 'permutation'");
    if (namedAttrIt->getName() == TransposeOpV1::getPermutationAttrName(*odsOpName)) {
      tblgen_permutation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_permutation && !((true)))
    return emitError(loc, "'vhlo.transpose_v1' op ""attribute 'permutation' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TransposeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TransposeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TransposeOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TransposeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransposeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute TransposeOpV1::getPermutationAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getPermutationAttrName()));
}

::mlir::Attribute TransposeOpV1::getPermutation() {
  auto attr = getPermutationAttr();
  return attr;
}

void TransposeOpV1::setPermutationAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getPermutationAttrName(), attr);
}

void TransposeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute permutation) {
  odsState.addOperands(operand);
  odsState.addAttribute(getPermutationAttrName(odsState.name), permutation);
  odsState.addTypes(result);
}

void TransposeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute permutation) {
  odsState.addOperands(operand);
  odsState.addAttribute(getPermutationAttrName(odsState.name), permutation);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransposeOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_permutation;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'permutation'");
    if (namedAttrIt->getName() == getPermutationAttrName()) {
      tblgen_permutation = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_permutation, "permutation")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TransposeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version TransposeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version TransposeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::TransposeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::TriangularSolveOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
TriangularSolveOpV1GenericAdaptorBase::TriangularSolveOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.triangular_solve_v1", odsAttrs.getContext());
}

TriangularSolveOpV1GenericAdaptorBase::TriangularSolveOpV1GenericAdaptorBase(TriangularSolveOpV1 op) : TriangularSolveOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TriangularSolveOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TriangularSolveOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getLeftSideAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 3, TriangularSolveOpV1::getLeftSideAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getLeftSide() {
  auto attr = getLeftSideAttr();
  return attr;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getLowerAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 2, TriangularSolveOpV1::getLowerAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getLower() {
  auto attr = getLowerAttr();
  return attr;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getUnitDiagonalAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 3, odsAttrs.end() - 0, TriangularSolveOpV1::getUnitDiagonalAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getUnitDiagonal() {
  auto attr = getUnitDiagonalAttr();
  return attr;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getTransposeAAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 2, odsAttrs.end() - 1, TriangularSolveOpV1::getTransposeAAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute TriangularSolveOpV1GenericAdaptorBase::getTransposeA() {
  auto attr = getTransposeAAttr();
  return attr;
}

} // namespace detail
TriangularSolveOpV1Adaptor::TriangularSolveOpV1Adaptor(TriangularSolveOpV1 op) : TriangularSolveOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TriangularSolveOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_left_side;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.triangular_solve_v1' op ""requires attribute 'left_side'");
    if (namedAttrIt->getName() == TriangularSolveOpV1::getLeftSideAttrName(*odsOpName)) {
      tblgen_left_side = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lower;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.triangular_solve_v1' op ""requires attribute 'lower'");
    if (namedAttrIt->getName() == TriangularSolveOpV1::getLowerAttrName(*odsOpName)) {
      tblgen_lower = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_transpose_a;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.triangular_solve_v1' op ""requires attribute 'transpose_a'");
    if (namedAttrIt->getName() == TriangularSolveOpV1::getTransposeAAttrName(*odsOpName)) {
      tblgen_transpose_a = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_unit_diagonal;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.triangular_solve_v1' op ""requires attribute 'unit_diagonal'");
    if (namedAttrIt->getName() == TriangularSolveOpV1::getUnitDiagonalAttrName(*odsOpName)) {
      tblgen_unit_diagonal = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_left_side && !((true)))
    return emitError(loc, "'vhlo.triangular_solve_v1' op ""attribute 'left_side' failed to satisfy constraint: any attribute");

  if (tblgen_lower && !((true)))
    return emitError(loc, "'vhlo.triangular_solve_v1' op ""attribute 'lower' failed to satisfy constraint: any attribute");

  if (tblgen_unit_diagonal && !((true)))
    return emitError(loc, "'vhlo.triangular_solve_v1' op ""attribute 'unit_diagonal' failed to satisfy constraint: any attribute");

  if (tblgen_transpose_a && !((true)))
    return emitError(loc, "'vhlo.triangular_solve_v1' op ""attribute 'transpose_a' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TriangularSolveOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TriangularSolveOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TriangularSolveOpV1::getA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value TriangularSolveOpV1::getB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &TriangularSolveOpV1::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TriangularSolveOpV1::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TriangularSolveOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TriangularSolveOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TriangularSolveOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute TriangularSolveOpV1::getLeftSideAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 3, getLeftSideAttrName()));
}

::mlir::Attribute TriangularSolveOpV1::getLeftSide() {
  auto attr = getLeftSideAttr();
  return attr;
}

::mlir::Attribute TriangularSolveOpV1::getLowerAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 2, getLowerAttrName()));
}

::mlir::Attribute TriangularSolveOpV1::getLower() {
  auto attr = getLowerAttr();
  return attr;
}

::mlir::Attribute TriangularSolveOpV1::getUnitDiagonalAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 3, (*this)->getAttrs().end() - 0, getUnitDiagonalAttrName()));
}

::mlir::Attribute TriangularSolveOpV1::getUnitDiagonal() {
  auto attr = getUnitDiagonalAttr();
  return attr;
}

::mlir::Attribute TriangularSolveOpV1::getTransposeAAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 2, (*this)->getAttrs().end() - 1, getTransposeAAttrName()));
}

::mlir::Attribute TriangularSolveOpV1::getTransposeA() {
  auto attr = getTransposeAAttr();
  return attr;
}

void TriangularSolveOpV1::setLeftSideAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLeftSideAttrName(), attr);
}

void TriangularSolveOpV1::setLowerAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getLowerAttrName(), attr);
}

void TriangularSolveOpV1::setUnitDiagonalAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getUnitDiagonalAttrName(), attr);
}

void TriangularSolveOpV1::setTransposeAAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getTransposeAAttrName(), attr);
}

void TriangularSolveOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value a, ::mlir::Value b, ::mlir::Attribute left_side, ::mlir::Attribute lower, ::mlir::Attribute unit_diagonal, ::mlir::Attribute transpose_a) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addAttribute(getLeftSideAttrName(odsState.name), left_side);
  odsState.addAttribute(getLowerAttrName(odsState.name), lower);
  odsState.addAttribute(getUnitDiagonalAttrName(odsState.name), unit_diagonal);
  odsState.addAttribute(getTransposeAAttrName(odsState.name), transpose_a);
  odsState.addTypes(result);
}

void TriangularSolveOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Attribute left_side, ::mlir::Attribute lower, ::mlir::Attribute unit_diagonal, ::mlir::Attribute transpose_a) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addAttribute(getLeftSideAttrName(odsState.name), left_side);
  odsState.addAttribute(getLowerAttrName(odsState.name), lower);
  odsState.addAttribute(getUnitDiagonalAttrName(odsState.name), unit_diagonal);
  odsState.addAttribute(getTransposeAAttrName(odsState.name), transpose_a);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TriangularSolveOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TriangularSolveOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_left_side;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'left_side'");
    if (namedAttrIt->getName() == getLeftSideAttrName()) {
      tblgen_left_side = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_lower;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'lower'");
    if (namedAttrIt->getName() == getLowerAttrName()) {
      tblgen_lower = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_transpose_a;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'transpose_a'");
    if (namedAttrIt->getName() == getTransposeAAttrName()) {
      tblgen_transpose_a = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_unit_diagonal;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'unit_diagonal'");
    if (namedAttrIt->getName() == getUnitDiagonalAttrName()) {
      tblgen_unit_diagonal = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_left_side, "left_side")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_lower, "lower")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_unit_diagonal, "unit_diagonal")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_transpose_a, "transpose_a")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TriangularSolveOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version TriangularSolveOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version TriangularSolveOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::TriangularSolveOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::TupleOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
TupleOpV1GenericAdaptorBase::TupleOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.tuple_v1", odsAttrs.getContext());
}

TupleOpV1GenericAdaptorBase::TupleOpV1GenericAdaptorBase(TupleOpV1 op) : TupleOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TupleOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr TupleOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TupleOpV1Adaptor::TupleOpV1Adaptor(TupleOpV1 op) : TupleOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TupleOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TupleOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range TupleOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range TupleOpV1::getVal() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange TupleOpV1::getValMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TupleOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TupleOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TupleOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void TupleOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange val) {
  odsState.addOperands(val);
  odsState.addTypes(result);
}

void TupleOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TupleOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TupleOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version TupleOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version TupleOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::TupleOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::UnaryEinsumOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
UnaryEinsumOpV1GenericAdaptorBase::UnaryEinsumOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.unary_einsum_v1", odsAttrs.getContext());
}

UnaryEinsumOpV1GenericAdaptorBase::UnaryEinsumOpV1GenericAdaptorBase(UnaryEinsumOpV1 op) : UnaryEinsumOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UnaryEinsumOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UnaryEinsumOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute UnaryEinsumOpV1GenericAdaptorBase::getEinsumConfigAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, UnaryEinsumOpV1::getEinsumConfigAttrName(*odsOpName)));
  return attr;
}

::mlir::Attribute UnaryEinsumOpV1GenericAdaptorBase::getEinsumConfig() {
  auto attr = getEinsumConfigAttr();
  return attr;
}

} // namespace detail
UnaryEinsumOpV1Adaptor::UnaryEinsumOpV1Adaptor(UnaryEinsumOpV1 op) : UnaryEinsumOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UnaryEinsumOpV1Adaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_einsum_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'vhlo.unary_einsum_v1' op ""requires attribute 'einsum_config'");
    if (namedAttrIt->getName() == UnaryEinsumOpV1::getEinsumConfigAttrName(*odsOpName)) {
      tblgen_einsum_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_einsum_config && !((true)))
    return emitError(loc, "'vhlo.unary_einsum_v1' op ""attribute 'einsum_config' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UnaryEinsumOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UnaryEinsumOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UnaryEinsumOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &UnaryEinsumOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UnaryEinsumOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UnaryEinsumOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UnaryEinsumOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Attribute UnaryEinsumOpV1::getEinsumConfigAttr() {
  return ::llvm::cast<::mlir::Attribute>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getEinsumConfigAttrName()));
}

::mlir::Attribute UnaryEinsumOpV1::getEinsumConfig() {
  auto attr = getEinsumConfigAttr();
  return attr;
}

void UnaryEinsumOpV1::setEinsumConfigAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getEinsumConfigAttrName(), attr);
}

void UnaryEinsumOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Attribute einsum_config) {
  odsState.addOperands(operand);
  odsState.addAttribute(getEinsumConfigAttrName(odsState.name), einsum_config);
  odsState.addTypes(result);
}

void UnaryEinsumOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Attribute einsum_config) {
  odsState.addOperands(operand);
  odsState.addAttribute(getEinsumConfigAttrName(odsState.name), einsum_config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UnaryEinsumOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UnaryEinsumOpV1::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_einsum_config;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'einsum_config'");
    if (namedAttrIt->getName() == getEinsumConfigAttrName()) {
      tblgen_einsum_config = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VhloOps0(*this, tblgen_einsum_config, "einsum_config")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult UnaryEinsumOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version UnaryEinsumOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version UnaryEinsumOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::UnaryEinsumOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::UniformDequantizeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
UniformDequantizeOpV1GenericAdaptorBase::UniformDequantizeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.uniform_dequantize_v1", odsAttrs.getContext());
}

UniformDequantizeOpV1GenericAdaptorBase::UniformDequantizeOpV1GenericAdaptorBase(UniformDequantizeOpV1 op) : UniformDequantizeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UniformDequantizeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UniformDequantizeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UniformDequantizeOpV1Adaptor::UniformDequantizeOpV1Adaptor(UniformDequantizeOpV1 op) : UniformDequantizeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UniformDequantizeOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UniformDequantizeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UniformDequantizeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UniformDequantizeOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &UniformDequantizeOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UniformDequantizeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UniformDequantizeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UniformDequantizeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void UniformDequantizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void UniformDequantizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UniformDequantizeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UniformDequantizeOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult UniformDequantizeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version UniformDequantizeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version UniformDequantizeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::UniformDequantizeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::UniformQuantizeOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
UniformQuantizeOpV1GenericAdaptorBase::UniformQuantizeOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.uniform_quantize_v1", odsAttrs.getContext());
}

UniformQuantizeOpV1GenericAdaptorBase::UniformQuantizeOpV1GenericAdaptorBase(UniformQuantizeOpV1 op) : UniformQuantizeOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UniformQuantizeOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UniformQuantizeOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UniformQuantizeOpV1Adaptor::UniformQuantizeOpV1Adaptor(UniformQuantizeOpV1 op) : UniformQuantizeOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UniformQuantizeOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UniformQuantizeOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UniformQuantizeOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UniformQuantizeOpV1::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &UniformQuantizeOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UniformQuantizeOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UniformQuantizeOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UniformQuantizeOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void UniformQuantizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void UniformQuantizeOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UniformQuantizeOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UniformQuantizeOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult UniformQuantizeOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version UniformQuantizeOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version UniformQuantizeOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::UniformQuantizeOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::WhileOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
WhileOpV1GenericAdaptorBase::WhileOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.while_v1", odsAttrs.getContext());
}

WhileOpV1GenericAdaptorBase::WhileOpV1GenericAdaptorBase(WhileOpV1 op) : WhileOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WhileOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr WhileOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &WhileOpV1GenericAdaptorBase::getCond() {
  return *odsRegions[0];
}

::mlir::Region &WhileOpV1GenericAdaptorBase::getBody() {
  return *odsRegions[1];
}

::mlir::RegionRange WhileOpV1GenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
WhileOpV1Adaptor::WhileOpV1Adaptor(WhileOpV1 op) : WhileOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WhileOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WhileOpV1::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range WhileOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range WhileOpV1::getOperand() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange WhileOpV1::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> WhileOpV1::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range WhileOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range WhileOpV1::getResults() {
  return getODSResults(0);
}

::mlir::Region &WhileOpV1::getCond() {
  return (*this)->getRegion(0);
}

::mlir::Region &WhileOpV1::getBody() {
  return (*this)->getRegion(1);
}

void WhileOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WhileOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "cond", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VhloOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult WhileOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version WhileOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version WhileOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::WhileOpV1)

namespace mlir {
namespace vhlo {

//===----------------------------------------------------------------------===//
// ::mlir::vhlo::XorOpV1 definitions
//===----------------------------------------------------------------------===//

namespace detail {
XorOpV1GenericAdaptorBase::XorOpV1GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vhlo.xor_v1", odsAttrs.getContext());
}

XorOpV1GenericAdaptorBase::XorOpV1GenericAdaptorBase(XorOpV1 op) : XorOpV1GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> XorOpV1GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr XorOpV1GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
XorOpV1Adaptor::XorOpV1Adaptor(XorOpV1 op) : XorOpV1GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult XorOpV1Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> XorOpV1::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range XorOpV1::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XorOpV1::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value XorOpV1::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &XorOpV1::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &XorOpV1::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> XorOpV1::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range XorOpV1::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XorOpV1::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void XorOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void XorOpV1::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void XorOpV1::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult XorOpV1::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VhloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult XorOpV1::verifyInvariants() {
  return verifyInvariantsImpl();
}

mlir::vhlo::Version XorOpV1::getMinVersion() {
  return mlir::vhlo::Version(0, 9, 0);
}
mlir::vhlo::Version XorOpV1::getMaxVersion() {
   return mlir::vhlo::Version::getCurrentVersion(); 
}
} // namespace vhlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vhlo::XorOpV1)


#endif  // GET_OP_CLASSES

