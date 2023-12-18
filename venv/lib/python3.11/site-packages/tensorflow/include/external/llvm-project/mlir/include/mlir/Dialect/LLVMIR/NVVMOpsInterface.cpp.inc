/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Returns whether the operation has intrinsic support in LLVM.
bool BasicPtxBuilderInterface::hasIntrinsic() {
      return getImpl()->hasIntrinsic(getImpl(), getOperation());
  }
/// Return whether the operation has memory side effects.
bool BasicPtxBuilderInterface::hasSideEffect() {
      return getImpl()->hasSideEffect(getImpl(), getOperation());
  }
/// Returns PTX code.
std::string BasicPtxBuilderInterface::getPtx() {
      return getImpl()->getPtx(getImpl(), getOperation());
  }
/// Generate constant value.
::mlir::Value BasicPtxBuilderInterface::makeConstantI32(::mlir::RewriterBase & rewriter, int val) {
      return getImpl()->makeConstantI32(getImpl(), getOperation(), rewriter, val);
  }
/// Returns arguments to pass PTX code.
/// The order of arguments is started from the results and they are 
/// used as write, followed by the operands and attributes.
void BasicPtxBuilderInterface::getAsmValues(::mlir::RewriterBase & rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>& asmValues) {
      return getImpl()->getAsmValues(getImpl(), getOperation(), rewriter, asmValues);
  }
