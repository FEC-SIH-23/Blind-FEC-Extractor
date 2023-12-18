if (auto op = dyn_cast<::mlir::LLVM::AbsOp>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::abs,
      {moduleTranslation.lookupValue(op.getIn()), builder.getInt1(op.getIsIntMinPoison())},  { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    moduleTranslation.mapValue(op.getRes()) = inst;
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::Annotation>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::annotation, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(2).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::AssumeOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::assume, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::BitReverseOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::bitreverse, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::ByteSwapOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::bswap, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CopySignOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::copysign, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroAlignOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_align, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroBeginOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_begin, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroEndOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_end, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroFreeOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_free, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroIdOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_id, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroResumeOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_resume, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroSaveOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_save, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroSizeOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_size, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CoroSuspendOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::coro_suspend, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CosOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::cos, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CountLeadingZerosOp>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::ctlz,
      {moduleTranslation.lookupValue(op.getIn()), builder.getInt1(op.getIsZeroPoison())},  { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    moduleTranslation.mapValue(op.getRes()) = inst;
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CountTrailingZerosOp>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::cttz,
      {moduleTranslation.lookupValue(op.getIn()), builder.getInt1(op.getIsZeroPoison())},  { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    moduleTranslation.mapValue(op.getRes()) = inst;
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::CtPopOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ctpop, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::DbgDeclareOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::LLVMContext &ctx = module->getContext();
    llvm::Function *fn =
      llvm::Intrinsic::getDeclaration(module, llvm::Intrinsic::dbg_declare);
    builder.CreateCall(fn, {
        llvm::MetadataAsValue::get(ctx,
            llvm::ValueAsMetadata::get(moduleTranslation.lookupValue(opInst.getOperand(0)))),
        llvm::MetadataAsValue::get(ctx, moduleTranslation.translateDebugInfo(op.getVarInfo())),
        llvm::MetadataAsValue::get(ctx, llvm::DIExpression::get(ctx, std::nullopt)),
      });
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::DbgLabelOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::LLVMContext &ctx = module->getContext();
    llvm::Function *fn =
      llvm::Intrinsic::getDeclaration(module, llvm::Intrinsic::dbg_label);
    builder.CreateCall(fn, {
        llvm::MetadataAsValue::get(ctx, moduleTranslation.translateDebugInfo(op.getLabel()))
      });
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::DbgValueOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::LLVMContext &ctx = module->getContext();
    llvm::Function *fn =
      llvm::Intrinsic::getDeclaration(module, llvm::Intrinsic::dbg_value);
    builder.CreateCall(fn, {
        llvm::MetadataAsValue::get(ctx,
            llvm::ValueAsMetadata::get(moduleTranslation.lookupValue(opInst.getOperand(0)))),
        llvm::MetadataAsValue::get(ctx, moduleTranslation.translateDebugInfo(op.getVarInfo())),
        llvm::MetadataAsValue::get(ctx, llvm::DIExpression::get(ctx, std::nullopt)),
      });
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::DebugTrap>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::debugtrap, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::EhTypeidForOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::eh_typeid_for, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::Exp2Op>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::exp2, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::ExpOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::exp, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::ExpectOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::expect, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::ExpectWithProbabilityOp>(opInst)) {

    createIntrinsicCall(
      builder, llvm::Intrinsic::expect_with_probability,
      {moduleTranslation.lookupValue(op.getVal()), moduleTranslation.lookupValue(op.getExpected()), llvm::ConstantFP::get(builder.getDoubleTy(), op.getProb())},
      {moduleTranslation.convertType(op.getResult().getType())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FAbsOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fabs, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FCeilOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ceil, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FFloorOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::floor, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FMAOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fma, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FMulAddOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fmuladd, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FTruncOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::trunc, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FshlOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fshl, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::FshrOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fshr, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::GetActiveLaneMaskOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::get_active_lane_mask, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::IsConstantOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::is_constant, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::IsFPClass>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::is_fpclass,
      {moduleTranslation.lookupValue(op.getIn()), builder.getInt32(op.getBit())},
       { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    moduleTranslation.mapValue(op.getRes()) = inst;
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::LifetimeEndOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module, llvm::Intrinsic::lifetime_end, {moduleTranslation.convertType(opInst.getOperand(0).getType())});
    builder.CreateCall(fn, {builder.getInt64(op.getSizeAttr().getInt()),
                            moduleTranslation.lookupValue(op.getPtr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::LifetimeStartOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module, llvm::Intrinsic::lifetime_start, {moduleTranslation.convertType(opInst.getOperand(0).getType())});
    builder.CreateCall(fn, {builder.getInt64(op.getSizeAttr().getInt()),
                            moduleTranslation.lookupValue(op.getPtr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::LlrintOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::llrint, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::LlroundOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::llround, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::Log2Op>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::log2, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::Log10Op>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::log10, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::LogOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::log, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::LrintOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::lrint, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::LroundOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::lround, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MaskedLoadOp>(opInst)) {

    moduleTranslation.mapValue(op.getRes()) = moduleTranslation.lookupValues(op.getPassThru()).empty() ? builder.CreateMaskedLoad(
        moduleTranslation.convertType(op.getResult().getType()), moduleTranslation.lookupValue(op.getData()), llvm::Align(op.getAlignment()), moduleTranslation.lookupValue(op.getMask())) :
      builder.CreateMaskedLoad(
        moduleTranslation.convertType(op.getResult().getType()), moduleTranslation.lookupValue(op.getData()), llvm::Align(op.getAlignment()), moduleTranslation.lookupValue(op.getMask()), moduleTranslation.lookupValues(op.getPassThru())[0]);
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MaskedStoreOp>(opInst)) {

    builder.CreateMaskedStore(
      moduleTranslation.lookupValue(op.getValue()), moduleTranslation.lookupValue(op.getData()), llvm::Align(op.getAlignment()), moduleTranslation.lookupValue(op.getMask()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MatrixColumnMajorLoadOp>(opInst)) {

    llvm::MatrixBuilder mb(builder);
    const llvm::DataLayout &dl =
      builder.GetInsertBlock()->getModule()->getDataLayout();
    llvm::Type *ElemTy = moduleTranslation.convertType(
        getVectorElementType(op.getType()));
    llvm::Align align = dl.getABITypeAlign(ElemTy);
    moduleTranslation.mapValue(op.getRes()) = mb.CreateColumnMajorLoad(
      ElemTy, moduleTranslation.lookupValue(op.getData()), align, moduleTranslation.lookupValue(op.getStride()), op.getIsVolatile(), op.getRows(),
      op.getColumns());
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MatrixColumnMajorStoreOp>(opInst)) {

    llvm::MatrixBuilder mb(builder);
    const llvm::DataLayout &dl =
      builder.GetInsertBlock()->getModule()->getDataLayout();
    Type elementType = getVectorElementType(op.getMatrix().getType());
    llvm::Align align = dl.getABITypeAlign(
      moduleTranslation.convertType(elementType));
    mb.CreateColumnMajorStore(
      moduleTranslation.lookupValue(op.getMatrix()), moduleTranslation.lookupValue(op.getData()), align, moduleTranslation.lookupValue(op.getStride()), op.getIsVolatile(),
      op.getRows(), op.getColumns());
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MatrixMultiplyOp>(opInst)) {

    llvm::MatrixBuilder mb(builder);
    moduleTranslation.mapValue(op.getRes()) = mb.CreateMatrixMultiply(
      moduleTranslation.lookupValue(op.getLhs()), moduleTranslation.lookupValue(op.getRhs()), op.getLhsRows(), op.getLhsColumns(),
      op.getRhsColumns());
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MatrixTransposeOp>(opInst)) {

    llvm::MatrixBuilder mb(builder);
    moduleTranslation.mapValue(op.getRes()) = mb.CreateMatrixTranspose(
      moduleTranslation.lookupValue(op.getMatrix()), op.getRows(), op.getColumns());
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MaxNumOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::maxnum, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MaximumOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::maximum, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MemcpyInlineOp>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::memcpy_inline,
      {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getSrc()), builder.getInt(op.getLen()),
       builder.getInt1(op.getIsVolatile())}, { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()),  moduleTranslation.convertType(op.getLenAttr().getType())  }); 
    moduleTranslation.setAccessGroupsMetadata(op, inst);
  
    moduleTranslation.setAliasScopeMetadata(op, inst);
    moduleTranslation.setTBAAMetadata(op, inst);
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MemcpyOp>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::memcpy,
      {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getSrc()), moduleTranslation.lookupValue(op.getLen()),
       builder.getInt1(op.getIsVolatile())},
       { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()), moduleTranslation.convertType(opInst.getOperand(2).getType()) }  ); 
    moduleTranslation.setAccessGroupsMetadata(op, inst);
  
    moduleTranslation.setAliasScopeMetadata(op, inst);
    moduleTranslation.setTBAAMetadata(op, inst);
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MemmoveOp>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::memmove,
      {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getSrc()), moduleTranslation.lookupValue(op.getLen()),
       builder.getInt1(op.getIsVolatile())},
       { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()), moduleTranslation.convertType(opInst.getOperand(2).getType()) }  ); 
    moduleTranslation.setAccessGroupsMetadata(op, inst);
  
    moduleTranslation.setAliasScopeMetadata(op, inst);
    moduleTranslation.setTBAAMetadata(op, inst);
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MemsetOp>(opInst)) {

    auto *inst = createIntrinsicCall(
      builder, llvm::Intrinsic::memset,
      {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getVal()), moduleTranslation.lookupValue(op.getLen()),
       builder.getInt1(op.getIsVolatile())},
       { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(2).getType()) }  ); 
    moduleTranslation.setAccessGroupsMetadata(op, inst);
  
    moduleTranslation.setAliasScopeMetadata(op, inst);
    moduleTranslation.setTBAAMetadata(op, inst);
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MinNumOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::minnum, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::MinimumOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::minimum, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::NearbyintOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nearbyint, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::NoAliasScopeDeclOp>(opInst)) {

    // Wrap the scope argument into a list since the LLVM IR intrinsic takes
    // a list containing exactly one scope rather than a scope itself.
    llvm::MDNode* node = moduleTranslation.getOrCreateAliasScopes({op.getScope()});
    builder.CreateNoAliasScopeDeclaration(node);
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::PowIOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::powi, { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::PowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::pow, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::Prefetch>(opInst)) {

    createIntrinsicCall(
      builder, llvm::Intrinsic::prefetch,
      {moduleTranslation.lookupValue(op.getAddr()), builder.getInt32(op.getRw()),
       builder.getInt32(op.getHint()),
       builder.getInt32(op.getCache())},
       { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::PtrAnnotation>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ptr_annotation, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(2).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::RintOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::rint, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::RoundEvenOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::roundeven, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::RoundOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::round, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SAddSat>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::sadd_sat, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SAddWithOverflowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::sadd_with_overflow, { moduleTranslation.convertType(
        ::llvm::cast<LLVM::LLVMStructType>(opInst.getResult(0).getType())
              .getBody()[0]) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SMaxOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::smax, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SMinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::smin, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SMulWithOverflowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::smul_with_overflow, { moduleTranslation.convertType(
        ::llvm::cast<LLVM::LLVMStructType>(opInst.getResult(0).getType())
              .getBody()[0]) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SSACopyOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ssa_copy, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SSHLSat>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::sshl_sat, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SSubSat>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ssub_sat, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SSubWithOverflowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ssub_with_overflow, { moduleTranslation.convertType(
        ::llvm::cast<LLVM::LLVMStructType>(opInst.getResult(0).getType())
              .getBody()[0]) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::sin, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::SqrtOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::sqrt, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::StackRestoreOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::stackrestore, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::StackSaveOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::stacksave, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::StepVectorOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_stepvector, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::ThreadlocalAddressOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::threadlocal_address, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::Trap>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::trap, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::UAddSat>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::uadd_sat, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::UAddWithOverflowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::uadd_with_overflow, { moduleTranslation.convertType(
        ::llvm::cast<LLVM::LLVMStructType>(opInst.getResult(0).getType())
              .getBody()[0]) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::UBSanTrap>(opInst)) {

    createIntrinsicCall(
      builder, llvm::Intrinsic::ubsantrap, {builder.getInt8(op.getFailureKind())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::UMaxOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::umax, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::UMinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::umin, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::UMulWithOverflowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::umul_with_overflow, { moduleTranslation.convertType(
        ::llvm::cast<LLVM::LLVMStructType>(opInst.getResult(0).getType())
              .getBody()[0]) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::USHLSat>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ushl_sat, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::USubSat>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::usub_sat, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::USubWithOverflowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::usub_with_overflow, { moduleTranslation.convertType(
        ::llvm::cast<LLVM::LLVMStructType>(opInst.getResult(0).getType())
              .getBody()[0]) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPAShrOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_ashr, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPAddOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_add, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPAndOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_and, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFAddOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fadd, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFDivOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fdiv, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFMulAddOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fmuladd, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFMulOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fmul, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFNegOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fneg, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFPExtOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fpext, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFPToSIOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fptosi, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFPToUIOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fptoui, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFPTruncOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fptrunc, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFRemOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_frem, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFSubOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fsub, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPFmaOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_fma, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPIntToPtrOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_inttoptr, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPLShrOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_lshr, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPLoadOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_load, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPMergeMinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_merge, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPMulOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_mul, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPOrOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_or, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPPtrToIntOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_ptrtoint, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceAddOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_add, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceAndOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_and, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceFAddOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_fadd, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceFMaxOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_fmax, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceFMinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_fmin, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceFMulOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_fmul, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceMulOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_mul, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceOrOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_or, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceSMaxOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_smax, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceSMinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_smin, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceUMaxOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_umax, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceUMinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_umin, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPReduceXorOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_reduce_xor, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPSDivOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_sdiv, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPSExtOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_sext, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPSIToFPOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_sitofp, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPSRemOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_srem, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPSelectMinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_select, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPShlOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_shl, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPStoreOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_store, { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPStridedLoadOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vp_strided_load, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPStridedStoreOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vp_strided_store, { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()), moduleTranslation.convertType(opInst.getOperand(2).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPSubOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_sub, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPTruncOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_trunc, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPUDivOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_udiv, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPUIToFPOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_uitofp, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPURemOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_urem, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPXorOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_xor, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VPZExtOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vp_zext, { moduleTranslation.convertType(opInst.getResult(0).getType()), moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VaCopyOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vacopy, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VaEndOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vaend, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VaStartOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vastart, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::VarAnnotation>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::var_annotation, { moduleTranslation.convertType(opInst.getOperand(0).getType()), moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::masked_compressstore>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::masked_compressstore, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::masked_expandload>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::masked_expandload, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::masked_gather>(opInst)) {

    moduleTranslation.mapValue(op.getRes()) = moduleTranslation.lookupValues(op.getPassThru()).empty() ? builder.CreateMaskedGather(
        moduleTranslation.convertType(op.getResult().getType()), moduleTranslation.lookupValue(op.getPtrs()), llvm::Align(op.getAlignment()), moduleTranslation.lookupValue(op.getMask())) :
      builder.CreateMaskedGather(
        moduleTranslation.convertType(op.getResult().getType()), moduleTranslation.lookupValue(op.getPtrs()), llvm::Align(op.getAlignment()), moduleTranslation.lookupValue(op.getMask()), moduleTranslation.lookupValues(op.getPassThru())[0]);
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::masked_scatter>(opInst)) {

    builder.CreateMaskedScatter(
      moduleTranslation.lookupValue(op.getValue()), moduleTranslation.lookupValue(op.getPtrs()), llvm::Align(op.getAlignment()), moduleTranslation.lookupValue(op.getMask()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_extract>(opInst)) {

    moduleTranslation.mapValue(op.getRes()) = builder.CreateExtractVector(
        moduleTranslation.convertType(op.getResult().getType()), moduleTranslation.lookupValue(op.getSrcvec()), builder.getInt64(op.getPos()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_insert>(opInst)) {

    moduleTranslation.mapValue(op.getRes()) = builder.CreateInsertVector(
        moduleTranslation.convertType(op.getResult().getType()), moduleTranslation.lookupValue(op.getDstvec()), moduleTranslation.lookupValue(op.getSrcvec()), builder.getInt64(op.getPos()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_add>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_add, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_and>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_and, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_fadd>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_fadd, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_fmax>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_fmax, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_fmaximum>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_fmaximum, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_fmin>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_fmin, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_fminimum>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_fminimum, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_fmul>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_fmul, { moduleTranslation.convertType(opInst.getOperand(1).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_mul>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_mul, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_or>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_or, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_smax>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_smax, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_smin>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_smin, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_umax>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_umax, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_umin>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_umin, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vector_reduce_xor>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vector_reduce_xor, { moduleTranslation.convertType(opInst.getOperand(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::LLVM::vscale>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::vscale, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
