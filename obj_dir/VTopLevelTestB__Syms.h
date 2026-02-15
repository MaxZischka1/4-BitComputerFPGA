// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOPLEVELTESTB__SYMS_H_
#define VERILATED_VTOPLEVELTESTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTopLevelTestB.h"

// INCLUDE MODULE CLASSES
#include "VTopLevelTestB___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VTopLevelTestB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTopLevelTestB* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTopLevelTestB___024root       TOP;

    // CONSTRUCTORS
    VTopLevelTestB__Syms(VerilatedContext* contextp, const char* namep, VTopLevelTestB* modelp);
    ~VTopLevelTestB__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
