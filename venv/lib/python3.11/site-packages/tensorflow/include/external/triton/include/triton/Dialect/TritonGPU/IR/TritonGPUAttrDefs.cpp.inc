/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::triton::gpu::BlockedEncodingAttr,
::mlir::triton::gpu::DotOperandEncodingAttr,
::mlir::triton::gpu::MmaEncodingAttr,
::mlir::triton::gpu::SharedEncodingAttr,
::mlir::triton::gpu::SliceEncodingAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::triton::gpu::BlockedEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::BlockedEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::DotOperandEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::DotOperandEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::MmaEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::MmaEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::SharedEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::SharedEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::SliceEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::SliceEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::mlir::triton::gpu::BlockedEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::BlockedEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::DotOperandEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::DotOperandEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::MmaEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::MmaEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::SharedEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::SharedEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::SliceEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::SliceEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct BlockedEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>>;
  BlockedEncodingAttrStorage(::llvm::ArrayRef<unsigned> sizePerThread, ::llvm::ArrayRef<unsigned> threadsPerWarp, ::llvm::ArrayRef<unsigned> warpsPerCTA, ::llvm::ArrayRef<unsigned> order) : sizePerThread(std::move(sizePerThread)), threadsPerWarp(std::move(threadsPerWarp)), warpsPerCTA(std::move(warpsPerCTA)), order(std::move(order)) {}

  KeyTy getAsKey() const {
    return KeyTy(sizePerThread, threadsPerWarp, warpsPerCTA, order);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (sizePerThread == std::get<0>(tblgenKey)) && (threadsPerWarp == std::get<1>(tblgenKey)) && (warpsPerCTA == std::get<2>(tblgenKey)) && (order == std::get<3>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey));
  }

  static BlockedEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto sizePerThread = std::move(std::get<0>(tblgenKey));
    auto threadsPerWarp = std::move(std::get<1>(tblgenKey));
    auto warpsPerCTA = std::move(std::get<2>(tblgenKey));
    auto order = std::move(std::get<3>(tblgenKey));
    sizePerThread = allocator.copyInto(sizePerThread);
    threadsPerWarp = allocator.copyInto(threadsPerWarp);
    warpsPerCTA = allocator.copyInto(warpsPerCTA);
    order = allocator.copyInto(order);
    return new (allocator.allocate<BlockedEncodingAttrStorage>()) BlockedEncodingAttrStorage(std::move(sizePerThread), std::move(threadsPerWarp), std::move(warpsPerCTA), std::move(order));
  }

  ::llvm::ArrayRef<unsigned> sizePerThread;
  ::llvm::ArrayRef<unsigned> threadsPerWarp;
  ::llvm::ArrayRef<unsigned> warpsPerCTA;
  ::llvm::ArrayRef<unsigned> order;
};
} // namespace detail
BlockedEncodingAttr BlockedEncodingAttr::get(::mlir::MLIRContext *context, ::llvm::ArrayRef<unsigned> sizePerThread, ::llvm::ArrayRef<unsigned> threadsPerWarp, ::llvm::ArrayRef<unsigned> warpsPerCTA, ::llvm::ArrayRef<unsigned> order) {
  return Base::get(context, std::move(sizePerThread), std::move(threadsPerWarp), std::move(warpsPerCTA), std::move(order));
}

BlockedEncodingAttr BlockedEncodingAttr::get(::mlir::MLIRContext *context, ArrayRef<int64_t> shape, ArrayRef<unsigned> sizePerThread, ArrayRef<unsigned> order, unsigned numWarps, unsigned threadsPerWarp) {
  int rank = sizePerThread.size();
  unsigned remainingLanes = threadsPerWarp;
  unsigned remainingThreads = numWarps*threadsPerWarp;
  unsigned remainingWarps = numWarps;
  unsigned prevLanes = 1;
  unsigned prevWarps = 1;
  SmallVector<unsigned, 4> rankedThreadsPerWarp(rank);
  SmallVector<unsigned, 4> warpsPerCTA(rank);
  for (int _dim = 0; _dim < rank - 1; ++_dim) {
    int i = order[_dim];
    unsigned threadsPerCTA = std::clamp<unsigned>(remainingThreads, 1, shape[i] / sizePerThread[i]);
    rankedThreadsPerWarp[i] = std::clamp<unsigned>(threadsPerCTA, 1, remainingLanes);
    warpsPerCTA[i] = std::clamp<unsigned>(threadsPerCTA / rankedThreadsPerWarp[i], 1, remainingWarps);
    remainingWarps /= warpsPerCTA[i];
    remainingLanes /= rankedThreadsPerWarp[i];
    remainingThreads /= threadsPerCTA;
    prevLanes *= rankedThreadsPerWarp[i];
    prevWarps *= warpsPerCTA[i];
  }
  // Expand the last dimension to fill the remaining lanes and warps
  rankedThreadsPerWarp[order[rank-1]] = threadsPerWarp / prevLanes;
  warpsPerCTA[order[rank-1]] = numWarps / prevWarps;

  return Base::get(context, sizePerThread, rankedThreadsPerWarp, warpsPerCTA, order);

}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getSizePerThread() const {
  return getImpl()->sizePerThread;
}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getThreadsPerWarp() const {
  return getImpl()->threadsPerWarp;
}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getWarpsPerCTA() const {
  return getImpl()->warpsPerCTA;
}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getOrder() const {
  return getImpl()->order;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::BlockedEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct DotOperandEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, Attribute, unsigned>;
  DotOperandEncodingAttrStorage(unsigned opIdx, Attribute parent, unsigned MMAv2kWidth) : opIdx(std::move(opIdx)), parent(std::move(parent)), MMAv2kWidth(std::move(MMAv2kWidth)) {}

  KeyTy getAsKey() const {
    return KeyTy(opIdx, parent, MMAv2kWidth);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (opIdx == std::get<0>(tblgenKey)) && (parent == std::get<1>(tblgenKey)) && (MMAv2kWidth == std::get<2>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey));
  }

  static DotOperandEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto opIdx = std::move(std::get<0>(tblgenKey));
    auto parent = std::move(std::get<1>(tblgenKey));
    auto MMAv2kWidth = std::move(std::get<2>(tblgenKey));
    return new (allocator.allocate<DotOperandEncodingAttrStorage>()) DotOperandEncodingAttrStorage(std::move(opIdx), std::move(parent), std::move(MMAv2kWidth));
  }

  unsigned opIdx;
  Attribute parent;
  unsigned MMAv2kWidth;
};
} // namespace detail
DotOperandEncodingAttr DotOperandEncodingAttr::get(::mlir::MLIRContext *context, unsigned opIdx, Attribute parent, unsigned MMAv2kWidth) {
  return Base::get(context, std::move(opIdx), std::move(parent), std::move(MMAv2kWidth));
}

DotOperandEncodingAttr DotOperandEncodingAttr::get(::mlir::MLIRContext *context, unsigned opIdx, Attribute parent, Type eltTy) {
  MmaEncodingAttr parentAttr = parent.dyn_cast<MmaEncodingAttr>();
  if (!parentAttr || !parentAttr.isAmpere())
    return Base::get(context, opIdx, parent, 0);
  unsigned bitwidth = eltTy.getIntOrFloatBitWidth();
  unsigned MMAv2kWidth = 32 / bitwidth;
  return Base::get(context, opIdx, parent, MMAv2kWidth);
}

unsigned DotOperandEncodingAttr::getOpIdx() const {
  return getImpl()->opIdx;
}

Attribute DotOperandEncodingAttr::getParent() const {
  return getImpl()->parent;
}

unsigned DotOperandEncodingAttr::getMMAv2kWidth() const {
  return getImpl()->MMAv2kWidth;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::DotOperandEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct MmaEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, unsigned, ::llvm::ArrayRef<unsigned>>;
  MmaEncodingAttrStorage(unsigned versionMajor, unsigned versionMinor, ::llvm::ArrayRef<unsigned> warpsPerCTA) : versionMajor(std::move(versionMajor)), versionMinor(std::move(versionMinor)), warpsPerCTA(std::move(warpsPerCTA)) {}

  KeyTy getAsKey() const {
    return KeyTy(versionMajor, versionMinor, warpsPerCTA);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (versionMajor == std::get<0>(tblgenKey)) && (versionMinor == std::get<1>(tblgenKey)) && (warpsPerCTA == std::get<2>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey));
  }

  static MmaEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto versionMajor = std::move(std::get<0>(tblgenKey));
    auto versionMinor = std::move(std::get<1>(tblgenKey));
    auto warpsPerCTA = std::move(std::get<2>(tblgenKey));
    warpsPerCTA = allocator.copyInto(warpsPerCTA);
    return new (allocator.allocate<MmaEncodingAttrStorage>()) MmaEncodingAttrStorage(std::move(versionMajor), std::move(versionMinor), std::move(warpsPerCTA));
  }

  unsigned versionMajor;
  unsigned versionMinor;
  ::llvm::ArrayRef<unsigned> warpsPerCTA;
};
} // namespace detail
MmaEncodingAttr MmaEncodingAttr::get(::mlir::MLIRContext *context, unsigned versionMajor, unsigned versionMinor, ::llvm::ArrayRef<unsigned> warpsPerCTA) {
  return Base::get(context, std::move(versionMajor), std::move(versionMinor), std::move(warpsPerCTA));
}

MmaEncodingAttr MmaEncodingAttr::get(::mlir::MLIRContext *context, int versionMajor, int numWarps, ArrayRef<int64_t> shapeC, bool isARow, bool isBRow, bool isAVec4, bool isBVec4, int id) {
  assert(versionMajor == 1 && "This builder is specially for versionMajor==1");
  // 4-bits to encode 4 booleans: [isARow, isBRow, isAVec4, isBVec4]
  int versionMinor = (isARow * (1<<0)) |\
                     (isBRow * (1<<1)) |\
                     (isAVec4 * (1<<2)) |\
                     (isBVec4 * (1<<3));


  // TODO: Share code with
  // DotOpMmaV1ConversionHelper::AParam/BParam, since same code to compute the
  // rep,spw and fpw.
  SmallVector<unsigned> wpt({1, 1});
  SmallVector<unsigned> wpt_nm1;

  SmallVector<int, 2> rep(2), spw(2);
  std::array<int, 3> fpw{{2, 2, 1}};
  int packSize0 = (isARow || isAVec4) ? 1 : 2;
  rep[0] = 2 * packSize0;
  spw[0] = fpw[0] * 4 * rep[0];

  int packSize1 = (isBRow && !isBVec4) ? 2 : 1;
  rep[1] = 2 * packSize1;
  spw[1] = fpw[1] * 4 * rep[1];

  do {
    wpt_nm1 = wpt;
    if (wpt[0] * wpt[1] < numWarps)
      wpt[0] = std::clamp<int>(wpt[0] * 2, 1, shapeC[0] / spw[0]);
    if (wpt[0] * wpt[1] < numWarps)
      wpt[1] = std::clamp<int>(wpt[1] * 2, 1, shapeC[1] / spw[1]);
  } while (wpt_nm1 != wpt);

  return Base::get(context, versionMajor, versionMinor, wpt);
}

MmaEncodingAttr MmaEncodingAttr::get(::mlir::MLIRContext *context, int versionMajor, int numWarps, ArrayRef<int64_t> shapeA, ArrayRef<int64_t> shapeB, ArrayRef<int64_t> shapeC, bool isARow, bool isBRow, int id) {
  assert(versionMajor == 1 && "This builder is specially for versionMajor==1");
  bool isAVec4 = !isARow && (shapeA[isARow] <= 16);
  bool isBVec4 = isBRow && (shapeB[isBRow] <= 16);
  return get(context, versionMajor, numWarps, shapeC, isARow, isBRow, isAVec4, isBVec4, id);
}

unsigned MmaEncodingAttr::getVersionMajor() const {
  return getImpl()->versionMajor;
}

unsigned MmaEncodingAttr::getVersionMinor() const {
  return getImpl()->versionMinor;
}

::llvm::ArrayRef<unsigned> MmaEncodingAttr::getWarpsPerCTA() const {
  return getImpl()->warpsPerCTA;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::MmaEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct SharedEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, unsigned, unsigned, ::llvm::ArrayRef<unsigned>>;
  SharedEncodingAttrStorage(unsigned vec, unsigned perPhase, unsigned maxPhase, ::llvm::ArrayRef<unsigned> order) : vec(std::move(vec)), perPhase(std::move(perPhase)), maxPhase(std::move(maxPhase)), order(std::move(order)) {}

  KeyTy getAsKey() const {
    return KeyTy(vec, perPhase, maxPhase, order);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (vec == std::get<0>(tblgenKey)) && (perPhase == std::get<1>(tblgenKey)) && (maxPhase == std::get<2>(tblgenKey)) && (order == std::get<3>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey));
  }

  static SharedEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto vec = std::move(std::get<0>(tblgenKey));
    auto perPhase = std::move(std::get<1>(tblgenKey));
    auto maxPhase = std::move(std::get<2>(tblgenKey));
    auto order = std::move(std::get<3>(tblgenKey));
    order = allocator.copyInto(order);
    return new (allocator.allocate<SharedEncodingAttrStorage>()) SharedEncodingAttrStorage(std::move(vec), std::move(perPhase), std::move(maxPhase), std::move(order));
  }

  unsigned vec;
  unsigned perPhase;
  unsigned maxPhase;
  ::llvm::ArrayRef<unsigned> order;
};
} // namespace detail
SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, unsigned vec, unsigned perPhase, unsigned maxPhase, ::llvm::ArrayRef<unsigned> order) {
  return Base::get(context, std::move(vec), std::move(perPhase), std::move(maxPhase), std::move(order));
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, unsigned typeWidthInBit) {
  auto mmaEnc = dotOpEnc.getParent().dyn_cast<MmaEncodingAttr>();

  if(!mmaEnc)
    return Base::get(context, 1, 1, 1, order);

  int opIdx = dotOpEnc.getOpIdx();

  // number of rows per phase

  // index of the inner dimension in `order`
  unsigned inner = (opIdx == 0) ? 0 : 1;

  // ---- begin Volta ----
  if (mmaEnc.isVolta()) {
    int perPhase = 128 / (shape[order[0]] * (typeWidthInBit / 8));
    perPhase = std::max<int>(perPhase, 1);
    bool is_row = order[0] != 0;
    bool is_vec4 = opIdx == 0 ? !is_row && (shape[order[0]] <= 16) :
        is_row && (shape[order[0]] <= 16);
    int pack_size = opIdx == 0 ? ((is_row || is_vec4) ? 1 : 2) :
                                 ((is_row && !is_vec4) ? 2 : 1);
    int rep = 2 * pack_size;
    int maxPhase = (order[inner] == 1 ? 8 : 4) / perPhase;
    int vec = 2 * rep;
    return Base::get(context, vec, perPhase, maxPhase, order);
  }

  // ---- begin Ampere ----
  if (mmaEnc.isAmpere()) {
    int perPhase = 128 / (shape[order[0]] * 4 / dotOpEnc.getMMAv2kWidth());
    perPhase = std::max<int>(perPhase, 1);
    std::vector<size_t> matShape = {8, 8, 4 * dotOpEnc.getMMAv2kWidth()};
    // for now, disable swizzle when using transposed int8 tensor cores
    if ((32 / typeWidthInBit != dotOpEnc.getMMAv2kWidth()) && order[0] == inner)
      return Base::get(context, 1, 1, 1, order);

    // --- handle A operand ---
    if (opIdx == 0) { // compute swizzling for A operand
        int vec = (order[0] == 1) ? matShape[2] : matShape[0]; // k : m
        int mmaStride = (order[0] == 1) ? matShape[0] : matShape[2];
        int maxPhase = mmaStride / perPhase;
        return Base::get(context, vec, perPhase, maxPhase, order);
    }

    // --- handle B operand ---
    if (opIdx == 1) {
        int vec = (order[0] == 1) ? matShape[1] : matShape[2]; // n : k
        int mmaStride = (order[0] == 1) ? matShape[2] : matShape[1];
        int maxPhase = mmaStride / perPhase;
        return Base::get(context, vec, perPhase, maxPhase, order);
    }

    llvm_unreachable("invalid operand index");
  }

  // ---- not implemented ----
  llvm_unreachable("unsupported swizzling for provided MMA version");
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, Type eltTy) {
  unsigned bitwidth = eltTy.getIntOrFloatBitWidth();
  return get(context, dotOpEnc, shape, order, bitwidth);
}

unsigned SharedEncodingAttr::getVec() const {
  return getImpl()->vec;
}

unsigned SharedEncodingAttr::getPerPhase() const {
  return getImpl()->perPhase;
}

unsigned SharedEncodingAttr::getMaxPhase() const {
  return getImpl()->maxPhase;
}

::llvm::ArrayRef<unsigned> SharedEncodingAttr::getOrder() const {
  return getImpl()->order;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::SharedEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct SliceEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, Attribute>;
  SliceEncodingAttrStorage(unsigned dim, Attribute parent) : dim(std::move(dim)), parent(std::move(parent)) {}

  KeyTy getAsKey() const {
    return KeyTy(dim, parent);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (dim == std::get<0>(tblgenKey)) && (parent == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static SliceEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto dim = std::move(std::get<0>(tblgenKey));
    auto parent = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<SliceEncodingAttrStorage>()) SliceEncodingAttrStorage(std::move(dim), std::move(parent));
  }

  unsigned dim;
  Attribute parent;
};
} // namespace detail
SliceEncodingAttr SliceEncodingAttr::get(::mlir::MLIRContext *context, unsigned dim, Attribute parent) {
  return Base::get(context, std::move(dim), std::move(parent));
}

unsigned SliceEncodingAttr::getDim() const {
  return getImpl()->dim;
}

Attribute SliceEncodingAttr::getParent() const {
  return getImpl()->parent;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::SliceEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {

/// Parse an attribute registered to this dialect.
::mlir::Attribute TritonGPUDialect::parseAttribute(::mlir::DialectAsmParser &parser,
                                      ::mlir::Type type) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef attrTag;
  {
    ::mlir::Attribute attr;
    auto parseResult = generatedAttributeParser(parser, &attrTag, type, attr);
    if (parseResult.has_value())
      return attr;
  }
  
  parser.emitError(typeLoc) << "unknown attribute `"
      << attrTag << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print an attribute registered to this dialect.
void TritonGPUDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace gpu
} // namespace triton
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

