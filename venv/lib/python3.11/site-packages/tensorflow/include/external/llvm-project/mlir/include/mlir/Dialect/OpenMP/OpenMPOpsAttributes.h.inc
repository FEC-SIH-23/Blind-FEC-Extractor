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
namespace omp {
class ClauseCancellationConstructTypeAttr;
class ClauseDependAttr;
class ClauseRequiresAttr;
class ClauseTaskDependAttr;
class DeclareTargetAttr;
class DeclareTargetCaptureClauseAttr;
class DeclareTargetDeviceTypeAttr;
class FlagsAttr;
class ClauseGrainsizeTypeAttr;
class ClauseMemoryOrderKindAttr;
class ClauseNumTasksTypeAttr;
class ClauseOrderKindAttr;
class ClauseProcBindKindAttr;
class ClauseScheduleKindAttr;
class ScheduleModifierAttr;
class TargetAttr;
class VariableCaptureKindAttr;
class VersionAttr;
namespace detail {
struct ClauseCancellationConstructTypeAttrStorage;
} // namespace detail
class ClauseCancellationConstructTypeAttr : public ::mlir::Attribute::AttrBase<ClauseCancellationConstructTypeAttr, ::mlir::Attribute, detail::ClauseCancellationConstructTypeAttrStorage> {
public:
  using Base::Base;
  static ClauseCancellationConstructTypeAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseCancellationConstructType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"cancellationconstructtype"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseCancellationConstructType getValue() const;
};
namespace detail {
struct ClauseDependAttrStorage;
} // namespace detail
class ClauseDependAttr : public ::mlir::Attribute::AttrBase<ClauseDependAttr, ::mlir::Attribute, detail::ClauseDependAttrStorage> {
public:
  using Base::Base;
  static ClauseDependAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseDepend value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"clause_depend"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseDepend getValue() const;
};
namespace detail {
struct ClauseRequiresAttrStorage;
} // namespace detail
class ClauseRequiresAttr : public ::mlir::Attribute::AttrBase<ClauseRequiresAttr, ::mlir::Attribute, detail::ClauseRequiresAttrStorage> {
public:
  using Base::Base;
  static ClauseRequiresAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseRequires value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"clause_requires"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseRequires getValue() const;
};
namespace detail {
struct ClauseTaskDependAttrStorage;
} // namespace detail
class ClauseTaskDependAttr : public ::mlir::Attribute::AttrBase<ClauseTaskDependAttr, ::mlir::Attribute, detail::ClauseTaskDependAttrStorage> {
public:
  using Base::Base;
  static ClauseTaskDependAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseTaskDepend value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"clause_task_depend"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseTaskDepend getValue() const;
};
namespace detail {
struct DeclareTargetAttrStorage;
} // namespace detail
class DeclareTargetAttr : public ::mlir::Attribute::AttrBase<DeclareTargetAttr, ::mlir::Attribute, detail::DeclareTargetAttrStorage> {
public:
  using Base::Base;
  static DeclareTargetAttr get(::mlir::MLIRContext *context, DeclareTargetDeviceTypeAttr device_type, DeclareTargetCaptureClauseAttr capture_clause);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"declaretarget"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DeclareTargetDeviceTypeAttr getDeviceType() const;
  DeclareTargetCaptureClauseAttr getCaptureClause() const;
};
namespace detail {
struct DeclareTargetCaptureClauseAttrStorage;
} // namespace detail
class DeclareTargetCaptureClauseAttr : public ::mlir::Attribute::AttrBase<DeclareTargetCaptureClauseAttr, ::mlir::Attribute, detail::DeclareTargetCaptureClauseAttrStorage> {
public:
  using Base::Base;
  static DeclareTargetCaptureClauseAttr get(::mlir::MLIRContext *context, ::mlir::omp::DeclareTargetCaptureClause value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"capture_clause"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::DeclareTargetCaptureClause getValue() const;
};
namespace detail {
struct DeclareTargetDeviceTypeAttrStorage;
} // namespace detail
class DeclareTargetDeviceTypeAttr : public ::mlir::Attribute::AttrBase<DeclareTargetDeviceTypeAttr, ::mlir::Attribute, detail::DeclareTargetDeviceTypeAttrStorage> {
public:
  using Base::Base;
  static DeclareTargetDeviceTypeAttr get(::mlir::MLIRContext *context, ::mlir::omp::DeclareTargetDeviceType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"device_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::DeclareTargetDeviceType getValue() const;
};
namespace detail {
struct FlagsAttrStorage;
} // namespace detail
class FlagsAttr : public ::mlir::Attribute::AttrBase<FlagsAttr, ::mlir::Attribute, detail::FlagsAttrStorage> {
public:
  using Base::Base;
  static FlagsAttr get(::mlir::MLIRContext *context, uint32_t debug_kind, bool assume_teams_oversubscription, bool assume_threads_oversubscription, bool assume_no_thread_state, bool assume_no_nested_parallelism, uint32_t openmp_device_version);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"flags"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  uint32_t getDebugKind() const;
  bool getAssumeTeamsOversubscription() const;
  bool getAssumeThreadsOversubscription() const;
  bool getAssumeNoThreadState() const;
  bool getAssumeNoNestedParallelism() const;
  uint32_t getOpenmpDeviceVersion() const;
};
namespace detail {
struct ClauseGrainsizeTypeAttrStorage;
} // namespace detail
class ClauseGrainsizeTypeAttr : public ::mlir::Attribute::AttrBase<ClauseGrainsizeTypeAttr, ::mlir::Attribute, detail::ClauseGrainsizeTypeAttrStorage> {
public:
  using Base::Base;
  static ClauseGrainsizeTypeAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseGrainsizeType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"grainsizetype"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseGrainsizeType getValue() const;
};
namespace detail {
struct ClauseMemoryOrderKindAttrStorage;
} // namespace detail
class ClauseMemoryOrderKindAttr : public ::mlir::Attribute::AttrBase<ClauseMemoryOrderKindAttr, ::mlir::Attribute, detail::ClauseMemoryOrderKindAttrStorage> {
public:
  using Base::Base;
  static ClauseMemoryOrderKindAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseMemoryOrderKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"memoryorderkind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseMemoryOrderKind getValue() const;
};
namespace detail {
struct ClauseNumTasksTypeAttrStorage;
} // namespace detail
class ClauseNumTasksTypeAttr : public ::mlir::Attribute::AttrBase<ClauseNumTasksTypeAttr, ::mlir::Attribute, detail::ClauseNumTasksTypeAttrStorage> {
public:
  using Base::Base;
  static ClauseNumTasksTypeAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseNumTasksType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"numtaskstype"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseNumTasksType getValue() const;
};
namespace detail {
struct ClauseOrderKindAttrStorage;
} // namespace detail
class ClauseOrderKindAttr : public ::mlir::Attribute::AttrBase<ClauseOrderKindAttr, ::mlir::Attribute, detail::ClauseOrderKindAttrStorage> {
public:
  using Base::Base;
  static ClauseOrderKindAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseOrderKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"orderkind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseOrderKind getValue() const;
};
namespace detail {
struct ClauseProcBindKindAttrStorage;
} // namespace detail
class ClauseProcBindKindAttr : public ::mlir::Attribute::AttrBase<ClauseProcBindKindAttr, ::mlir::Attribute, detail::ClauseProcBindKindAttrStorage> {
public:
  using Base::Base;
  static ClauseProcBindKindAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseProcBindKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"procbindkind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseProcBindKind getValue() const;
};
namespace detail {
struct ClauseScheduleKindAttrStorage;
} // namespace detail
class ClauseScheduleKindAttr : public ::mlir::Attribute::AttrBase<ClauseScheduleKindAttr, ::mlir::Attribute, detail::ClauseScheduleKindAttrStorage> {
public:
  using Base::Base;
  static ClauseScheduleKindAttr get(::mlir::MLIRContext *context, ::mlir::omp::ClauseScheduleKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"schedulekind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ClauseScheduleKind getValue() const;
};
namespace detail {
struct ScheduleModifierAttrStorage;
} // namespace detail
class ScheduleModifierAttr : public ::mlir::Attribute::AttrBase<ScheduleModifierAttr, ::mlir::Attribute, detail::ScheduleModifierAttrStorage> {
public:
  using Base::Base;
  static ScheduleModifierAttr get(::mlir::MLIRContext *context, ::mlir::omp::ScheduleModifier value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"sched_mod"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::ScheduleModifier getValue() const;
};
namespace detail {
struct TargetAttrStorage;
} // namespace detail
class TargetAttr : public ::mlir::Attribute::AttrBase<TargetAttr, ::mlir::Attribute, detail::TargetAttrStorage> {
public:
  using Base::Base;
  static TargetAttr get(::mlir::MLIRContext *context, ::llvm::StringRef target_cpu, ::llvm::StringRef target_features);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"target"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::StringRef getTargetCpu() const;
  ::llvm::StringRef getTargetFeatures() const;
};
namespace detail {
struct VariableCaptureKindAttrStorage;
} // namespace detail
class VariableCaptureKindAttr : public ::mlir::Attribute::AttrBase<VariableCaptureKindAttr, ::mlir::Attribute, detail::VariableCaptureKindAttrStorage> {
public:
  using Base::Base;
  static VariableCaptureKindAttr get(::mlir::MLIRContext *context, ::mlir::omp::VariableCaptureKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"variable_capture_kind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::omp::VariableCaptureKind getValue() const;
};
namespace detail {
struct VersionAttrStorage;
} // namespace detail
class VersionAttr : public ::mlir::Attribute::AttrBase<VersionAttr, ::mlir::Attribute, detail::VersionAttrStorage> {
public:
  using Base::Base;
  static VersionAttr get(::mlir::MLIRContext *context, uint32_t version);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"version"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  uint32_t getVersion() const;
};
} // namespace omp
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseCancellationConstructTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseDependAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseRequiresAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseTaskDependAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::DeclareTargetAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::DeclareTargetCaptureClauseAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::DeclareTargetDeviceTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::FlagsAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseGrainsizeTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseMemoryOrderKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseNumTasksTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseOrderKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseProcBindKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ClauseScheduleKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::ScheduleModifierAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::TargetAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::VariableCaptureKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::VersionAttr)

#endif  // GET_ATTRDEF_CLASSES

