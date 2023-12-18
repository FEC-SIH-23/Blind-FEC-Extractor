/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVVMOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::NVVM::Barrier0Op,
::mlir::NVVM::BlockDimXOp,
::mlir::NVVM::BlockDimYOp,
::mlir::NVVM::BlockDimZOp,
::mlir::NVVM::BlockIdXOp,
::mlir::NVVM::BlockIdYOp,
::mlir::NVVM::BlockIdZOp,
::mlir::NVVM::BlockInClusterIdXOp,
::mlir::NVVM::BlockInClusterIdYOp,
::mlir::NVVM::BlockInClusterIdZOp,
::mlir::NVVM::ClusterArriveOp,
::mlir::NVVM::ClusterArriveRelaxedOp,
::mlir::NVVM::ClusterDim,
::mlir::NVVM::ClusterDimXOp,
::mlir::NVVM::ClusterDimYOp,
::mlir::NVVM::ClusterDimZOp,
::mlir::NVVM::ClusterId,
::mlir::NVVM::ClusterIdXOp,
::mlir::NVVM::ClusterIdYOp,
::mlir::NVVM::ClusterIdZOp,
::mlir::NVVM::ClusterWaitOp,
::mlir::NVVM::CpAsyncBulkTensorGlobalToSharedClusterOp,
::mlir::NVVM::CpAsyncBulkTensorSharedCTAToGlobalOp,
::mlir::NVVM::CpAsyncCommitGroupOp,
::mlir::NVVM::CpAsyncOp,
::mlir::NVVM::CpAsyncWaitGroupOp,
::mlir::NVVM::ElectSyncOp,
::mlir::NVVM::FenceScClusterOp,
::mlir::NVVM::GridDimXOp,
::mlir::NVVM::GridDimYOp,
::mlir::NVVM::GridDimZOp,
::mlir::NVVM::GridInClusterDimXOp,
::mlir::NVVM::GridInClusterDimYOp,
::mlir::NVVM::GridInClusterDimZOp,
::mlir::NVVM::LaneIdOp,
::mlir::NVVM::LdMatrixOp,
::mlir::NVVM::MBarrierArriveExpectTxOp,
::mlir::NVVM::MBarrierArriveExpectTxSharedOp,
::mlir::NVVM::MBarrierArriveNocompleteOp,
::mlir::NVVM::MBarrierArriveNocompleteSharedOp,
::mlir::NVVM::MBarrierArriveOp,
::mlir::NVVM::MBarrierArriveSharedOp,
::mlir::NVVM::MBarrierInitOp,
::mlir::NVVM::MBarrierInitSharedOp,
::mlir::NVVM::MBarrierInvalOp,
::mlir::NVVM::MBarrierInvalSharedOp,
::mlir::NVVM::MBarrierTestWaitOp,
::mlir::NVVM::MBarrierTestWaitSharedOp,
::mlir::NVVM::MBarrierTryWaitParityOp,
::mlir::NVVM::MBarrierTryWaitParitySharedOp,
::mlir::NVVM::MmaOp,
::mlir::NVVM::RcpApproxFtzF32Op,
::mlir::NVVM::ReduxOp,
::mlir::NVVM::ShflOp,
::mlir::NVVM::SyncWarpOp,
::mlir::NVVM::ThreadIdXOp,
::mlir::NVVM::ThreadIdYOp,
::mlir::NVVM::ThreadIdZOp,
::mlir::NVVM::VoteBallotOp,
::mlir::NVVM::WMMALoadOp,
::mlir::NVVM::WMMAMmaOp,
::mlir::NVVM::WMMAStoreOp,
::mlir::NVVM::WarpSizeOp,
::mlir::NVVM::WgmmaFenceAlignedOp,
::mlir::NVVM::WgmmaGroupSyncAlignedOp,
::mlir::NVVM::WgmmaMmaAsyncOp,
::mlir::NVVM::WgmmaWaitGroupSyncOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace NVVM {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::mlir::LLVM::isCompatibleOuterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM dialect-compatible type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).isOpaque()))) || ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getElementType().isSignlessInteger(64))))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getAddressSpace() == 3)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer to 64-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).isOpaque()))) || ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getElementType().isSignlessInteger(64))))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getAddressSpace() == 0)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer to 64-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).isOpaque()))) || ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getElementType().isSignlessInteger(8))))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getAddressSpace() == 3)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer to 8-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).isOpaque()))) || ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getElementType().isSignlessInteger(8))))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getAddressSpace() == 1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer to 8-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::LLVM::LLVMStructType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM structure type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isF32()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVVMOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(64)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 64-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::LoadCacheModifierKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: NVVM load cache modifier kind";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: NVVM MMA layout";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::MMAShapeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Attribute for MMA operation shape.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::MMAB1OpAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: MMA binary operations";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::MMAIntOverflowAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: MMA overflow options";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::MMATypesAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: NVVM MMA types";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::ReduxKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: NVVM redux kind";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::ShflKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: NVVM shuffle kind";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::MMAFragAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: NVVM MMA frag type";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::WGMMATypesAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: NVVM WGMMA types";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::WGMMAScaleOutAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: WGMMA input predicate";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps13(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::NVVM::WGMMAScaleInAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: WGMMA overflow options";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVVMOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVVMOps13(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace NVVM
} // namespace mlir
namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::Barrier0Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
Barrier0OpGenericAdaptorBase::Barrier0OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.barrier0", odsAttrs.getContext());
}

Barrier0OpGenericAdaptorBase::Barrier0OpGenericAdaptorBase(Barrier0Op op) : Barrier0OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Barrier0OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Barrier0OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Barrier0OpAdaptor::Barrier0OpAdaptor(Barrier0Op op) : Barrier0OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Barrier0OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Barrier0Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Barrier0Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> Barrier0Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Barrier0Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Barrier0Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void Barrier0Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Barrier0Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Barrier0Op::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult Barrier0Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult Barrier0Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void Barrier0Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::Barrier0Op)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockDimXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockDimXOpGenericAdaptorBase::BlockDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.ntid.x", odsAttrs.getContext());
}

BlockDimXOpGenericAdaptorBase::BlockDimXOpGenericAdaptorBase(BlockDimXOp op) : BlockDimXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockDimXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockDimXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockDimXOpAdaptor::BlockDimXOpAdaptor(BlockDimXOp op) : BlockDimXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockDimXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockDimXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockDimXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockDimXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockDimXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockDimXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockDimXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockDimXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockDimYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockDimYOpGenericAdaptorBase::BlockDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.ntid.y", odsAttrs.getContext());
}

BlockDimYOpGenericAdaptorBase::BlockDimYOpGenericAdaptorBase(BlockDimYOp op) : BlockDimYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockDimYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockDimYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockDimYOpAdaptor::BlockDimYOpAdaptor(BlockDimYOp op) : BlockDimYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockDimYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockDimYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockDimYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockDimYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockDimYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockDimYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockDimYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockDimYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockDimZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockDimZOpGenericAdaptorBase::BlockDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.ntid.z", odsAttrs.getContext());
}

BlockDimZOpGenericAdaptorBase::BlockDimZOpGenericAdaptorBase(BlockDimZOp op) : BlockDimZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockDimZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockDimZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockDimZOpAdaptor::BlockDimZOpAdaptor(BlockDimZOp op) : BlockDimZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockDimZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockDimZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockDimZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockDimZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockDimZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockDimZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockDimZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockDimZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockIdXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockIdXOpGenericAdaptorBase::BlockIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.ctaid.x", odsAttrs.getContext());
}

BlockIdXOpGenericAdaptorBase::BlockIdXOpGenericAdaptorBase(BlockIdXOp op) : BlockIdXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockIdXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockIdXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockIdXOpAdaptor::BlockIdXOpAdaptor(BlockIdXOp op) : BlockIdXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockIdXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockIdXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockIdXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockIdXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockIdXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockIdXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockIdXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockIdXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockIdYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockIdYOpGenericAdaptorBase::BlockIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.ctaid.y", odsAttrs.getContext());
}

BlockIdYOpGenericAdaptorBase::BlockIdYOpGenericAdaptorBase(BlockIdYOp op) : BlockIdYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockIdYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockIdYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockIdYOpAdaptor::BlockIdYOpAdaptor(BlockIdYOp op) : BlockIdYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockIdYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockIdYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockIdYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockIdYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockIdYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockIdYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockIdYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockIdYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockIdZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockIdZOpGenericAdaptorBase::BlockIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.ctaid.z", odsAttrs.getContext());
}

BlockIdZOpGenericAdaptorBase::BlockIdZOpGenericAdaptorBase(BlockIdZOp op) : BlockIdZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockIdZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockIdZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockIdZOpAdaptor::BlockIdZOpAdaptor(BlockIdZOp op) : BlockIdZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockIdZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockIdZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockIdZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockIdZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockIdZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockIdZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockIdZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockIdZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockInClusterIdXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockInClusterIdXOpGenericAdaptorBase::BlockInClusterIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.ctaid.x", odsAttrs.getContext());
}

BlockInClusterIdXOpGenericAdaptorBase::BlockInClusterIdXOpGenericAdaptorBase(BlockInClusterIdXOp op) : BlockInClusterIdXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockInClusterIdXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockInClusterIdXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockInClusterIdXOpAdaptor::BlockInClusterIdXOpAdaptor(BlockInClusterIdXOp op) : BlockInClusterIdXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockInClusterIdXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockInClusterIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockInClusterIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockInClusterIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockInClusterIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockInClusterIdXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockInClusterIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockInClusterIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockInClusterIdXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockInClusterIdXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockInClusterIdXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockInClusterIdXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockInClusterIdXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockInClusterIdXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockInClusterIdXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockInClusterIdYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockInClusterIdYOpGenericAdaptorBase::BlockInClusterIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.ctaid.y", odsAttrs.getContext());
}

BlockInClusterIdYOpGenericAdaptorBase::BlockInClusterIdYOpGenericAdaptorBase(BlockInClusterIdYOp op) : BlockInClusterIdYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockInClusterIdYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockInClusterIdYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockInClusterIdYOpAdaptor::BlockInClusterIdYOpAdaptor(BlockInClusterIdYOp op) : BlockInClusterIdYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockInClusterIdYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockInClusterIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockInClusterIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockInClusterIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockInClusterIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockInClusterIdYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockInClusterIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockInClusterIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockInClusterIdYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockInClusterIdYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockInClusterIdYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockInClusterIdYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockInClusterIdYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockInClusterIdYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockInClusterIdYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::BlockInClusterIdZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockInClusterIdZOpGenericAdaptorBase::BlockInClusterIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.ctaid.z", odsAttrs.getContext());
}

BlockInClusterIdZOpGenericAdaptorBase::BlockInClusterIdZOpGenericAdaptorBase(BlockInClusterIdZOp op) : BlockInClusterIdZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockInClusterIdZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockInClusterIdZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockInClusterIdZOpAdaptor::BlockInClusterIdZOpAdaptor(BlockInClusterIdZOp op) : BlockInClusterIdZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockInClusterIdZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockInClusterIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockInClusterIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockInClusterIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockInClusterIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockInClusterIdZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockInClusterIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockInClusterIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockInClusterIdZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockInClusterIdZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockInClusterIdZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockInClusterIdZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockInClusterIdZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockInClusterIdZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::BlockInClusterIdZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterArriveOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterArriveOpGenericAdaptorBase::ClusterArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cluster.arrive", odsAttrs.getContext());
}

ClusterArriveOpGenericAdaptorBase::ClusterArriveOpGenericAdaptorBase(ClusterArriveOp op) : ClusterArriveOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterArriveOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterArriveOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterArriveOpAdaptor::ClusterArriveOpAdaptor(ClusterArriveOp op) : ClusterArriveOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterArriveOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterArriveOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterArriveOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterArriveOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterArriveOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ClusterArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ClusterArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterArriveOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterArriveOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ClusterArriveOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterArriveOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ClusterArriveOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterArriveOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterArriveRelaxedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterArriveRelaxedOpGenericAdaptorBase::ClusterArriveRelaxedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cluster.arrive.relaxed", odsAttrs.getContext());
}

ClusterArriveRelaxedOpGenericAdaptorBase::ClusterArriveRelaxedOpGenericAdaptorBase(ClusterArriveRelaxedOp op) : ClusterArriveRelaxedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterArriveRelaxedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterArriveRelaxedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterArriveRelaxedOpAdaptor::ClusterArriveRelaxedOpAdaptor(ClusterArriveRelaxedOp op) : ClusterArriveRelaxedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterArriveRelaxedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterArriveRelaxedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterArriveRelaxedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterArriveRelaxedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterArriveRelaxedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ClusterArriveRelaxedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ClusterArriveRelaxedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterArriveRelaxedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterArriveRelaxedOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ClusterArriveRelaxedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterArriveRelaxedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ClusterArriveRelaxedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterArriveRelaxedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterDim definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterDimGenericAdaptorBase::ClusterDimGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.nctarank", odsAttrs.getContext());
}

ClusterDimGenericAdaptorBase::ClusterDimGenericAdaptorBase(ClusterDim op) : ClusterDimGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterDimGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterDimGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterDimAdaptor::ClusterDimAdaptor(ClusterDim op) : ClusterDimGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterDimAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterDim::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterDim::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterDim::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterDim::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterDim::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterDim::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterDim::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterDim::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterDim::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterDim::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterDim::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterDim::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterDim::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterDim)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterDimXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterDimXOpGenericAdaptorBase::ClusterDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.nclusterid.x", odsAttrs.getContext());
}

ClusterDimXOpGenericAdaptorBase::ClusterDimXOpGenericAdaptorBase(ClusterDimXOp op) : ClusterDimXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterDimXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterDimXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterDimXOpAdaptor::ClusterDimXOpAdaptor(ClusterDimXOp op) : ClusterDimXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterDimXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterDimXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterDimXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterDimXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterDimXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterDimXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterDimXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterDimXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterDimXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterDimYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterDimYOpGenericAdaptorBase::ClusterDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.nclusterid.y", odsAttrs.getContext());
}

ClusterDimYOpGenericAdaptorBase::ClusterDimYOpGenericAdaptorBase(ClusterDimYOp op) : ClusterDimYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterDimYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterDimYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterDimYOpAdaptor::ClusterDimYOpAdaptor(ClusterDimYOp op) : ClusterDimYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterDimYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterDimYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterDimYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterDimYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterDimYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterDimYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterDimYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterDimYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterDimYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterDimZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterDimZOpGenericAdaptorBase::ClusterDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.nclusterid.z", odsAttrs.getContext());
}

ClusterDimZOpGenericAdaptorBase::ClusterDimZOpGenericAdaptorBase(ClusterDimZOp op) : ClusterDimZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterDimZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterDimZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterDimZOpAdaptor::ClusterDimZOpAdaptor(ClusterDimZOp op) : ClusterDimZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterDimZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterDimZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterDimZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterDimZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterDimZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterDimZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterDimZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterDimZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterDimZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterId definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterIdGenericAdaptorBase::ClusterIdGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.ctarank", odsAttrs.getContext());
}

ClusterIdGenericAdaptorBase::ClusterIdGenericAdaptorBase(ClusterId op) : ClusterIdGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterIdGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterIdGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterIdAdaptor::ClusterIdAdaptor(ClusterId op) : ClusterIdGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterIdAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterId::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterId::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterId::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterId::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterId::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterId::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterId::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterId::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterId::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterId::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterId::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterId::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterId::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterId)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterIdXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterIdXOpGenericAdaptorBase::ClusterIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.clusterid.x", odsAttrs.getContext());
}

ClusterIdXOpGenericAdaptorBase::ClusterIdXOpGenericAdaptorBase(ClusterIdXOp op) : ClusterIdXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterIdXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterIdXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterIdXOpAdaptor::ClusterIdXOpAdaptor(ClusterIdXOp op) : ClusterIdXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterIdXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterIdXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterIdXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterIdXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterIdXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterIdXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterIdXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterIdXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterIdXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterIdYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterIdYOpGenericAdaptorBase::ClusterIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.clusterid.y", odsAttrs.getContext());
}

ClusterIdYOpGenericAdaptorBase::ClusterIdYOpGenericAdaptorBase(ClusterIdYOp op) : ClusterIdYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterIdYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterIdYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterIdYOpAdaptor::ClusterIdYOpAdaptor(ClusterIdYOp op) : ClusterIdYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterIdYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterIdYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterIdYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterIdYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterIdYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterIdYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterIdYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterIdYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterIdYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterIdZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterIdZOpGenericAdaptorBase::ClusterIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.clusterid.z", odsAttrs.getContext());
}

ClusterIdZOpGenericAdaptorBase::ClusterIdZOpGenericAdaptorBase(ClusterIdZOp op) : ClusterIdZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterIdZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterIdZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterIdZOpAdaptor::ClusterIdZOpAdaptor(ClusterIdZOp op) : ClusterIdZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterIdZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClusterIdZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ClusterIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ClusterIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterIdZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterIdZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterIdZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterIdZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ClusterIdZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ClusterIdZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterIdZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ClusterWaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterWaitOpGenericAdaptorBase::ClusterWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cluster.wait", odsAttrs.getContext());
}

ClusterWaitOpGenericAdaptorBase::ClusterWaitOpGenericAdaptorBase(ClusterWaitOp op) : ClusterWaitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterWaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterWaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClusterWaitOpAdaptor::ClusterWaitOpAdaptor(ClusterWaitOp op) : ClusterWaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterWaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterWaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterWaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterWaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterWaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ClusterWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ClusterWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterWaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterWaitOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ClusterWaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterWaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ClusterWaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ClusterWaitOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::CpAsyncBulkTensorGlobalToSharedClusterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptorBase::CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cp.async.bulk.tensor.shared.cluster.global", odsAttrs.getContext());
}

CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptorBase::CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptorBase(CpAsyncBulkTensorGlobalToSharedClusterOp op) : CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CpAsyncBulkTensorGlobalToSharedClusterOpAdaptor::CpAsyncBulkTensorGlobalToSharedClusterOpAdaptor(CpAsyncBulkTensorGlobalToSharedClusterOp op) : CpAsyncBulkTensorGlobalToSharedClusterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CpAsyncBulkTensorGlobalToSharedClusterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CpAsyncBulkTensorGlobalToSharedClusterOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CpAsyncBulkTensorGlobalToSharedClusterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CpAsyncBulkTensorGlobalToSharedClusterOp::getDstMem() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CpAsyncBulkTensorGlobalToSharedClusterOp::getTmaDescriptor() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value CpAsyncBulkTensorGlobalToSharedClusterOp::getMbar() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Operation::operand_range CpAsyncBulkTensorGlobalToSharedClusterOp::getCoordinates() {
  return getODSOperands(3);
}

::mlir::OpOperand &CpAsyncBulkTensorGlobalToSharedClusterOp::getDstMemMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CpAsyncBulkTensorGlobalToSharedClusterOp::getTmaDescriptorMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CpAsyncBulkTensorGlobalToSharedClusterOp::getMbarMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange CpAsyncBulkTensorGlobalToSharedClusterOp::getCoordinatesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CpAsyncBulkTensorGlobalToSharedClusterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CpAsyncBulkTensorGlobalToSharedClusterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CpAsyncBulkTensorGlobalToSharedClusterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dstMem, ::mlir::Value tmaDescriptor, ::mlir::Value mbar, ::mlir::ValueRange coordinates) {
  odsState.addOperands(dstMem);
  odsState.addOperands(tmaDescriptor);
  odsState.addOperands(mbar);
  odsState.addOperands(coordinates);
}

void CpAsyncBulkTensorGlobalToSharedClusterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dstMem, ::mlir::Value tmaDescriptor, ::mlir::Value mbar, ::mlir::ValueRange coordinates) {
  odsState.addOperands(dstMem);
  odsState.addOperands(tmaDescriptor);
  odsState.addOperands(mbar);
  odsState.addOperands(coordinates);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CpAsyncBulkTensorGlobalToSharedClusterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CpAsyncBulkTensorGlobalToSharedClusterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CpAsyncBulkTensorGlobalToSharedClusterOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CpAsyncBulkTensorGlobalToSharedClusterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand dstMemRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstMemOperands(dstMemRawOperands);  ::llvm::SMLoc dstMemOperandsLoc;
  (void)dstMemOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tmaDescriptorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tmaDescriptorOperands(tmaDescriptorRawOperands);  ::llvm::SMLoc tmaDescriptorOperandsLoc;
  (void)tmaDescriptorOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarOperands(mbarRawOperands);  ::llvm::SMLoc mbarOperandsLoc;
  (void)mbarOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> coordinatesOperands;
  ::llvm::SMLoc coordinatesOperandsLoc;
  (void)coordinatesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  dstMemOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstMemRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tmaDescriptorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tmaDescriptorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  mbarOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseKeyword("box"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  coordinatesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(coordinatesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(dstMemOperands, tmaDescriptorOperands, mbarOperands, coordinatesOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CpAsyncBulkTensorGlobalToSharedClusterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getDstMem();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTmaDescriptor();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMbar();
  _odsPrinter << ",";
  _odsPrinter << ' ' << "box";
  _odsPrinter << "[";
  _odsPrinter << getCoordinates();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

std::string CpAsyncBulkTensorGlobalToSharedClusterOp::getPtx() {
  int dim = getCoordinates().size();
  std::string ptx = "cp.async.bulk.tensor.";
  ptx += std::to_string(dim) + "d.";
  ptx += "shared::cluster.global.mbarrier::complete_tx::bytes";
  if(dim == 1) ptx += " [%0], [%1, {%3} ], [%2];";
  if(dim == 2) ptx += " [%0], [%1, {%3, %4} ], [%2];";
  if(dim == 3) ptx += " [%0], [%1, {%3, %4, %5} ], [%2];";
  if(dim == 4) ptx += " [%0], [%1, {%3, %4, %5, %6} ], [%2];";
  if(dim == 5) ptx += " [%0], [%1, {%3, %4, %5, %6, %7} ], [%2];";
  return ptx;
}
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::CpAsyncBulkTensorGlobalToSharedClusterOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::CpAsyncBulkTensorSharedCTAToGlobalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptorBase::CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cp.async.bulk.tensor.global.shared.cta", odsAttrs.getContext());
}

CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptorBase::CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptorBase(CpAsyncBulkTensorSharedCTAToGlobalOp op) : CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CpAsyncBulkTensorSharedCTAToGlobalOpAdaptor::CpAsyncBulkTensorSharedCTAToGlobalOpAdaptor(CpAsyncBulkTensorSharedCTAToGlobalOp op) : CpAsyncBulkTensorSharedCTAToGlobalOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CpAsyncBulkTensorSharedCTAToGlobalOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CpAsyncBulkTensorSharedCTAToGlobalOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CpAsyncBulkTensorSharedCTAToGlobalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CpAsyncBulkTensorSharedCTAToGlobalOp::getTmaDescriptor() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CpAsyncBulkTensorSharedCTAToGlobalOp::getSrcMem() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range CpAsyncBulkTensorSharedCTAToGlobalOp::getCoordinates() {
  return getODSOperands(2);
}

::mlir::OpOperand &CpAsyncBulkTensorSharedCTAToGlobalOp::getTmaDescriptorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CpAsyncBulkTensorSharedCTAToGlobalOp::getSrcMemMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange CpAsyncBulkTensorSharedCTAToGlobalOp::getCoordinatesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CpAsyncBulkTensorSharedCTAToGlobalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CpAsyncBulkTensorSharedCTAToGlobalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CpAsyncBulkTensorSharedCTAToGlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tmaDescriptor, ::mlir::Value srcMem, ::mlir::ValueRange coordinates) {
  odsState.addOperands(tmaDescriptor);
  odsState.addOperands(srcMem);
  odsState.addOperands(coordinates);
}

void CpAsyncBulkTensorSharedCTAToGlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tmaDescriptor, ::mlir::Value srcMem, ::mlir::ValueRange coordinates) {
  odsState.addOperands(tmaDescriptor);
  odsState.addOperands(srcMem);
  odsState.addOperands(coordinates);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CpAsyncBulkTensorSharedCTAToGlobalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CpAsyncBulkTensorSharedCTAToGlobalOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CpAsyncBulkTensorSharedCTAToGlobalOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CpAsyncBulkTensorSharedCTAToGlobalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tmaDescriptorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tmaDescriptorOperands(tmaDescriptorRawOperands);  ::llvm::SMLoc tmaDescriptorOperandsLoc;
  (void)tmaDescriptorOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcMemRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcMemOperands(srcMemRawOperands);  ::llvm::SMLoc srcMemOperandsLoc;
  (void)srcMemOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> coordinatesOperands;
  ::llvm::SMLoc coordinatesOperandsLoc;
  (void)coordinatesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  tmaDescriptorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tmaDescriptorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcMemOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcMemRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseKeyword("box"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  coordinatesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(coordinatesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(tmaDescriptorOperands, srcMemOperands, coordinatesOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CpAsyncBulkTensorSharedCTAToGlobalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTmaDescriptor();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrcMem();
  _odsPrinter << ",";
  _odsPrinter << ' ' << "box";
  _odsPrinter << "[";
  _odsPrinter << getCoordinates();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

std::string CpAsyncBulkTensorSharedCTAToGlobalOp::getPtx() {
  int dim = getCoordinates().size();
  std::string ptx = "cp.async.bulk.tensor.";
  ptx += std::to_string(dim) + "d.";
  ptx += "global.shared::cta.bulk_group";
  if(dim == 1) ptx += " [%0, {%2} ], [%1];";
  if(dim == 2) ptx += " [%0, {%2, %3} ], [%1];";
  if(dim == 3) ptx += " [%0, {%2, %3, %4} ], [%1];";
  if(dim == 4) ptx += " [%0, {%2, %3, %4, %5} ], [%1];";
  if(dim == 5) ptx += " [%0, {%2, %3, %4, %5, %6} ], [%1];";
  return ptx;
}
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::CpAsyncBulkTensorSharedCTAToGlobalOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::CpAsyncCommitGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CpAsyncCommitGroupOpGenericAdaptorBase::CpAsyncCommitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cp.async.commit.group", odsAttrs.getContext());
}

CpAsyncCommitGroupOpGenericAdaptorBase::CpAsyncCommitGroupOpGenericAdaptorBase(CpAsyncCommitGroupOp op) : CpAsyncCommitGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CpAsyncCommitGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CpAsyncCommitGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CpAsyncCommitGroupOpAdaptor::CpAsyncCommitGroupOpAdaptor(CpAsyncCommitGroupOp op) : CpAsyncCommitGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CpAsyncCommitGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CpAsyncCommitGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CpAsyncCommitGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CpAsyncCommitGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CpAsyncCommitGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CpAsyncCommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void CpAsyncCommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CpAsyncCommitGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CpAsyncCommitGroupOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult CpAsyncCommitGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CpAsyncCommitGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void CpAsyncCommitGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::CpAsyncCommitGroupOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::CpAsyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CpAsyncOpGenericAdaptorBase::CpAsyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cp.async.shared.global", odsAttrs.getContext());
}

CpAsyncOpGenericAdaptorBase::CpAsyncOpGenericAdaptorBase(CpAsyncOp op) : CpAsyncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CpAsyncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CpAsyncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr CpAsyncOpGenericAdaptorBase::getSizeAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().size);
  return attr;
}

uint32_t CpAsyncOpGenericAdaptorBase::getSize() {
  auto attr = getSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::LoadCacheModifierKindAttr CpAsyncOpGenericAdaptorBase::getModifierAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::LoadCacheModifierKindAttr>(getProperties().modifier);
  return attr;
}

::mlir::NVVM::LoadCacheModifierKind CpAsyncOpGenericAdaptorBase::getModifier() {
  auto attr = getModifierAttr();
  return attr.getValue();
}

} // namespace detail
CpAsyncOpAdaptor::CpAsyncOpAdaptor(CpAsyncOp op) : CpAsyncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CpAsyncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_modifier = getProperties().modifier; (void)tblgen_modifier;
  if (!tblgen_modifier) return emitError(loc, "'nvvm.cp.async.shared.global' op ""requires attribute 'modifier'");
  auto tblgen_size = getProperties().size; (void)tblgen_size;
  if (!tblgen_size) return emitError(loc, "'nvvm.cp.async.shared.global' op ""requires attribute 'size'");

  if (tblgen_size && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_size))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_size).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.cp.async.shared.global' op ""attribute 'size' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_modifier && !((::llvm::isa<::mlir::NVVM::LoadCacheModifierKindAttr>(tblgen_modifier))))
    return emitError(loc, "'nvvm.cp.async.shared.global' op ""attribute 'modifier' failed to satisfy constraint: NVVM load cache modifier kind");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CpAsyncOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CpAsyncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CpAsyncOp::getDst() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CpAsyncOp::getSrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value CpAsyncOp::getCpSize() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::OpOperand &CpAsyncOp::getDstMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CpAsyncOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange CpAsyncOp::getCpSizeMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CpAsyncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CpAsyncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult CpAsyncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.modifier;
       auto attr = dict.get("modifier");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for modifier in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modifier` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.size;
       auto attr = dict.get("size");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for size in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CpAsyncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.modifier;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modifier",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("size",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CpAsyncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.modifier.getAsOpaquePointer()), 
    llvm::hash_value(prop.size.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CpAsyncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "modifier")
      return prop.modifier;

    if (name == "size")
      return prop.size;
  return std::nullopt;
}

void CpAsyncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "modifier") {
       prop.modifier = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modifier)>>(value);
       return;
    }

    if (name == "size") {
       prop.size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.size)>>(value);
       return;
    }
}

void CpAsyncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.modifier) attrs.append("modifier", prop.modifier);

    if (prop.size) attrs.append("size", prop.size);
}

::mlir::LogicalResult CpAsyncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getModifierAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps1(attr, "modifier", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "size", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CpAsyncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.modifier)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.size)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CpAsyncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.modifier);
  writer.writeAttribute(prop.size);
}

::mlir::IntegerAttr CpAsyncOp::getSizeAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().size);
}

uint32_t CpAsyncOp::getSize() {
  auto attr = getSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::LoadCacheModifierKindAttr CpAsyncOp::getModifierAttr() {
  return ::llvm::cast<::mlir::NVVM::LoadCacheModifierKindAttr>(getProperties().modifier);
}

::mlir::NVVM::LoadCacheModifierKind CpAsyncOp::getModifier() {
  auto attr = getModifierAttr();
  return attr.getValue();
}

void CpAsyncOp::setSizeAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSizeAttrName(), attr);
}

void CpAsyncOp::setSize(uint32_t attrValue) {
  (*this)->setAttr(getSizeAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void CpAsyncOp::setModifierAttr(::mlir::NVVM::LoadCacheModifierKindAttr attr) {
  (*this)->setAttr(getModifierAttrName(), attr);
}

void CpAsyncOp::setModifier(::mlir::NVVM::LoadCacheModifierKind attrValue) {
  (*this)->setAttr(getModifierAttrName(), ::mlir::NVVM::LoadCacheModifierKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CpAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value src, ::mlir::IntegerAttr size, ::mlir::NVVM::LoadCacheModifierKindAttr modifier, /*optional*/::mlir::Value cpSize) {
  odsState.addOperands(dst);
  odsState.addOperands(src);
  if (cpSize)
    odsState.addOperands(cpSize);
  odsState.getOrAddProperties<Properties>().size = size;
  odsState.getOrAddProperties<Properties>().modifier = modifier;
}

void CpAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value src, ::mlir::IntegerAttr size, ::mlir::NVVM::LoadCacheModifierKindAttr modifier, /*optional*/::mlir::Value cpSize) {
  odsState.addOperands(dst);
  odsState.addOperands(src);
  if (cpSize)
    odsState.addOperands(cpSize);
  odsState.getOrAddProperties<Properties>().size = size;
  odsState.getOrAddProperties<Properties>().modifier = modifier;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CpAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value src, uint32_t size, ::mlir::NVVM::LoadCacheModifierKind modifier, /*optional*/::mlir::Value cpSize) {
  odsState.addOperands(dst);
  odsState.addOperands(src);
  if (cpSize)
    odsState.addOperands(cpSize);
  odsState.getOrAddProperties<Properties>().size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), size);
  odsState.getOrAddProperties<Properties>().modifier = ::mlir::NVVM::LoadCacheModifierKindAttr::get(odsBuilder.getContext(), modifier);
}

void CpAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value src, uint32_t size, ::mlir::NVVM::LoadCacheModifierKind modifier, /*optional*/::mlir::Value cpSize) {
  odsState.addOperands(dst);
  odsState.addOperands(src);
  if (cpSize)
    odsState.addOperands(cpSize);
  odsState.getOrAddProperties<Properties>().size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), size);
  odsState.getOrAddProperties<Properties>().modifier = ::mlir::NVVM::LoadCacheModifierKindAttr::get(odsBuilder.getContext(), modifier);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CpAsyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CpAsyncOp::verifyInvariantsImpl() {
  auto tblgen_modifier = getProperties().modifier; (void)tblgen_modifier;
  if (!tblgen_modifier) return emitOpError("requires attribute 'modifier'");
  auto tblgen_size = getProperties().size; (void)tblgen_size;
  if (!tblgen_size) return emitOpError("requires attribute 'size'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_size, "size")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps1(*this, tblgen_modifier, "modifier")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CpAsyncOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CpAsyncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand dstRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstOperands(dstRawOperands);  ::llvm::SMLoc dstOperandsLoc;
  (void)dstOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::IntegerAttr sizeAttr;
  ::mlir::NVVM::LoadCacheModifierKindAttr modifierAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> cpSizeOperands;
  ::llvm::SMLoc cpSizeOperandsLoc;
  (void)cpSizeOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  dstOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(sizeAttr, parser.getBuilder().getIntegerType(32))) {
    return ::mlir::failure();
  }
  if (sizeAttr) result.getOrAddProperties<CpAsyncOp::Properties>().size = sizeAttr;
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseKeyword("cache"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(modifierAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modifierAttr) result.getOrAddProperties<CpAsyncOp::Properties>().modifier = modifierAttr;
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    cpSizeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      cpSizeOperands.push_back(operand);
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(dstOperands, srcOperands, cpSizeOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CpAsyncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getDst();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getSizeAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ' << "cache";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getModifierAttr());
  if (getCpSize()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getCpSize())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("size");
  elidedAttrs.push_back("modifier");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

std::string CpAsyncOp::getPtx() { 
  if(getModifier() == NVVM::LoadCacheModifierKind::CG)
    return std::string("cp.async.cg.shared.global [%0], [%1], %2, %3;\n");
  if(getModifier() == NVVM::LoadCacheModifierKind::CA)
    return std::string("cp.async.ca.shared.global [%0], [%1], %2, %3;\n");
  llvm_unreachable("unsupported cache modifier");      
}
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::CpAsyncOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::CpAsyncWaitGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CpAsyncWaitGroupOpGenericAdaptorBase::CpAsyncWaitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.cp.async.wait.group", odsAttrs.getContext());
}

CpAsyncWaitGroupOpGenericAdaptorBase::CpAsyncWaitGroupOpGenericAdaptorBase(CpAsyncWaitGroupOp op) : CpAsyncWaitGroupOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CpAsyncWaitGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CpAsyncWaitGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr CpAsyncWaitGroupOpGenericAdaptorBase::getNAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
  return attr;
}

uint32_t CpAsyncWaitGroupOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
CpAsyncWaitGroupOpAdaptor::CpAsyncWaitGroupOpAdaptor(CpAsyncWaitGroupOp op) : CpAsyncWaitGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CpAsyncWaitGroupOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'nvvm.cp.async.wait.group' op ""requires attribute 'n'");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.cp.async.wait.group' op ""attribute 'n' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CpAsyncWaitGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CpAsyncWaitGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CpAsyncWaitGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CpAsyncWaitGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult CpAsyncWaitGroupOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for n in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CpAsyncWaitGroupOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CpAsyncWaitGroupOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.n.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CpAsyncWaitGroupOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "n")
      return prop.n;
  return std::nullopt;
}

void CpAsyncWaitGroupOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }
}

void CpAsyncWaitGroupOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.n) attrs.append("n", prop.n);
}

::mlir::LogicalResult CpAsyncWaitGroupOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "n", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CpAsyncWaitGroupOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CpAsyncWaitGroupOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.n);
}

::mlir::IntegerAttr CpAsyncWaitGroupOp::getNAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
}

uint32_t CpAsyncWaitGroupOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

void CpAsyncWaitGroupOp::setNAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNAttrName(), attr);
}

void CpAsyncWaitGroupOp::setN(uint32_t attrValue) {
  (*this)->setAttr(getNAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void CpAsyncWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr n) {
  odsState.getOrAddProperties<Properties>().n = n;
}

void CpAsyncWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr n) {
  odsState.getOrAddProperties<Properties>().n = n;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CpAsyncWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t n) {
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
}

void CpAsyncWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t n) {
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CpAsyncWaitGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CpAsyncWaitGroupOp::verifyInvariantsImpl() {
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_n, "n")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult CpAsyncWaitGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CpAsyncWaitGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr nAttr;

  if (parser.parseCustomAttributeWithFallback(nAttr, parser.getBuilder().getIntegerType(32))) {
    return ::mlir::failure();
  }
  if (nAttr) result.getOrAddProperties<CpAsyncWaitGroupOp::Properties>().n = nAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void CpAsyncWaitGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getNAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("n");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::CpAsyncWaitGroupOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ElectSyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ElectSyncOpGenericAdaptorBase::ElectSyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.elect.sync", odsAttrs.getContext());
}

ElectSyncOpGenericAdaptorBase::ElectSyncOpGenericAdaptorBase(ElectSyncOp op) : ElectSyncOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ElectSyncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ElectSyncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ElectSyncOpAdaptor::ElectSyncOpAdaptor(ElectSyncOp op) : ElectSyncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ElectSyncOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ElectSyncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ElectSyncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ElectSyncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ElectSyncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> ElectSyncOp::getPred() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
}

void ElectSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pred) {
  odsState.addTypes(pred);
}

void ElectSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ElectSyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ElectSyncOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ElectSyncOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ElectSyncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  return ::mlir::success();
}

void ElectSyncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

std::string ElectSyncOp::getPtx() { 
  return std::string(
    "{                                  \n"
    ".reg .u32 rx;                      \n"
    ".reg .pred px;                     \n"
    " mov.u32 %0, 0;                    \n"
    "    elect.sync rx | px, 0xFFFFFFFF;\n"
    "@px mov.u32 %0, 1;                 \n"
    "}\n"
  ); 
}
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ElectSyncOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::FenceScClusterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FenceScClusterOpGenericAdaptorBase::FenceScClusterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.fence.sc.cluster", odsAttrs.getContext());
}

FenceScClusterOpGenericAdaptorBase::FenceScClusterOpGenericAdaptorBase(FenceScClusterOp op) : FenceScClusterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FenceScClusterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FenceScClusterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FenceScClusterOpAdaptor::FenceScClusterOpAdaptor(FenceScClusterOp op) : FenceScClusterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FenceScClusterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FenceScClusterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FenceScClusterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> FenceScClusterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FenceScClusterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FenceScClusterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void FenceScClusterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FenceScClusterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FenceScClusterOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult FenceScClusterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FenceScClusterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void FenceScClusterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::FenceScClusterOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::GridDimXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridDimXOpGenericAdaptorBase::GridDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.nctaid.x", odsAttrs.getContext());
}

GridDimXOpGenericAdaptorBase::GridDimXOpGenericAdaptorBase(GridDimXOp op) : GridDimXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridDimXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridDimXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridDimXOpAdaptor::GridDimXOpAdaptor(GridDimXOp op) : GridDimXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridDimXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridDimXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridDimXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridDimXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridDimXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridDimXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridDimXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::GridDimXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::GridDimYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridDimYOpGenericAdaptorBase::GridDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.nctaid.y", odsAttrs.getContext());
}

GridDimYOpGenericAdaptorBase::GridDimYOpGenericAdaptorBase(GridDimYOp op) : GridDimYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridDimYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridDimYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridDimYOpAdaptor::GridDimYOpAdaptor(GridDimYOp op) : GridDimYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridDimYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridDimYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridDimYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridDimYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridDimYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridDimYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridDimYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::GridDimYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::GridDimZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridDimZOpGenericAdaptorBase::GridDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.nctaid.z", odsAttrs.getContext());
}

GridDimZOpGenericAdaptorBase::GridDimZOpGenericAdaptorBase(GridDimZOp op) : GridDimZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridDimZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridDimZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridDimZOpAdaptor::GridDimZOpAdaptor(GridDimZOp op) : GridDimZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridDimZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridDimZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridDimZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridDimZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridDimZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridDimZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridDimZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::GridDimZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::GridInClusterDimXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridInClusterDimXOpGenericAdaptorBase::GridInClusterDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.nctaid.x", odsAttrs.getContext());
}

GridInClusterDimXOpGenericAdaptorBase::GridInClusterDimXOpGenericAdaptorBase(GridInClusterDimXOp op) : GridInClusterDimXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridInClusterDimXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridInClusterDimXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridInClusterDimXOpAdaptor::GridInClusterDimXOpAdaptor(GridInClusterDimXOp op) : GridInClusterDimXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridInClusterDimXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridInClusterDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridInClusterDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridInClusterDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridInClusterDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridInClusterDimXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridInClusterDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridInClusterDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridInClusterDimXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridInClusterDimXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridInClusterDimXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridInClusterDimXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridInClusterDimXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridInClusterDimXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::GridInClusterDimXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::GridInClusterDimYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridInClusterDimYOpGenericAdaptorBase::GridInClusterDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.nctaid.y", odsAttrs.getContext());
}

GridInClusterDimYOpGenericAdaptorBase::GridInClusterDimYOpGenericAdaptorBase(GridInClusterDimYOp op) : GridInClusterDimYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridInClusterDimYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridInClusterDimYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridInClusterDimYOpAdaptor::GridInClusterDimYOpAdaptor(GridInClusterDimYOp op) : GridInClusterDimYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridInClusterDimYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridInClusterDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridInClusterDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridInClusterDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridInClusterDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridInClusterDimYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridInClusterDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridInClusterDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridInClusterDimYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridInClusterDimYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridInClusterDimYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridInClusterDimYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridInClusterDimYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridInClusterDimYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::GridInClusterDimYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::GridInClusterDimZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridInClusterDimZOpGenericAdaptorBase::GridInClusterDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.cluster.nctaid.z", odsAttrs.getContext());
}

GridInClusterDimZOpGenericAdaptorBase::GridInClusterDimZOpGenericAdaptorBase(GridInClusterDimZOp op) : GridInClusterDimZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridInClusterDimZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridInClusterDimZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridInClusterDimZOpAdaptor::GridInClusterDimZOpAdaptor(GridInClusterDimZOp op) : GridInClusterDimZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridInClusterDimZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridInClusterDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridInClusterDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridInClusterDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridInClusterDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridInClusterDimZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridInClusterDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridInClusterDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridInClusterDimZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridInClusterDimZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridInClusterDimZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridInClusterDimZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridInClusterDimZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridInClusterDimZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::GridInClusterDimZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::LaneIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LaneIdOpGenericAdaptorBase::LaneIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.laneid", odsAttrs.getContext());
}

LaneIdOpGenericAdaptorBase::LaneIdOpGenericAdaptorBase(LaneIdOp op) : LaneIdOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LaneIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LaneIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LaneIdOpAdaptor::LaneIdOpAdaptor(LaneIdOp op) : LaneIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LaneIdOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LaneIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LaneIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> LaneIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LaneIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LaneIdOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void LaneIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void LaneIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LaneIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LaneIdOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LaneIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LaneIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void LaneIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void LaneIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::LaneIdOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::LdMatrixOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LdMatrixOpGenericAdaptorBase::LdMatrixOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.ldmatrix", odsAttrs.getContext());
}

LdMatrixOpGenericAdaptorBase::LdMatrixOpGenericAdaptorBase(LdMatrixOp op) : LdMatrixOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LdMatrixOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LdMatrixOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr LdMatrixOpGenericAdaptorBase::getNumAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().num);
  return attr;
}

uint32_t LdMatrixOpGenericAdaptorBase::getNum() {
  auto attr = getNumAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr LdMatrixOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::NVVM::MMALayout LdMatrixOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
LdMatrixOpAdaptor::LdMatrixOpAdaptor(LdMatrixOp op) : LdMatrixOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LdMatrixOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;
  if (!tblgen_layout) return emitError(loc, "'nvvm.ldmatrix' op ""requires attribute 'layout'");
  auto tblgen_num = getProperties().num; (void)tblgen_num;
  if (!tblgen_num) return emitError(loc, "'nvvm.ldmatrix' op ""requires attribute 'num'");

  if (tblgen_num && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.ldmatrix' op ""attribute 'num' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_layout && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layout))))
    return emitError(loc, "'nvvm.ldmatrix' op ""attribute 'layout' failed to satisfy constraint: NVVM MMA layout");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LdMatrixOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LdMatrixOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> LdMatrixOp::getPtr() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LdMatrixOp::getPtrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LdMatrixOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LdMatrixOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LdMatrixOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult LdMatrixOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.num;
       auto attr = dict.get("num");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for num in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `num` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LdMatrixOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.num;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LdMatrixOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()), 
    llvm::hash_value(prop.num.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LdMatrixOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;

    if (name == "num")
      return prop.num;
  return std::nullopt;
}

void LdMatrixOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }

    if (name == "num") {
       prop.num = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num)>>(value);
       return;
    }
}

void LdMatrixOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);

    if (prop.num) attrs.append("num", prop.num);
}

::mlir::LogicalResult LdMatrixOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layout", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNumAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "num", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LdMatrixOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.layout)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.num)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LdMatrixOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.layout);
  writer.writeAttribute(prop.num);
}

::mlir::IntegerAttr LdMatrixOp::getNumAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().num);
}

uint32_t LdMatrixOp::getNum() {
  auto attr = getNumAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr LdMatrixOp::getLayoutAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layout);
}

::mlir::NVVM::MMALayout LdMatrixOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void LdMatrixOp::setNumAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumAttrName(), attr);
}

void LdMatrixOp::setNum(uint32_t attrValue) {
  (*this)->setAttr(getNumAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void LdMatrixOp::setLayoutAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void LdMatrixOp::setLayout(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value ptr, ::mlir::IntegerAttr num, ::mlir::NVVM::MMALayoutAttr layout) {
  odsState.addOperands(ptr);
  odsState.getOrAddProperties<Properties>().num = num;
  odsState.getOrAddProperties<Properties>().layout = layout;
  odsState.addTypes(res);
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ptr, ::mlir::IntegerAttr num, ::mlir::NVVM::MMALayoutAttr layout) {
  odsState.addOperands(ptr);
  odsState.getOrAddProperties<Properties>().num = num;
  odsState.getOrAddProperties<Properties>().layout = layout;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value ptr, uint32_t num, ::mlir::NVVM::MMALayout layout) {
  odsState.addOperands(ptr);
  odsState.getOrAddProperties<Properties>().num = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), num);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.addTypes(res);
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ptr, uint32_t num, ::mlir::NVVM::MMALayout layout) {
  odsState.addOperands(ptr);
  odsState.getOrAddProperties<Properties>().num = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), num);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LdMatrixOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LdMatrixOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;
  if (!tblgen_layout) return emitOpError("requires attribute 'layout'");
  auto tblgen_num = getProperties().num; (void)tblgen_num;
  if (!tblgen_num) return emitOpError("requires attribute 'num'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_num, "num")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LdMatrixOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult LdMatrixOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand ptrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> ptrOperands(ptrRawOperands);  ::llvm::SMLoc ptrOperandsLoc;
  (void)ptrOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> ptrTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  ptrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(ptrRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType ptr__res_functionType;
  if (parser.parseType(ptr__res_functionType))
    return ::mlir::failure();
  ptrTypes = ptr__res_functionType.getInputs();
  resTypes = ptr__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(ptrOperands, ptrTypes, ptrOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LdMatrixOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getPtr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getPtr().getType()), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::LdMatrixOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierArriveExpectTxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveExpectTxOpGenericAdaptorBase::MBarrierArriveExpectTxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.arrive.expect_tx", odsAttrs.getContext());
}

MBarrierArriveExpectTxOpGenericAdaptorBase::MBarrierArriveExpectTxOpGenericAdaptorBase(MBarrierArriveExpectTxOp op) : MBarrierArriveExpectTxOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveExpectTxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveExpectTxOpAdaptor::MBarrierArriveExpectTxOpAdaptor(MBarrierArriveExpectTxOp op) : MBarrierArriveExpectTxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveExpectTxOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveExpectTxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveExpectTxOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierArriveExpectTxOp::getTxcount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierArriveExpectTxOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveExpectTxOp::getTxcountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveExpectTxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierArriveExpectTxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value txcount) {
  odsState.addOperands(addr);
  odsState.addOperands(txcount);
}

void MBarrierArriveExpectTxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value txcount) {
  odsState.addOperands(addr);
  odsState.addOperands(txcount);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveExpectTxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveExpectTxOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveExpectTxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveExpectTxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand txcountRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> txcountOperands(txcountRawOperands);  ::llvm::SMLoc txcountOperandsLoc;
  (void)txcountOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  txcountOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(txcountRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, txcountOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveExpectTxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTxcount();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

std::string MBarrierArriveExpectTxOp::getPtx() { return std::string("mbarrier.arrive.expect_tx.b64 _, [%0], %1;"); }
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierArriveExpectTxOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierArriveExpectTxSharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveExpectTxSharedOpGenericAdaptorBase::MBarrierArriveExpectTxSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.arrive.expect_tx.shared", odsAttrs.getContext());
}

MBarrierArriveExpectTxSharedOpGenericAdaptorBase::MBarrierArriveExpectTxSharedOpGenericAdaptorBase(MBarrierArriveExpectTxSharedOp op) : MBarrierArriveExpectTxSharedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxSharedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveExpectTxSharedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveExpectTxSharedOpAdaptor::MBarrierArriveExpectTxSharedOpAdaptor(MBarrierArriveExpectTxSharedOp op) : MBarrierArriveExpectTxSharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveExpectTxSharedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxSharedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveExpectTxSharedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveExpectTxSharedOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierArriveExpectTxSharedOp::getTxcount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierArriveExpectTxSharedOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveExpectTxSharedOp::getTxcountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxSharedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveExpectTxSharedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierArriveExpectTxSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value txcount) {
  odsState.addOperands(addr);
  odsState.addOperands(txcount);
}

void MBarrierArriveExpectTxSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value txcount) {
  odsState.addOperands(addr);
  odsState.addOperands(txcount);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveExpectTxSharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveExpectTxSharedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveExpectTxSharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveExpectTxSharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand txcountRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> txcountOperands(txcountRawOperands);  ::llvm::SMLoc txcountOperandsLoc;
  (void)txcountOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  txcountOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(txcountRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, txcountOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveExpectTxSharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTxcount();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

std::string MBarrierArriveExpectTxSharedOp::getPtx() { return std::string("mbarrier.arrive.expect_tx.shared.b64 _, [%0], %1;"); }
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierArriveExpectTxSharedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierArriveNocompleteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveNocompleteOpGenericAdaptorBase::MBarrierArriveNocompleteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.arrive.nocomplete", odsAttrs.getContext());
}

MBarrierArriveNocompleteOpGenericAdaptorBase::MBarrierArriveNocompleteOpGenericAdaptorBase(MBarrierArriveNocompleteOp op) : MBarrierArriveNocompleteOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveNocompleteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveNocompleteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveNocompleteOpAdaptor::MBarrierArriveNocompleteOpAdaptor(MBarrierArriveNocompleteOp op) : MBarrierArriveNocompleteOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveNocompleteOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveNocompleteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveNocompleteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveNocompleteOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierArriveNocompleteOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierArriveNocompleteOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveNocompleteOp::getCountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveNocompleteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveNocompleteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveNocompleteOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MBarrierArriveNocompleteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
  odsState.addTypes(res);
}

void MBarrierArriveNocompleteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveNocompleteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveNocompleteOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveNocompleteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveNocompleteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand countRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> countOperands(countRawOperands);  ::llvm::SMLoc countOperandsLoc;
  (void)countOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  countOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(countRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, countOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveNocompleteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCount();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierArriveNocompleteOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierArriveNocompleteSharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveNocompleteSharedOpGenericAdaptorBase::MBarrierArriveNocompleteSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.arrive.nocomplete.shared", odsAttrs.getContext());
}

MBarrierArriveNocompleteSharedOpGenericAdaptorBase::MBarrierArriveNocompleteSharedOpGenericAdaptorBase(MBarrierArriveNocompleteSharedOp op) : MBarrierArriveNocompleteSharedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveNocompleteSharedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveNocompleteSharedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveNocompleteSharedOpAdaptor::MBarrierArriveNocompleteSharedOpAdaptor(MBarrierArriveNocompleteSharedOp op) : MBarrierArriveNocompleteSharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveNocompleteSharedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveNocompleteSharedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveNocompleteSharedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveNocompleteSharedOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierArriveNocompleteSharedOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierArriveNocompleteSharedOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveNocompleteSharedOp::getCountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveNocompleteSharedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveNocompleteSharedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveNocompleteSharedOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MBarrierArriveNocompleteSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
  odsState.addTypes(res);
}

void MBarrierArriveNocompleteSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveNocompleteSharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveNocompleteSharedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveNocompleteSharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveNocompleteSharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand countRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> countOperands(countRawOperands);  ::llvm::SMLoc countOperandsLoc;
  (void)countOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  countOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(countRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, countOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveNocompleteSharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCount();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierArriveNocompleteSharedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierArriveOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveOpGenericAdaptorBase::MBarrierArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.arrive", odsAttrs.getContext());
}

MBarrierArriveOpGenericAdaptorBase::MBarrierArriveOpGenericAdaptorBase(MBarrierArriveOp op) : MBarrierArriveOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveOpAdaptor::MBarrierArriveOpAdaptor(MBarrierArriveOp op) : MBarrierArriveOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &MBarrierArriveOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MBarrierArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value addr) {
  odsState.addOperands(addr);
  odsState.addTypes(res);
}

void MBarrierArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr) {
  odsState.addOperands(addr);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::Type addrRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> addrTypes(addrRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    addrRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(addrOperands, addrTypes, addrOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getAddr().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierArriveOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierArriveSharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveSharedOpGenericAdaptorBase::MBarrierArriveSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.arrive.shared", odsAttrs.getContext());
}

MBarrierArriveSharedOpGenericAdaptorBase::MBarrierArriveSharedOpGenericAdaptorBase(MBarrierArriveSharedOp op) : MBarrierArriveSharedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveSharedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveSharedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveSharedOpAdaptor::MBarrierArriveSharedOpAdaptor(MBarrierArriveSharedOp op) : MBarrierArriveSharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveSharedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveSharedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveSharedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveSharedOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &MBarrierArriveSharedOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveSharedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveSharedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierArriveSharedOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MBarrierArriveSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value addr) {
  odsState.addOperands(addr);
  odsState.addTypes(res);
}

void MBarrierArriveSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr) {
  odsState.addOperands(addr);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveSharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveSharedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveSharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveSharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::Type addrRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> addrTypes(addrRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    addrRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(addrOperands, addrTypes, addrOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveSharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getAddr().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierArriveSharedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierInitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierInitOpGenericAdaptorBase::MBarrierInitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.init", odsAttrs.getContext());
}

MBarrierInitOpGenericAdaptorBase::MBarrierInitOpGenericAdaptorBase(MBarrierInitOp op) : MBarrierInitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierInitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierInitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierInitOpAdaptor::MBarrierInitOpAdaptor(MBarrierInitOp op) : MBarrierInitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierInitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierInitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierInitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierInitOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierInitOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierInitOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierInitOp::getCountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierInitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierInitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
}

void MBarrierInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierInitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierInitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierInitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierInitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand countRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> countOperands(countRawOperands);  ::llvm::SMLoc countOperandsLoc;
  (void)countOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  countOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(countRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, countOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierInitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCount();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierInitOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierInitSharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierInitSharedOpGenericAdaptorBase::MBarrierInitSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.init.shared", odsAttrs.getContext());
}

MBarrierInitSharedOpGenericAdaptorBase::MBarrierInitSharedOpGenericAdaptorBase(MBarrierInitSharedOp op) : MBarrierInitSharedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierInitSharedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierInitSharedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierInitSharedOpAdaptor::MBarrierInitSharedOpAdaptor(MBarrierInitSharedOp op) : MBarrierInitSharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierInitSharedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierInitSharedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierInitSharedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierInitSharedOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierInitSharedOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierInitSharedOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierInitSharedOp::getCountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierInitSharedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierInitSharedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierInitSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
}

void MBarrierInitSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value count) {
  odsState.addOperands(addr);
  odsState.addOperands(count);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierInitSharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierInitSharedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierInitSharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierInitSharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand countRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> countOperands(countRawOperands);  ::llvm::SMLoc countOperandsLoc;
  (void)countOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  countOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(countRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, countOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierInitSharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCount();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierInitSharedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierInvalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierInvalOpGenericAdaptorBase::MBarrierInvalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.inval", odsAttrs.getContext());
}

MBarrierInvalOpGenericAdaptorBase::MBarrierInvalOpGenericAdaptorBase(MBarrierInvalOp op) : MBarrierInvalOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierInvalOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierInvalOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierInvalOpAdaptor::MBarrierInvalOpAdaptor(MBarrierInvalOp op) : MBarrierInvalOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierInvalOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierInvalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierInvalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierInvalOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &MBarrierInvalOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierInvalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierInvalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierInvalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr) {
  odsState.addOperands(addr);
}

void MBarrierInvalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr) {
  odsState.addOperands(addr);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierInvalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierInvalOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierInvalOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierInvalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(addrOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierInvalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierInvalOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierInvalSharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierInvalSharedOpGenericAdaptorBase::MBarrierInvalSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.inval.shared", odsAttrs.getContext());
}

MBarrierInvalSharedOpGenericAdaptorBase::MBarrierInvalSharedOpGenericAdaptorBase(MBarrierInvalSharedOp op) : MBarrierInvalSharedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierInvalSharedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierInvalSharedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierInvalSharedOpAdaptor::MBarrierInvalSharedOpAdaptor(MBarrierInvalSharedOp op) : MBarrierInvalSharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierInvalSharedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierInvalSharedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierInvalSharedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierInvalSharedOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &MBarrierInvalSharedOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierInvalSharedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierInvalSharedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierInvalSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr) {
  odsState.addOperands(addr);
}

void MBarrierInvalSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr) {
  odsState.addOperands(addr);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierInvalSharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierInvalSharedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierInvalSharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierInvalSharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(addrOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierInvalSharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierInvalSharedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierTestWaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierTestWaitOpGenericAdaptorBase::MBarrierTestWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.test.wait", odsAttrs.getContext());
}

MBarrierTestWaitOpGenericAdaptorBase::MBarrierTestWaitOpGenericAdaptorBase(MBarrierTestWaitOp op) : MBarrierTestWaitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierTestWaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierTestWaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierTestWaitOpAdaptor::MBarrierTestWaitOpAdaptor(MBarrierTestWaitOp op) : MBarrierTestWaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierTestWaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierTestWaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierTestWaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierTestWaitOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MBarrierTestWaitOp::getState() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierTestWaitOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTestWaitOp::getStateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierTestWaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierTestWaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierTestWaitOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MBarrierTestWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value addr, ::mlir::Value state) {
  odsState.addOperands(addr);
  odsState.addOperands(state);
  odsState.addTypes(res);
}

void MBarrierTestWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value state) {
  odsState.addOperands(addr);
  odsState.addOperands(state);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierTestWaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierTestWaitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierTestWaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierTestWaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand stateRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> stateOperands(stateRawOperands);  ::llvm::SMLoc stateOperandsLoc;
  (void)stateOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  stateOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(stateRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, stateOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierTestWaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getState();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierTestWaitOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierTestWaitSharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierTestWaitSharedOpGenericAdaptorBase::MBarrierTestWaitSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.test.wait.shared", odsAttrs.getContext());
}

MBarrierTestWaitSharedOpGenericAdaptorBase::MBarrierTestWaitSharedOpGenericAdaptorBase(MBarrierTestWaitSharedOp op) : MBarrierTestWaitSharedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierTestWaitSharedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierTestWaitSharedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierTestWaitSharedOpAdaptor::MBarrierTestWaitSharedOpAdaptor(MBarrierTestWaitSharedOp op) : MBarrierTestWaitSharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierTestWaitSharedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierTestWaitSharedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierTestWaitSharedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierTestWaitSharedOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MBarrierTestWaitSharedOp::getState() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierTestWaitSharedOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTestWaitSharedOp::getStateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierTestWaitSharedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierTestWaitSharedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierTestWaitSharedOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MBarrierTestWaitSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value addr, ::mlir::Value state) {
  odsState.addOperands(addr);
  odsState.addOperands(state);
  odsState.addTypes(res);
}

void MBarrierTestWaitSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value state) {
  odsState.addOperands(addr);
  odsState.addOperands(state);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierTestWaitSharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierTestWaitSharedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierTestWaitSharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierTestWaitSharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand stateRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> stateOperands(stateRawOperands);  ::llvm::SMLoc stateOperandsLoc;
  (void)stateOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  stateOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(stateRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, stateOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierTestWaitSharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getState();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierTestWaitSharedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierTryWaitParityOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierTryWaitParityOpGenericAdaptorBase::MBarrierTryWaitParityOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.try_wait.parity", odsAttrs.getContext());
}

MBarrierTryWaitParityOpGenericAdaptorBase::MBarrierTryWaitParityOpGenericAdaptorBase(MBarrierTryWaitParityOp op) : MBarrierTryWaitParityOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierTryWaitParityOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierTryWaitParityOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierTryWaitParityOpAdaptor::MBarrierTryWaitParityOpAdaptor(MBarrierTryWaitParityOp op) : MBarrierTryWaitParityOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierTryWaitParityOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierTryWaitParityOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierTryWaitParityOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierTryWaitParityOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierTryWaitParityOp::getPhase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierTryWaitParityOp::getTicks() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MBarrierTryWaitParityOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTryWaitParityOp::getPhaseMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTryWaitParityOp::getTicksMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierTryWaitParityOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierTryWaitParityOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierTryWaitParityOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value phase, ::mlir::Value ticks) {
  odsState.addOperands(addr);
  odsState.addOperands(phase);
  odsState.addOperands(ticks);
}

void MBarrierTryWaitParityOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value phase, ::mlir::Value ticks) {
  odsState.addOperands(addr);
  odsState.addOperands(phase);
  odsState.addOperands(ticks);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierTryWaitParityOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierTryWaitParityOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierTryWaitParityOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierTryWaitParityOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand phaseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> phaseOperands(phaseRawOperands);  ::llvm::SMLoc phaseOperandsLoc;
  (void)phaseOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand ticksRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> ticksOperands(ticksRawOperands);  ::llvm::SMLoc ticksOperandsLoc;
  (void)ticksOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  phaseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(phaseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  ticksOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(ticksRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, phaseOperands, ticksOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierTryWaitParityOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getPhase();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTicks();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

std::string MBarrierTryWaitParityOp::getPtx() {
  return std::string(
    "{\n\t"
    ".reg .pred       P1; \n\t"
    "LAB_WAIT: \n\t"
    "mbarrier.try_wait.parity.b64 P1, [%0], %1, %2; \n\t"
    "@P1 bra.uni DONE; \n\t"
    "bra.uni     LAB_WAIT; \n\t"
    "DONE: \n\t"
    "}"
  ); 
}
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierTryWaitParityOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MBarrierTryWaitParitySharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierTryWaitParitySharedOpGenericAdaptorBase::MBarrierTryWaitParitySharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mbarrier.try_wait.parity.shared", odsAttrs.getContext());
}

MBarrierTryWaitParitySharedOpGenericAdaptorBase::MBarrierTryWaitParitySharedOpGenericAdaptorBase(MBarrierTryWaitParitySharedOp op) : MBarrierTryWaitParitySharedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierTryWaitParitySharedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierTryWaitParitySharedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierTryWaitParitySharedOpAdaptor::MBarrierTryWaitParitySharedOpAdaptor(MBarrierTryWaitParitySharedOp op) : MBarrierTryWaitParitySharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierTryWaitParitySharedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierTryWaitParitySharedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierTryWaitParitySharedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MBarrierTryWaitParitySharedOp::getAddr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierTryWaitParitySharedOp::getPhase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierTryWaitParitySharedOp::getTicks() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MBarrierTryWaitParitySharedOp::getAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTryWaitParitySharedOp::getPhaseMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTryWaitParitySharedOp::getTicksMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierTryWaitParitySharedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierTryWaitParitySharedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierTryWaitParitySharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value phase, ::mlir::Value ticks) {
  odsState.addOperands(addr);
  odsState.addOperands(phase);
  odsState.addOperands(ticks);
}

void MBarrierTryWaitParitySharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value phase, ::mlir::Value ticks) {
  odsState.addOperands(addr);
  odsState.addOperands(phase);
  odsState.addOperands(ticks);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierTryWaitParitySharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierTryWaitParitySharedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierTryWaitParitySharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierTryWaitParitySharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addrOperands(addrRawOperands);  ::llvm::SMLoc addrOperandsLoc;
  (void)addrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand phaseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> phaseOperands(phaseRawOperands);  ::llvm::SMLoc phaseOperandsLoc;
  (void)phaseOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand ticksRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> ticksOperands(ticksRawOperands);  ::llvm::SMLoc ticksOperandsLoc;
  (void)ticksOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  phaseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(phaseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  ticksOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(ticksRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(addrOperands, phaseOperands, ticksOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierTryWaitParitySharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAddr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getPhase();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTicks();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

std::string MBarrierTryWaitParitySharedOp::getPtx() {
  return std::string(
    "{\n\t"
    ".reg .pred       P1; \n\t"
    "LAB_WAIT: \n\t"
    "mbarrier.try_wait.parity.shared.b64 P1, [%0], %1, %2; \n\t"
    "@P1 bra.uni DONE; \n\t"
    "bra.uni     LAB_WAIT; \n\t"
    "DONE: \n\t"
    "}"
  ); 
}
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MBarrierTryWaitParitySharedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::MmaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MmaOpGenericAdaptorBase::MmaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.mma.sync", odsAttrs.getContext());
}

MmaOpGenericAdaptorBase::MmaOpGenericAdaptorBase(MmaOp op) : MmaOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MmaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr MmaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::NVVM::MMAShapeAttr MmaOpGenericAdaptorBase::getShapeAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(getProperties().shape);
  return attr;
}

::mlir::NVVM::MMAShapeAttr MmaOpGenericAdaptorBase::getShape() {
  auto attr = getShapeAttr();
  return ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(attr);
}

::mlir::NVVM::MMAB1OpAttr MmaOpGenericAdaptorBase::getB1OpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::NVVM::MMAB1OpAttr>(getProperties().b1Op);
  return attr;
}

::std::optional<::mlir::NVVM::MMAB1Op> MmaOpGenericAdaptorBase::getB1Op() {
  auto attr = getB1OpAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMAB1Op>(attr.getValue()) : (::std::nullopt);
}

::mlir::NVVM::MMAIntOverflowAttr MmaOpGenericAdaptorBase::getIntOverflowBehaviorAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::NVVM::MMAIntOverflowAttr>(getProperties().intOverflowBehavior);
  return attr;
}

::std::optional<::mlir::NVVM::MMAIntOverflow> MmaOpGenericAdaptorBase::getIntOverflowBehavior() {
  auto attr = getIntOverflowBehaviorAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMAIntOverflow>(attr.getValue()) : (::std::nullopt);
}

::mlir::NVVM::MMALayoutAttr MmaOpGenericAdaptorBase::getLayoutAAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutA);
  return attr;
}

::mlir::NVVM::MMALayout MmaOpGenericAdaptorBase::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr MmaOpGenericAdaptorBase::getLayoutBAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutB);
  return attr;
}

::mlir::NVVM::MMALayout MmaOpGenericAdaptorBase::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr MmaOpGenericAdaptorBase::getMultiplicandAPtxTypeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::NVVM::MMATypesAttr>(getProperties().multiplicandAPtxType);
  return attr;
}

::std::optional<::mlir::NVVM::MMATypes> MmaOpGenericAdaptorBase::getMultiplicandAPtxType() {
  auto attr = getMultiplicandAPtxTypeAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMATypes>(attr.getValue()) : (::std::nullopt);
}

::mlir::NVVM::MMATypesAttr MmaOpGenericAdaptorBase::getMultiplicandBPtxTypeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::NVVM::MMATypesAttr>(getProperties().multiplicandBPtxType);
  return attr;
}

::std::optional<::mlir::NVVM::MMATypes> MmaOpGenericAdaptorBase::getMultiplicandBPtxType() {
  auto attr = getMultiplicandBPtxTypeAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMATypes>(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
MmaOpAdaptor::MmaOpAdaptor(MmaOp op) : MmaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MmaOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_b1Op = getProperties().b1Op; (void)tblgen_b1Op;
  auto tblgen_intOverflowBehavior = getProperties().intOverflowBehavior; (void)tblgen_intOverflowBehavior;
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitError(loc, "'nvvm.mma.sync' op ""requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitError(loc, "'nvvm.mma.sync' op ""requires attribute 'layoutB'");
  auto tblgen_multiplicandAPtxType = getProperties().multiplicandAPtxType; (void)tblgen_multiplicandAPtxType;
  auto tblgen_multiplicandBPtxType = getProperties().multiplicandBPtxType; (void)tblgen_multiplicandBPtxType;
  auto tblgen_shape = getProperties().shape; (void)tblgen_shape;
  if (!tblgen_shape) return emitError(loc, "'nvvm.mma.sync' op ""requires attribute 'shape'");

  if (tblgen_shape && !((::llvm::isa<::mlir::NVVM::MMAShapeAttr>(tblgen_shape))))
    return emitError(loc, "'nvvm.mma.sync' op ""attribute 'shape' failed to satisfy constraint: Attribute for MMA operation shape.");

  if (tblgen_b1Op && !((::llvm::isa<::mlir::NVVM::MMAB1OpAttr>(tblgen_b1Op))))
    return emitError(loc, "'nvvm.mma.sync' op ""attribute 'b1Op' failed to satisfy constraint: MMA binary operations");

  if (tblgen_intOverflowBehavior && !((::llvm::isa<::mlir::NVVM::MMAIntOverflowAttr>(tblgen_intOverflowBehavior))))
    return emitError(loc, "'nvvm.mma.sync' op ""attribute 'intOverflowBehavior' failed to satisfy constraint: MMA overflow options");

  if (tblgen_layoutA && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layoutA))))
    return emitError(loc, "'nvvm.mma.sync' op ""attribute 'layoutA' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_layoutB && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layoutB))))
    return emitError(loc, "'nvvm.mma.sync' op ""attribute 'layoutB' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_multiplicandAPtxType && !((::llvm::isa<::mlir::NVVM::MMATypesAttr>(tblgen_multiplicandAPtxType))))
    return emitError(loc, "'nvvm.mma.sync' op ""attribute 'multiplicandAPtxType' failed to satisfy constraint: NVVM MMA types");

  if (tblgen_multiplicandBPtxType && !((::llvm::isa<::mlir::NVVM::MMATypesAttr>(tblgen_multiplicandBPtxType))))
    return emitError(loc, "'nvvm.mma.sync' op ""attribute 'multiplicandBPtxType' failed to satisfy constraint: NVVM MMA types");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MmaOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range MmaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MmaOp::getOperandA() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range MmaOp::getOperandB() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range MmaOp::getOperandC() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange MmaOp::getOperandAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange MmaOp::getOperandBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange MmaOp::getOperandCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> MmaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MmaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MmaOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MmaOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.b1Op;
       auto attr = dict.get("b1Op");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for b1Op in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `b1Op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.intOverflowBehavior;
       auto attr = dict.get("intOverflowBehavior");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for intOverflowBehavior in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `intOverflowBehavior` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutA;
       auto attr = dict.get("layoutA");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layoutA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutB;
       auto attr = dict.get("layoutB");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layoutB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.multiplicandAPtxType;
       auto attr = dict.get("multiplicandAPtxType");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for multiplicandAPtxType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `multiplicandAPtxType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.multiplicandBPtxType;
       auto attr = dict.get("multiplicandBPtxType");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for multiplicandBPtxType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `multiplicandBPtxType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.shape;
       auto attr = dict.get("shape");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for shape in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `shape` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute MmaOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.b1Op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("b1Op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.intOverflowBehavior;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("intOverflowBehavior",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.multiplicandAPtxType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("multiplicandAPtxType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.multiplicandBPtxType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("multiplicandBPtxType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.shape;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("shape",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MmaOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.b1Op.getAsOpaquePointer()), 
    llvm::hash_value(prop.intOverflowBehavior.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutA.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutB.getAsOpaquePointer()), 
    llvm::hash_value(prop.multiplicandAPtxType.getAsOpaquePointer()), 
    llvm::hash_value(prop.multiplicandBPtxType.getAsOpaquePointer()), 
    llvm::hash_value(prop.shape.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> MmaOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "b1Op")
      return prop.b1Op;

    if (name == "intOverflowBehavior")
      return prop.intOverflowBehavior;

    if (name == "layoutA")
      return prop.layoutA;

    if (name == "layoutB")
      return prop.layoutB;

    if (name == "multiplicandAPtxType")
      return prop.multiplicandAPtxType;

    if (name == "multiplicandBPtxType")
      return prop.multiplicandBPtxType;

    if (name == "shape")
      return prop.shape;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void MmaOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "b1Op") {
       prop.b1Op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.b1Op)>>(value);
       return;
    }

    if (name == "intOverflowBehavior") {
       prop.intOverflowBehavior = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.intOverflowBehavior)>>(value);
       return;
    }

    if (name == "layoutA") {
       prop.layoutA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutA)>>(value);
       return;
    }

    if (name == "layoutB") {
       prop.layoutB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutB)>>(value);
       return;
    }

    if (name == "multiplicandAPtxType") {
       prop.multiplicandAPtxType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.multiplicandAPtxType)>>(value);
       return;
    }

    if (name == "multiplicandBPtxType") {
       prop.multiplicandBPtxType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.multiplicandBPtxType)>>(value);
       return;
    }

    if (name == "shape") {
       prop.shape = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.shape)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void MmaOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.b1Op) attrs.append("b1Op", prop.b1Op);

    if (prop.intOverflowBehavior) attrs.append("intOverflowBehavior", prop.intOverflowBehavior);

    if (prop.layoutA) attrs.append("layoutA", prop.layoutA);

    if (prop.layoutB) attrs.append("layoutB", prop.layoutB);

    if (prop.multiplicandAPtxType) attrs.append("multiplicandAPtxType", prop.multiplicandAPtxType);

    if (prop.multiplicandBPtxType) attrs.append("multiplicandBPtxType", prop.multiplicandBPtxType);

    if (prop.shape) attrs.append("shape", prop.shape);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult MmaOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getB1OpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps4(attr, "b1Op", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIntOverflowBehaviorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps5(attr, "intOverflowBehavior", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layoutA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layoutB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMultiplicandAPtxTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(attr, "multiplicandAPtxType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMultiplicandBPtxTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(attr, "multiplicandBPtxType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getShapeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps3(attr, "shape", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MmaOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.b1Op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.intOverflowBehavior)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.multiplicandAPtxType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.multiplicandBPtxType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.shape)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  ::mlir::DenseI32ArrayAttr attr;
  if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
  if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
    reader.emitError("size mismatch for operand/result_segment_size");
    return ::mlir::failure();
  }
  ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
} else {
  return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
}
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void MmaOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.b1Op);

  writer.writeOptionalAttribute(prop.intOverflowBehavior);
  writer.writeAttribute(prop.layoutA);
  writer.writeAttribute(prop.layoutB);

  writer.writeOptionalAttribute(prop.multiplicandAPtxType);

  writer.writeOptionalAttribute(prop.multiplicandBPtxType);
  writer.writeAttribute(prop.shape);

  {
    auto &propStorage = prop.operandSegmentSizes;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6)
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(getContext(), propStorage));
else
  writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::NVVM::MMAShapeAttr MmaOp::getShapeAttr() {
  return ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(getProperties().shape);
}

::mlir::NVVM::MMAShapeAttr MmaOp::getShape() {
  auto attr = getShapeAttr();
  return ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(attr);
}

::mlir::NVVM::MMAB1OpAttr MmaOp::getB1OpAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::NVVM::MMAB1OpAttr>(getProperties().b1Op);
}

::std::optional<::mlir::NVVM::MMAB1Op> MmaOp::getB1Op() {
  auto attr = getB1OpAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMAB1Op>(attr.getValue()) : (::std::nullopt);
}

::mlir::NVVM::MMAIntOverflowAttr MmaOp::getIntOverflowBehaviorAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::NVVM::MMAIntOverflowAttr>(getProperties().intOverflowBehavior);
}

::std::optional<::mlir::NVVM::MMAIntOverflow> MmaOp::getIntOverflowBehavior() {
  auto attr = getIntOverflowBehaviorAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMAIntOverflow>(attr.getValue()) : (::std::nullopt);
}

::mlir::NVVM::MMALayoutAttr MmaOp::getLayoutAAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutA);
}

::mlir::NVVM::MMALayout MmaOp::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr MmaOp::getLayoutBAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutB);
}

::mlir::NVVM::MMALayout MmaOp::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr MmaOp::getMultiplicandAPtxTypeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::NVVM::MMATypesAttr>(getProperties().multiplicandAPtxType);
}

::std::optional<::mlir::NVVM::MMATypes> MmaOp::getMultiplicandAPtxType() {
  auto attr = getMultiplicandAPtxTypeAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMATypes>(attr.getValue()) : (::std::nullopt);
}

::mlir::NVVM::MMATypesAttr MmaOp::getMultiplicandBPtxTypeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::NVVM::MMATypesAttr>(getProperties().multiplicandBPtxType);
}

::std::optional<::mlir::NVVM::MMATypes> MmaOp::getMultiplicandBPtxType() {
  auto attr = getMultiplicandBPtxTypeAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMATypes>(attr.getValue()) : (::std::nullopt);
}

void MmaOp::setShapeAttr(::mlir::NVVM::MMAShapeAttr attr) {
  (*this)->setAttr(getShapeAttrName(), attr);
}

void MmaOp::setB1OpAttr(::mlir::NVVM::MMAB1OpAttr attr) {
  (*this)->setAttr(getB1OpAttrName(), attr);
}

void MmaOp::setB1Op(::std::optional<::mlir::NVVM::MMAB1Op> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getB1OpAttrName(), ::mlir::NVVM::MMAB1OpAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getB1OpAttrName());
}

void MmaOp::setIntOverflowBehaviorAttr(::mlir::NVVM::MMAIntOverflowAttr attr) {
  (*this)->setAttr(getIntOverflowBehaviorAttrName(), attr);
}

void MmaOp::setIntOverflowBehavior(::std::optional<::mlir::NVVM::MMAIntOverflow> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIntOverflowBehaviorAttrName(), ::mlir::NVVM::MMAIntOverflowAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getIntOverflowBehaviorAttrName());
}

void MmaOp::setLayoutAAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutAAttrName(), attr);
}

void MmaOp::setLayoutA(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutAAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MmaOp::setLayoutBAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutBAttrName(), attr);
}

void MmaOp::setLayoutB(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutBAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MmaOp::setMultiplicandAPtxTypeAttr(::mlir::NVVM::MMATypesAttr attr) {
  (*this)->setAttr(getMultiplicandAPtxTypeAttrName(), attr);
}

void MmaOp::setMultiplicandAPtxType(::std::optional<::mlir::NVVM::MMATypes> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMultiplicandAPtxTypeAttrName(), ::mlir::NVVM::MMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getMultiplicandAPtxTypeAttrName());
}

void MmaOp::setMultiplicandBPtxTypeAttr(::mlir::NVVM::MMATypesAttr attr) {
  (*this)->setAttr(getMultiplicandBPtxTypeAttrName(), attr);
}

void MmaOp::setMultiplicandBPtxType(::std::optional<::mlir::NVVM::MMATypes> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMultiplicandBPtxTypeAttrName(), ::mlir::NVVM::MMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getMultiplicandBPtxTypeAttrName());
}

::mlir::Attribute MmaOp::removeB1OpAttr() {
    auto &attr = getProperties().b1Op;
    attr = {};
    return attr;
}

::mlir::Attribute MmaOp::removeIntOverflowBehaviorAttr() {
    auto &attr = getProperties().intOverflowBehavior;
    attr = {};
    return attr;
}

::mlir::Attribute MmaOp::removeMultiplicandAPtxTypeAttr() {
    auto &attr = getProperties().multiplicandAPtxType;
    attr = {};
    return attr;
}

::mlir::Attribute MmaOp::removeMultiplicandBPtxTypeAttr() {
    auto &attr = getProperties().multiplicandBPtxType;
    attr = {};
    return attr;
}

void MmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::NVVM::MMAShapeAttr shape, /*optional*/::mlir::NVVM::MMAB1OpAttr b1Op, /*optional*/::mlir::NVVM::MMAIntOverflowAttr intOverflowBehavior, ::mlir::NVVM::MMALayoutAttr layoutA, ::mlir::NVVM::MMALayoutAttr layoutB, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandAPtxType, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandBPtxType, ::mlir::ValueRange operandA, ::mlir::ValueRange operandB, ::mlir::ValueRange operandC) {
  odsState.addOperands(operandA);
  odsState.addOperands(operandB);
  odsState.addOperands(operandC);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(operandA.size()), static_cast<int32_t>(operandB.size()), static_cast<int32_t>(operandC.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().shape = shape;
  if (b1Op) {
    odsState.getOrAddProperties<Properties>().b1Op = b1Op;
  }
  if (intOverflowBehavior) {
    odsState.getOrAddProperties<Properties>().intOverflowBehavior = intOverflowBehavior;
  }
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  if (multiplicandAPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandAPtxType = multiplicandAPtxType;
  }
  if (multiplicandBPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandBPtxType = multiplicandBPtxType;
  }
  odsState.addTypes(res);
}

void MmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::NVVM::MMAShapeAttr shape, /*optional*/::mlir::NVVM::MMAB1OpAttr b1Op, /*optional*/::mlir::NVVM::MMAIntOverflowAttr intOverflowBehavior, ::mlir::NVVM::MMALayoutAttr layoutA, ::mlir::NVVM::MMALayoutAttr layoutB, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandAPtxType, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandBPtxType, ::mlir::ValueRange operandA, ::mlir::ValueRange operandB, ::mlir::ValueRange operandC) {
  odsState.addOperands(operandA);
  odsState.addOperands(operandB);
  odsState.addOperands(operandC);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(operandA.size()), static_cast<int32_t>(operandB.size()), static_cast<int32_t>(operandC.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().shape = shape;
  if (b1Op) {
    odsState.getOrAddProperties<Properties>().b1Op = b1Op;
  }
  if (intOverflowBehavior) {
    odsState.getOrAddProperties<Properties>().intOverflowBehavior = intOverflowBehavior;
  }
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  if (multiplicandAPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandAPtxType = multiplicandAPtxType;
  }
  if (multiplicandBPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandBPtxType = multiplicandBPtxType;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::NVVM::MMAShapeAttr shape, /*optional*/::mlir::NVVM::MMAB1OpAttr b1Op, /*optional*/::mlir::NVVM::MMAIntOverflowAttr intOverflowBehavior, ::mlir::NVVM::MMALayout layoutA, ::mlir::NVVM::MMALayout layoutB, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandAPtxType, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandBPtxType, ::mlir::ValueRange operandA, ::mlir::ValueRange operandB, ::mlir::ValueRange operandC) {
  odsState.addOperands(operandA);
  odsState.addOperands(operandB);
  odsState.addOperands(operandC);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(operandA.size()), static_cast<int32_t>(operandB.size()), static_cast<int32_t>(operandC.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().shape = shape;
  if (b1Op) {
    odsState.getOrAddProperties<Properties>().b1Op = b1Op;
  }
  if (intOverflowBehavior) {
    odsState.getOrAddProperties<Properties>().intOverflowBehavior = intOverflowBehavior;
  }
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  if (multiplicandAPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandAPtxType = multiplicandAPtxType;
  }
  if (multiplicandBPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandBPtxType = multiplicandBPtxType;
  }
  odsState.addTypes(res);
}

void MmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::NVVM::MMAShapeAttr shape, /*optional*/::mlir::NVVM::MMAB1OpAttr b1Op, /*optional*/::mlir::NVVM::MMAIntOverflowAttr intOverflowBehavior, ::mlir::NVVM::MMALayout layoutA, ::mlir::NVVM::MMALayout layoutB, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandAPtxType, /*optional*/::mlir::NVVM::MMATypesAttr multiplicandBPtxType, ::mlir::ValueRange operandA, ::mlir::ValueRange operandB, ::mlir::ValueRange operandC) {
  odsState.addOperands(operandA);
  odsState.addOperands(operandB);
  odsState.addOperands(operandC);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(operandA.size()), static_cast<int32_t>(operandB.size()), static_cast<int32_t>(operandC.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().shape = shape;
  if (b1Op) {
    odsState.getOrAddProperties<Properties>().b1Op = b1Op;
  }
  if (intOverflowBehavior) {
    odsState.getOrAddProperties<Properties>().intOverflowBehavior = intOverflowBehavior;
  }
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  if (multiplicandAPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandAPtxType = multiplicandAPtxType;
  }
  if (multiplicandBPtxType) {
    odsState.getOrAddProperties<Properties>().multiplicandBPtxType = multiplicandBPtxType;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MmaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MmaOp::verifyInvariantsImpl() {
  auto tblgen_b1Op = getProperties().b1Op; (void)tblgen_b1Op;
  auto tblgen_intOverflowBehavior = getProperties().intOverflowBehavior; (void)tblgen_intOverflowBehavior;
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitOpError("requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitOpError("requires attribute 'layoutB'");
  auto tblgen_multiplicandAPtxType = getProperties().multiplicandAPtxType; (void)tblgen_multiplicandAPtxType;
  auto tblgen_multiplicandBPtxType = getProperties().multiplicandBPtxType; (void)tblgen_multiplicandBPtxType;
  auto tblgen_shape = getProperties().shape; (void)tblgen_shape;
  if (!tblgen_shape) return emitOpError("requires attribute 'shape'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps3(*this, tblgen_shape, "shape")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps4(*this, tblgen_b1Op, "b1Op")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps5(*this, tblgen_intOverflowBehavior, "intOverflowBehavior")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layoutA, "layoutA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layoutB, "layoutB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(*this, tblgen_multiplicandAPtxType, "multiplicandAPtxType")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(*this, tblgen_multiplicandBPtxType, "multiplicandBPtxType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MmaOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::MmaOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::RcpApproxFtzF32Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
RcpApproxFtzF32OpGenericAdaptorBase::RcpApproxFtzF32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.rcp.approx.ftz.f", odsAttrs.getContext());
}

RcpApproxFtzF32OpGenericAdaptorBase::RcpApproxFtzF32OpGenericAdaptorBase(RcpApproxFtzF32Op op) : RcpApproxFtzF32OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RcpApproxFtzF32OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RcpApproxFtzF32OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RcpApproxFtzF32OpAdaptor::RcpApproxFtzF32OpAdaptor(RcpApproxFtzF32Op op) : RcpApproxFtzF32OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RcpApproxFtzF32OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RcpApproxFtzF32Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RcpApproxFtzF32Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> RcpApproxFtzF32Op::getArg() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RcpApproxFtzF32Op::getArgMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RcpApproxFtzF32Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RcpApproxFtzF32Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> RcpApproxFtzF32Op::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSResults(0).begin());
}

void RcpApproxFtzF32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void RcpApproxFtzF32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RcpApproxFtzF32Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RcpApproxFtzF32Op::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RcpApproxFtzF32Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RcpApproxFtzF32Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand argRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> argOperands(argRawOperands);  ::llvm::SMLoc argOperandsLoc;
  (void)argOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  argOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(argRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::FloatType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getF32Type();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argOperands, odsBuildableType0, argOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RcpApproxFtzF32Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArg();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::FloatType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RcpApproxFtzF32Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::RcpApproxFtzF32Op)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ReduxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduxOpGenericAdaptorBase::ReduxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.redux.sync", odsAttrs.getContext());
}

ReduxOpGenericAdaptorBase::ReduxOpGenericAdaptorBase(ReduxOp op) : ReduxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::NVVM::ReduxKindAttr ReduxOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::ReduxKindAttr>(getProperties().kind);
  return attr;
}

::mlir::NVVM::ReduxKind ReduxOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

} // namespace detail
ReduxOpAdaptor::ReduxOpAdaptor(ReduxOp op) : ReduxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitError(loc, "'nvvm.redux.sync' op ""requires attribute 'kind'");

  if (tblgen_kind && !((::llvm::isa<::mlir::NVVM::ReduxKindAttr>(tblgen_kind))))
    return emitError(loc, "'nvvm.redux.sync' op ""attribute 'kind' failed to satisfy constraint: NVVM redux kind");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduxOp::getVal() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> ReduxOp::getMaskAndClamp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ReduxOp::getValMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ReduxOp::getMaskAndClampMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduxOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.kind;
       auto attr = dict.get("kind");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for kind in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `kind` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduxOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.kind.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "kind")
      return prop.kind;
  return std::nullopt;
}

void ReduxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }
}

void ReduxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.kind) attrs.append("kind", prop.kind);
}

::mlir::LogicalResult ReduxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps7(attr, "kind", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.kind)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.kind);
}

::mlir::NVVM::ReduxKindAttr ReduxOp::getKindAttr() {
  return ::llvm::cast<::mlir::NVVM::ReduxKindAttr>(getProperties().kind);
}

::mlir::NVVM::ReduxKind ReduxOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

void ReduxOp::setKindAttr(::mlir::NVVM::ReduxKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void ReduxOp::setKind(::mlir::NVVM::ReduxKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::NVVM::ReduxKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReduxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value val, ::mlir::NVVM::ReduxKindAttr kind, ::mlir::Value mask_and_clamp) {
  odsState.addOperands(val);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.addTypes(res);
}

void ReduxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value val, ::mlir::NVVM::ReduxKindAttr kind, ::mlir::Value mask_and_clamp) {
  odsState.addOperands(val);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = kind;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value val, ::mlir::NVVM::ReduxKind kind, ::mlir::Value mask_and_clamp) {
  odsState.addOperands(val);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::NVVM::ReduxKindAttr::get(odsBuilder.getContext(), kind);
  odsState.addTypes(res);
}

void ReduxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value val, ::mlir::NVVM::ReduxKind kind, ::mlir::Value mask_and_clamp) {
  odsState.addOperands(val);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::NVVM::ReduxKindAttr::get(odsBuilder.getContext(), kind);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReduxOp::verifyInvariantsImpl() {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitOpError("requires attribute 'kind'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps7(*this, tblgen_kind, "kind")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ReduxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::NVVM::ReduxKindAttr kindAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valOperands(valRawOperands);  ::llvm::SMLoc valOperandsLoc;
  (void)valOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mask_and_clampRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mask_and_clampOperands(mask_and_clampRawOperands);  ::llvm::SMLoc mask_and_clampOperandsLoc;
  (void)mask_and_clampOperandsLoc;
  ::mlir::Type valRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valTypes(valRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  if (parser.parseCustomAttributeWithFallback(kindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (kindAttr) result.getOrAddProperties<ReduxOp::Properties>().kind = kindAttr;

  valOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  mask_and_clampOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mask_and_clampRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(valOperands, valTypes, valOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mask_and_clampOperands, odsBuildableType0, mask_and_clampOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getKindAttr());
  _odsPrinter << ' ';
  _odsPrinter << getVal();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMaskAndClamp();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("kind");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVal().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ReduxOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ShflOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShflOpGenericAdaptorBase::ShflOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.shfl.sync", odsAttrs.getContext());
}

ShflOpGenericAdaptorBase::ShflOpGenericAdaptorBase(ShflOp op) : ShflOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShflOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShflOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::NVVM::ShflKindAttr ShflOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::ShflKindAttr>(getProperties().kind);
  return attr;
}

::mlir::NVVM::ShflKind ShflOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::UnitAttr ShflOpGenericAdaptorBase::getReturnValueAndIsValidAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().return_value_and_is_valid);
  return attr;
}

::std::optional<bool> ShflOpGenericAdaptorBase::getReturnValueAndIsValid() {
  auto attr = getReturnValueAndIsValidAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
ShflOpAdaptor::ShflOpAdaptor(ShflOp op) : ShflOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShflOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitError(loc, "'nvvm.shfl.sync' op ""requires attribute 'kind'");
  auto tblgen_return_value_and_is_valid = getProperties().return_value_and_is_valid; (void)tblgen_return_value_and_is_valid;

  if (tblgen_kind && !((::llvm::isa<::mlir::NVVM::ShflKindAttr>(tblgen_kind))))
    return emitError(loc, "'nvvm.shfl.sync' op ""attribute 'kind' failed to satisfy constraint: NVVM shuffle kind");

  if (tblgen_return_value_and_is_valid && !((::llvm::isa<::mlir::UnitAttr>(tblgen_return_value_and_is_valid))))
    return emitError(loc, "'nvvm.shfl.sync' op ""attribute 'return_value_and_is_valid' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShflOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShflOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> ShflOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::Value ShflOp::getVal() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> ShflOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> ShflOp::getMaskAndClamp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &ShflOp::getDstMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShflOp::getValMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShflOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShflOp::getMaskAndClampMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShflOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShflOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShflOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ShflOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.kind;
       auto attr = dict.get("kind");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for kind in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `kind` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.return_value_and_is_valid;
       auto attr = dict.get("return_value_and_is_valid");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for return_value_and_is_valid in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `return_value_and_is_valid` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ShflOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.return_value_and_is_valid;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("return_value_and_is_valid",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ShflOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.kind.getAsOpaquePointer()), 
    llvm::hash_value(prop.return_value_and_is_valid.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ShflOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "kind")
      return prop.kind;

    if (name == "return_value_and_is_valid")
      return prop.return_value_and_is_valid;
  return std::nullopt;
}

void ShflOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }

    if (name == "return_value_and_is_valid") {
       prop.return_value_and_is_valid = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.return_value_and_is_valid)>>(value);
       return;
    }
}

void ShflOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.kind) attrs.append("kind", prop.kind);

    if (prop.return_value_and_is_valid) attrs.append("return_value_and_is_valid", prop.return_value_and_is_valid);
}

::mlir::LogicalResult ShflOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps8(attr, "kind", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReturnValueAndIsValidAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps9(attr, "return_value_and_is_valid", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ShflOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.kind)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.return_value_and_is_valid)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShflOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.kind);

  writer.writeOptionalAttribute(prop.return_value_and_is_valid);
}

::mlir::NVVM::ShflKindAttr ShflOp::getKindAttr() {
  return ::llvm::cast<::mlir::NVVM::ShflKindAttr>(getProperties().kind);
}

::mlir::NVVM::ShflKind ShflOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::UnitAttr ShflOp::getReturnValueAndIsValidAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().return_value_and_is_valid);
}

::std::optional<bool> ShflOp::getReturnValueAndIsValid() {
  auto attr = getReturnValueAndIsValidAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void ShflOp::setKindAttr(::mlir::NVVM::ShflKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void ShflOp::setKind(::mlir::NVVM::ShflKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::NVVM::ShflKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ShflOp::setReturnValueAndIsValidAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getReturnValueAndIsValidAttrName(), attr);
}

void ShflOp::setReturnValueAndIsValid(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getReturnValueAndIsValidAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getReturnValueAndIsValidAttrName());
}

::mlir::Attribute ShflOp::removeReturnValueAndIsValidAttr() {
    auto &attr = getProperties().return_value_and_is_valid;
    attr = {};
    return attr;
}

void ShflOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value dst, ::mlir::Value val, ::mlir::Value offset, ::mlir::Value mask_and_clamp, ::mlir::NVVM::ShflKindAttr kind, /*optional*/::mlir::UnitAttr return_value_and_is_valid) {
  odsState.addOperands(dst);
  odsState.addOperands(val);
  odsState.addOperands(offset);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = kind;
  if (return_value_and_is_valid) {
    odsState.getOrAddProperties<Properties>().return_value_and_is_valid = return_value_and_is_valid;
  }
  odsState.addTypes(res);
}

void ShflOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value val, ::mlir::Value offset, ::mlir::Value mask_and_clamp, ::mlir::NVVM::ShflKindAttr kind, /*optional*/::mlir::UnitAttr return_value_and_is_valid) {
  odsState.addOperands(dst);
  odsState.addOperands(val);
  odsState.addOperands(offset);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = kind;
  if (return_value_and_is_valid) {
    odsState.getOrAddProperties<Properties>().return_value_and_is_valid = return_value_and_is_valid;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShflOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value dst, ::mlir::Value val, ::mlir::Value offset, ::mlir::Value mask_and_clamp, ::mlir::NVVM::ShflKind kind, /*optional*/::mlir::UnitAttr return_value_and_is_valid) {
  odsState.addOperands(dst);
  odsState.addOperands(val);
  odsState.addOperands(offset);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::NVVM::ShflKindAttr::get(odsBuilder.getContext(), kind);
  if (return_value_and_is_valid) {
    odsState.getOrAddProperties<Properties>().return_value_and_is_valid = return_value_and_is_valid;
  }
  odsState.addTypes(res);
}

void ShflOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value val, ::mlir::Value offset, ::mlir::Value mask_and_clamp, ::mlir::NVVM::ShflKind kind, /*optional*/::mlir::UnitAttr return_value_and_is_valid) {
  odsState.addOperands(dst);
  odsState.addOperands(val);
  odsState.addOperands(offset);
  odsState.addOperands(mask_and_clamp);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::NVVM::ShflKindAttr::get(odsBuilder.getContext(), kind);
  if (return_value_and_is_valid) {
    odsState.getOrAddProperties<Properties>().return_value_and_is_valid = return_value_and_is_valid;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShflOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShflOp::verifyInvariantsImpl() {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitOpError("requires attribute 'kind'");
  auto tblgen_return_value_and_is_valid = getProperties().return_value_and_is_valid; (void)tblgen_return_value_and_is_valid;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps8(*this, tblgen_kind, "kind")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps9(*this, tblgen_return_value_and_is_valid, "return_value_and_is_valid")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShflOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ShflOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::NVVM::ShflKindAttr kindAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dstRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstOperands(dstRawOperands);  ::llvm::SMLoc dstOperandsLoc;
  (void)dstOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valOperands(valRawOperands);  ::llvm::SMLoc valOperandsLoc;
  (void)valOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand offsetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> offsetOperands(offsetRawOperands);  ::llvm::SMLoc offsetOperandsLoc;
  (void)offsetOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mask_and_clampRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mask_and_clampOperands(mask_and_clampRawOperands);  ::llvm::SMLoc mask_and_clampOperandsLoc;
  (void)mask_and_clampOperandsLoc;
  ::mlir::Type valRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valTypes(valRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  if (parser.parseCustomAttributeWithFallback(kindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (kindAttr) result.getOrAddProperties<ShflOp::Properties>().kind = kindAttr;

  dstOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  offsetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(offsetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  mask_and_clampOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mask_and_clampRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(dstOperands, odsBuildableType0, dstOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valOperands, valTypes, valOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(offsetOperands, odsBuildableType0, offsetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mask_and_clampOperands, odsBuildableType0, mask_and_clampOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShflOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getKindAttr());
  _odsPrinter << ' ';
  _odsPrinter << getDst();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getVal();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOffset();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMaskAndClamp();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("kind");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVal().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ShflOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::SyncWarpOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SyncWarpOpGenericAdaptorBase::SyncWarpOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.bar.warp.sync", odsAttrs.getContext());
}

SyncWarpOpGenericAdaptorBase::SyncWarpOpGenericAdaptorBase(SyncWarpOp op) : SyncWarpOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SyncWarpOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SyncWarpOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SyncWarpOpAdaptor::SyncWarpOpAdaptor(SyncWarpOp op) : SyncWarpOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SyncWarpOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SyncWarpOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SyncWarpOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SyncWarpOp::getMask() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SyncWarpOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SyncWarpOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SyncWarpOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SyncWarpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mask) {
  odsState.addOperands(mask);
}

void SyncWarpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask) {
  odsState.addOperands(mask);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SyncWarpOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SyncWarpOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SyncWarpOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SyncWarpOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    maskRawTypes[0] = type;
  }
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SyncWarpOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMask().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::SyncWarpOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ThreadIdXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadIdXOpGenericAdaptorBase::ThreadIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.tid.x", odsAttrs.getContext());
}

ThreadIdXOpGenericAdaptorBase::ThreadIdXOpGenericAdaptorBase(ThreadIdXOp op) : ThreadIdXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadIdXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadIdXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ThreadIdXOpAdaptor::ThreadIdXOpAdaptor(ThreadIdXOp op) : ThreadIdXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadIdXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ThreadIdXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ThreadIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ThreadIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ThreadIdXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ThreadIdXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ThreadIdXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ThreadIdXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ThreadIdXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ThreadIdXOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ThreadIdYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadIdYOpGenericAdaptorBase::ThreadIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.tid.y", odsAttrs.getContext());
}

ThreadIdYOpGenericAdaptorBase::ThreadIdYOpGenericAdaptorBase(ThreadIdYOp op) : ThreadIdYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadIdYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadIdYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ThreadIdYOpAdaptor::ThreadIdYOpAdaptor(ThreadIdYOp op) : ThreadIdYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadIdYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ThreadIdYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ThreadIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ThreadIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ThreadIdYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ThreadIdYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ThreadIdYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ThreadIdYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ThreadIdYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ThreadIdYOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::ThreadIdZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadIdZOpGenericAdaptorBase::ThreadIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.tid.z", odsAttrs.getContext());
}

ThreadIdZOpGenericAdaptorBase::ThreadIdZOpGenericAdaptorBase(ThreadIdZOp op) : ThreadIdZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadIdZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadIdZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ThreadIdZOpAdaptor::ThreadIdZOpAdaptor(ThreadIdZOp op) : ThreadIdZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadIdZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ThreadIdZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ThreadIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ThreadIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ThreadIdZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ThreadIdZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ThreadIdZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ThreadIdZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ThreadIdZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::ThreadIdZOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::VoteBallotOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VoteBallotOpGenericAdaptorBase::VoteBallotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.vote.ballot.sync", odsAttrs.getContext());
}

VoteBallotOpGenericAdaptorBase::VoteBallotOpGenericAdaptorBase(VoteBallotOp op) : VoteBallotOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> VoteBallotOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VoteBallotOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
VoteBallotOpAdaptor::VoteBallotOpAdaptor(VoteBallotOp op) : VoteBallotOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult VoteBallotOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VoteBallotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VoteBallotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value VoteBallotOp::getMask() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value VoteBallotOp::getPred() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &VoteBallotOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &VoteBallotOp::getPredMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> VoteBallotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VoteBallotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value VoteBallotOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void VoteBallotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value pred) {
  odsState.addOperands(mask);
  odsState.addOperands(pred);
  odsState.addTypes(res);
}

void VoteBallotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value pred) {
  odsState.addOperands(mask);
  odsState.addOperands(pred);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VoteBallotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult VoteBallotOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult VoteBallotOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::VoteBallotOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WMMALoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WMMALoadOpGenericAdaptorBase::WMMALoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.wmma.load", odsAttrs.getContext());
}

WMMALoadOpGenericAdaptorBase::WMMALoadOpGenericAdaptorBase(WMMALoadOp op) : WMMALoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WMMALoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WMMALoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WMMALoadOpGenericAdaptorBase::getMAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
  return attr;
}

uint32_t WMMALoadOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMALoadOpGenericAdaptorBase::getNAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
  return attr;
}

uint32_t WMMALoadOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMALoadOpGenericAdaptorBase::getKAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
  return attr;
}

uint32_t WMMALoadOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr WMMALoadOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::NVVM::MMALayout WMMALoadOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMALoadOpGenericAdaptorBase::getEltypeAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltype);
  return attr;
}

::mlir::NVVM::MMATypes WMMALoadOpGenericAdaptorBase::getEltype() {
  auto attr = getEltypeAttr();
  return attr.getValue();
}

::mlir::NVVM::MMAFragAttr WMMALoadOpGenericAdaptorBase::getFragAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMAFragAttr>(getProperties().frag);
  return attr;
}

::mlir::NVVM::MMAFrag WMMALoadOpGenericAdaptorBase::getFrag() {
  auto attr = getFragAttr();
  return attr.getValue();
}

} // namespace detail
WMMALoadOpAdaptor::WMMALoadOpAdaptor(WMMALoadOp op) : WMMALoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WMMALoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_eltype = getProperties().eltype; (void)tblgen_eltype;
  if (!tblgen_eltype) return emitError(loc, "'nvvm.wmma.load' op ""requires attribute 'eltype'");
  auto tblgen_frag = getProperties().frag; (void)tblgen_frag;
  if (!tblgen_frag) return emitError(loc, "'nvvm.wmma.load' op ""requires attribute 'frag'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitError(loc, "'nvvm.wmma.load' op ""requires attribute 'k'");
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;
  if (!tblgen_layout) return emitError(loc, "'nvvm.wmma.load' op ""requires attribute 'layout'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'nvvm.wmma.load' op ""requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'nvvm.wmma.load' op ""requires attribute 'n'");

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.load' op ""attribute 'm' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.load' op ""attribute 'n' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.load' op ""attribute 'k' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_layout && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layout))))
    return emitError(loc, "'nvvm.wmma.load' op ""attribute 'layout' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_eltype && !((::llvm::isa<::mlir::NVVM::MMATypesAttr>(tblgen_eltype))))
    return emitError(loc, "'nvvm.wmma.load' op ""attribute 'eltype' failed to satisfy constraint: NVVM MMA types");

  if (tblgen_frag && !((::llvm::isa<::mlir::NVVM::MMAFragAttr>(tblgen_frag))))
    return emitError(loc, "'nvvm.wmma.load' op ""attribute 'frag' failed to satisfy constraint: NVVM MMA frag type");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WMMALoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WMMALoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> WMMALoadOp::getPtr() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> WMMALoadOp::getStride() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &WMMALoadOp::getPtrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WMMALoadOp::getStrideMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> WMMALoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WMMALoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WMMALoadOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult WMMALoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.eltype;
       auto attr = dict.get("eltype");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for eltype in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltype` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.frag;
       auto attr = dict.get("frag");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for frag in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `frag` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.k;
       auto attr = dict.get("k");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for k in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `k` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.m;
       auto attr = dict.get("m");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for m in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `m` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for n in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WMMALoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.eltype;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltype",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.frag;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("frag",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.k;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("k",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WMMALoadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.eltype.getAsOpaquePointer()), 
    llvm::hash_value(prop.frag.getAsOpaquePointer()), 
    llvm::hash_value(prop.k.getAsOpaquePointer()), 
    llvm::hash_value(prop.layout.getAsOpaquePointer()), 
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.n.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WMMALoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "eltype")
      return prop.eltype;

    if (name == "frag")
      return prop.frag;

    if (name == "k")
      return prop.k;

    if (name == "layout")
      return prop.layout;

    if (name == "m")
      return prop.m;

    if (name == "n")
      return prop.n;
  return std::nullopt;
}

void WMMALoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "eltype") {
       prop.eltype = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltype)>>(value);
       return;
    }

    if (name == "frag") {
       prop.frag = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.frag)>>(value);
       return;
    }

    if (name == "k") {
       prop.k = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.k)>>(value);
       return;
    }

    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }

    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }
}

void WMMALoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.eltype) attrs.append("eltype", prop.eltype);

    if (prop.frag) attrs.append("frag", prop.frag);

    if (prop.k) attrs.append("k", prop.k);

    if (prop.layout) attrs.append("layout", prop.layout);

    if (prop.m) attrs.append("m", prop.m);

    if (prop.n) attrs.append("n", prop.n);
}

::mlir::LogicalResult WMMALoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getEltypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(attr, "eltype", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFragAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps10(attr, "frag", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "k", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layout", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "n", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WMMALoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.eltype)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.frag)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.k)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layout)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMALoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.eltype);
  writer.writeAttribute(prop.frag);
  writer.writeAttribute(prop.k);
  writer.writeAttribute(prop.layout);
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.n);
}

::mlir::IntegerAttr WMMALoadOp::getMAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
}

uint32_t WMMALoadOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMALoadOp::getNAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
}

uint32_t WMMALoadOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMALoadOp::getKAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
}

uint32_t WMMALoadOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr WMMALoadOp::getLayoutAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layout);
}

::mlir::NVVM::MMALayout WMMALoadOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMALoadOp::getEltypeAttr() {
  return ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltype);
}

::mlir::NVVM::MMATypes WMMALoadOp::getEltype() {
  auto attr = getEltypeAttr();
  return attr.getValue();
}

::mlir::NVVM::MMAFragAttr WMMALoadOp::getFragAttr() {
  return ::llvm::cast<::mlir::NVVM::MMAFragAttr>(getProperties().frag);
}

::mlir::NVVM::MMAFrag WMMALoadOp::getFrag() {
  auto attr = getFragAttr();
  return attr.getValue();
}

void WMMALoadOp::setMAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMAttrName(), attr);
}

void WMMALoadOp::setM(uint32_t attrValue) {
  (*this)->setAttr(getMAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMALoadOp::setNAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNAttrName(), attr);
}

void WMMALoadOp::setN(uint32_t attrValue) {
  (*this)->setAttr(getNAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMALoadOp::setKAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getKAttrName(), attr);
}

void WMMALoadOp::setK(uint32_t attrValue) {
  (*this)->setAttr(getKAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMALoadOp::setLayoutAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void WMMALoadOp::setLayout(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMALoadOp::setEltypeAttr(::mlir::NVVM::MMATypesAttr attr) {
  (*this)->setAttr(getEltypeAttrName(), attr);
}

void WMMALoadOp::setEltype(::mlir::NVVM::MMATypes attrValue) {
  (*this)->setAttr(getEltypeAttrName(), ::mlir::NVVM::MMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMALoadOp::setFragAttr(::mlir::NVVM::MMAFragAttr attr) {
  (*this)->setAttr(getFragAttrName(), attr);
}

void WMMALoadOp::setFrag(::mlir::NVVM::MMAFrag attrValue) {
  (*this)->setAttr(getFragAttrName(), ::mlir::NVVM::MMAFragAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMALoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value ptr, ::mlir::Value stride, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::NVVM::MMALayoutAttr layout, ::mlir::NVVM::MMATypesAttr eltype, ::mlir::NVVM::MMAFragAttr frag) {
  odsState.addOperands(ptr);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().layout = layout;
  odsState.getOrAddProperties<Properties>().eltype = eltype;
  odsState.getOrAddProperties<Properties>().frag = frag;
  odsState.addTypes(res);
}

void WMMALoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ptr, ::mlir::Value stride, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::NVVM::MMALayoutAttr layout, ::mlir::NVVM::MMATypesAttr eltype, ::mlir::NVVM::MMAFragAttr frag) {
  odsState.addOperands(ptr);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().layout = layout;
  odsState.getOrAddProperties<Properties>().eltype = eltype;
  odsState.getOrAddProperties<Properties>().frag = frag;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMALoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value ptr, ::mlir::Value stride, uint32_t m, uint32_t n, uint32_t k, ::mlir::NVVM::MMALayout layout, ::mlir::NVVM::MMATypes eltype, ::mlir::NVVM::MMAFrag frag) {
  odsState.addOperands(ptr);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.getOrAddProperties<Properties>().eltype = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltype);
  odsState.getOrAddProperties<Properties>().frag = ::mlir::NVVM::MMAFragAttr::get(odsBuilder.getContext(), frag);
  odsState.addTypes(res);
}

void WMMALoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ptr, ::mlir::Value stride, uint32_t m, uint32_t n, uint32_t k, ::mlir::NVVM::MMALayout layout, ::mlir::NVVM::MMATypes eltype, ::mlir::NVVM::MMAFrag frag) {
  odsState.addOperands(ptr);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.getOrAddProperties<Properties>().eltype = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltype);
  odsState.getOrAddProperties<Properties>().frag = ::mlir::NVVM::MMAFragAttr::get(odsBuilder.getContext(), frag);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMALoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WMMALoadOp::verifyInvariantsImpl() {
  auto tblgen_eltype = getProperties().eltype; (void)tblgen_eltype;
  if (!tblgen_eltype) return emitOpError("requires attribute 'eltype'");
  auto tblgen_frag = getProperties().frag; (void)tblgen_frag;
  if (!tblgen_frag) return emitOpError("requires attribute 'frag'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitOpError("requires attribute 'k'");
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;
  if (!tblgen_layout) return emitOpError("requires attribute 'layout'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_n, "n")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_k, "k")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layout, "layout")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(*this, tblgen_eltype, "eltype")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps10(*this, tblgen_frag, "frag")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WMMALoadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WMMALoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand ptrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> ptrOperands(ptrRawOperands);  ::llvm::SMLoc ptrOperandsLoc;
  (void)ptrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand strideRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> strideOperands(strideRawOperands);  ::llvm::SMLoc strideOperandsLoc;
  (void)strideOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> ptrTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  ptrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(ptrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  strideOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(strideRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType ptr__res_functionType;
  if (parser.parseType(ptr__res_functionType))
    return ::mlir::failure();
  ptrTypes = ptr__res_functionType.getInputs();
  resTypes = ptr__res_functionType.getResults();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(ptrOperands, ptrTypes, ptrOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(strideOperands, odsBuildableType0, strideOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMALoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getPtr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getStride();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getPtr().getType()), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WMMALoadOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WMMAMmaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WMMAMmaOpGenericAdaptorBase::WMMAMmaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.wmma.mma", odsAttrs.getContext());
}

WMMAMmaOpGenericAdaptorBase::WMMAMmaOpGenericAdaptorBase(WMMAMmaOp op) : WMMAMmaOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WMMAMmaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr WMMAMmaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WMMAMmaOpGenericAdaptorBase::getMAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
  return attr;
}

uint32_t WMMAMmaOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAMmaOpGenericAdaptorBase::getNAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
  return attr;
}

uint32_t WMMAMmaOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAMmaOpGenericAdaptorBase::getKAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
  return attr;
}

uint32_t WMMAMmaOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr WMMAMmaOpGenericAdaptorBase::getLayoutAAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutA);
  return attr;
}

::mlir::NVVM::MMALayout WMMAMmaOpGenericAdaptorBase::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr WMMAMmaOpGenericAdaptorBase::getLayoutBAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutB);
  return attr;
}

::mlir::NVVM::MMALayout WMMAMmaOpGenericAdaptorBase::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMAMmaOpGenericAdaptorBase::getEltypeAAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltypeA);
  return attr;
}

::mlir::NVVM::MMATypes WMMAMmaOpGenericAdaptorBase::getEltypeA() {
  auto attr = getEltypeAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMAMmaOpGenericAdaptorBase::getEltypeBAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltypeB);
  return attr;
}

::mlir::NVVM::MMATypes WMMAMmaOpGenericAdaptorBase::getEltypeB() {
  auto attr = getEltypeBAttr();
  return attr.getValue();
}

} // namespace detail
WMMAMmaOpAdaptor::WMMAMmaOpAdaptor(WMMAMmaOp op) : WMMAMmaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WMMAMmaOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_eltypeA = getProperties().eltypeA; (void)tblgen_eltypeA;
  if (!tblgen_eltypeA) return emitError(loc, "'nvvm.wmma.mma' op ""requires attribute 'eltypeA'");
  auto tblgen_eltypeB = getProperties().eltypeB; (void)tblgen_eltypeB;
  if (!tblgen_eltypeB) return emitError(loc, "'nvvm.wmma.mma' op ""requires attribute 'eltypeB'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitError(loc, "'nvvm.wmma.mma' op ""requires attribute 'k'");
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitError(loc, "'nvvm.wmma.mma' op ""requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitError(loc, "'nvvm.wmma.mma' op ""requires attribute 'layoutB'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'nvvm.wmma.mma' op ""requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'nvvm.wmma.mma' op ""requires attribute 'n'");

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.mma' op ""attribute 'm' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.mma' op ""attribute 'n' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.mma' op ""attribute 'k' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_layoutA && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layoutA))))
    return emitError(loc, "'nvvm.wmma.mma' op ""attribute 'layoutA' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_layoutB && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layoutB))))
    return emitError(loc, "'nvvm.wmma.mma' op ""attribute 'layoutB' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_eltypeA && !((::llvm::isa<::mlir::NVVM::MMATypesAttr>(tblgen_eltypeA))))
    return emitError(loc, "'nvvm.wmma.mma' op ""attribute 'eltypeA' failed to satisfy constraint: NVVM MMA types");

  if (tblgen_eltypeB && !((::llvm::isa<::mlir::NVVM::MMATypesAttr>(tblgen_eltypeB))))
    return emitError(loc, "'nvvm.wmma.mma' op ""attribute 'eltypeB' failed to satisfy constraint: NVVM MMA types");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WMMAMmaOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range WMMAMmaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range WMMAMmaOp::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange WMMAMmaOp::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> WMMAMmaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WMMAMmaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WMMAMmaOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult WMMAMmaOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.eltypeA;
       auto attr = dict.get("eltypeA");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for eltypeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltypeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.eltypeB;
       auto attr = dict.get("eltypeB");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for eltypeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltypeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.k;
       auto attr = dict.get("k");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for k in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `k` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutA;
       auto attr = dict.get("layoutA");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layoutA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutB;
       auto attr = dict.get("layoutB");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layoutB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.m;
       auto attr = dict.get("m");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for m in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `m` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for n in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WMMAMmaOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.eltypeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltypeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.eltypeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltypeB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.k;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("k",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WMMAMmaOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.eltypeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.eltypeB.getAsOpaquePointer()), 
    llvm::hash_value(prop.k.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutA.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutB.getAsOpaquePointer()), 
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.n.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WMMAMmaOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "eltypeA")
      return prop.eltypeA;

    if (name == "eltypeB")
      return prop.eltypeB;

    if (name == "k")
      return prop.k;

    if (name == "layoutA")
      return prop.layoutA;

    if (name == "layoutB")
      return prop.layoutB;

    if (name == "m")
      return prop.m;

    if (name == "n")
      return prop.n;
  return std::nullopt;
}

void WMMAMmaOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "eltypeA") {
       prop.eltypeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltypeA)>>(value);
       return;
    }

    if (name == "eltypeB") {
       prop.eltypeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltypeB)>>(value);
       return;
    }

    if (name == "k") {
       prop.k = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.k)>>(value);
       return;
    }

    if (name == "layoutA") {
       prop.layoutA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutA)>>(value);
       return;
    }

    if (name == "layoutB") {
       prop.layoutB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutB)>>(value);
       return;
    }

    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }
}

void WMMAMmaOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.eltypeA) attrs.append("eltypeA", prop.eltypeA);

    if (prop.eltypeB) attrs.append("eltypeB", prop.eltypeB);

    if (prop.k) attrs.append("k", prop.k);

    if (prop.layoutA) attrs.append("layoutA", prop.layoutA);

    if (prop.layoutB) attrs.append("layoutB", prop.layoutB);

    if (prop.m) attrs.append("m", prop.m);

    if (prop.n) attrs.append("n", prop.n);
}

::mlir::LogicalResult WMMAMmaOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getEltypeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(attr, "eltypeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEltypeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(attr, "eltypeB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "k", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layoutA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layoutB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "n", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WMMAMmaOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.eltypeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.eltypeB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.k)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMAMmaOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.eltypeA);
  writer.writeAttribute(prop.eltypeB);
  writer.writeAttribute(prop.k);
  writer.writeAttribute(prop.layoutA);
  writer.writeAttribute(prop.layoutB);
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.n);
}

::mlir::IntegerAttr WMMAMmaOp::getMAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
}

uint32_t WMMAMmaOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAMmaOp::getNAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
}

uint32_t WMMAMmaOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAMmaOp::getKAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
}

uint32_t WMMAMmaOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr WMMAMmaOp::getLayoutAAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutA);
}

::mlir::NVVM::MMALayout WMMAMmaOp::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr WMMAMmaOp::getLayoutBAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutB);
}

::mlir::NVVM::MMALayout WMMAMmaOp::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMAMmaOp::getEltypeAAttr() {
  return ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltypeA);
}

::mlir::NVVM::MMATypes WMMAMmaOp::getEltypeA() {
  auto attr = getEltypeAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMAMmaOp::getEltypeBAttr() {
  return ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltypeB);
}

::mlir::NVVM::MMATypes WMMAMmaOp::getEltypeB() {
  auto attr = getEltypeBAttr();
  return attr.getValue();
}

void WMMAMmaOp::setMAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMAttrName(), attr);
}

void WMMAMmaOp::setM(uint32_t attrValue) {
  (*this)->setAttr(getMAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMAMmaOp::setNAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNAttrName(), attr);
}

void WMMAMmaOp::setN(uint32_t attrValue) {
  (*this)->setAttr(getNAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMAMmaOp::setKAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getKAttrName(), attr);
}

void WMMAMmaOp::setK(uint32_t attrValue) {
  (*this)->setAttr(getKAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMAMmaOp::setLayoutAAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutAAttrName(), attr);
}

void WMMAMmaOp::setLayoutA(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutAAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMAMmaOp::setLayoutBAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutBAttrName(), attr);
}

void WMMAMmaOp::setLayoutB(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutBAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMAMmaOp::setEltypeAAttr(::mlir::NVVM::MMATypesAttr attr) {
  (*this)->setAttr(getEltypeAAttrName(), attr);
}

void WMMAMmaOp::setEltypeA(::mlir::NVVM::MMATypes attrValue) {
  (*this)->setAttr(getEltypeAAttrName(), ::mlir::NVVM::MMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMAMmaOp::setEltypeBAttr(::mlir::NVVM::MMATypesAttr attr) {
  (*this)->setAttr(getEltypeBAttrName(), attr);
}

void WMMAMmaOp::setEltypeB(::mlir::NVVM::MMATypes attrValue) {
  (*this)->setAttr(getEltypeBAttrName(), ::mlir::NVVM::MMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMAMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::NVVM::MMALayoutAttr layoutA, ::mlir::NVVM::MMALayoutAttr layoutB, ::mlir::NVVM::MMATypesAttr eltypeA, ::mlir::NVVM::MMATypesAttr eltypeB, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  odsState.getOrAddProperties<Properties>().eltypeA = eltypeA;
  odsState.getOrAddProperties<Properties>().eltypeB = eltypeB;
  odsState.addTypes(res);
}

void WMMAMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::NVVM::MMALayoutAttr layoutA, ::mlir::NVVM::MMALayoutAttr layoutB, ::mlir::NVVM::MMATypesAttr eltypeA, ::mlir::NVVM::MMATypesAttr eltypeB, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  odsState.getOrAddProperties<Properties>().eltypeA = eltypeA;
  odsState.getOrAddProperties<Properties>().eltypeB = eltypeB;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMAMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, uint32_t m, uint32_t n, uint32_t k, ::mlir::NVVM::MMALayout layoutA, ::mlir::NVVM::MMALayout layoutB, ::mlir::NVVM::MMATypes eltypeA, ::mlir::NVVM::MMATypes eltypeB, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  odsState.getOrAddProperties<Properties>().eltypeA = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltypeA);
  odsState.getOrAddProperties<Properties>().eltypeB = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltypeB);
  odsState.addTypes(res);
}

void WMMAMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t m, uint32_t n, uint32_t k, ::mlir::NVVM::MMALayout layoutA, ::mlir::NVVM::MMALayout layoutB, ::mlir::NVVM::MMATypes eltypeA, ::mlir::NVVM::MMATypes eltypeB, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  odsState.getOrAddProperties<Properties>().eltypeA = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltypeA);
  odsState.getOrAddProperties<Properties>().eltypeB = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltypeB);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMAMmaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WMMAMmaOp::verifyInvariantsImpl() {
  auto tblgen_eltypeA = getProperties().eltypeA; (void)tblgen_eltypeA;
  if (!tblgen_eltypeA) return emitOpError("requires attribute 'eltypeA'");
  auto tblgen_eltypeB = getProperties().eltypeB; (void)tblgen_eltypeB;
  if (!tblgen_eltypeB) return emitOpError("requires attribute 'eltypeB'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitOpError("requires attribute 'k'");
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitOpError("requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitOpError("requires attribute 'layoutB'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_n, "n")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_k, "k")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layoutA, "layoutA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layoutB, "layoutB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(*this, tblgen_eltypeA, "eltypeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(*this, tblgen_eltypeB, "eltypeB")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WMMAMmaOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WMMAMmaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMAMmaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WMMAMmaOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WMMAStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WMMAStoreOpGenericAdaptorBase::WMMAStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.wmma.store", odsAttrs.getContext());
}

WMMAStoreOpGenericAdaptorBase::WMMAStoreOpGenericAdaptorBase(WMMAStoreOp op) : WMMAStoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WMMAStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false};
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

::mlir::DictionaryAttr WMMAStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WMMAStoreOpGenericAdaptorBase::getMAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
  return attr;
}

uint32_t WMMAStoreOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAStoreOpGenericAdaptorBase::getNAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
  return attr;
}

uint32_t WMMAStoreOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAStoreOpGenericAdaptorBase::getKAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
  return attr;
}

uint32_t WMMAStoreOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr WMMAStoreOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::NVVM::MMALayout WMMAStoreOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMAStoreOpGenericAdaptorBase::getEltypeAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltype);
  return attr;
}

::mlir::NVVM::MMATypes WMMAStoreOpGenericAdaptorBase::getEltype() {
  auto attr = getEltypeAttr();
  return attr.getValue();
}

} // namespace detail
WMMAStoreOpAdaptor::WMMAStoreOpAdaptor(WMMAStoreOp op) : WMMAStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WMMAStoreOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_eltype = getProperties().eltype; (void)tblgen_eltype;
  if (!tblgen_eltype) return emitError(loc, "'nvvm.wmma.store' op ""requires attribute 'eltype'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitError(loc, "'nvvm.wmma.store' op ""requires attribute 'k'");
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;
  if (!tblgen_layout) return emitError(loc, "'nvvm.wmma.store' op ""requires attribute 'layout'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'nvvm.wmma.store' op ""requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'nvvm.wmma.store' op ""requires attribute 'n'");

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.store' op ""attribute 'm' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.store' op ""attribute 'n' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wmma.store' op ""attribute 'k' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_layout && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layout))))
    return emitError(loc, "'nvvm.wmma.store' op ""attribute 'layout' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_eltype && !((::llvm::isa<::mlir::NVVM::MMATypesAttr>(tblgen_eltype))))
    return emitError(loc, "'nvvm.wmma.store' op ""attribute 'eltype' failed to satisfy constraint: NVVM MMA types");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WMMAStoreOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
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

::mlir::Operation::operand_range WMMAStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> WMMAStoreOp::getPtr() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range WMMAStoreOp::getArgs() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::IntegerType> WMMAStoreOp::getStride() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &WMMAStoreOp::getPtrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange WMMAStoreOp::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &WMMAStoreOp::getStrideMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> WMMAStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WMMAStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult WMMAStoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.eltype;
       auto attr = dict.get("eltype");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for eltype in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltype` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.k;
       auto attr = dict.get("k");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for k in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `k` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.m;
       auto attr = dict.get("m");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for m in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `m` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for n in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WMMAStoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.eltype;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltype",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.k;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("k",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WMMAStoreOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.eltype.getAsOpaquePointer()), 
    llvm::hash_value(prop.k.getAsOpaquePointer()), 
    llvm::hash_value(prop.layout.getAsOpaquePointer()), 
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.n.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WMMAStoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "eltype")
      return prop.eltype;

    if (name == "k")
      return prop.k;

    if (name == "layout")
      return prop.layout;

    if (name == "m")
      return prop.m;

    if (name == "n")
      return prop.n;
  return std::nullopt;
}

void WMMAStoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "eltype") {
       prop.eltype = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltype)>>(value);
       return;
    }

    if (name == "k") {
       prop.k = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.k)>>(value);
       return;
    }

    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }

    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }
}

void WMMAStoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.eltype) attrs.append("eltype", prop.eltype);

    if (prop.k) attrs.append("k", prop.k);

    if (prop.layout) attrs.append("layout", prop.layout);

    if (prop.m) attrs.append("m", prop.m);

    if (prop.n) attrs.append("n", prop.n);
}

::mlir::LogicalResult WMMAStoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getEltypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(attr, "eltype", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "k", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layout", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "n", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WMMAStoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.eltype)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.k)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layout)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMAStoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.eltype);
  writer.writeAttribute(prop.k);
  writer.writeAttribute(prop.layout);
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.n);
}

::mlir::IntegerAttr WMMAStoreOp::getMAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
}

uint32_t WMMAStoreOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAStoreOp::getNAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
}

uint32_t WMMAStoreOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr WMMAStoreOp::getKAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
}

uint32_t WMMAStoreOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::NVVM::MMALayoutAttr WMMAStoreOp::getLayoutAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layout);
}

::mlir::NVVM::MMALayout WMMAStoreOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

::mlir::NVVM::MMATypesAttr WMMAStoreOp::getEltypeAttr() {
  return ::llvm::cast<::mlir::NVVM::MMATypesAttr>(getProperties().eltype);
}

::mlir::NVVM::MMATypes WMMAStoreOp::getEltype() {
  auto attr = getEltypeAttr();
  return attr.getValue();
}

void WMMAStoreOp::setMAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMAttrName(), attr);
}

void WMMAStoreOp::setM(uint32_t attrValue) {
  (*this)->setAttr(getMAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMAStoreOp::setNAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNAttrName(), attr);
}

void WMMAStoreOp::setN(uint32_t attrValue) {
  (*this)->setAttr(getNAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMAStoreOp::setKAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getKAttrName(), attr);
}

void WMMAStoreOp::setK(uint32_t attrValue) {
  (*this)->setAttr(getKAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMAStoreOp::setLayoutAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void WMMAStoreOp::setLayout(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMAStoreOp::setEltypeAttr(::mlir::NVVM::MMATypesAttr attr) {
  (*this)->setAttr(getEltypeAttrName(), attr);
}

void WMMAStoreOp::setEltype(::mlir::NVVM::MMATypes attrValue) {
  (*this)->setAttr(getEltypeAttrName(), ::mlir::NVVM::MMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WMMAStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ptr, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::NVVM::MMALayoutAttr layout, ::mlir::NVVM::MMATypesAttr eltype, ::mlir::ValueRange args, ::mlir::Value stride) {
  odsState.addOperands(ptr);
  odsState.addOperands(args);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().layout = layout;
  odsState.getOrAddProperties<Properties>().eltype = eltype;
}

void WMMAStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ptr, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::NVVM::MMALayoutAttr layout, ::mlir::NVVM::MMATypesAttr eltype, ::mlir::ValueRange args, ::mlir::Value stride) {
  odsState.addOperands(ptr);
  odsState.addOperands(args);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().layout = layout;
  odsState.getOrAddProperties<Properties>().eltype = eltype;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMAStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ptr, uint32_t m, uint32_t n, uint32_t k, ::mlir::NVVM::MMALayout layout, ::mlir::NVVM::MMATypes eltype, ::mlir::ValueRange args, ::mlir::Value stride) {
  odsState.addOperands(ptr);
  odsState.addOperands(args);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.getOrAddProperties<Properties>().eltype = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltype);
}

void WMMAStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ptr, uint32_t m, uint32_t n, uint32_t k, ::mlir::NVVM::MMALayout layout, ::mlir::NVVM::MMATypes eltype, ::mlir::ValueRange args, ::mlir::Value stride) {
  odsState.addOperands(ptr);
  odsState.addOperands(args);
  odsState.addOperands(stride);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.getOrAddProperties<Properties>().eltype = ::mlir::NVVM::MMATypesAttr::get(odsBuilder.getContext(), eltype);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMAStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WMMAStoreOp::verifyInvariantsImpl() {
  auto tblgen_eltype = getProperties().eltype; (void)tblgen_eltype;
  if (!tblgen_eltype) return emitOpError("requires attribute 'eltype'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitOpError("requires attribute 'k'");
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;
  if (!tblgen_layout) return emitOpError("requires attribute 'layout'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_n, "n")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_k, "k")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layout, "layout")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps6(*this, tblgen_eltype, "eltype")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WMMAStoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WMMAStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand ptrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> ptrOperands(ptrRawOperands);  ::llvm::SMLoc ptrOperandsLoc;
  (void)ptrOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand strideRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> strideOperands(strideRawOperands);  ::llvm::SMLoc strideOperandsLoc;
  (void)strideOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::mlir::Type ptrRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> ptrTypes(ptrRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> argsTypes;

  ptrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(ptrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  strideOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(strideRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(ptrRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(argsTypes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(ptrOperands, ptrTypes, ptrOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(strideOperands, odsBuildableType0, strideOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMAStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getPtr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getStride();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
   _odsPrinter << getPtr().getType();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getArgs().getTypes();
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WMMAStoreOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WarpSizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WarpSizeOpGenericAdaptorBase::WarpSizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.read.ptx.sreg.warpsize", odsAttrs.getContext());
}

WarpSizeOpGenericAdaptorBase::WarpSizeOpGenericAdaptorBase(WarpSizeOp op) : WarpSizeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WarpSizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WarpSizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
WarpSizeOpAdaptor::WarpSizeOpAdaptor(WarpSizeOp op) : WarpSizeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WarpSizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WarpSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WarpSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> WarpSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WarpSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WarpSizeOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void WarpSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void WarpSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WarpSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WarpSizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WarpSizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WarpSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void WarpSizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void WarpSizeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WarpSizeOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WgmmaFenceAlignedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WgmmaFenceAlignedOpGenericAdaptorBase::WgmmaFenceAlignedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.wgmma.fence.aligned", odsAttrs.getContext());
}

WgmmaFenceAlignedOpGenericAdaptorBase::WgmmaFenceAlignedOpGenericAdaptorBase(WgmmaFenceAlignedOp op) : WgmmaFenceAlignedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WgmmaFenceAlignedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WgmmaFenceAlignedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
WgmmaFenceAlignedOpAdaptor::WgmmaFenceAlignedOpAdaptor(WgmmaFenceAlignedOp op) : WgmmaFenceAlignedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WgmmaFenceAlignedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WgmmaFenceAlignedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WgmmaFenceAlignedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> WgmmaFenceAlignedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WgmmaFenceAlignedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void WgmmaFenceAlignedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void WgmmaFenceAlignedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WgmmaFenceAlignedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WgmmaFenceAlignedOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult WgmmaFenceAlignedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WgmmaFenceAlignedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void WgmmaFenceAlignedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

std::string WgmmaFenceAlignedOp::getPtx() { return std::string("wgmma.fence.sync.aligned;"); }
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WgmmaFenceAlignedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WgmmaGroupSyncAlignedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WgmmaGroupSyncAlignedOpGenericAdaptorBase::WgmmaGroupSyncAlignedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.wgmma.commit.group.sync.aligned", odsAttrs.getContext());
}

WgmmaGroupSyncAlignedOpGenericAdaptorBase::WgmmaGroupSyncAlignedOpGenericAdaptorBase(WgmmaGroupSyncAlignedOp op) : WgmmaGroupSyncAlignedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WgmmaGroupSyncAlignedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WgmmaGroupSyncAlignedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
WgmmaGroupSyncAlignedOpAdaptor::WgmmaGroupSyncAlignedOpAdaptor(WgmmaGroupSyncAlignedOp op) : WgmmaGroupSyncAlignedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WgmmaGroupSyncAlignedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WgmmaGroupSyncAlignedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WgmmaGroupSyncAlignedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> WgmmaGroupSyncAlignedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WgmmaGroupSyncAlignedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void WgmmaGroupSyncAlignedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void WgmmaGroupSyncAlignedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WgmmaGroupSyncAlignedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WgmmaGroupSyncAlignedOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult WgmmaGroupSyncAlignedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WgmmaGroupSyncAlignedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void WgmmaGroupSyncAlignedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

std::string WgmmaGroupSyncAlignedOp::getPtx() { return std::string("wgmma.commit_group.sync.aligned;"); }
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WgmmaGroupSyncAlignedOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WgmmaMmaAsyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WgmmaMmaAsyncOpGenericAdaptorBase::WgmmaMmaAsyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.wgmma.mma_async", odsAttrs.getContext());
}

WgmmaMmaAsyncOpGenericAdaptorBase::WgmmaMmaAsyncOpGenericAdaptorBase(WgmmaMmaAsyncOp op) : WgmmaMmaAsyncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WgmmaMmaAsyncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WgmmaMmaAsyncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::NVVM::MMAShapeAttr WgmmaMmaAsyncOpGenericAdaptorBase::getShapeAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(getProperties().shape);
  return attr;
}

::mlir::NVVM::MMAShapeAttr WgmmaMmaAsyncOpGenericAdaptorBase::getShape() {
  auto attr = getShapeAttr();
  return ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(attr);
}

::mlir::NVVM::WGMMATypesAttr WgmmaMmaAsyncOpGenericAdaptorBase::getTypeAAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::WGMMATypesAttr>(getProperties().typeA);
  return attr;
}

::mlir::NVVM::WGMMATypes WgmmaMmaAsyncOpGenericAdaptorBase::getTypeA() {
  auto attr = getTypeAAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMATypesAttr WgmmaMmaAsyncOpGenericAdaptorBase::getTypeBAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::WGMMATypesAttr>(getProperties().typeB);
  return attr;
}

::mlir::NVVM::WGMMATypes WgmmaMmaAsyncOpGenericAdaptorBase::getTypeB() {
  auto attr = getTypeBAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMAScaleOutAttr WgmmaMmaAsyncOpGenericAdaptorBase::getScaleDAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::WGMMAScaleOutAttr>(getProperties().scaleD);
  return attr;
}

::mlir::NVVM::WGMMAScaleOut WgmmaMmaAsyncOpGenericAdaptorBase::getScaleD() {
  auto attr = getScaleDAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMAScaleInAttr WgmmaMmaAsyncOpGenericAdaptorBase::getScaleAAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::WGMMAScaleInAttr>(getProperties().scaleA);
  return attr;
}

::mlir::NVVM::WGMMAScaleIn WgmmaMmaAsyncOpGenericAdaptorBase::getScaleA() {
  auto attr = getScaleAAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMAScaleInAttr WgmmaMmaAsyncOpGenericAdaptorBase::getScaleBAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::WGMMAScaleInAttr>(getProperties().scaleB);
  return attr;
}

::mlir::NVVM::WGMMAScaleIn WgmmaMmaAsyncOpGenericAdaptorBase::getScaleB() {
  auto attr = getScaleBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr WgmmaMmaAsyncOpGenericAdaptorBase::getLayoutAAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutA);
  return attr;
}

::mlir::NVVM::MMALayout WgmmaMmaAsyncOpGenericAdaptorBase::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr WgmmaMmaAsyncOpGenericAdaptorBase::getLayoutBAttr() {
  auto attr = ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutB);
  return attr;
}

::mlir::NVVM::MMALayout WgmmaMmaAsyncOpGenericAdaptorBase::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMAIntOverflowAttr WgmmaMmaAsyncOpGenericAdaptorBase::getSatfiniteAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::NVVM::MMAIntOverflowAttr>(getProperties().satfinite);
  return attr;
}

::std::optional<::mlir::NVVM::MMAIntOverflow> WgmmaMmaAsyncOpGenericAdaptorBase::getSatfinite() {
  auto attr = getSatfiniteAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMAIntOverflow>(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
WgmmaMmaAsyncOpAdaptor::WgmmaMmaAsyncOpAdaptor(WgmmaMmaAsyncOp op) : WgmmaMmaAsyncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WgmmaMmaAsyncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'layoutB'");
  auto tblgen_satfinite = getProperties().satfinite; (void)tblgen_satfinite;
  auto tblgen_scaleA = getProperties().scaleA; (void)tblgen_scaleA;
  if (!tblgen_scaleA) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'scaleA'");
  auto tblgen_scaleB = getProperties().scaleB; (void)tblgen_scaleB;
  if (!tblgen_scaleB) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'scaleB'");
  auto tblgen_scaleD = getProperties().scaleD; (void)tblgen_scaleD;
  if (!tblgen_scaleD) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'scaleD'");
  auto tblgen_shape = getProperties().shape; (void)tblgen_shape;
  if (!tblgen_shape) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'shape'");
  auto tblgen_typeA = getProperties().typeA; (void)tblgen_typeA;
  if (!tblgen_typeA) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'typeA'");
  auto tblgen_typeB = getProperties().typeB; (void)tblgen_typeB;
  if (!tblgen_typeB) return emitError(loc, "'nvvm.wgmma.mma_async' op ""requires attribute 'typeB'");

  if (tblgen_shape && !((::llvm::isa<::mlir::NVVM::MMAShapeAttr>(tblgen_shape))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'shape' failed to satisfy constraint: Attribute for MMA operation shape.");

  if (tblgen_typeA && !((::llvm::isa<::mlir::NVVM::WGMMATypesAttr>(tblgen_typeA))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'typeA' failed to satisfy constraint: NVVM WGMMA types");

  if (tblgen_typeB && !((::llvm::isa<::mlir::NVVM::WGMMATypesAttr>(tblgen_typeB))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'typeB' failed to satisfy constraint: NVVM WGMMA types");

  if (tblgen_scaleD && !((::llvm::isa<::mlir::NVVM::WGMMAScaleOutAttr>(tblgen_scaleD))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'scaleD' failed to satisfy constraint: WGMMA input predicate");

  if (tblgen_scaleA && !((::llvm::isa<::mlir::NVVM::WGMMAScaleInAttr>(tblgen_scaleA))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'scaleA' failed to satisfy constraint: WGMMA overflow options");

  if (tblgen_scaleB && !((::llvm::isa<::mlir::NVVM::WGMMAScaleInAttr>(tblgen_scaleB))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'scaleB' failed to satisfy constraint: WGMMA overflow options");

  if (tblgen_layoutA && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layoutA))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'layoutA' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_layoutB && !((::llvm::isa<::mlir::NVVM::MMALayoutAttr>(tblgen_layoutB))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'layoutB' failed to satisfy constraint: NVVM MMA layout");

  if (tblgen_satfinite && !((::llvm::isa<::mlir::NVVM::MMAIntOverflowAttr>(tblgen_satfinite))))
    return emitError(loc, "'nvvm.wgmma.mma_async' op ""attribute 'satfinite' failed to satisfy constraint: MMA overflow options");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WgmmaMmaAsyncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WgmmaMmaAsyncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WgmmaMmaAsyncOp::getInouts() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> WgmmaMmaAsyncOp::getDescriptorA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> WgmmaMmaAsyncOp::getDescriptorB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &WgmmaMmaAsyncOp::getInoutsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WgmmaMmaAsyncOp::getDescriptorAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WgmmaMmaAsyncOp::getDescriptorBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> WgmmaMmaAsyncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WgmmaMmaAsyncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WgmmaMmaAsyncOp::getResults() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult WgmmaMmaAsyncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layoutA;
       auto attr = dict.get("layoutA");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layoutA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutB;
       auto attr = dict.get("layoutB");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for layoutB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.satfinite;
       auto attr = dict.get("satfinite");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for satfinite in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `satfinite` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scaleA;
       auto attr = dict.get("scaleA");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for scaleA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scaleA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scaleB;
       auto attr = dict.get("scaleB");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for scaleB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scaleB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scaleD;
       auto attr = dict.get("scaleD");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for scaleD in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scaleD` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.shape;
       auto attr = dict.get("shape");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for shape in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `shape` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.typeA;
       auto attr = dict.get("typeA");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for typeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `typeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.typeB;
       auto attr = dict.get("typeB");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for typeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `typeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WgmmaMmaAsyncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layoutA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.satfinite;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("satfinite",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scaleA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scaleA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scaleB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scaleB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scaleD;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scaleD",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.shape;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("shape",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.typeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("typeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.typeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("typeB",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WgmmaMmaAsyncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layoutA.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutB.getAsOpaquePointer()), 
    llvm::hash_value(prop.satfinite.getAsOpaquePointer()), 
    llvm::hash_value(prop.scaleA.getAsOpaquePointer()), 
    llvm::hash_value(prop.scaleB.getAsOpaquePointer()), 
    llvm::hash_value(prop.scaleD.getAsOpaquePointer()), 
    llvm::hash_value(prop.shape.getAsOpaquePointer()), 
    llvm::hash_value(prop.typeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.typeB.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WgmmaMmaAsyncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layoutA")
      return prop.layoutA;

    if (name == "layoutB")
      return prop.layoutB;

    if (name == "satfinite")
      return prop.satfinite;

    if (name == "scaleA")
      return prop.scaleA;

    if (name == "scaleB")
      return prop.scaleB;

    if (name == "scaleD")
      return prop.scaleD;

    if (name == "shape")
      return prop.shape;

    if (name == "typeA")
      return prop.typeA;

    if (name == "typeB")
      return prop.typeB;
  return std::nullopt;
}

void WgmmaMmaAsyncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layoutA") {
       prop.layoutA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutA)>>(value);
       return;
    }

    if (name == "layoutB") {
       prop.layoutB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutB)>>(value);
       return;
    }

    if (name == "satfinite") {
       prop.satfinite = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.satfinite)>>(value);
       return;
    }

    if (name == "scaleA") {
       prop.scaleA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scaleA)>>(value);
       return;
    }

    if (name == "scaleB") {
       prop.scaleB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scaleB)>>(value);
       return;
    }

    if (name == "scaleD") {
       prop.scaleD = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scaleD)>>(value);
       return;
    }

    if (name == "shape") {
       prop.shape = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.shape)>>(value);
       return;
    }

    if (name == "typeA") {
       prop.typeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.typeA)>>(value);
       return;
    }

    if (name == "typeB") {
       prop.typeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.typeB)>>(value);
       return;
    }
}

void WgmmaMmaAsyncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layoutA) attrs.append("layoutA", prop.layoutA);

    if (prop.layoutB) attrs.append("layoutB", prop.layoutB);

    if (prop.satfinite) attrs.append("satfinite", prop.satfinite);

    if (prop.scaleA) attrs.append("scaleA", prop.scaleA);

    if (prop.scaleB) attrs.append("scaleB", prop.scaleB);

    if (prop.scaleD) attrs.append("scaleD", prop.scaleD);

    if (prop.shape) attrs.append("shape", prop.shape);

    if (prop.typeA) attrs.append("typeA", prop.typeA);

    if (prop.typeB) attrs.append("typeB", prop.typeB);
}

::mlir::LogicalResult WgmmaMmaAsyncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layoutA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(attr, "layoutB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSatfiniteAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps5(attr, "satfinite", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScaleAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps13(attr, "scaleA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScaleBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps13(attr, "scaleB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScaleDAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps12(attr, "scaleD", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getShapeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps3(attr, "shape", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTypeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps11(attr, "typeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTypeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps11(attr, "typeB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WgmmaMmaAsyncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.layoutA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.satfinite)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.scaleA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.scaleB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.scaleD)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.shape)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.typeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.typeB)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WgmmaMmaAsyncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.layoutA);
  writer.writeAttribute(prop.layoutB);

  writer.writeOptionalAttribute(prop.satfinite);
  writer.writeAttribute(prop.scaleA);
  writer.writeAttribute(prop.scaleB);
  writer.writeAttribute(prop.scaleD);
  writer.writeAttribute(prop.shape);
  writer.writeAttribute(prop.typeA);
  writer.writeAttribute(prop.typeB);
}

::mlir::NVVM::MMAShapeAttr WgmmaMmaAsyncOp::getShapeAttr() {
  return ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(getProperties().shape);
}

::mlir::NVVM::MMAShapeAttr WgmmaMmaAsyncOp::getShape() {
  auto attr = getShapeAttr();
  return ::llvm::cast<::mlir::NVVM::MMAShapeAttr>(attr);
}

::mlir::NVVM::WGMMATypesAttr WgmmaMmaAsyncOp::getTypeAAttr() {
  return ::llvm::cast<::mlir::NVVM::WGMMATypesAttr>(getProperties().typeA);
}

::mlir::NVVM::WGMMATypes WgmmaMmaAsyncOp::getTypeA() {
  auto attr = getTypeAAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMATypesAttr WgmmaMmaAsyncOp::getTypeBAttr() {
  return ::llvm::cast<::mlir::NVVM::WGMMATypesAttr>(getProperties().typeB);
}

::mlir::NVVM::WGMMATypes WgmmaMmaAsyncOp::getTypeB() {
  auto attr = getTypeBAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMAScaleOutAttr WgmmaMmaAsyncOp::getScaleDAttr() {
  return ::llvm::cast<::mlir::NVVM::WGMMAScaleOutAttr>(getProperties().scaleD);
}

::mlir::NVVM::WGMMAScaleOut WgmmaMmaAsyncOp::getScaleD() {
  auto attr = getScaleDAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMAScaleInAttr WgmmaMmaAsyncOp::getScaleAAttr() {
  return ::llvm::cast<::mlir::NVVM::WGMMAScaleInAttr>(getProperties().scaleA);
}

::mlir::NVVM::WGMMAScaleIn WgmmaMmaAsyncOp::getScaleA() {
  auto attr = getScaleAAttr();
  return attr.getValue();
}

::mlir::NVVM::WGMMAScaleInAttr WgmmaMmaAsyncOp::getScaleBAttr() {
  return ::llvm::cast<::mlir::NVVM::WGMMAScaleInAttr>(getProperties().scaleB);
}

::mlir::NVVM::WGMMAScaleIn WgmmaMmaAsyncOp::getScaleB() {
  auto attr = getScaleBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr WgmmaMmaAsyncOp::getLayoutAAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutA);
}

::mlir::NVVM::MMALayout WgmmaMmaAsyncOp::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::NVVM::MMALayoutAttr WgmmaMmaAsyncOp::getLayoutBAttr() {
  return ::llvm::cast<::mlir::NVVM::MMALayoutAttr>(getProperties().layoutB);
}

::mlir::NVVM::MMALayout WgmmaMmaAsyncOp::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

::mlir::NVVM::MMAIntOverflowAttr WgmmaMmaAsyncOp::getSatfiniteAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::NVVM::MMAIntOverflowAttr>(getProperties().satfinite);
}

::std::optional<::mlir::NVVM::MMAIntOverflow> WgmmaMmaAsyncOp::getSatfinite() {
  auto attr = getSatfiniteAttr();
  return attr ? ::std::optional<::mlir::NVVM::MMAIntOverflow>(attr.getValue()) : (::std::nullopt);
}

void WgmmaMmaAsyncOp::setShapeAttr(::mlir::NVVM::MMAShapeAttr attr) {
  (*this)->setAttr(getShapeAttrName(), attr);
}

void WgmmaMmaAsyncOp::setTypeAAttr(::mlir::NVVM::WGMMATypesAttr attr) {
  (*this)->setAttr(getTypeAAttrName(), attr);
}

void WgmmaMmaAsyncOp::setTypeA(::mlir::NVVM::WGMMATypes attrValue) {
  (*this)->setAttr(getTypeAAttrName(), ::mlir::NVVM::WGMMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WgmmaMmaAsyncOp::setTypeBAttr(::mlir::NVVM::WGMMATypesAttr attr) {
  (*this)->setAttr(getTypeBAttrName(), attr);
}

void WgmmaMmaAsyncOp::setTypeB(::mlir::NVVM::WGMMATypes attrValue) {
  (*this)->setAttr(getTypeBAttrName(), ::mlir::NVVM::WGMMATypesAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WgmmaMmaAsyncOp::setScaleDAttr(::mlir::NVVM::WGMMAScaleOutAttr attr) {
  (*this)->setAttr(getScaleDAttrName(), attr);
}

void WgmmaMmaAsyncOp::setScaleD(::mlir::NVVM::WGMMAScaleOut attrValue) {
  (*this)->setAttr(getScaleDAttrName(), ::mlir::NVVM::WGMMAScaleOutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WgmmaMmaAsyncOp::setScaleAAttr(::mlir::NVVM::WGMMAScaleInAttr attr) {
  (*this)->setAttr(getScaleAAttrName(), attr);
}

void WgmmaMmaAsyncOp::setScaleA(::mlir::NVVM::WGMMAScaleIn attrValue) {
  (*this)->setAttr(getScaleAAttrName(), ::mlir::NVVM::WGMMAScaleInAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WgmmaMmaAsyncOp::setScaleBAttr(::mlir::NVVM::WGMMAScaleInAttr attr) {
  (*this)->setAttr(getScaleBAttrName(), attr);
}

void WgmmaMmaAsyncOp::setScaleB(::mlir::NVVM::WGMMAScaleIn attrValue) {
  (*this)->setAttr(getScaleBAttrName(), ::mlir::NVVM::WGMMAScaleInAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WgmmaMmaAsyncOp::setLayoutAAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutAAttrName(), attr);
}

void WgmmaMmaAsyncOp::setLayoutA(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutAAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WgmmaMmaAsyncOp::setLayoutBAttr(::mlir::NVVM::MMALayoutAttr attr) {
  (*this)->setAttr(getLayoutBAttrName(), attr);
}

void WgmmaMmaAsyncOp::setLayoutB(::mlir::NVVM::MMALayout attrValue) {
  (*this)->setAttr(getLayoutBAttrName(), ::mlir::NVVM::MMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void WgmmaMmaAsyncOp::setSatfiniteAttr(::mlir::NVVM::MMAIntOverflowAttr attr) {
  (*this)->setAttr(getSatfiniteAttrName(), attr);
}

void WgmmaMmaAsyncOp::setSatfinite(::std::optional<::mlir::NVVM::MMAIntOverflow> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSatfiniteAttrName(), ::mlir::NVVM::MMAIntOverflowAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getSatfiniteAttrName());
}

::mlir::Attribute WgmmaMmaAsyncOp::removeSatfiniteAttr() {
    auto &attr = getProperties().satfinite;
    attr = {};
    return attr;
}

void WgmmaMmaAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value inouts, ::mlir::Value descriptorA, ::mlir::Value descriptorB, ::mlir::NVVM::MMAShapeAttr shape, ::mlir::NVVM::WGMMATypesAttr typeA, ::mlir::NVVM::WGMMATypesAttr typeB, ::mlir::NVVM::WGMMAScaleOutAttr scaleD, ::mlir::NVVM::WGMMAScaleInAttr scaleA, ::mlir::NVVM::WGMMAScaleInAttr scaleB, ::mlir::NVVM::MMALayoutAttr layoutA, ::mlir::NVVM::MMALayoutAttr layoutB, /*optional*/::mlir::NVVM::MMAIntOverflowAttr satfinite) {
  odsState.addOperands(inouts);
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.getOrAddProperties<Properties>().shape = shape;
  odsState.getOrAddProperties<Properties>().typeA = typeA;
  odsState.getOrAddProperties<Properties>().typeB = typeB;
  odsState.getOrAddProperties<Properties>().scaleD = scaleD;
  odsState.getOrAddProperties<Properties>().scaleA = scaleA;
  odsState.getOrAddProperties<Properties>().scaleB = scaleB;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  if (satfinite) {
    odsState.getOrAddProperties<Properties>().satfinite = satfinite;
  }
  odsState.addTypes(results);
}

void WgmmaMmaAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value inouts, ::mlir::Value descriptorA, ::mlir::Value descriptorB, ::mlir::NVVM::MMAShapeAttr shape, ::mlir::NVVM::WGMMATypesAttr typeA, ::mlir::NVVM::WGMMATypesAttr typeB, ::mlir::NVVM::WGMMAScaleOutAttr scaleD, ::mlir::NVVM::WGMMAScaleInAttr scaleA, ::mlir::NVVM::WGMMAScaleInAttr scaleB, ::mlir::NVVM::MMALayoutAttr layoutA, ::mlir::NVVM::MMALayoutAttr layoutB, /*optional*/::mlir::NVVM::MMAIntOverflowAttr satfinite) {
  odsState.addOperands(inouts);
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.getOrAddProperties<Properties>().shape = shape;
  odsState.getOrAddProperties<Properties>().typeA = typeA;
  odsState.getOrAddProperties<Properties>().typeB = typeB;
  odsState.getOrAddProperties<Properties>().scaleD = scaleD;
  odsState.getOrAddProperties<Properties>().scaleA = scaleA;
  odsState.getOrAddProperties<Properties>().scaleB = scaleB;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  if (satfinite) {
    odsState.getOrAddProperties<Properties>().satfinite = satfinite;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WgmmaMmaAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value inouts, ::mlir::Value descriptorA, ::mlir::Value descriptorB, ::mlir::NVVM::MMAShapeAttr shape, ::mlir::NVVM::WGMMATypes typeA, ::mlir::NVVM::WGMMATypes typeB, ::mlir::NVVM::WGMMAScaleOut scaleD, ::mlir::NVVM::WGMMAScaleIn scaleA, ::mlir::NVVM::WGMMAScaleIn scaleB, ::mlir::NVVM::MMALayout layoutA, ::mlir::NVVM::MMALayout layoutB, /*optional*/::mlir::NVVM::MMAIntOverflowAttr satfinite) {
  odsState.addOperands(inouts);
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.getOrAddProperties<Properties>().shape = shape;
  odsState.getOrAddProperties<Properties>().typeA = ::mlir::NVVM::WGMMATypesAttr::get(odsBuilder.getContext(), typeA);
  odsState.getOrAddProperties<Properties>().typeB = ::mlir::NVVM::WGMMATypesAttr::get(odsBuilder.getContext(), typeB);
  odsState.getOrAddProperties<Properties>().scaleD = ::mlir::NVVM::WGMMAScaleOutAttr::get(odsBuilder.getContext(), scaleD);
  odsState.getOrAddProperties<Properties>().scaleA = ::mlir::NVVM::WGMMAScaleInAttr::get(odsBuilder.getContext(), scaleA);
  odsState.getOrAddProperties<Properties>().scaleB = ::mlir::NVVM::WGMMAScaleInAttr::get(odsBuilder.getContext(), scaleB);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  if (satfinite) {
    odsState.getOrAddProperties<Properties>().satfinite = satfinite;
  }
  odsState.addTypes(results);
}

void WgmmaMmaAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value inouts, ::mlir::Value descriptorA, ::mlir::Value descriptorB, ::mlir::NVVM::MMAShapeAttr shape, ::mlir::NVVM::WGMMATypes typeA, ::mlir::NVVM::WGMMATypes typeB, ::mlir::NVVM::WGMMAScaleOut scaleD, ::mlir::NVVM::WGMMAScaleIn scaleA, ::mlir::NVVM::WGMMAScaleIn scaleB, ::mlir::NVVM::MMALayout layoutA, ::mlir::NVVM::MMALayout layoutB, /*optional*/::mlir::NVVM::MMAIntOverflowAttr satfinite) {
  odsState.addOperands(inouts);
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.getOrAddProperties<Properties>().shape = shape;
  odsState.getOrAddProperties<Properties>().typeA = ::mlir::NVVM::WGMMATypesAttr::get(odsBuilder.getContext(), typeA);
  odsState.getOrAddProperties<Properties>().typeB = ::mlir::NVVM::WGMMATypesAttr::get(odsBuilder.getContext(), typeB);
  odsState.getOrAddProperties<Properties>().scaleD = ::mlir::NVVM::WGMMAScaleOutAttr::get(odsBuilder.getContext(), scaleD);
  odsState.getOrAddProperties<Properties>().scaleA = ::mlir::NVVM::WGMMAScaleInAttr::get(odsBuilder.getContext(), scaleA);
  odsState.getOrAddProperties<Properties>().scaleB = ::mlir::NVVM::WGMMAScaleInAttr::get(odsBuilder.getContext(), scaleB);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::NVVM::MMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  if (satfinite) {
    odsState.getOrAddProperties<Properties>().satfinite = satfinite;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WgmmaMmaAsyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WgmmaMmaAsyncOp::verifyInvariantsImpl() {
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitOpError("requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitOpError("requires attribute 'layoutB'");
  auto tblgen_satfinite = getProperties().satfinite; (void)tblgen_satfinite;
  auto tblgen_scaleA = getProperties().scaleA; (void)tblgen_scaleA;
  if (!tblgen_scaleA) return emitOpError("requires attribute 'scaleA'");
  auto tblgen_scaleB = getProperties().scaleB; (void)tblgen_scaleB;
  if (!tblgen_scaleB) return emitOpError("requires attribute 'scaleB'");
  auto tblgen_scaleD = getProperties().scaleD; (void)tblgen_scaleD;
  if (!tblgen_scaleD) return emitOpError("requires attribute 'scaleD'");
  auto tblgen_shape = getProperties().shape; (void)tblgen_shape;
  if (!tblgen_shape) return emitOpError("requires attribute 'shape'");
  auto tblgen_typeA = getProperties().typeA; (void)tblgen_typeA;
  if (!tblgen_typeA) return emitOpError("requires attribute 'typeA'");
  auto tblgen_typeB = getProperties().typeB; (void)tblgen_typeB;
  if (!tblgen_typeB) return emitOpError("requires attribute 'typeB'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps3(*this, tblgen_shape, "shape")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps11(*this, tblgen_typeA, "typeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps11(*this, tblgen_typeB, "typeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps12(*this, tblgen_scaleD, "scaleD")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps13(*this, tblgen_scaleA, "scaleA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps13(*this, tblgen_scaleB, "scaleB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layoutA, "layoutA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps2(*this, tblgen_layoutB, "layoutB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps5(*this, tblgen_satfinite, "satfinite")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVVMOps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((*this->getOperation()).getResult(0).getType() == (*this->getOperation()).getOperand(0).getType())))
    return emitOpError("failed to verify that input struct and result struct must be the same type");
  return ::mlir::success();
}

::mlir::LogicalResult WgmmaMmaAsyncOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WgmmaMmaAsyncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand descriptorARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> descriptorAOperands(descriptorARawOperands);  ::llvm::SMLoc descriptorAOperandsLoc;
  (void)descriptorAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand descriptorBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> descriptorBOperands(descriptorBRawOperands);  ::llvm::SMLoc descriptorBOperandsLoc;
  (void)descriptorBOperandsLoc;
  ::mlir::NVVM::MMAShapeAttr shapeAttr;
  ::mlir::OpAsmParser::UnresolvedOperand inoutsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inoutsOperands(inoutsRawOperands);  ::llvm::SMLoc inoutsOperandsLoc;
  (void)inoutsOperandsLoc;
  ::mlir::NVVM::WGMMAScaleOutAttr scaleDAttr;
  ::mlir::NVVM::MMAIntOverflowAttr satfiniteAttr;
  ::mlir::NVVM::WGMMATypesAttr typeAAttr;
  ::mlir::NVVM::WGMMAScaleInAttr scaleAAttr;
  ::mlir::NVVM::MMALayoutAttr layoutAAttr;
  ::mlir::NVVM::WGMMATypesAttr typeBAttr;
  ::mlir::NVVM::WGMMAScaleInAttr scaleBAttr;
  ::mlir::NVVM::MMALayoutAttr layoutBAttr;
  ::mlir::Type inoutsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inoutsTypes(inoutsRawTypes);
  ::mlir::Type resultsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultsTypes(resultsRawTypes);

  descriptorAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(descriptorARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  descriptorBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(descriptorBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(shapeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (shapeAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().shape = shapeAttr;
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseKeyword("D"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  inoutsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inoutsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(scaleDAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (scaleDAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().scaleD = scaleDAttr;
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseCustomAttributeWithFallback(satfiniteAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (satfiniteAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().satfinite = satfiniteAttr;
  }
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseKeyword("A"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(typeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (typeAAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().typeA = typeAAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(scaleAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (scaleAAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().scaleA = scaleAAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(layoutAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().layoutA = layoutAAttr;
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseKeyword("B"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(typeBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (typeBAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().typeB = typeBAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(scaleBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (scaleBAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().scaleB = scaleBAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(layoutBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutBAttr) result.getOrAddProperties<WgmmaMmaAsyncOp::Properties>().layoutB = layoutBAttr;
  if (parser.parseRSquare())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inoutsRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultsRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(64);
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(inoutsOperands, inoutsTypes, inoutsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(descriptorAOperands, odsBuildableType0, descriptorAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(descriptorBOperands, odsBuildableType0, descriptorBOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WgmmaMmaAsyncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getDescriptorA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDescriptorB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getShapeAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ' << "D";
  _odsPrinter << "[";
  _odsPrinter << getInouts();
  _odsPrinter << ",";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getScaleDAttr());
  if (getSatfiniteAttr()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getSatfiniteAttr());
  }
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ' << "A";
  _odsPrinter << "[";
_odsPrinter.printStrippedAttrOrType(getTypeAAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getScaleAAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getLayoutAAttr());
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ' << "B";
  _odsPrinter << "[";
_odsPrinter.printStrippedAttrOrType(getTypeBAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getScaleBAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getLayoutBAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("shape");
  elidedAttrs.push_back("scaleD");
  elidedAttrs.push_back("satfinite");
  elidedAttrs.push_back("typeA");
  elidedAttrs.push_back("scaleA");
  elidedAttrs.push_back("layoutA");
  elidedAttrs.push_back("typeB");
  elidedAttrs.push_back("scaleB");
  elidedAttrs.push_back("layoutB");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInouts().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResults().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WgmmaMmaAsyncOp)

namespace mlir {
namespace NVVM {

//===----------------------------------------------------------------------===//
// ::mlir::NVVM::WgmmaWaitGroupSyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WgmmaWaitGroupSyncOpGenericAdaptorBase::WgmmaWaitGroupSyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvvm.wgmma.wait.group.sync.aligned", odsAttrs.getContext());
}

WgmmaWaitGroupSyncOpGenericAdaptorBase::WgmmaWaitGroupSyncOpGenericAdaptorBase(WgmmaWaitGroupSyncOp op) : WgmmaWaitGroupSyncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WgmmaWaitGroupSyncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WgmmaWaitGroupSyncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WgmmaWaitGroupSyncOpGenericAdaptorBase::getGroupAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().group);
  return attr;
}

uint32_t WgmmaWaitGroupSyncOpGenericAdaptorBase::getGroup() {
  auto attr = getGroupAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
WgmmaWaitGroupSyncOpAdaptor::WgmmaWaitGroupSyncOpAdaptor(WgmmaWaitGroupSyncOp op) : WgmmaWaitGroupSyncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WgmmaWaitGroupSyncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_group = getProperties().group; (void)tblgen_group;
  if (!tblgen_group) return emitError(loc, "'nvvm.wgmma.wait.group.sync.aligned' op ""requires attribute 'group'");

  if (tblgen_group && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_group))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_group).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvvm.wgmma.wait.group.sync.aligned' op ""attribute 'group' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WgmmaWaitGroupSyncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WgmmaWaitGroupSyncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> WgmmaWaitGroupSyncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WgmmaWaitGroupSyncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult WgmmaWaitGroupSyncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.group;
       auto attr = dict.get("group");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for group in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `group` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WgmmaWaitGroupSyncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.group;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("group",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WgmmaWaitGroupSyncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.group.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WgmmaWaitGroupSyncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "group")
      return prop.group;
  return std::nullopt;
}

void WgmmaWaitGroupSyncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "group") {
       prop.group = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.group)>>(value);
       return;
    }
}

void WgmmaWaitGroupSyncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.group) attrs.append("group", prop.group);
}

::mlir::LogicalResult WgmmaWaitGroupSyncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGroupAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(attr, "group", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WgmmaWaitGroupSyncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.group)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WgmmaWaitGroupSyncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.group);
}

::mlir::IntegerAttr WgmmaWaitGroupSyncOp::getGroupAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().group);
}

uint32_t WgmmaWaitGroupSyncOp::getGroup() {
  auto attr = getGroupAttr();
  return attr.getValue().getZExtValue();
}

void WgmmaWaitGroupSyncOp::setGroupAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getGroupAttrName(), attr);
}

void WgmmaWaitGroupSyncOp::setGroup(uint32_t attrValue) {
  (*this)->setAttr(getGroupAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WgmmaWaitGroupSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr group) {
  odsState.getOrAddProperties<Properties>().group = group;
}

void WgmmaWaitGroupSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr group) {
  odsState.getOrAddProperties<Properties>().group = group;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WgmmaWaitGroupSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t group) {
  odsState.getOrAddProperties<Properties>().group = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), group);
}

void WgmmaWaitGroupSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t group) {
  odsState.getOrAddProperties<Properties>().group = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), group);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WgmmaWaitGroupSyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WgmmaWaitGroupSyncOp::verifyInvariantsImpl() {
  auto tblgen_group = getProperties().group; (void)tblgen_group;
  if (!tblgen_group) return emitOpError("requires attribute 'group'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVVMOps0(*this, tblgen_group, "group")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult WgmmaWaitGroupSyncOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WgmmaWaitGroupSyncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr groupAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  if (parser.parseCustomAttributeWithFallback(groupAttr, parser.getBuilder().getIntegerType(32))) {
    return ::mlir::failure();
  }
  if (groupAttr) result.getOrAddProperties<WgmmaWaitGroupSyncOp::Properties>().group = groupAttr;
  return ::mlir::success();
}

void WgmmaWaitGroupSyncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("group");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGroupAttr());
}

std::string WgmmaWaitGroupSyncOp::getPtx() { return std::string("wgmma.wait_group.sync.aligned %0;"); }
} // namespace NVVM
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::NVVM::WgmmaWaitGroupSyncOp)


#endif  // GET_OP_CLASSES

