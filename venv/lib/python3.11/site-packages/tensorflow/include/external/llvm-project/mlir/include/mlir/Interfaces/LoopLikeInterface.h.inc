/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
class LoopLikeOpInterface;
namespace detail {
struct LoopLikeOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    bool (*isDefinedOutsideOfLoop)(const Concept *impl, ::mlir::Operation *, ::mlir::Value );
    ::llvm::SmallVector<::mlir::Region *> (*getLoopRegions)(const Concept *impl, ::mlir::Operation *);
    void (*moveOutOfLoop)(const Concept *impl, ::mlir::Operation *, ::mlir::Operation *);
    ::mlir::LogicalResult (*promoteIfSingleIteration)(const Concept *impl, ::mlir::Operation *, ::mlir::RewriterBase &);
    ::std::optional<::mlir::Value> (*getSingleInductionVar)(const Concept *impl, ::mlir::Operation *);
    ::std::optional<::mlir::OpFoldResult> (*getSingleLowerBound)(const Concept *impl, ::mlir::Operation *);
    ::std::optional<::mlir::OpFoldResult> (*getSingleStep)(const Concept *impl, ::mlir::Operation *);
    ::std::optional<::mlir::OpFoldResult> (*getSingleUpperBound)(const Concept *impl, ::mlir::Operation *);
    ::mlir::OperandRange (*getInits)(const Concept *impl, ::mlir::Operation *);
    ::mlir::Block::BlockArgListType (*getRegionIterArgs)(const Concept *impl, ::mlir::Operation *);
    ::mlir::FailureOr<::mlir::LoopLikeOpInterface> (*replaceWithAdditionalYields)(const Concept *impl, ::mlir::Operation *, ::mlir::RewriterBase &, ::mlir::ValueRange, bool, const ::mlir::NewYieldValuesFn &);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::LoopLikeOpInterface;
    Model() : Concept{isDefinedOutsideOfLoop, getLoopRegions, moveOutOfLoop, promoteIfSingleIteration, getSingleInductionVar, getSingleLowerBound, getSingleStep, getSingleUpperBound, getInits, getRegionIterArgs, replaceWithAdditionalYields} {}

    static inline bool isDefinedOutsideOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value  value);
    static inline ::llvm::SmallVector<::mlir::Region *> getLoopRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void moveOutOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Operation * op);
    static inline ::mlir::LogicalResult promoteIfSingleIteration(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter);
    static inline ::std::optional<::mlir::Value> getSingleInductionVar(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::std::optional<::mlir::OpFoldResult> getSingleLowerBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::std::optional<::mlir::OpFoldResult> getSingleStep(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::std::optional<::mlir::OpFoldResult> getSingleUpperBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::OperandRange getInits(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::Block::BlockArgListType getRegionIterArgs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::FailureOr<::mlir::LoopLikeOpInterface> replaceWithAdditionalYields(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn & newYieldValuesFn);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::LoopLikeOpInterface;
    FallbackModel() : Concept{isDefinedOutsideOfLoop, getLoopRegions, moveOutOfLoop, promoteIfSingleIteration, getSingleInductionVar, getSingleLowerBound, getSingleStep, getSingleUpperBound, getInits, getRegionIterArgs, replaceWithAdditionalYields} {}

    static inline bool isDefinedOutsideOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value  value);
    static inline ::llvm::SmallVector<::mlir::Region *> getLoopRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void moveOutOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Operation * op);
    static inline ::mlir::LogicalResult promoteIfSingleIteration(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter);
    static inline ::std::optional<::mlir::Value> getSingleInductionVar(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::std::optional<::mlir::OpFoldResult> getSingleLowerBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::std::optional<::mlir::OpFoldResult> getSingleStep(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::std::optional<::mlir::OpFoldResult> getSingleUpperBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::OperandRange getInits(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::Block::BlockArgListType getRegionIterArgs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::FailureOr<::mlir::LoopLikeOpInterface> replaceWithAdditionalYields(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn & newYieldValuesFn);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    bool isDefinedOutsideOfLoop(::mlir::Operation *tablegen_opaque_val, ::mlir::Value value) const;
    void moveOutOfLoop(::mlir::Operation *tablegen_opaque_val, ::mlir::Operation *op) const;
    ::mlir::LogicalResult promoteIfSingleIteration(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter) const;
    ::std::optional<::mlir::Value> getSingleInductionVar(::mlir::Operation *tablegen_opaque_val) const;
    ::std::optional<::mlir::OpFoldResult> getSingleLowerBound(::mlir::Operation *tablegen_opaque_val) const;
    ::std::optional<::mlir::OpFoldResult> getSingleStep(::mlir::Operation *tablegen_opaque_val) const;
    ::std::optional<::mlir::OpFoldResult> getSingleUpperBound(::mlir::Operation *tablegen_opaque_val) const;
    ::mlir::OperandRange getInits(::mlir::Operation *tablegen_opaque_val) const;
    ::mlir::Block::BlockArgListType getRegionIterArgs(::mlir::Operation *tablegen_opaque_val) const;
    ::mlir::FailureOr<::mlir::LoopLikeOpInterface> replaceWithAdditionalYields(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn &newYieldValuesFn) const;
  };
};template <typename ConcreteOp>
struct LoopLikeOpInterfaceTrait;

} // namespace detail
class LoopLikeOpInterface : public ::mlir::OpInterface<LoopLikeOpInterface, detail::LoopLikeOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<LoopLikeOpInterface, detail::LoopLikeOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::LoopLikeOpInterfaceTrait<ConcreteOp> {};
  /// Returns true if the given value is defined outside of the loop.
  /// A sensible implementation could be to check whether the value's defining
  /// operation lies outside of the loops body region. If the loop uses
  /// explicit capture of dependencies, an implementation could check whether
  /// the value corresponds to a captured dependency.
  bool isDefinedOutsideOfLoop(::mlir::Value  value);
  /// Returns the regions that make up the body of the loop and should be
  /// inspected for loop-invariant operations.
  ::llvm::SmallVector<::mlir::Region *> getLoopRegions();
  /// Moves the given loop-invariant operation out of the loop.
  void moveOutOfLoop(::mlir::Operation * op);
  /// Promotes the loop body to its containing block if the loop is known to
  /// have a single iteration. Returns "success" if the promotion was
  /// successful.
  ::mlir::LogicalResult promoteIfSingleIteration(::mlir::RewriterBase & rewriter);
  /// If there is a single induction variable return it, otherwise return
  /// std::nullopt.
  ::std::optional<::mlir::Value> getSingleInductionVar();
  /// Return the single lower bound value or attribute if it exists, otherwise
  /// return std::nullopt.
  ::std::optional<::mlir::OpFoldResult> getSingleLowerBound();
  /// Return the single step value or attribute if it exists, otherwise
  /// return std::nullopt.
  ::std::optional<::mlir::OpFoldResult> getSingleStep();
  /// Return the single upper bound value or attribute if it exists, otherwise
  /// return std::nullopt.
  ::std::optional<::mlir::OpFoldResult> getSingleUpperBound();
  /// Return the "init" operands that are used as initialization values for
  /// the region "iter_args" of this loop.
  ::mlir::OperandRange getInits();
  /// Return the region "iter_args" (block arguments) that correspond to the
  /// "init" operands. If the op has multiple regions, return the
  /// corresponding block arguments of the entry region.
  ::mlir::Block::BlockArgListType getRegionIterArgs();
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
  ::mlir::FailureOr<::mlir::LoopLikeOpInterface> replaceWithAdditionalYields(::mlir::RewriterBase & rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn & newYieldValuesFn);

    /// Returns if a block is inside a loop (within the current function). This
    /// can either be because the block is nested inside a LoopLikeInterface, or
    /// because the control flow graph is cyclic
    static bool blockIsInLoop(Block *block);

    /// Append the specified additional "init" operands: replace this loop with
    /// a new loop that has the additional init operands. The loop body of this
    /// loop is moved over to the new loop.
    ///
    /// The newly added region iter_args are yielded from the loop.
    ::mlir::FailureOr<::mlir::LoopLikeOpInterface>
        replaceWithAdditionalIterOperands(::mlir::RewriterBase &rewriter,
                                          ::mlir::ValueRange newInitOperands,
                                          bool replaceInitOperandUsesInLoop) {
      return (*this).replaceWithAdditionalYields(
          rewriter, newInitOperands, replaceInitOperandUsesInLoop,
          [](OpBuilder &b, Location loc, ArrayRef<BlockArgument> newBBArgs) {
            return SmallVector<Value>(newBBArgs);
          });
    }
};
namespace detail {
  template <typename ConcreteOp>
  struct LoopLikeOpInterfaceTrait : public ::mlir::OpInterface<LoopLikeOpInterface, detail::LoopLikeOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns true if the given value is defined outside of the loop.
    /// A sensible implementation could be to check whether the value's defining
    /// operation lies outside of the loops body region. If the loop uses
    /// explicit capture of dependencies, an implementation could check whether
    /// the value corresponds to a captured dependency.
    bool isDefinedOutsideOfLoop(::mlir::Value  value) {
      return !(*static_cast<ConcreteOp *>(this))->isAncestor(value.getParentRegion()->getParentOp());
    }
    /// Moves the given loop-invariant operation out of the loop.
    void moveOutOfLoop(::mlir::Operation * op) {
      op->moveBefore((*static_cast<ConcreteOp *>(this)));
    }
    /// Promotes the loop body to its containing block if the loop is known to
    /// have a single iteration. Returns "success" if the promotion was
    /// successful.
    ::mlir::LogicalResult promoteIfSingleIteration(::mlir::RewriterBase & rewriter) {
      return ::mlir::failure();
    }
    /// If there is a single induction variable return it, otherwise return
    /// std::nullopt.
    ::std::optional<::mlir::Value> getSingleInductionVar() {
      return std::nullopt;
    }
    /// Return the single lower bound value or attribute if it exists, otherwise
    /// return std::nullopt.
    ::std::optional<::mlir::OpFoldResult> getSingleLowerBound() {
      return std::nullopt;
    }
    /// Return the single step value or attribute if it exists, otherwise
    /// return std::nullopt.
    ::std::optional<::mlir::OpFoldResult> getSingleStep() {
      return std::nullopt;
    }
    /// Return the single upper bound value or attribute if it exists, otherwise
    /// return std::nullopt.
    ::std::optional<::mlir::OpFoldResult> getSingleUpperBound() {
      return std::nullopt;
    }
    /// Return the "init" operands that are used as initialization values for
    /// the region "iter_args" of this loop.
    ::mlir::OperandRange getInits() {
      return ::mlir::OperandRange((*static_cast<ConcreteOp *>(this))->operand_end(), (*static_cast<ConcreteOp *>(this))->operand_end());
    }
    /// Return the region "iter_args" (block arguments) that correspond to the
    /// "init" operands. If the op has multiple regions, return the
    /// corresponding block arguments of the entry region.
    ::mlir::Block::BlockArgListType getRegionIterArgs() {
      return ::mlir::Block::BlockArgListType();
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
    ::mlir::FailureOr<::mlir::LoopLikeOpInterface> replaceWithAdditionalYields(::mlir::RewriterBase & rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn & newYieldValuesFn) {
      return ::mlir::failure();
    }

    /// Append the specified additional "init" operands: replace this loop with
    /// a new loop that has the additional init operands. The loop body of this
    /// loop is moved over to the new loop.
    ///
    /// The newly added region iter_args are yielded from the loop.
    ::mlir::FailureOr<::mlir::LoopLikeOpInterface>
        replaceWithAdditionalIterOperands(::mlir::RewriterBase &rewriter,
                                          ::mlir::ValueRange newInitOperands,
                                          bool replaceInitOperandUsesInLoop) {
      return (*static_cast<ConcreteOp *>(this)).replaceWithAdditionalYields(
          rewriter, newInitOperands, replaceInitOperandUsesInLoop,
          [](OpBuilder &b, Location loc, ArrayRef<BlockArgument> newBBArgs) {
            return SmallVector<Value>(newBBArgs);
          });
    }
  
  };
}// namespace detail
} // namespace mlir
namespace mlir {
template<typename ConcreteOp>
bool detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::isDefinedOutsideOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value  value) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).isDefinedOutsideOfLoop(value);
}
template<typename ConcreteOp>
::llvm::SmallVector<::mlir::Region *> detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getLoopRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getLoopRegions();
}
template<typename ConcreteOp>
void detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::moveOutOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Operation * op) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).moveOutOfLoop(op);
}
template<typename ConcreteOp>
::mlir::LogicalResult detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::promoteIfSingleIteration(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).promoteIfSingleIteration(rewriter);
}
template<typename ConcreteOp>
::std::optional<::mlir::Value> detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getSingleInductionVar(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getSingleInductionVar();
}
template<typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getSingleLowerBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getSingleLowerBound();
}
template<typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getSingleStep(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getSingleStep();
}
template<typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getSingleUpperBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getSingleUpperBound();
}
template<typename ConcreteOp>
::mlir::OperandRange detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getInits(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInits();
}
template<typename ConcreteOp>
::mlir::Block::BlockArgListType detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getRegionIterArgs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getRegionIterArgs();
}
template<typename ConcreteOp>
::mlir::FailureOr<::mlir::LoopLikeOpInterface> detail::LoopLikeOpInterfaceInterfaceTraits::Model<ConcreteOp>::replaceWithAdditionalYields(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn & newYieldValuesFn) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).replaceWithAdditionalYields(rewriter, newInitOperands, replaceInitOperandUsesInLoop, newYieldValuesFn);
}
template<typename ConcreteOp>
bool detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::isDefinedOutsideOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Value  value) {
  return static_cast<const ConcreteOp *>(impl)->isDefinedOutsideOfLoop(tablegen_opaque_val, value);
}
template<typename ConcreteOp>
::llvm::SmallVector<::mlir::Region *> detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getLoopRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getLoopRegions(tablegen_opaque_val);
}
template<typename ConcreteOp>
void detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::moveOutOfLoop(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::Operation * op) {
  return static_cast<const ConcreteOp *>(impl)->moveOutOfLoop(tablegen_opaque_val, op);
}
template<typename ConcreteOp>
::mlir::LogicalResult detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::promoteIfSingleIteration(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter) {
  return static_cast<const ConcreteOp *>(impl)->promoteIfSingleIteration(tablegen_opaque_val, rewriter);
}
template<typename ConcreteOp>
::std::optional<::mlir::Value> detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getSingleInductionVar(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getSingleInductionVar(tablegen_opaque_val);
}
template<typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getSingleLowerBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getSingleLowerBound(tablegen_opaque_val);
}
template<typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getSingleStep(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getSingleStep(tablegen_opaque_val);
}
template<typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getSingleUpperBound(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getSingleUpperBound(tablegen_opaque_val);
}
template<typename ConcreteOp>
::mlir::OperandRange detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getInits(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getInits(tablegen_opaque_val);
}
template<typename ConcreteOp>
::mlir::Block::BlockArgListType detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getRegionIterArgs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getRegionIterArgs(tablegen_opaque_val);
}
template<typename ConcreteOp>
::mlir::FailureOr<::mlir::LoopLikeOpInterface> detail::LoopLikeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::replaceWithAdditionalYields(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn & newYieldValuesFn) {
  return static_cast<const ConcreteOp *>(impl)->replaceWithAdditionalYields(tablegen_opaque_val, rewriter, newInitOperands, replaceInitOperandUsesInLoop, newYieldValuesFn);
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::isDefinedOutsideOfLoop(::mlir::Operation *tablegen_opaque_val, ::mlir::Value value) const {
return !(llvm::cast<ConcreteOp>(tablegen_opaque_val))->isAncestor(value.getParentRegion()->getParentOp());
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::moveOutOfLoop(::mlir::Operation *tablegen_opaque_val, ::mlir::Operation *op) const {
op->moveBefore((llvm::cast<ConcreteOp>(tablegen_opaque_val)));
}
template<typename ConcreteModel, typename ConcreteOp>
::mlir::LogicalResult detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::promoteIfSingleIteration(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter) const {
return ::mlir::failure();
}
template<typename ConcreteModel, typename ConcreteOp>
::std::optional<::mlir::Value> detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getSingleInductionVar(::mlir::Operation *tablegen_opaque_val) const {
return std::nullopt;
}
template<typename ConcreteModel, typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getSingleLowerBound(::mlir::Operation *tablegen_opaque_val) const {
return std::nullopt;
}
template<typename ConcreteModel, typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getSingleStep(::mlir::Operation *tablegen_opaque_val) const {
return std::nullopt;
}
template<typename ConcreteModel, typename ConcreteOp>
::std::optional<::mlir::OpFoldResult> detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getSingleUpperBound(::mlir::Operation *tablegen_opaque_val) const {
return std::nullopt;
}
template<typename ConcreteModel, typename ConcreteOp>
::mlir::OperandRange detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getInits(::mlir::Operation *tablegen_opaque_val) const {
return ::mlir::OperandRange((llvm::cast<ConcreteOp>(tablegen_opaque_val))->operand_end(), (llvm::cast<ConcreteOp>(tablegen_opaque_val))->operand_end());
}
template<typename ConcreteModel, typename ConcreteOp>
::mlir::Block::BlockArgListType detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getRegionIterArgs(::mlir::Operation *tablegen_opaque_val) const {
return ::mlir::Block::BlockArgListType();
}
template<typename ConcreteModel, typename ConcreteOp>
::mlir::FailureOr<::mlir::LoopLikeOpInterface> detail::LoopLikeOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::replaceWithAdditionalYields(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter, ::mlir::ValueRange newInitOperands, bool replaceInitOperandUsesInLoop, const ::mlir::NewYieldValuesFn &newYieldValuesFn) const {
return ::mlir::failure();
}
} // namespace mlir
