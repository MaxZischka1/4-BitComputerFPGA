// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopLevelTestB.h for the primary calling header

#include "VTopLevelTestB__pch.h"

void VTopLevelTestB___024root___ctor_var_reset(VTopLevelTestB___024root* vlSelf);

VTopLevelTestB___024root::VTopLevelTestB___024root(VTopLevelTestB__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VTopLevelTestB___024root___ctor_var_reset(this);
}

void VTopLevelTestB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTopLevelTestB___024root::~VTopLevelTestB___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
