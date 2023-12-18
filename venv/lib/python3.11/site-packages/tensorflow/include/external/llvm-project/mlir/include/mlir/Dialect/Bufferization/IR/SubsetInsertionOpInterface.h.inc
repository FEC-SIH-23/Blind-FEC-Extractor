/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace bufferization {
class SubsetInsertionOpInterface;
namespace detail {
struct SubsetInsertionOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    ::mlir::OpOperand &(*getSourceOperand)(const Concept *impl, ::mlir::Operation *);
    ::mlir::OpOperand &(*getDestinationOperand)(const Concept *impl, ::mlir::Operation *);
    bool (*isEquivalentSubset)(const Concept *impl, ::mlir::Operation *, ::mlir::Value, ::llvm::function_ref<bool(Value, Value)>);
    ::mlir::Value (*buildSubsetExtraction)(const Concept *impl, ::mlir::Operation *, ::mlir::OpBuilder &, Location);
    ::llvm::SmallVector<::mlir::Value> (*getValuesNeededToBuildSubsetExtraction)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::bufferization::SubsetInsertionOpInterface;
    Model() : Concept{getSourceOperand, getDestinationOperand, isEquivalentSubset, buildSubsetExtraction, getValuesNeededToBuildSubsetExtraction} {}

    static inline ::mlir::OpOperand &getSourceOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::OpOperand &getDestinationOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool isEquivalentSubset(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value candidate, ::llvm::function_ref<bool(Value, Value)> equivalenceFn);
    static inline ::mlir::Value buildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::OpBuilder & builder, Location loc);
    static inline ::llvm::SmallVector<::mlir::Value> getValuesNeededToBuildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::bufferization::SubsetInsertionOpInterface;
    FallbackModel() : Concept{getSourceOperand, getDestinationOperand, isEquivalentSubset, buildSubsetExtraction, getValuesNeededToBuildSubsetExtraction} {}

    static inline ::mlir::OpOperand &getSourceOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::OpOperand &getDestinationOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool isEquivalentSubset(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value candidate, ::llvm::function_ref<bool(Value, Value)> equivalenceFn);
    static inline ::mlir::Value buildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::OpBuilder & builder, Location loc);
    static inline ::llvm::SmallVector<::mlir::Value> getValuesNeededToBuildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    ::mlir::OpOperand &getDestinationOperand(::mlir::Operation *tablegen_opaque_val) const;
  };
};template <typename ConcreteOp>
struct SubsetInsertionOpInterfaceTrait;

} // namespace detail
class SubsetInsertionOpInterface : public ::mlir::OpInterface<SubsetInsertionOpInterface, detail::SubsetInsertionOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<SubsetInsertionOpInterface, detail::SubsetInsertionOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::SubsetInsertionOpInterfaceTrait<ConcreteOp> {};
  /// Return the source tensor operand.
  ::mlir::OpOperand &getSourceOperand();
  /// Return the destination tensor operand.
  ::mlir::OpOperand &getDestinationOperand();
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
  bool isEquivalentSubset(::mlir::Value candidate, ::llvm::function_ref<bool(Value, Value)> equivalenceFn);
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
  ::mlir::Value buildSubsetExtraction(::mlir::OpBuilder & builder, Location loc);
  /// Return all SSA values that are needed (i.e., must be in scope) at the
  /// insertion of the builder when calling `buildSubsetExtraction`. Users
  /// of `buildSubsetExtraction` can use this helper method to find a
  /// suitable insertion point.
  /// 
  /// Example: The SSA values needed to build the subset in the example of
  /// `buildSubsetExtraction` are %t1 and %pos.
  ::llvm::SmallVector<::mlir::Value> getValuesNeededToBuildSubsetExtraction();

    /// Return "true" if this operation inserts into the same subset as defined
    /// by `candidate`.
    ///
    /// Note: This function is useful outside of bufferization, where no tensor
    /// equivalence information is available.
    bool isSameSubset(OpResult candidate) {
      auto subsetOp = cast<::mlir::bufferization::SubsetInsertionOpInterface>(
          getOperation());
      return subsetOp.isEquivalentSubset(
          candidate, [](Value v1, Value v2) { return v1 == v2; });
    }
};
namespace detail {
  template <typename ConcreteOp>
  struct SubsetInsertionOpInterfaceTrait : public ::mlir::OpInterface<SubsetInsertionOpInterface, detail::SubsetInsertionOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Return the destination tensor operand.
    ::mlir::OpOperand &getDestinationOperand() {
      return ::mlir::bufferization::detail::defaultGetDestinationOperand(
              (*static_cast<ConcreteOp *>(this)).getOperation());
    }
  };
}// namespace detail
} // namespace bufferization
} // namespace mlir
namespace mlir {
namespace bufferization {
template<typename ConcreteOp>
::mlir::OpOperand &detail::SubsetInsertionOpInterfaceInterfaceTraits::Model<ConcreteOp>::getSourceOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getSourceOperand();
}
template<typename ConcreteOp>
::mlir::OpOperand &detail::SubsetInsertionOpInterfaceInterfaceTraits::Model<ConcreteOp>::getDestinationOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getDestinationOperand();
}
template<typename ConcreteOp>
bool detail::SubsetInsertionOpInterfaceInterfaceTraits::Model<ConcreteOp>::isEquivalentSubset(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value candidate, ::llvm::function_ref<bool(Value, Value)> equivalenceFn) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).isEquivalentSubset(candidate, equivalenceFn);
}
template<typename ConcreteOp>
::mlir::Value detail::SubsetInsertionOpInterfaceInterfaceTraits::Model<ConcreteOp>::buildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::OpBuilder & builder, Location loc) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).buildSubsetExtraction(builder, loc);
}
template<typename ConcreteOp>
::llvm::SmallVector<::mlir::Value> detail::SubsetInsertionOpInterfaceInterfaceTraits::Model<ConcreteOp>::getValuesNeededToBuildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getValuesNeededToBuildSubsetExtraction();
}
template<typename ConcreteOp>
::mlir::OpOperand &detail::SubsetInsertionOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getSourceOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getSourceOperand(tablegen_opaque_val);
}
template<typename ConcreteOp>
::mlir::OpOperand &detail::SubsetInsertionOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getDestinationOperand(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getDestinationOperand(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::SubsetInsertionOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::isEquivalentSubset(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value candidate, ::llvm::function_ref<bool(Value, Value)> equivalenceFn) {
  return static_cast<const ConcreteOp *>(impl)->isEquivalentSubset(tablegen_opaque_val, candidate, equivalenceFn);
}
template<typename ConcreteOp>
::mlir::Value detail::SubsetInsertionOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::buildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::OpBuilder & builder, Location loc) {
  return static_cast<const ConcreteOp *>(impl)->buildSubsetExtraction(tablegen_opaque_val, builder, loc);
}
template<typename ConcreteOp>
::llvm::SmallVector<::mlir::Value> detail::SubsetInsertionOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getValuesNeededToBuildSubsetExtraction(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getValuesNeededToBuildSubsetExtraction(tablegen_opaque_val);
}
template<typename ConcreteModel, typename ConcreteOp>
::mlir::OpOperand &detail::SubsetInsertionOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getDestinationOperand(::mlir::Operation *tablegen_opaque_val) const {
return ::mlir::bufferization::detail::defaultGetDestinationOperand(
              (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOperation());
}
} // namespace bufferization
} // namespace mlir
