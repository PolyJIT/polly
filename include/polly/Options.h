//===--------------- polly/Options.h - The Polly option category *- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// Introduce an option category for Polly.
//
//===----------------------------------------------------------------------===//

#ifndef POLLY_OPTIONS_H
#define POLLY_OPTIONS_H

#include "llvm/Support/CommandLine.h"

extern llvm::cl::OptionCategory PollyCategory;

namespace polly {
namespace opt {
  // IslAst.cpp
  extern bool PollyParallel;
  extern bool PollyParallelForce;
  extern bool UseContext;
  extern bool DetectParallel;

  // ScheduleOptimizer.cpp
  extern bool WholeComponent;
  extern std::string OptimizeDeps;
  extern std::string SimplifyDeps;
  extern int MaxConstantTerm;
  extern int MaxCoefficient;
  extern std::string FusionStrategy;
  extern std::string MaximizeBandDepth;
  extern std::string OuterCoincidence;
  extern int PrevectorWidth;
  extern bool FirstLevelTiling;
  extern bool SecondLevelTiling;
  extern bool RegisterTiling;
  extern int FirstLevelDefaultTileSize;
  extern llvm::cl::list<int> FirstLevelTileSizes;
  extern bool DynamicTileSizes;
  extern int SecondLevelDefaultTileSize;
  extern llvm::cl::list<int> SecondLevelTileSizes;

  // ScopDetection.cpp
  extern bool PollyInvariantLoadHoisting;
  extern bool AllowNonAffineSubRegions;

  // ScheduleOptimizer.cpp
  extern int CacheSizeInBytes;
  extern int NumberOfPhysicalCores;
}
}
#endif
