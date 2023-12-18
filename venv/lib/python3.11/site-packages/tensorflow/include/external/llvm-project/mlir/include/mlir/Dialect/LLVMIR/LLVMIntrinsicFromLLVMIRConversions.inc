if (intrinsicID == llvm::Intrinsic::abs) {
FailureOr<Value> _llvmir_gen_operand_in = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_in))
  return failure();


    auto op = odsBuilder.create<::mlir::LLVM::AbsOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_in, moduleImport.matchIntegerAttr(llvmOperands[1]));
      moduleImport.mapValue(inst) = op;
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::annotation) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::Annotation>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::assume) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::AssumeOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::bitreverse) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::BitReverseOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::bswap) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::ByteSwapOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::copysign) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CopySignOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_align) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroAlignOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_begin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroBeginOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_end) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroEndOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_free) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroFreeOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_id) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroIdOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_resume) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::CoroResumeOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_save) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroSaveOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_size) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroSizeOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::coro_suspend) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CoroSuspendOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::cos) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CosOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::ctlz) {
FailureOr<Value> _llvmir_gen_operand_in = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_in))
  return failure();


    auto op = odsBuilder.create<::mlir::LLVM::CountLeadingZerosOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_in, moduleImport.matchIntegerAttr(llvmOperands[1]));
      moduleImport.mapValue(inst) = op;
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::cttz) {
FailureOr<Value> _llvmir_gen_operand_in = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_in))
  return failure();


    auto op = odsBuilder.create<::mlir::LLVM::CountTrailingZerosOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_in, moduleImport.matchIntegerAttr(llvmOperands[1]));
      moduleImport.mapValue(inst) = op;
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::ctpop) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::CtPopOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::dbg_declare) {


    // Add debug intrindic to the list of intrinsics that need to be converted once the
    // full function was converted.
    moduleImport.addDebugIntrinsic(inst);
    return success();
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::dbg_label) {


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<::mlir::LLVM::DbgLabelOp>(moduleImport.translateLoc(inst->getDebugLoc()), moduleImport.matchLabelAttr(llvmOperands[0]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::dbg_value) {


    // Add debug intrindic to the list of intrinsics that need to be converted once the
    // full function was converted.
    moduleImport.addDebugIntrinsic(inst);
    return success();
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::debugtrap) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::DebugTrap>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::eh_typeid_for) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::EhTypeidForOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::exp2) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::Exp2Op>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::exp) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::ExpOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::expect) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::ExpectOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::expect_with_probability) {
FailureOr<Value> _llvmir_gen_operand_val = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_val))
  return failure();
FailureOr<Value> _llvmir_gen_operand_expected = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_expected))
  return failure();


    moduleImport.mapValue(inst) = odsBuilder.create<LLVM::ExpectWithProbabilityOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), *_llvmir_gen_operand_val, *_llvmir_gen_operand_expected, moduleImport.matchFloatAttr(llvmOperands[2]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::fabs) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FAbsOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::ceil) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FCeilOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::floor) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FFloorOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::fma) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FMAOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::fmuladd) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FMulAddOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::trunc) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FTruncOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::fshl) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FshlOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::fshr) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::FshrOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::get_active_lane_mask) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::GetActiveLaneMaskOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::is_constant) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::IsConstantOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::is_fpclass) {
FailureOr<Value> _llvmir_gen_operand_in = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_in))
  return failure();


    auto op = odsBuilder.create<::mlir::LLVM::IsFPClass>(moduleImport.translateLoc(inst->getDebugLoc()),
      moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_in, moduleImport.matchIntegerAttr(llvmOperands[1]));
      moduleImport.mapValue(inst) = op;
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::lifetime_end) {
FailureOr<Value> _llvmir_gen_operand_ptr = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_ptr))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<LLVM::LifetimeEndOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), moduleImport.matchIntegerAttr(llvmOperands[0]), *_llvmir_gen_operand_ptr);
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::lifetime_start) {
FailureOr<Value> _llvmir_gen_operand_ptr = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_ptr))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<LLVM::LifetimeStartOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), moduleImport.matchIntegerAttr(llvmOperands[0]), *_llvmir_gen_operand_ptr);
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::llrint) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::LlrintOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::llround) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::LlroundOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::log2) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::Log2Op>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::log10) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::Log10Op>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::log) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::LogOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::lrint) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::LrintOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::lround) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::LroundOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::masked_load) {
FailureOr<Value> _llvmir_gen_operand_data = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_data))
  return failure();
FailureOr<Value> _llvmir_gen_operand_mask = moduleImport.convertValue(llvmOperands[2]);
if (failed(_llvmir_gen_operand_mask))
  return failure();
FailureOr<SmallVector<Value>> _llvmir_gen_operand_pass_thru = moduleImport.convertValues(llvmOperands.drop_front(3));
if (failed(_llvmir_gen_operand_pass_thru))
  return failure();


    moduleImport.mapValue(inst) = odsBuilder.create<LLVM::MaskedLoadOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_data, *_llvmir_gen_operand_mask, *_llvmir_gen_operand_pass_thru, moduleImport.matchIntegerAttr(llvmOperands[1]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::masked_store) {
FailureOr<Value> _llvmir_gen_operand_value = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_value))
  return failure();
FailureOr<Value> _llvmir_gen_operand_data = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_data))
  return failure();
FailureOr<Value> _llvmir_gen_operand_mask = moduleImport.convertValue(llvmOperands[3]);
if (failed(_llvmir_gen_operand_mask))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<LLVM::MaskedStoreOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      *_llvmir_gen_operand_value, *_llvmir_gen_operand_data, *_llvmir_gen_operand_mask, moduleImport.matchIntegerAttr(llvmOperands[2]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::matrix_column_major_load) {
FailureOr<Value> _llvmir_gen_operand_data = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_data))
  return failure();
FailureOr<Value> _llvmir_gen_operand_stride = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_stride))
  return failure();


    moduleImport.mapValue(inst) = odsBuilder.create<LLVM::MatrixColumnMajorLoadOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_data, *_llvmir_gen_operand_stride,
      moduleImport.matchIntegerAttr(llvmOperands[2]), moduleImport.matchIntegerAttr(llvmOperands[3]), moduleImport.matchIntegerAttr(llvmOperands[4]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::matrix_column_major_store) {
FailureOr<Value> _llvmir_gen_operand_matrix = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_matrix))
  return failure();
FailureOr<Value> _llvmir_gen_operand_data = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_data))
  return failure();
FailureOr<Value> _llvmir_gen_operand_stride = moduleImport.convertValue(llvmOperands[2]);
if (failed(_llvmir_gen_operand_stride))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<LLVM::MatrixColumnMajorStoreOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), *_llvmir_gen_operand_matrix, *_llvmir_gen_operand_data, *_llvmir_gen_operand_stride,
      moduleImport.matchIntegerAttr(llvmOperands[3]), moduleImport.matchIntegerAttr(llvmOperands[4]), moduleImport.matchIntegerAttr(llvmOperands[5]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::matrix_multiply) {
FailureOr<Value> _llvmir_gen_operand_lhs = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_lhs))
  return failure();
FailureOr<Value> _llvmir_gen_operand_rhs = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_rhs))
  return failure();


    moduleImport.mapValue(inst) = odsBuilder.create<LLVM::MatrixMultiplyOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_lhs, *_llvmir_gen_operand_rhs,
      moduleImport.matchIntegerAttr(llvmOperands[2]), moduleImport.matchIntegerAttr(llvmOperands[3]), moduleImport.matchIntegerAttr(llvmOperands[4]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::matrix_transpose) {
FailureOr<Value> _llvmir_gen_operand_matrix = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_matrix))
  return failure();


    moduleImport.mapValue(inst) = odsBuilder.create<LLVM::MatrixTransposeOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_matrix,
      moduleImport.matchIntegerAttr(llvmOperands[1]), moduleImport.matchIntegerAttr(llvmOperands[2]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::maxnum) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::MaxNumOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::maximum) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::MaximumOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::memcpy_inline) {
FailureOr<Value> _llvmir_gen_operand_dst = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_dst))
  return failure();
FailureOr<Value> _llvmir_gen_operand_src = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_src))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<::mlir::LLVM::MemcpyInlineOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      *_llvmir_gen_operand_dst, *_llvmir_gen_operand_src, moduleImport.matchIntegerAttr(llvmOperands[2]), moduleImport.matchIntegerAttr(llvmOperands[3]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::memcpy) {
FailureOr<Value> _llvmir_gen_operand_dst = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_dst))
  return failure();
FailureOr<Value> _llvmir_gen_operand_src = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_src))
  return failure();
FailureOr<Value> _llvmir_gen_operand_len = moduleImport.convertValue(llvmOperands[2]);
if (failed(_llvmir_gen_operand_len))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<::mlir::LLVM::MemcpyOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      *_llvmir_gen_operand_dst, *_llvmir_gen_operand_src, *_llvmir_gen_operand_len, moduleImport.matchIntegerAttr(llvmOperands[3]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::memmove) {
FailureOr<Value> _llvmir_gen_operand_dst = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_dst))
  return failure();
FailureOr<Value> _llvmir_gen_operand_src = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_src))
  return failure();
FailureOr<Value> _llvmir_gen_operand_len = moduleImport.convertValue(llvmOperands[2]);
if (failed(_llvmir_gen_operand_len))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<::mlir::LLVM::MemmoveOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      *_llvmir_gen_operand_dst, *_llvmir_gen_operand_src, *_llvmir_gen_operand_len, moduleImport.matchIntegerAttr(llvmOperands[3]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::memset) {
FailureOr<Value> _llvmir_gen_operand_dst = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_dst))
  return failure();
FailureOr<Value> _llvmir_gen_operand_val = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_val))
  return failure();
FailureOr<Value> _llvmir_gen_operand_len = moduleImport.convertValue(llvmOperands[2]);
if (failed(_llvmir_gen_operand_len))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<::mlir::LLVM::MemsetOp>(moduleImport.translateLoc(inst->getDebugLoc()),
      *_llvmir_gen_operand_dst, *_llvmir_gen_operand_val, *_llvmir_gen_operand_len, moduleImport.matchIntegerAttr(llvmOperands[3]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::minnum) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::MinNumOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::minimum) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::MinimumOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nearbyint) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::NearbyintOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::experimental_noalias_scope_decl) {


    FailureOr<SmallVector<LLVM::AliasScopeAttr>> scopeAttrs =
      moduleImport.matchAliasScopeAttrs(llvmOperands[0]);
    // Drop the intrinsic if the alias scope translation fails since the scope
    // is not used by an aliasing operation, such as a load or store, that is
    // used to convert the alias scope metadata.
    if (failed(scopeAttrs))
      return success();
    if (scopeAttrs->size() != 1)
      return failure();
    moduleImport.mapNoResultOp(inst) = odsBuilder.create<LLVM::NoAliasScopeDeclOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), (*scopeAttrs)[0]);
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::powi) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::PowIOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::pow) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::PowOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::prefetch) {
FailureOr<Value> _llvmir_gen_operand_addr = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_addr))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<::mlir::LLVM::Prefetch>(moduleImport.translateLoc(inst->getDebugLoc()),
      *_llvmir_gen_operand_addr, moduleImport.matchIntegerAttr(llvmOperands[1]), moduleImport.matchIntegerAttr(llvmOperands[2]), moduleImport.matchIntegerAttr(llvmOperands[3]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::ptr_annotation) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::PtrAnnotation>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::rint) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::RintOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::roundeven) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::RoundEvenOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::round) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::RoundOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::sadd_sat) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SAddSat>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::sadd_with_overflow) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SAddWithOverflowOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::smax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SMaxOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::smin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SMinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::smul_with_overflow) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SMulWithOverflowOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::ssa_copy) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SSACopyOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::sshl_sat) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SSHLSat>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::ssub_sat) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SSubSat>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::ssub_with_overflow) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SSubWithOverflowOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::sin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::sqrt) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::SqrtOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::stackrestore) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::StackRestoreOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::stacksave) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::StackSaveOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::experimental_stepvector) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::StepVectorOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::threadlocal_address) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::ThreadlocalAddressOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::trap) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::Trap>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::uadd_sat) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::UAddSat>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::uadd_with_overflow) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::UAddWithOverflowOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::ubsantrap) {


    moduleImport.mapNoResultOp(inst) =
      odsBuilder.create<LLVM::UBSanTrap>(moduleImport.translateLoc(inst->getDebugLoc()), moduleImport.matchIntegerAttr(llvmOperands[0]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::umax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::UMaxOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::umin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::UMinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::umul_with_overflow) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::UMulWithOverflowOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::ushl_sat) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::USHLSat>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::usub_sat) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::USubSat>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::usub_with_overflow) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::USubWithOverflowOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_ashr) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPAShrOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_add) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPAddOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_and) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPAndOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fadd) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFAddOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fdiv) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFDivOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fmuladd) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFMulAddOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fmul) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFMulOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fneg) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFNegOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fpext) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFPExtOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fptosi) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFPToSIOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fptoui) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFPToUIOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fptrunc) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFPTruncOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_frem) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFRemOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fsub) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFSubOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_fma) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPFmaOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_inttoptr) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPIntToPtrOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_lshr) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPLShrOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_load) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPLoadOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_merge) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPMergeMinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_mul) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPMulOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_or) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPOrOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_ptrtoint) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPPtrToIntOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_add) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceAddOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_and) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceAndOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_fadd) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceFAddOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_fmax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceFMaxOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_fmin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceFMinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_fmul) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceFMulOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_mul) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceMulOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_or) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceOrOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_smax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceSMaxOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_smin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceSMinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_umax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceUMaxOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_umin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceUMinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_reduce_xor) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPReduceXorOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_sdiv) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPSDivOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_sext) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPSExtOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_sitofp) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPSIToFPOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_srem) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPSRemOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_select) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPSelectMinOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_shl) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPShlOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_store) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::VPStoreOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::experimental_vp_strided_load) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPStridedLoadOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::experimental_vp_strided_store) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::VPStridedStoreOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_sub) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPSubOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_trunc) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPTruncOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_udiv) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPUDivOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_uitofp) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPUIToFPOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_urem) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPURemOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_xor) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPXorOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vp_zext) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::VPZExtOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vacopy) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::VaCopyOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vaend) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::VaEndOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vastart) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::VaStartOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::var_annotation) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::VarAnnotation>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::masked_compressstore) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {};
    auto op = odsBuilder.create<::mlir::LLVM::masked_compressstore>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapNoResultOp(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::masked_expandload) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::masked_expandload>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::masked_gather) {
FailureOr<Value> _llvmir_gen_operand_ptrs = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_ptrs))
  return failure();
FailureOr<Value> _llvmir_gen_operand_mask = moduleImport.convertValue(llvmOperands[2]);
if (failed(_llvmir_gen_operand_mask))
  return failure();
FailureOr<SmallVector<Value>> _llvmir_gen_operand_pass_thru = moduleImport.convertValues(llvmOperands.drop_front(3));
if (failed(_llvmir_gen_operand_pass_thru))
  return failure();


    moduleImport.mapValue(inst) = odsBuilder.create<LLVM::masked_gather>(moduleImport.translateLoc(inst->getDebugLoc()),
      moduleImport.convertType(inst->getType()), *_llvmir_gen_operand_ptrs, *_llvmir_gen_operand_mask, *_llvmir_gen_operand_pass_thru, moduleImport.matchIntegerAttr(llvmOperands[1]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::masked_scatter) {
FailureOr<Value> _llvmir_gen_operand_value = moduleImport.convertValue(llvmOperands[0]);
if (failed(_llvmir_gen_operand_value))
  return failure();
FailureOr<Value> _llvmir_gen_operand_ptrs = moduleImport.convertValue(llvmOperands[1]);
if (failed(_llvmir_gen_operand_ptrs))
  return failure();
FailureOr<Value> _llvmir_gen_operand_mask = moduleImport.convertValue(llvmOperands[3]);
if (failed(_llvmir_gen_operand_mask))
  return failure();


    moduleImport.mapNoResultOp(inst) = odsBuilder.create<LLVM::masked_scatter>(moduleImport.translateLoc(inst->getDebugLoc()),
      *_llvmir_gen_operand_value, *_llvmir_gen_operand_ptrs, *_llvmir_gen_operand_mask, moduleImport.matchIntegerAttr(llvmOperands[2]));
  
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_add) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_add>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_and) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_and>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_fadd) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_fadd>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_fmax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_fmax>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_fmaximum) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_fmaximum>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_fmin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_fmin>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_fminimum) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_fminimum>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_fmul) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_fmul>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.setFastmathFlagsAttr(inst, op);moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_mul) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_mul>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_or) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_or>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_smax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_smax>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_smin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_smin>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_umax) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_umax>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_umin) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_umin>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vector_reduce_xor) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vector_reduce_xor>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::vscale) {


    FailureOr<SmallVector<Value>> mlirOperands =
      moduleImport.convertValues(llvmOperands);
    if (failed(mlirOperands))
      return failure();
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::LLVM::vscale>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, *mlirOperands);
    moduleImport.mapValue(inst) = op;
  return success();
}
