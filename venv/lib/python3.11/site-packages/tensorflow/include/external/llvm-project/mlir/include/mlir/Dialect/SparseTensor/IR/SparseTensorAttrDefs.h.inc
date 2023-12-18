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
namespace sparse_tensor {
class SparseTensorDimSliceAttr;
class SparseTensorEncodingAttr;
class SparseTensorSortKindAttr;
class StorageSpecifierKindAttr;
namespace detail {
struct SparseTensorDimSliceAttrStorage;
} // namespace detail
class SparseTensorDimSliceAttr : public ::mlir::Attribute::AttrBase<SparseTensorDimSliceAttr, ::mlir::Attribute, detail::SparseTensorDimSliceAttrStorage> {
public:
  using Base::Base;
  void print(llvm::raw_ostream &os) const;

  /// Special value for dynamic offset/size/stride.
  static constexpr int64_t kDynamic = -1;
  static constexpr bool isDynamic(int64_t v) { return v == kDynamic; }
  static std::optional<uint64_t> getStatic(int64_t v);
  static std::string getStaticString(int64_t v);

  std::optional<uint64_t> getStaticOffset() const;
  std::optional<uint64_t> getStaticStride() const;
  std::optional<uint64_t> getStaticSize() const;
  bool isCompletelyDynamic() const;
  using Base::getChecked;
  static SparseTensorDimSliceAttr get(::mlir::MLIRContext *context, int64_t offset, int64_t size, int64_t stride);
  static SparseTensorDimSliceAttr getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, int64_t offset, int64_t size, int64_t stride);
  static SparseTensorDimSliceAttr get(::mlir::MLIRContext *context);
  static SparseTensorDimSliceAttr getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, int64_t offset, int64_t size, int64_t stride);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"slice"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  int64_t getOffset() const;
  int64_t getSize() const;
  int64_t getStride() const;
};
namespace detail {
struct SparseTensorEncodingAttrStorage;
} // namespace detail
class SparseTensorEncodingAttr : public ::mlir::Attribute::AttrBase<SparseTensorEncodingAttr, ::mlir::Attribute, detail::SparseTensorEncodingAttrStorage, ::mlir::VerifiableTensorEncoding::Trait> {
public:
  using Base::Base;
  //
  // Factory methods.
  //

  /// Constructs a new encoding with the given dimToLvl mapping,
  /// and all other fields inherited from `this`.
  SparseTensorEncodingAttr withDimToLvl(AffineMap dimToLvl) const;
  SparseTensorEncodingAttr withDimToLvl(SparseTensorEncodingAttr enc) const;

  /// Constructs a new encoding with dimToLvl reset to the default/identity,
  /// and all other fields inherited from `this`.
  SparseTensorEncodingAttr withoutDimToLvl() const;

  /// Constructs a new encoding with the given pointer and index
  /// bitwidths, and all other fields inherited from `this`.
  SparseTensorEncodingAttr withBitWidths(unsigned posWidth, unsigned crdWidth) const;

  /// Constructs a new encoding with the pointer and index bitwidths
  /// reset to the default, and all other fields inherited from `this`.
  SparseTensorEncodingAttr withoutBitWidths() const;

  /// Constructs a new encoding with the given dimSlices, and all
  /// other fields inherited from `this`.
  SparseTensorEncodingAttr withDimSlices(ArrayRef<::mlir::sparse_tensor::SparseTensorDimSliceAttr> dimSlices) const;

  /// Constructs a new encoding with the dimSlices reset to the default,
  /// and all other fields inherited from `this`.
  SparseTensorEncodingAttr withoutDimSlices() const;

  //
  // Rank methods.
  //

  /// Returns the expected number of tensor dimensions.  Asserts that
  /// the encoding is non-null (since no fixed result is valid for every
  /// dense-tensor).
  ::mlir::sparse_tensor::Dimension getDimRank() const;

  /// Returns the number of storage levels.  Asserts that the encoding
  /// is non-null (since no fixed result is valid for every dense-tensor).
  ::mlir::sparse_tensor::Level getLvlRank() const;

  //
  // lvlTypes methods.
  //

  /// Safely looks up the level-type for the requested level.  (Returns
  /// `DimLevelType::Dense` for the null encoding, since dense-tensors
  /// are always all-dense.)
  ::mlir::sparse_tensor::DimLevelType getLvlType(::mlir::sparse_tensor::Level l) const;

  bool isDenseLvl(::mlir::sparse_tensor::Level l) const { return isDenseDLT(getLvlType(l)); }
  bool isTwoOutOfFourLvl(::mlir::sparse_tensor::Level l) const { return isTwoOutOfFourDLT(getLvlType(l)); }
  bool isCompressedLvl(::mlir::sparse_tensor::Level l) const { return isCompressedDLT(getLvlType(l)); }
  bool isLooseCompressedLvl(::mlir::sparse_tensor::Level l) const { return isLooseCompressedDLT(getLvlType(l)); }
  bool isSingletonLvl(::mlir::sparse_tensor::Level l) const { return isSingletonDLT(getLvlType(l)); }
  bool isOrderedLvl(::mlir::sparse_tensor::Level l) const { return isOrderedDLT(getLvlType(l)); }
  bool isUniqueLvl(::mlir::sparse_tensor::Level l) const { return isUniqueDLT(getLvlType(l)); }

  /// Returns true if every level is dense.  Also returns true for
  /// the null encoding (since dense-tensors are always all-dense).
  bool isAllDense() const;

  /// Returns true if every level is ordered.  Also returns true for
  /// the null encoding (since dense-tensors are always all-ordered).
  bool isAllOrdered() const;

  //
  // dimToLvl methods.
  //

  /// Returns true if the dimToLvl mapping is the identity.
  /// Also returns true for the null encoding (since dense-tensors
  /// always have the identity mapping).
  bool isIdentity() const;

  /// Returns true if the dimToLvl mapping is a permutation.
  /// Also returns true for the null encoding (since dense-tensors
  /// always have the identity mapping).
  bool isPermutation() const;

  //
  // posWidth/crdWidth methods.
  //

  /// Returns the type for position storage based on posWidth.
  /// Asserts that the encoding is non-null (since there's nowhere
  /// to get the `MLIRContext` from).
  Type getPosType() const;

  /// Returns the type for coordinate storage based on crdWidth.
  /// Asserts that the encoding is non-null (since there's nowhere
  /// to get the `MLIRContext` from).
  Type getCrdType() const;

  //
  // dimSlices methods.
  //

  bool isSlice() const;

  ::mlir::sparse_tensor::SparseTensorDimSliceAttr getDimSlice(::mlir::sparse_tensor::Dimension dim) const;

  std::optional<uint64_t> getStaticDimSliceOffset(::mlir::sparse_tensor::Dimension dim) const;
  std::optional<uint64_t> getStaticDimSliceSize(::mlir::sparse_tensor::Dimension dim) const;
  std::optional<uint64_t> getStaticDimSliceStride(::mlir::sparse_tensor::Dimension dim) const;
  std::optional<uint64_t> getStaticLvlSliceOffset(::mlir::sparse_tensor::Level lvl) const;
  std::optional<uint64_t> getStaticLvlSliceSize(::mlir::sparse_tensor::Level lvl) const;
  std::optional<uint64_t> getStaticLvlSliceStride(::mlir::sparse_tensor::Level lvl) const;

  //
  // Printing methods.
  //

  void printSymbols(AffineMap &map, AsmPrinter &printer) const;
  void printDimensions(AffineMap &map, AsmPrinter &printer, ArrayRef<::mlir::sparse_tensor::SparseTensorDimSliceAttr> dimSlices) const;
  void printLevels(AffineMap &map, AsmPrinter &printer, ArrayRef<::mlir::sparse_tensor::DimLevelType> lvlTypes) const;
  using Base::getChecked;
  static SparseTensorEncodingAttr get(::mlir::MLIRContext *context, ::llvm::ArrayRef<::mlir::sparse_tensor::DimLevelType> lvlTypes, AffineMap dimToLvl, AffineMap lvlToDim, unsigned posWidth, unsigned crdWidth, ::llvm::ArrayRef<::mlir::sparse_tensor::SparseTensorDimSliceAttr> dimSlices);
  static SparseTensorEncodingAttr getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::ArrayRef<::mlir::sparse_tensor::DimLevelType> lvlTypes, AffineMap dimToLvl, AffineMap lvlToDim, unsigned posWidth, unsigned crdWidth, ::llvm::ArrayRef<::mlir::sparse_tensor::SparseTensorDimSliceAttr> dimSlices);
  static SparseTensorEncodingAttr get(::mlir::MLIRContext *context, ArrayRef<::mlir::sparse_tensor::DimLevelType> lvlTypes, AffineMap dimToLvl, AffineMap lvlToDim, unsigned posWidth, unsigned crdWidth);
  static SparseTensorEncodingAttr getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ArrayRef<::mlir::sparse_tensor::DimLevelType> lvlTypes, AffineMap dimToLvl, AffineMap lvlToDim, unsigned posWidth, unsigned crdWidth);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::ArrayRef<::mlir::sparse_tensor::DimLevelType> lvlTypes, AffineMap dimToLvl, AffineMap lvlToDim, unsigned posWidth, unsigned crdWidth, ::llvm::ArrayRef<::mlir::sparse_tensor::SparseTensorDimSliceAttr> dimSlices);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"encoding"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<::mlir::sparse_tensor::DimLevelType> getLvlTypes() const;
  AffineMap getDimToLvl() const;
  AffineMap getLvlToDim() const;
  unsigned getPosWidth() const;
  unsigned getCrdWidth() const;
  ::llvm::ArrayRef<::mlir::sparse_tensor::SparseTensorDimSliceAttr> getDimSlices() const;
  ::mlir::LogicalResult verifyEncoding(ArrayRef<int64_t> shape, Type elementType, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) const;
};
namespace detail {
struct SparseTensorSortKindAttrStorage;
} // namespace detail
class SparseTensorSortKindAttr : public ::mlir::Attribute::AttrBase<SparseTensorSortKindAttr, ::mlir::Attribute, detail::SparseTensorSortKindAttrStorage> {
public:
  using Base::Base;
  static SparseTensorSortKindAttr get(::mlir::MLIRContext *context, ::mlir::sparse_tensor::SparseTensorSortKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"SparseTensorSortAlgorithm"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::sparse_tensor::SparseTensorSortKind getValue() const;
};
namespace detail {
struct StorageSpecifierKindAttrStorage;
} // namespace detail
class StorageSpecifierKindAttr : public ::mlir::Attribute::AttrBase<StorageSpecifierKindAttr, ::mlir::Attribute, detail::StorageSpecifierKindAttrStorage> {
public:
  using Base::Base;
  static StorageSpecifierKindAttr get(::mlir::MLIRContext *context, ::mlir::sparse_tensor::StorageSpecifierKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"kind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::sparse_tensor::StorageSpecifierKind getValue() const;
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SparseTensorDimSliceAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SparseTensorEncodingAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SparseTensorSortKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::StorageSpecifierKindAttr)

#endif  // GET_ATTRDEF_CLASSES

