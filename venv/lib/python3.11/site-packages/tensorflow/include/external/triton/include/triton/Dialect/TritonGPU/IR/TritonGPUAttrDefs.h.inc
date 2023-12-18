/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class BlockedEncodingAttr;
class DotOperandEncodingAttr;
class MmaEncodingAttr;
class SharedEncodingAttr;
class SliceEncodingAttr;
namespace detail {
struct BlockedEncodingAttrStorage;
} // namespace detail
class BlockedEncodingAttr : public ::mlir::Attribute::AttrBase<BlockedEncodingAttr, ::mlir::Attribute, detail::BlockedEncodingAttrStorage> {
public:
  using Base::Base;
  unsigned getTotalElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  SmallVector<unsigned> getElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  ::mlir::LogicalResult verifyLayoutForArg(::mlir::Operation* op, unsigned argNo) const;

  SliceEncodingAttr squeeze(int axis);
  static BlockedEncodingAttr get(::mlir::MLIRContext *context, ::llvm::ArrayRef<unsigned> sizePerThread, ::llvm::ArrayRef<unsigned> threadsPerWarp, ::llvm::ArrayRef<unsigned> warpsPerCTA, ::llvm::ArrayRef<unsigned> order);
  static BlockedEncodingAttr get(::mlir::MLIRContext *context, ArrayRef<int64_t> shape, ArrayRef<unsigned> sizePerThread, ArrayRef<unsigned> order, unsigned numWarps, unsigned threadsPerWarp);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"blocked"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<unsigned> getSizePerThread() const;
  ::llvm::ArrayRef<unsigned> getThreadsPerWarp() const;
  ::llvm::ArrayRef<unsigned> getWarpsPerCTA() const;
  ::llvm::ArrayRef<unsigned> getOrder() const;
};
namespace detail {
struct DotOperandEncodingAttrStorage;
} // namespace detail
class DotOperandEncodingAttr : public ::mlir::Attribute::AttrBase<DotOperandEncodingAttr, ::mlir::Attribute, detail::DotOperandEncodingAttrStorage> {
public:
  using Base::Base;
  unsigned getTotalElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  SmallVector<unsigned> getElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  ::mlir::LogicalResult verifyLayoutForArg(::mlir::Operation* op, unsigned argNo) const;

  bool getMMAv1IsRow() const;
  bool getMMAv1IsVec4() const;
  SmallVector<int> getMMAv1Rep() const;
  SmallVector<int> getMMAv1ShapePerWarp() const;
  int getMMAv1Vec() const;
  int getMMAv1NumOuter(ArrayRef<int64_t> shape) const;
  //
  SmallVector<int64_t> getMMAv2Rep(ArrayRef<int64_t> shape,
                                   int bitwidth) const;

  static DotOperandEncodingAttr get(::mlir::MLIRContext *context, unsigned opIdx, Attribute parent, unsigned MMAv2kWidth);
  static DotOperandEncodingAttr get(::mlir::MLIRContext *context, unsigned opIdx, Attribute parent, Type eltTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"dot_op"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getOpIdx() const;
  Attribute getParent() const;
  unsigned getMMAv2kWidth() const;
};
namespace detail {
struct MmaEncodingAttrStorage;
} // namespace detail
class MmaEncodingAttr : public ::mlir::Attribute::AttrBase<MmaEncodingAttr, ::mlir::Attribute, detail::MmaEncodingAttrStorage> {
public:
  using Base::Base;
  unsigned getTotalElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  SmallVector<unsigned> getElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  ::mlir::LogicalResult verifyLayoutForArg(::mlir::Operation* op, unsigned argNo) const;

  bool isVolta() const;
  bool isAmpere() const;
  // Get [isARow, isBRow, isAVec4, isBVec4, id] from versionMinor
  std::tuple<bool, bool, bool, bool, int> decodeVoltaLayoutStates() const;
  // Number of bits in versionMinor to hold the ID of the MMA encoding instance.
  // Here 5 bits can hold 32 IDs in a single module.
  static constexpr int numBitsToHoldMmaV1ID{5};
  static MmaEncodingAttr get(::mlir::MLIRContext *context, unsigned versionMajor, unsigned versionMinor, ::llvm::ArrayRef<unsigned> warpsPerCTA);
  static MmaEncodingAttr get(::mlir::MLIRContext *context, int versionMajor, int numWarps, ArrayRef<int64_t> shapeC, bool isARow, bool isBRow, bool isAVec4, bool isBVec4, int id);
  static MmaEncodingAttr get(::mlir::MLIRContext *context, int versionMajor, int numWarps, ArrayRef<int64_t> shapeA, ArrayRef<int64_t> shapeB, ArrayRef<int64_t> shapeC, bool isARow, bool isBRow, int id);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"mma"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getVersionMajor() const;
  unsigned getVersionMinor() const;
  ::llvm::ArrayRef<unsigned> getWarpsPerCTA() const;
};
namespace detail {
struct SharedEncodingAttrStorage;
} // namespace detail
class SharedEncodingAttr : public ::mlir::Attribute::AttrBase<SharedEncodingAttr, ::mlir::Attribute, detail::SharedEncodingAttrStorage> {
public:
  using Base::Base;
  unsigned getTotalElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  SmallVector<unsigned> getElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  ::mlir::LogicalResult verifyLayoutForArg(::mlir::Operation* op, unsigned argNo) const;
  static SharedEncodingAttr get(::mlir::MLIRContext *context, unsigned vec, unsigned perPhase, unsigned maxPhase, ::llvm::ArrayRef<unsigned> order);
  static SharedEncodingAttr get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, unsigned typeWidthInBit);
  static SharedEncodingAttr get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, Type eltTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"shared"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getVec() const;
  unsigned getPerPhase() const;
  unsigned getMaxPhase() const;
  ::llvm::ArrayRef<unsigned> getOrder() const;
};
namespace detail {
struct SliceEncodingAttrStorage;
} // namespace detail
class SliceEncodingAttr : public ::mlir::Attribute::AttrBase<SliceEncodingAttr, ::mlir::Attribute, detail::SliceEncodingAttrStorage> {
public:
  using Base::Base;
  unsigned getTotalElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  SmallVector<unsigned> getElemsPerThread(ArrayRef<int64_t> shape, Type eltTy) const;
  ::mlir::LogicalResult verifyLayoutForArg(::mlir::Operation* op, unsigned argNo) const;

  template<class T>
  SmallVector<T> paddedShape(ArrayRef<T> shape) const;
  static SliceEncodingAttr get(::mlir::MLIRContext *context, unsigned dim, Attribute parent);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"slice"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getDim() const;
  Attribute getParent() const;
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::BlockedEncodingAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::DotOperandEncodingAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::MmaEncodingAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::SharedEncodingAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::SliceEncodingAttr)

#endif  // GET_ATTRDEF_CLASSES

