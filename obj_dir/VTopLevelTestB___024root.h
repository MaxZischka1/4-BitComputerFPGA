// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopLevelTestB.h for the primary calling header

#ifndef VERILATED_VTOPLEVELTESTB___024ROOT_H_
#define VERILATED_VTOPLEVELTESTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTopLevelTestB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTopLevelTestB___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ TopLevelTestB__DOT__clk;
    CData/*0:0*/ TopLevelTestB__DOT__uut__DOT__cp;
    CData/*0:0*/ TopLevelTestB__DOT__uut__DOT__ABFlag;
    CData/*7:0*/ TopLevelTestB__DOT__uut__DOT__progP;
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__muxOut;
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__addrOut;
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__AccOut;
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter;
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint;
    CData/*7:0*/ TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt;
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TopLevelTestB__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_h3876a222__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TopLevelTestB__DOT__uut__DOT__cp__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 16> TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    VTopLevelTestB__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTopLevelTestB___024root(VTopLevelTestB__Syms* symsp, const char* namep);
    ~VTopLevelTestB___024root();
    VL_UNCOPYABLE(VTopLevelTestB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
