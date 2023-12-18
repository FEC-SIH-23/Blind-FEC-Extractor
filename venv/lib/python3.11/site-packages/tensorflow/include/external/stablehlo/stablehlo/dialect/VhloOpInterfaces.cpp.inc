/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Returns the minimum version of the VHLO dialect an op is supported in.
mlir::vhlo::Version mlir::vhlo::VersionedOpInterface::getMinVersion() {
      return getImpl()->getMinVersion(getImpl(), getOperation());
  }
/// Returns the maximum version (inclusive) of the VHLO dialect an op is supported in.
mlir::vhlo::Version mlir::vhlo::VersionedOpInterface::getMaxVersion() {
      return getImpl()->getMaxVersion(getImpl(), getOperation());
  }
