/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

class BasicPtxBuilderInterface;
namespace detail {
struct BasicPtxBuilderInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    bool (*hasIntrinsic)(const Concept *impl, ::mlir::Operation *);
    bool (*hasSideEffect)(const Concept *impl, ::mlir::Operation *);
    std::string (*getPtx)(const Concept *impl, ::mlir::Operation *);
    ::mlir::Value (*makeConstantI32)(const Concept *impl, ::mlir::Operation *, ::mlir::RewriterBase &, int);
    void (*getAsmValues)(const Concept *impl, ::mlir::Operation *, ::mlir::RewriterBase &, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>&);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = BasicPtxBuilderInterface;
    Model() : Concept{hasIntrinsic, hasSideEffect, getPtx, makeConstantI32, getAsmValues} {}

    static inline bool hasIntrinsic(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasSideEffect(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline std::string getPtx(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::Value makeConstantI32(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, int val);
    static inline void getAsmValues(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>& asmValues);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = BasicPtxBuilderInterface;
    FallbackModel() : Concept{hasIntrinsic, hasSideEffect, getPtx, makeConstantI32, getAsmValues} {}

    static inline bool hasIntrinsic(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasSideEffect(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline std::string getPtx(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::Value makeConstantI32(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, int val);
    static inline void getAsmValues(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>& asmValues);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    bool hasIntrinsic(::mlir::Operation *tablegen_opaque_val) const;
    bool hasSideEffect(::mlir::Operation *tablegen_opaque_val) const;
    ::mlir::Value makeConstantI32(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter, int val) const;
    void getAsmValues(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>&asmValues) const;
  };
};template <typename ConcreteOp>
struct BasicPtxBuilderInterfaceTrait;

} // namespace detail
class BasicPtxBuilderInterface : public ::mlir::OpInterface<BasicPtxBuilderInterface, detail::BasicPtxBuilderInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<BasicPtxBuilderInterface, detail::BasicPtxBuilderInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::BasicPtxBuilderInterfaceTrait<ConcreteOp> {};
  /// Returns whether the operation has intrinsic support in LLVM.
  bool hasIntrinsic();
  /// Return whether the operation has memory side effects.
  bool hasSideEffect();
  /// Returns PTX code.
  std::string getPtx();
  /// Generate constant value.
  ::mlir::Value makeConstantI32(::mlir::RewriterBase & rewriter, int val);
  /// Returns arguments to pass PTX code.
  /// The order of arguments is started from the results and they are 
  /// used as write, followed by the operands and attributes.
  void getAsmValues(::mlir::RewriterBase & rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>& asmValues);
};
namespace detail {
  template <typename ConcreteOp>
  struct BasicPtxBuilderInterfaceTrait : public ::mlir::OpInterface<BasicPtxBuilderInterface, detail::BasicPtxBuilderInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns whether the operation has intrinsic support in LLVM.
    bool hasIntrinsic() {
      return false;
    }
    /// Return whether the operation has memory side effects.
    bool hasSideEffect() {
      return true;
    }
    /// Generate constant value.
    ::mlir::Value makeConstantI32(::mlir::RewriterBase & rewriter, int val) {
      mlir::Operation* op = (*static_cast<ConcreteOp *>(this));
            return rewriter.create<LLVM::ConstantOp>(
              op->getLoc(), rewriter.getIntegerType(32), val);
    }
    /// Returns arguments to pass PTX code.
    /// The order of arguments is started from the results and they are 
    /// used as write, followed by the operands and attributes.
    void getAsmValues(::mlir::RewriterBase & rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>& asmValues) {
      mlir::Operation* op = (*static_cast<ConcreteOp *>(this));
           for (auto val : op->getResults()) 
            asmValues.push_back({val, mlir::NVVM::PTXRegisterMod::Write});
           for (auto val : op->getOperands()) 
            asmValues.push_back({val, mlir::NVVM::PTXRegisterMod::Read});
           for (auto attr : op->getAttrs()) {
            if (auto intAttr = dyn_cast<mlir::IntegerAttr>(attr.getValue())) {
             Value val = makeConstantI32(rewriter, intAttr.getInt());
             asmValues.push_back({val ,mlir::NVVM::PTXRegisterMod::Read});
             }
           }
    }
  };
}// namespace detail
template<typename ConcreteOp>
bool detail::BasicPtxBuilderInterfaceInterfaceTraits::Model<ConcreteOp>::hasIntrinsic(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasIntrinsic();
}
template<typename ConcreteOp>
bool detail::BasicPtxBuilderInterfaceInterfaceTraits::Model<ConcreteOp>::hasSideEffect(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasSideEffect();
}
template<typename ConcreteOp>
std::string detail::BasicPtxBuilderInterfaceInterfaceTraits::Model<ConcreteOp>::getPtx(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getPtx();
}
template<typename ConcreteOp>
::mlir::Value detail::BasicPtxBuilderInterfaceInterfaceTraits::Model<ConcreteOp>::makeConstantI32(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, int val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).makeConstantI32(rewriter, val);
}
template<typename ConcreteOp>
void detail::BasicPtxBuilderInterfaceInterfaceTraits::Model<ConcreteOp>::getAsmValues(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>& asmValues) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getAsmValues(rewriter, asmValues);
}
template<typename ConcreteOp>
bool detail::BasicPtxBuilderInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasIntrinsic(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasIntrinsic(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::BasicPtxBuilderInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasSideEffect(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasSideEffect(tablegen_opaque_val);
}
template<typename ConcreteOp>
std::string detail::BasicPtxBuilderInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getPtx(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getPtx(tablegen_opaque_val);
}
template<typename ConcreteOp>
::mlir::Value detail::BasicPtxBuilderInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::makeConstantI32(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, int val) {
  return static_cast<const ConcreteOp *>(impl)->makeConstantI32(tablegen_opaque_val, rewriter, val);
}
template<typename ConcreteOp>
void detail::BasicPtxBuilderInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getAsmValues(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase & rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>& asmValues) {
  return static_cast<const ConcreteOp *>(impl)->getAsmValues(tablegen_opaque_val, rewriter, asmValues);
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::BasicPtxBuilderInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasIntrinsic(::mlir::Operation *tablegen_opaque_val) const {
return false;
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::BasicPtxBuilderInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasSideEffect(::mlir::Operation *tablegen_opaque_val) const {
return true;
}
template<typename ConcreteModel, typename ConcreteOp>
::mlir::Value detail::BasicPtxBuilderInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::makeConstantI32(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter, int val) const {
mlir::Operation* op = (llvm::cast<ConcreteOp>(tablegen_opaque_val));
            return rewriter.create<LLVM::ConstantOp>(
              op->getLoc(), rewriter.getIntegerType(32), val);
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::BasicPtxBuilderInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getAsmValues(::mlir::Operation *tablegen_opaque_val, ::mlir::RewriterBase &rewriter, llvm::SmallVectorImpl<std::pair<mlir::Value, mlir::NVVM::PTXRegisterMod>>&asmValues) const {
mlir::Operation* op = (llvm::cast<ConcreteOp>(tablegen_opaque_val));
           for (auto val : op->getResults()) 
            asmValues.push_back({val, mlir::NVVM::PTXRegisterMod::Write});
           for (auto val : op->getOperands()) 
            asmValues.push_back({val, mlir::NVVM::PTXRegisterMod::Read});
           for (auto attr : op->getAttrs()) {
            if (auto intAttr = dyn_cast<mlir::IntegerAttr>(attr.getValue())) {
             Value val = makeConstantI32(rewriter, intAttr.getInt());
             asmValues.push_back({val ,mlir::NVVM::PTXRegisterMod::Read});
             }
           }
}
