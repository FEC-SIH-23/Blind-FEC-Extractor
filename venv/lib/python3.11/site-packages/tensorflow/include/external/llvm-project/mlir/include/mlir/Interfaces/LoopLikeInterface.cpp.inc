/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Returns true if the given value is defined outside of the loop.
/// A sensible implementation could be to check whether the value's defining
/// operation lies outside of the loops body region. If the loop uses
/// explicit capture of dependencies, an implementation could check whether
/// the value corresponds to a captured dependency.
bool mlir::LoopLikeOpInterface::isDefinedOutsideOfLoop(::mlir::Value  value) {
      return getImpl()->isDefinedOutsideOfLoop(getImpl(), getOperation(), value);
  }
/// Returns the regions that make up the body of the loop and should be
/// inspected for loop-invariant operations.
::llvm::SmallVector<::mlir::Region *> mlir::LoopLikeOpInterface::getLoopRegions() {
      return getImpl()->getLoopRegions(getImpl(), getOperation());
  }
/// Moves the given loop-invariant operation out of the loop.
void mlir::LoopLikeOpInterface::moveOutOfLoop(::mlir::Operation * op) {
      return getImpl()->moveOutOfLoop(getImpl(), getOperation(), op);
  }
/// Promotes the loop body to its containing block if the loop is known to
/// have a single iteration. Returns "success" if the promotion was
/// successful.
::mlir::LogicalResult mlir::LoopLikeOpInterface::promoteIfSingleIteration(::mlir::RewriterBase & rewriter) {
      return getImpl()->promoteIfSingleIteration(getImpl(), getOperation(), rewriter);
  }
/// If there is a single induction variable return it, otherwise return
/// std::nullopt.
::std::optional<::mlir::Value> mlir::LoopLikeOpInterface::getSingleInductionVar() {
      return getImpl()->getSingleInductionVar(getImpl(), getOperation());
  }
/// Return the single lower bound value or attribute if it exists, otherwise
/// return std::nullopt.
::std::optional<::mlir::OpFoldResult> mlir::LoopLikeOpInterface::getSingleLowerBound() {
      return getImpl()->getSingleLowerBound(getImpl(), getOperation());
  }
/// Return the single step value or attribute if it exists, otherwise
/// return std::nullopt.
::std::optional<::mlir::OpFoldResult> mlir::LoopLikeOpInterface::getSingleStep() {
      return getImpl()->getSingleStep(getImpl(), getOperation());
  }
/// Return the single upper bound value or attribute if it exists, otherwise
/// return std::nullopt.
::std::optional<::mlir::OpFoldResult> mlir::LoopLikeOpInterface::getSingleUpperBound() {
      return getImpl()->getSingleUpperBound(getImpl(), getOperation());
  }
/// Return the "init" operands that are used as initialization values for
/// the region "iter_args" of this loop.
::mlir::OperandRange mlir::LoopLikeOpInterface::getInits() {
      return getImpl()->getInits(getImpl(), getOperation());
  }
/// Return the region "iter_args" (block arguments) that correspond to the
/// "init" operands. If the op has multiple regions, return the
/// corresponding block arguments of the entry region.
::mlir::Block::BlockArgListType mlir::LoopLikeOpInterface::getRegionIterArgs() {
      return getImpl()->getRegionIterArgs(getImpl(), getOperation());
  }
/// Append the specified additional "init" operands: replace this loop with
/// a new loop that has the additional init operands. The loop body of
/// this loop is moved over to the new loop.
/// 
/// `newInitOperands` specifies the additional "init" operands.
/// `newYieldValuesFn` is a function that returns the yielded values (which
/// can be computed based on the additional region iter_args). If
/// `replaceInitOperandUsesInLoop` is set, all uses of the additional init
/// operands inside of this loop are replaced with the corresponding, newly
/// added region iter_args.
/// 
/// Note: Loops that do not support init/iter_args should return "failure".
::mlir::FailureOr<::mlir::LoopLikeOpInterface> mlir::LoopLikeOpInterface::replaceWithAdditionalYields(::mlir::RewriterBase & rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn & newYieldValuesFn) {
      return getImpl()->replaceWithAdditionalYields(getImpl(), getOperation(), rewriter, newInitOperands, replaceInitOperandUsesInLoop, newYieldValuesFn);
  }
