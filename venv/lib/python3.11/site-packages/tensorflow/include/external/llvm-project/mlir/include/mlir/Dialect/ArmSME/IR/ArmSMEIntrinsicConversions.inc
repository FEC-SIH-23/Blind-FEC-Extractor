if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1b_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1b_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1b_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1b_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1d_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1d_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1d_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1d_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1h_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1h_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1h_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1h_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1q_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1q_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1q_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1q_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1w_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1w_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1w_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_ld1w_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mopa>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_mopa, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mopa_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_mopa_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mops>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_mops, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mops_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_mops_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_read_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_read_horiz, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_read_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_read_vert, { moduleTranslation.convertType(opInst.getResult(0).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_smopa_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_smopa_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_smops_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_smops_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1b_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1b_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1b_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1b_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1d_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1d_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1d_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1d_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1h_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1h_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1h_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1h_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1q_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1q_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1q_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1q_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1w_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1w_horiz, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1w_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_st1w_vert, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_str>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_str, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_sumopa_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_sumopa_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_sumops_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_sumops_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_umopa_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_umopa_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_umops_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_umops_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_usmopa_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_usmopa_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_usmops_wide>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_usmops_wide, { moduleTranslation.convertType(opInst.getOperand(4).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_write_horiz>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_write_horiz, { moduleTranslation.convertType(opInst.getOperand(3).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_write_vert>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_write_vert, { moduleTranslation.convertType(opInst.getOperand(3).getType()) } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_za_disable>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_za_disable, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_za_enable>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_za_enable, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_zero>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::aarch64_sme_zero, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    
  return success();
}
