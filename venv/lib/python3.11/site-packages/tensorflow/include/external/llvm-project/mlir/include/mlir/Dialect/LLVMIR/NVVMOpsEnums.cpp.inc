/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVVMOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyLoadCacheModifierKind(LoadCacheModifierKind val) {
  switch (val) {
    case LoadCacheModifierKind::CA: return "ca";
    case LoadCacheModifierKind::CG: return "cg";
    case LoadCacheModifierKind::CS: return "cs";
    case LoadCacheModifierKind::LU: return "lu";
    case LoadCacheModifierKind::CV: return "cv";
  }
  return "";
}

::std::optional<LoadCacheModifierKind> symbolizeLoadCacheModifierKind(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<LoadCacheModifierKind>>(str)
      .Case("ca", LoadCacheModifierKind::CA)
      .Case("cg", LoadCacheModifierKind::CG)
      .Case("cs", LoadCacheModifierKind::CS)
      .Case("lu", LoadCacheModifierKind::LU)
      .Case("cv", LoadCacheModifierKind::CV)
      .Default(::std::nullopt);
}
::std::optional<LoadCacheModifierKind> symbolizeLoadCacheModifierKind(uint32_t value) {
  switch (value) {
  case 0: return LoadCacheModifierKind::CA;
  case 1: return LoadCacheModifierKind::CG;
  case 2: return LoadCacheModifierKind::CS;
  case 3: return LoadCacheModifierKind::LU;
  case 4: return LoadCacheModifierKind::CV;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyMMAB1Op(MMAB1Op val) {
  switch (val) {
    case MMAB1Op::none: return "none";
    case MMAB1Op::xor_popc: return "xor_popc";
    case MMAB1Op::and_popc: return "and_popc";
  }
  return "";
}

::std::optional<MMAB1Op> symbolizeMMAB1Op(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MMAB1Op>>(str)
      .Case("none", MMAB1Op::none)
      .Case("xor_popc", MMAB1Op::xor_popc)
      .Case("and_popc", MMAB1Op::and_popc)
      .Default(::std::nullopt);
}
::std::optional<MMAB1Op> symbolizeMMAB1Op(uint32_t value) {
  switch (value) {
  case 0: return MMAB1Op::none;
  case 1: return MMAB1Op::xor_popc;
  case 2: return MMAB1Op::and_popc;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyMMAFrag(MMAFrag val) {
  switch (val) {
    case MMAFrag::a: return "a";
    case MMAFrag::b: return "b";
    case MMAFrag::c: return "c";
  }
  return "";
}

::std::optional<MMAFrag> symbolizeMMAFrag(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MMAFrag>>(str)
      .Case("a", MMAFrag::a)
      .Case("b", MMAFrag::b)
      .Case("c", MMAFrag::c)
      .Default(::std::nullopt);
}
::std::optional<MMAFrag> symbolizeMMAFrag(uint32_t value) {
  switch (value) {
  case 0: return MMAFrag::a;
  case 1: return MMAFrag::b;
  case 2: return MMAFrag::c;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyMMAIntOverflow(MMAIntOverflow val) {
  switch (val) {
    case MMAIntOverflow::satfinite: return "satfinite";
    case MMAIntOverflow::wrapped: return "wrapped";
  }
  return "";
}

::std::optional<MMAIntOverflow> symbolizeMMAIntOverflow(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MMAIntOverflow>>(str)
      .Case("satfinite", MMAIntOverflow::satfinite)
      .Case("wrapped", MMAIntOverflow::wrapped)
      .Default(::std::nullopt);
}
::std::optional<MMAIntOverflow> symbolizeMMAIntOverflow(uint32_t value) {
  switch (value) {
  case 1: return MMAIntOverflow::satfinite;
  case 0: return MMAIntOverflow::wrapped;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyMMALayout(MMALayout val) {
  switch (val) {
    case MMALayout::row: return "row";
    case MMALayout::col: return "col";
  }
  return "";
}

::std::optional<MMALayout> symbolizeMMALayout(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MMALayout>>(str)
      .Case("row", MMALayout::row)
      .Case("col", MMALayout::col)
      .Default(::std::nullopt);
}
::std::optional<MMALayout> symbolizeMMALayout(uint32_t value) {
  switch (value) {
  case 0: return MMALayout::row;
  case 1: return MMALayout::col;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyMMATypes(MMATypes val) {
  switch (val) {
    case MMATypes::f16: return "f16";
    case MMATypes::f32: return "f32";
    case MMATypes::tf32: return "tf32";
    case MMATypes::bf16: return "bf16";
    case MMATypes::s8: return "s8";
    case MMATypes::u8: return "u8";
    case MMATypes::s32: return "s32";
    case MMATypes::s4: return "s4";
    case MMATypes::u4: return "u4";
    case MMATypes::b1: return "b1";
    case MMATypes::f64: return "f64";
  }
  return "";
}

::std::optional<MMATypes> symbolizeMMATypes(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MMATypes>>(str)
      .Case("f16", MMATypes::f16)
      .Case("f32", MMATypes::f32)
      .Case("tf32", MMATypes::tf32)
      .Case("bf16", MMATypes::bf16)
      .Case("s8", MMATypes::s8)
      .Case("u8", MMATypes::u8)
      .Case("s32", MMATypes::s32)
      .Case("s4", MMATypes::s4)
      .Case("u4", MMATypes::u4)
      .Case("b1", MMATypes::b1)
      .Case("f64", MMATypes::f64)
      .Default(::std::nullopt);
}
::std::optional<MMATypes> symbolizeMMATypes(uint32_t value) {
  switch (value) {
  case 0: return MMATypes::f16;
  case 1: return MMATypes::f32;
  case 2: return MMATypes::tf32;
  case 9: return MMATypes::bf16;
  case 4: return MMATypes::s8;
  case 3: return MMATypes::u8;
  case 5: return MMATypes::s32;
  case 8: return MMATypes::s4;
  case 7: return MMATypes::u4;
  case 6: return MMATypes::b1;
  case 10: return MMATypes::f64;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyPTXRegisterMod(PTXRegisterMod val) {
  switch (val) {
    case PTXRegisterMod::Read: return "read";
    case PTXRegisterMod::Write: return "write";
    case PTXRegisterMod::ReadWrite: return "readwrite";
  }
  return "";
}

::std::optional<PTXRegisterMod> symbolizePTXRegisterMod(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<PTXRegisterMod>>(str)
      .Case("read", PTXRegisterMod::Read)
      .Case("write", PTXRegisterMod::Write)
      .Case("readwrite", PTXRegisterMod::ReadWrite)
      .Default(::std::nullopt);
}
::std::optional<PTXRegisterMod> symbolizePTXRegisterMod(uint32_t value) {
  switch (value) {
  case 0: return PTXRegisterMod::Read;
  case 2: return PTXRegisterMod::Write;
  case 1: return PTXRegisterMod::ReadWrite;
  default: return ::std::nullopt;
  }
}

bool PTXRegisterModAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)));
}
PTXRegisterModAttr PTXRegisterModAttr::get(::mlir::MLIRContext *context, PTXRegisterMod val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<PTXRegisterModAttr>(baseAttr);
}
PTXRegisterMod PTXRegisterModAttr::getValue() const {
  return static_cast<PTXRegisterMod>(::mlir::IntegerAttr::getInt());
}
} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyReduxKind(ReduxKind val) {
  switch (val) {
    case ReduxKind::ADD: return "add";
    case ReduxKind::AND: return "and";
    case ReduxKind::MAX: return "max";
    case ReduxKind::MIN: return "min";
    case ReduxKind::OR: return "or";
    case ReduxKind::UMAX: return "umax";
    case ReduxKind::UMIN: return "umin";
    case ReduxKind::XOR: return "xor";
  }
  return "";
}

::std::optional<ReduxKind> symbolizeReduxKind(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<ReduxKind>>(str)
      .Case("add", ReduxKind::ADD)
      .Case("and", ReduxKind::AND)
      .Case("max", ReduxKind::MAX)
      .Case("min", ReduxKind::MIN)
      .Case("or", ReduxKind::OR)
      .Case("umax", ReduxKind::UMAX)
      .Case("umin", ReduxKind::UMIN)
      .Case("xor", ReduxKind::XOR)
      .Default(::std::nullopt);
}
::std::optional<ReduxKind> symbolizeReduxKind(uint32_t value) {
  switch (value) {
  case 1: return ReduxKind::ADD;
  case 2: return ReduxKind::AND;
  case 3: return ReduxKind::MAX;
  case 4: return ReduxKind::MIN;
  case 5: return ReduxKind::OR;
  case 6: return ReduxKind::UMAX;
  case 7: return ReduxKind::UMIN;
  case 8: return ReduxKind::XOR;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyShflKind(ShflKind val) {
  switch (val) {
    case ShflKind::bfly: return "bfly";
    case ShflKind::up: return "up";
    case ShflKind::down: return "down";
    case ShflKind::idx: return "idx";
  }
  return "";
}

::std::optional<ShflKind> symbolizeShflKind(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<ShflKind>>(str)
      .Case("bfly", ShflKind::bfly)
      .Case("up", ShflKind::up)
      .Case("down", ShflKind::down)
      .Case("idx", ShflKind::idx)
      .Default(::std::nullopt);
}
::std::optional<ShflKind> symbolizeShflKind(uint32_t value) {
  switch (value) {
  case 0: return ShflKind::bfly;
  case 1: return ShflKind::up;
  case 2: return ShflKind::down;
  case 3: return ShflKind::idx;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyWGMMAScaleIn(WGMMAScaleIn val) {
  switch (val) {
    case WGMMAScaleIn::one: return "one";
    case WGMMAScaleIn::neg: return "neg";
  }
  return "";
}

::std::optional<WGMMAScaleIn> symbolizeWGMMAScaleIn(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<WGMMAScaleIn>>(str)
      .Case("one", WGMMAScaleIn::one)
      .Case("neg", WGMMAScaleIn::neg)
      .Default(::std::nullopt);
}
} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyWGMMAScaleOut(WGMMAScaleOut val) {
  switch (val) {
    case WGMMAScaleOut::zero: return "zero";
    case WGMMAScaleOut::one: return "one";
  }
  return "";
}

::std::optional<WGMMAScaleOut> symbolizeWGMMAScaleOut(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<WGMMAScaleOut>>(str)
      .Case("zero", WGMMAScaleOut::zero)
      .Case("one", WGMMAScaleOut::one)
      .Default(::std::nullopt);
}
::std::optional<WGMMAScaleOut> symbolizeWGMMAScaleOut(uint32_t value) {
  switch (value) {
  case 0: return WGMMAScaleOut::zero;
  case 1: return WGMMAScaleOut::one;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

namespace mlir {
namespace NVVM {
::llvm::StringRef stringifyWGMMATypes(WGMMATypes val) {
  switch (val) {
    case WGMMATypes::f16: return "f16";
    case WGMMATypes::tf32: return "tf32";
    case WGMMATypes::u8: return "u8";
    case WGMMATypes::s8: return "s8";
    case WGMMATypes::b1: return "b1";
    case WGMMATypes::bf16: return "bf16";
    case WGMMATypes::e4m3: return "e4m3";
    case WGMMATypes::e5m2: return "e5m2";
  }
  return "";
}

::std::optional<WGMMATypes> symbolizeWGMMATypes(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<WGMMATypes>>(str)
      .Case("f16", WGMMATypes::f16)
      .Case("tf32", WGMMATypes::tf32)
      .Case("u8", WGMMATypes::u8)
      .Case("s8", WGMMATypes::s8)
      .Case("b1", WGMMATypes::b1)
      .Case("bf16", WGMMATypes::bf16)
      .Case("e4m3", WGMMATypes::e4m3)
      .Case("e5m2", WGMMATypes::e5m2)
      .Default(::std::nullopt);
}
::std::optional<WGMMATypes> symbolizeWGMMATypes(uint32_t value) {
  switch (value) {
  case 0: return WGMMATypes::f16;
  case 1: return WGMMATypes::tf32;
  case 2: return WGMMATypes::u8;
  case 3: return WGMMATypes::s8;
  case 4: return WGMMATypes::b1;
  case 5: return WGMMATypes::bf16;
  case 6: return WGMMATypes::e4m3;
  case 7: return WGMMATypes::e5m2;
  default: return ::std::nullopt;
  }
}

} // namespace NVVM
} // namespace mlir

