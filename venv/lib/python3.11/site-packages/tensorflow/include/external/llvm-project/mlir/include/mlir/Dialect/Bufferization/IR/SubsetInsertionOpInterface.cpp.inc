/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Return the source tensor operand.
::mlir::OpOperand &mlir::bufferization::SubsetInsertionOpInterface::getSourceOperand() {
      return getImpl()->getSourceOperand(getImpl(), getOperation());
  }
/// Return the destination tensor operand.
::mlir::OpOperand &mlir::bufferization::SubsetInsertionOpInterface::getDestinationOperand() {
      return getImpl()->getDestinationOperand(getImpl(), getOperation());
  }
/// Return "true" if this operation inserts into a subset that is
/// equivalent to the subset defined by `candidate`.
/// 
/// Two subsets are "equivalent" and "same" if they can bufferize to the
/// same buffer views/aliases. If they are "equivalent", the tensor IR
/// may be expressed in terms of different SSA values (but they could
/// bufferize to MemRef SSA values that can CSE without breaking
/// correctness). `equivalenceFn` should return "true" if the two given
/// values are equivalent.
/// 
/// Example:
/// ```
/// // The subset of the SubsetInsertionOpInterface op %1 is equivalent to
/// // the subset defined by %2 (but not "same"):
/// %0 = arith.select %c, %t, %t : tensor<?xf32>
/// %1 = tensor.insert_slice %x into %0[0][5][1]
///     : tensor<5xf32> into tensor<?xf32>
/// %2 = tensor.extract_slice %t[0][5][1] : tensor<?xf32> to tensor<5xf32>
/// 
/// // The subset of the SubsetInsertionOpInterface op %1 is equivalent to
/// // and "same" as the subset defined by %2.
/// %1 = tensor.insert_slice %x into %t[0][5][1]
///     : tensor<5xf32> into tensor<?xf32>
/// %2 = tensor.extract_slice %t[0][5][1] : tensor<?xf32> to tensor<5xf32>
/// ```
bool mlir::bufferization::SubsetInsertionOpInterface::isEquivalentSubset(::mlir::Value candidate, ::llvm::function_ref<bool(Value, Value)> equivalenceFn) {
      return getImpl()->isEquivalentSubset(getImpl(), getOperation(), candidate, equivalenceFn);
  }
/// Return the subset of the destination tensor that this operation
/// inserts into.
/// 
/// Example:
/// ```
/// // SubsetOpInterface op:
/// %0 = tensor.insert_slice %t0 into %t1[%pos][5][1]
///     : tensor<5xf32> into tensor<?xf32>
/// // Subset (built by this function):
/// %1 = tensor.extract_slice %t1[%pos][5][1]
///     : tensor<?xf32> to tensor<5xf32>
/// ```
/// 
/// Note: Implementations do not necessarily have to build new IR. They
/// may return existing SSA values.
::mlir::Value mlir::bufferization::SubsetInsertionOpInterface::buildSubsetExtraction(::mlir::OpBuilder & builder, Location loc) {
      return getImpl()->buildSubsetExtraction(getImpl(), getOperation(), builder, loc);
  }
/// Return all SSA values that are needed (i.e., must be in scope) at the
/// insertion of the builder when calling `buildSubsetExtraction`. Users
/// of `buildSubsetExtraction` can use this helper method to find a
/// suitable insertion point.
/// 
/// Example: The SSA values needed to build the subset in the example of
/// `buildSubsetExtraction` are %t1 and %pos.
::llvm::SmallVector<::mlir::Value> mlir::bufferization::SubsetInsertionOpInterface::getValuesNeededToBuildSubsetExtraction() {
      return getImpl()->getValuesNeededToBuildSubsetExtraction(getImpl(), getOperation());
  }
