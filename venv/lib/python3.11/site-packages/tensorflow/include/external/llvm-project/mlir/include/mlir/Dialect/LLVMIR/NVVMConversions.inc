if (auto op = dyn_cast<::mlir::NVVM::Barrier0Op>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier0);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockDimXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockDimYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockDimZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockIdXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockIdYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockIdZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockInClusterIdXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockInClusterIdYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockInClusterIdZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterArriveOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_arrive);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterArriveRelaxedOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_arrive_relaxed);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDim>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctarank, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDimXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDimYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDimZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterId>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctarank, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterIdXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterIdYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterIdZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterWaitOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_wait);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncCommitGroupOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_cp_async_commit_group);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncOp>(opInst)) {

      llvm::Intrinsic::ID id;
      switch (op.getSize()) {
        case 4:
          id = llvm::Intrinsic::nvvm_cp_async_ca_shared_global_4;
          break;
        case 8:
          id = llvm::Intrinsic::nvvm_cp_async_ca_shared_global_8;
          break;
        case 16:
          if(op.getModifier() == NVVM::LoadCacheModifierKind::CG)
            id = llvm::Intrinsic::nvvm_cp_async_cg_shared_global_16;
          else if(op.getModifier() == NVVM::LoadCacheModifierKind::CA)
            id = llvm::Intrinsic::nvvm_cp_async_ca_shared_global_16;
          else 
            llvm_unreachable("unsupported cache modifier");
          break;
        default:
          llvm_unreachable("unsupported async copy size");
      }
      createIntrinsicCall(builder, id, {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getSrc())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncWaitGroupOp>(opInst)) {

      createIntrinsicCall(
        builder,
        llvm::Intrinsic::nvvm_cp_async_wait_group,
        llvm::ConstantInt::get(
          llvm::Type::getInt32Ty(moduleTranslation.getLLVMContext()),
          op.getN()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::FenceScClusterOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_fence_sc_cluster);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridDimXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridDimYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridDimZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridInClusterDimXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridInClusterDimYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridInClusterDimZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::LaneIdOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_laneid, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::LdMatrixOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId = getLdMatrixIntrinsicId(op.getLayout(), op.getNum());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, operands, {operands[0]->getType()});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveNocompleteOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive_noComplete, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveNocompleteSharedOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive_noComplete_shared, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveSharedOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive_shared, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInitOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_init, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInitSharedOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_init_shared, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInvalOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_inval, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInvalSharedOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_inval_shared, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierTestWaitOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_test_wait, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getState())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierTestWaitSharedOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_test_wait_shared, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getState())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MmaOp>(opInst)) {

    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    auto intId = mlir::NVVM::MmaOp::getIntrinsicID(
        op.getShape().getM(), op.getShape().getN(), op.getShape().getK(),
        op.getB1Op(), op.getIntOverflowBehavior(),
        op.getLayoutA(), op.getLayoutB(),
        *op.getMultiplicandAPtxType(),
        *op.getMultiplicandBPtxType(),
        op.accumPtxType(),
        op.resultPtxType());

    moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(
      builder, intId, operands);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::RcpApproxFtzF32Op>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_rcp_approx_ftz_f, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ReduxOp>(opInst)) {

      auto intId = getReduxIntrinsicId(moduleTranslation.convertType(op.getResult().getType()), op.getKind());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, {moduleTranslation.lookupValue(op.getVal()), moduleTranslation.lookupValue(op.getMaskAndClamp())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ShflOp>(opInst)) {

      auto intId = getShflIntrinsicId(
          moduleTranslation.convertType(op.getResult().getType()), op.getKind(), static_cast<bool>(op.getReturnValueAndIsValid()));
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder,
          intId, {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getVal()), moduleTranslation.lookupValue(op.getOffset()), moduleTranslation.lookupValue(op.getMaskAndClamp())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::SyncWarpOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_bar_warp_sync, {moduleTranslation.lookupValue(op.getMask())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ThreadIdXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_tid_x, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ThreadIdYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_tid_y, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ThreadIdZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_tid_z, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::VoteBallotOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder,
            llvm::Intrinsic::nvvm_vote_ballot_sync, {moduleTranslation.lookupValue(op.getMask()), moduleTranslation.lookupValue(op.getPred())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WMMALoadOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId = mlir::NVVM::WMMALoadOp::getIntrinsicID(
        op.getM(), op.getN(), op.getK(), op.getLayout(), op.getEltype(), op.getFrag());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, operands, {operands[0]->getType()});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WMMAMmaOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId = mlir::NVVM::WMMAMmaOp::getIntrinsicID(
        op.getM(), op.getN(), op.getK(), op.getLayoutA(), op.getLayoutB(), op.getEltypeA(), op.getEltypeB());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, operands);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WMMAStoreOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId =
        mlir::NVVM::WMMAStoreOp::getIntrinsicID(op.getM(), op.getN(), op.getK(), op.getLayout(), op.getEltype());
      createIntrinsicCall(builder, intId, operands, {operands[0]->getType()});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WarpSizeOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_warpsize, {  } );
    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    
    auto *inst = builder.CreateCall(fn, operands);
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
