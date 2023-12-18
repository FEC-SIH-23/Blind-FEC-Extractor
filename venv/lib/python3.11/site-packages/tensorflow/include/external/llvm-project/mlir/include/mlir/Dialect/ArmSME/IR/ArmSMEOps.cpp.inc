/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSMEOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::arm_sme::CastTileToVector,
::mlir::arm_sme::CastVectorToTile,
::mlir::arm_sme::GetTileID,
::mlir::arm_sme::LoadTileSliceOp,
::mlir::arm_sme::MoveTileSliceToVectorOp,
::mlir::arm_sme::MoveVectorToTileSliceOp,
::mlir::arm_sme::StoreTileSliceOp,
::mlir::arm_sme::TileLoadOp,
::mlir::arm_sme::TileStoreOp,
::mlir::arm_sme::ZeroOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arm_sme {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger(8))) || ((type.isSignlessInteger(16))) || ((type.isSignlessInteger(32))) || ((type.isSignlessInteger(64))) || ((type.isSignlessInteger(128))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer or 128-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({16, 16})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({1, 1})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(128)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isBF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isF64()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector<[16]x[16]xi8> of 8-bit signless integer values or vector<[8]x[8]xi16> of 16-bit signless integer values or vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values or vector<[1]x[1]xi128> of 128-bit signless integer values or vector<[8]x[8]xf16> of 16-bit float values or vector<[8]x[8]xbf16> of bfloat16 type values or vector<[4]x[4]xf32> of 32-bit float values or vector<[2]x[2]xf64> of 64-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                                   ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                                   ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))) || ((elementType.isSignlessInteger(128))) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                                   ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 1)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be  of ranks 1scalable vector of 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer or 128-bit signless integer or 16-bit float or bfloat16 type or 32-bit float or 64-bit float values of length 16/8/4/2/1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Layout of a tile slice";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArmSMEOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::CastTileToVector definitions
//===----------------------------------------------------------------------===//

namespace detail {
CastTileToVectorGenericAdaptorBase::CastTileToVectorGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.cast_tile_to_vector", odsAttrs.getContext());
}

CastTileToVectorGenericAdaptorBase::CastTileToVectorGenericAdaptorBase(CastTileToVector op) : CastTileToVectorGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CastTileToVectorGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CastTileToVectorGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CastTileToVectorAdaptor::CastTileToVectorAdaptor(CastTileToVector op) : CastTileToVectorGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CastTileToVectorAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CastTileToVector::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CastTileToVector::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CastTileToVector::getTileId() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CastTileToVector::getTileIdMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CastTileToVector::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CastTileToVector::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CastTileToVector::getVector() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CastTileToVector::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value tile_id) {
  odsState.addOperands(tile_id);
  odsState.addTypes(vector);
}

void CastTileToVector::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile_id) {
  odsState.addOperands(tile_id);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CastTileToVector::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CastTileToVector::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(IntegerType::get((*this->getODSResults(0).begin()).getType().getContext(),::llvm::isa<IntegerType>(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getElementType())? ::llvm::cast<IntegerType>(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getElementType()).getWidth(): ::llvm::cast<FloatType>(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getElementType()).getWidth()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that `tile_id` has the same number of bits as elements in `vector`");
  return ::mlir::success();
}

::mlir::LogicalResult CastTileToVector::verifyInvariants() {
  return verifyInvariantsImpl();
}

void CastTileToVector::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::ParseResult CastTileToVector::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tile_idRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_idOperands(tile_idRawOperands);  ::llvm::SMLoc tile_idOperandsLoc;
  (void)tile_idOperandsLoc;
  ::mlir::Type tile_idRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tile_idTypes(tile_idRawTypes);
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);

  tile_idOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_idRawOperands[0]))
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
    tile_idRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    vectorRawTypes[0] = type;
  }
  result.addTypes(vectorTypes);
  if (parser.resolveOperands(tile_idOperands, tile_idTypes, tile_idOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CastTileToVector::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTileId();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTileId().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getVector().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CastTileToVector::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::CastTileToVector)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::CastVectorToTile definitions
//===----------------------------------------------------------------------===//

namespace detail {
CastVectorToTileGenericAdaptorBase::CastVectorToTileGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.cast_vector_to_tile", odsAttrs.getContext());
}

CastVectorToTileGenericAdaptorBase::CastVectorToTileGenericAdaptorBase(CastVectorToTile op) : CastVectorToTileGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CastVectorToTileGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CastVectorToTileGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CastVectorToTileAdaptor::CastVectorToTileAdaptor(CastVectorToTile op) : CastVectorToTileGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CastVectorToTileAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CastVectorToTile::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CastVectorToTile::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CastVectorToTile::getVector() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CastVectorToTile::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CastVectorToTile::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CastVectorToTile::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CastVectorToTile::getTileId() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CastVectorToTile::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile_id, ::mlir::Value vector) {
  odsState.addOperands(vector);
  odsState.addTypes(tile_id);
}

void CastVectorToTile::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector) {
  odsState.addOperands(vector);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CastVectorToTile::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CastVectorToTile::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector) {
  odsState.addOperands(vector);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CastVectorToTile::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CastVectorToTile::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CastVectorToTile::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult CastVectorToTile::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(IntegerType::get((*this->getODSOperands(0).begin()).getType().getContext(),::llvm::isa<IntegerType>(::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).getElementType())? ::llvm::cast<IntegerType>(::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).getElementType()).getWidth(): ::llvm::cast<FloatType>(::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).getElementType()).getWidth()), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that `tile_id` has the same number of bits as elements in `vector`");
  return ::mlir::success();
}

::mlir::LogicalResult CastVectorToTile::verifyInvariants() {
  return verifyInvariantsImpl();
}

void CastVectorToTile::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::LogicalResult CastVectorToTile::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = IntegerType::get(operands[0].getType().getContext(),::llvm::isa<IntegerType>(::llvm::cast<VectorType>(operands[0].getType()).getElementType())? ::llvm::cast<IntegerType>(::llvm::cast<VectorType>(operands[0].getType()).getElementType()).getWidth(): ::llvm::cast<FloatType>(::llvm::cast<VectorType>(operands[0].getType()).getElementType()).getWidth());
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CastVectorToTile::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type tile_idRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tile_idTypes(tile_idRawTypes);

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
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
    vectorRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tile_idRawTypes[0] = type;
  }
  result.addTypes(tile_idTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CastVectorToTile::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVector().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getTileId().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CastVectorToTile::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::CastVectorToTile)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::GetTileID definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetTileIDGenericAdaptorBase::GetTileIDGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.get_tile_id", odsAttrs.getContext());
}

GetTileIDGenericAdaptorBase::GetTileIDGenericAdaptorBase(GetTileID op) : GetTileIDGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetTileIDGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetTileIDGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GetTileIDAdaptor::GetTileIDAdaptor(GetTileID op) : GetTileIDGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetTileIDAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetTileID::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetTileID::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GetTileID::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetTileID::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetTileID::getTileId() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GetTileID::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile_id) {
  odsState.addTypes(tile_id);
}

void GetTileID::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetTileID::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetTileID::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetTileID::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetTileID::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type tile_idRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tile_idTypes(tile_idRawTypes);
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
    tile_idRawTypes[0] = type;
  }
  result.addTypes(tile_idTypes);
  return ::mlir::success();
}

void GetTileID::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTileId().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::GetTileID)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::LoadTileSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoadTileSliceOpGenericAdaptorBase::LoadTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.load_tile_slice", odsAttrs.getContext());
}

LoadTileSliceOpGenericAdaptorBase::LoadTileSliceOpGenericAdaptorBase(LoadTileSliceOp op) : LoadTileSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LoadTileSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, true, false};
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

::mlir::DictionaryAttr LoadTileSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr LoadTileSliceOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout LoadTileSliceOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
LoadTileSliceOpAdaptor::LoadTileSliceOpAdaptor(LoadTileSliceOp op) : LoadTileSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LoadTileSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.load_tile_slice' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoadTileSliceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true, false};
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

::mlir::Operation::operand_range LoadTileSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> LoadTileSliceOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Value LoadTileSliceOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range LoadTileSliceOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IndexType> LoadTileSliceOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &LoadTileSliceOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LoadTileSliceOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange LoadTileSliceOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &LoadTileSliceOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LoadTileSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoadTileSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LoadTileSliceOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult LoadTileSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
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
  return ::mlir::success();
}

::mlir::Attribute LoadTileSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoadTileSliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoadTileSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void LoadTileSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void LoadTileSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult LoadTileSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoadTileSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadTileSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr LoadTileSliceOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout LoadTileSliceOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void LoadTileSliceOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void LoadTileSliceOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  odsState.addTypes(result);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LoadTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.addTypes(result);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LoadTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(LoadTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

void LoadTileSliceOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal);
}

::mlir::LogicalResult LoadTileSliceOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {tile, result} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult LoadTileSliceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult LoadTileSliceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult LoadTileSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<LoadTileSliceOp::Properties>().layout = layoutAttr;
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

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tileOperands, resultTypes[0], tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadTileSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTileSliceIndex();
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::LoadTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MoveTileSliceToVectorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MoveTileSliceToVectorOpGenericAdaptorBase::MoveTileSliceToVectorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.move_tile_slice_to_vector", odsAttrs.getContext());
}

MoveTileSliceToVectorOpGenericAdaptorBase::MoveTileSliceToVectorOpGenericAdaptorBase(MoveTileSliceToVectorOp op) : MoveTileSliceToVectorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MoveTileSliceToVectorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MoveTileSliceToVectorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MoveTileSliceToVectorOpAdaptor::MoveTileSliceToVectorOpAdaptor(MoveTileSliceToVectorOp op) : MoveTileSliceToVectorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MoveTileSliceToVectorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MoveTileSliceToVectorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MoveTileSliceToVectorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MoveTileSliceToVectorOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> MoveTileSliceToVectorOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MoveTileSliceToVectorOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MoveTileSliceToVectorOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MoveTileSliceToVectorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MoveTileSliceToVectorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MoveTileSliceToVectorOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tile, ::mlir::Value tile_slice_index) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addTypes(result);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MoveTileSliceToVectorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MoveTileSliceToVectorOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult MoveTileSliceToVectorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(VectorType(VectorType::Builder(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType())).dropDim(0)), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that type of 'result' matches type of 'tile' slice");
  return ::mlir::success();
}

::mlir::LogicalResult MoveTileSliceToVectorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MoveTileSliceToVectorOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = VectorType(VectorType::Builder(::llvm::cast<mlir::VectorType>(operands[0].getType())).dropDim(0));
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MoveTileSliceToVectorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  ::mlir::Type tileRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tileTypes(tileRawTypes);

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
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

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  if (parser.parseKeyword("from"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tileRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(tileOperands, tileTypes, tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MoveTileSliceToVectorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << "[";
  _odsPrinter << getTileSliceIndex();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "from";
  _odsPrinter << ' ';
  {
    auto type = getTile().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MoveTileSliceToVectorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MoveTileSliceToVectorOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MoveVectorToTileSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MoveVectorToTileSliceOpGenericAdaptorBase::MoveVectorToTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.move_vector_to_tile_slice", odsAttrs.getContext());
}

MoveVectorToTileSliceOpGenericAdaptorBase::MoveVectorToTileSliceOpGenericAdaptorBase(MoveVectorToTileSliceOp op) : MoveVectorToTileSliceOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MoveVectorToTileSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MoveVectorToTileSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MoveVectorToTileSliceOpAdaptor::MoveVectorToTileSliceOpAdaptor(MoveVectorToTileSliceOp op) : MoveVectorToTileSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MoveVectorToTileSliceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MoveVectorToTileSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MoveVectorToTileSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MoveVectorToTileSliceOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Value MoveVectorToTileSliceOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> MoveVectorToTileSliceOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MoveVectorToTileSliceOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MoveVectorToTileSliceOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MoveVectorToTileSliceOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MoveVectorToTileSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MoveVectorToTileSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MoveVectorToTileSliceOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addTypes(result);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MoveVectorToTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MoveVectorToTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult MoveVectorToTileSliceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {tile, result} have same type");
  if (!((std::equal_to<>()(VectorType::get(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).getShape().drop_front(),::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).getElementType(),/*scalableDims=*/{true}), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that type of 'vector' matches type of 'tile' slice");
  return ::mlir::success();
}

::mlir::LogicalResult MoveVectorToTileSliceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MoveVectorToTileSliceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MoveVectorToTileSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    vectorRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tileOperands, resultTypes[0], tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MoveVectorToTileSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTileSliceIndex();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVector().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MoveVectorToTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::StoreTileSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
StoreTileSliceOpGenericAdaptorBase::StoreTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.store_tile_slice", odsAttrs.getContext());
}

StoreTileSliceOpGenericAdaptorBase::StoreTileSliceOpGenericAdaptorBase(StoreTileSliceOp op) : StoreTileSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> StoreTileSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr StoreTileSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr StoreTileSliceOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout StoreTileSliceOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
StoreTileSliceOpAdaptor::StoreTileSliceOpAdaptor(StoreTileSliceOp op) : StoreTileSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult StoreTileSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.store_tile_slice' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> StoreTileSliceOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range StoreTileSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value StoreTileSliceOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> StoreTileSliceOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::MemRefType> StoreTileSliceOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(2).begin());
}

::mlir::Operation::operand_range StoreTileSliceOp::getIndices() {
  return getODSOperands(3);
}

::mlir::OpOperand &StoreTileSliceOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &StoreTileSliceOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &StoreTileSliceOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange StoreTileSliceOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> StoreTileSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range StoreTileSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult StoreTileSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
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
  return ::mlir::success();
}

::mlir::Attribute StoreTileSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code StoreTileSliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> StoreTileSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void StoreTileSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void StoreTileSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult StoreTileSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult StoreTileSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreTileSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr StoreTileSliceOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout StoreTileSliceOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void StoreTileSliceOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void StoreTileSliceOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreTileSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void StoreTileSliceOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal);
}

::mlir::LogicalResult StoreTileSliceOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult StoreTileSliceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult StoreTileSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type tileRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tileTypes(tileRawTypes);

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<StoreTileSliceOp::Properties>().layout = layoutAttr;
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

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tileRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(tileOperands, tileTypes, tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreTileSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTileSliceIndex();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getTile().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void StoreTileSliceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::StoreTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::TileLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileLoadOpGenericAdaptorBase::TileLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.tile_load", odsAttrs.getContext());
}

TileLoadOpGenericAdaptorBase::TileLoadOpGenericAdaptorBase(TileLoadOp op) : TileLoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr TileLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr TileLoadOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout TileLoadOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
TileLoadOpAdaptor::TileLoadOpAdaptor(TileLoadOp op) : TileLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileLoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.tile_load' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileLoadOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range TileLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TileLoadOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TileLoadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::OpOperand &TileLoadOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TileLoadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TileLoadOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult TileLoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
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
  return ::mlir::success();
}

::mlir::Attribute TileLoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileLoadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileLoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void TileLoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void TileLoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult TileLoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileLoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileLoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr TileLoadOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout TileLoadOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void TileLoadOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void TileLoadOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  odsState.addTypes(result);
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.addTypes(result);
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileLoadOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal);
}

::mlir::LogicalResult TileLoadOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileLoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<TileLoadOp::Properties>().layout = layoutAttr;
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

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileLoadOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::TileStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileStoreOpGenericAdaptorBase::TileStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.tile_store", odsAttrs.getContext());
}

TileStoreOpGenericAdaptorBase::TileStoreOpGenericAdaptorBase(TileStoreOp op) : TileStoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr TileStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr TileStoreOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout TileStoreOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
TileStoreOpAdaptor::TileStoreOpAdaptor(TileStoreOp op) : TileStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileStoreOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.tile_store' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileStoreOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range TileStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TileStoreOp::getValueToStore() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> TileStoreOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range TileStoreOp::getIndices() {
  return getODSOperands(2);
}

::mlir::OpOperand &TileStoreOp::getValueToStoreMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TileStoreOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TileStoreOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult TileStoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
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
  return ::mlir::success();
}

::mlir::Attribute TileStoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileStoreOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileStoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void TileStoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void TileStoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult TileStoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileStoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileStoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr TileStoreOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout TileStoreOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void TileStoreOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void TileStoreOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileStoreOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal);
}

::mlir::LogicalResult TileStoreOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileStoreOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueToStoreRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueToStoreOperands(valueToStoreRawOperands);  ::llvm::SMLoc valueToStoreOperandsLoc;
  (void)valueToStoreOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type valueToStoreRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueToStoreTypes(valueToStoreRawTypes);

  valueToStoreOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueToStoreRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<TileStoreOp::Properties>().layout = layoutAttr;
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

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueToStoreRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(valueToStoreOperands, valueToStoreTypes, valueToStoreOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValueToStore();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), ::mlir::arm_sme::TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValueToStore().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileStoreOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::ZeroOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ZeroOpGenericAdaptorBase::ZeroOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.zero", odsAttrs.getContext());
}

ZeroOpGenericAdaptorBase::ZeroOpGenericAdaptorBase(ZeroOp op) : ZeroOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ZeroOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ZeroOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ZeroOpAdaptor::ZeroOpAdaptor(ZeroOp op) : ZeroOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ZeroOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ZeroOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ZeroOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ZeroOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ZeroOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ZeroOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ZeroOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ZeroOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ZeroOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ZeroOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ZeroOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ZeroOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void ZeroOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void ZeroOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::ZeroOp)


#endif  // GET_OP_CLASSES

