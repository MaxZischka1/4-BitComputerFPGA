// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopLevelTestB.h for the primary calling header

#include "VTopLevelTestB__pch.h"

VlCoroutine VTopLevelTestB___024root___eval_initial__TOP__Vtiming__0(VTopLevelTestB___024root* vlSelf);
VlCoroutine VTopLevelTestB___024root___eval_initial__TOP__Vtiming__1(VTopLevelTestB___024root* vlSelf);

void VTopLevelTestB___024root___eval_initial(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_initial\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[0U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[1U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[2U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[3U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[4U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[5U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[6U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[7U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[8U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[9U] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[0x0aU] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[0x0bU] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[0x0cU] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[0x0dU] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[0x0eU] = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[0x0fU] = 0U;
    VTopLevelTestB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTopLevelTestB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine VTopLevelTestB___024root___eval_initial__TOP__Vtiming__0(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_initial__TOP__Vtiming__0\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TopLevelTestB__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "TopLevel/testB/TopLeveltestB.sv", 
                                             32);
        vlSelfRef.TopLevelTestB__DOT__clk = (1U & (~ (IData)(vlSelfRef.TopLevelTestB__DOT__clk)));
    }
    co_return;}

VlCoroutine VTopLevelTestB___024root___eval_initial__TOP__Vtiming__1(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_initial__TOP__Vtiming__1\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("curTest.vcd"s);
    VL_PRINTF_MT("-Info: TopLevel/testB/TopLeveltestB.sv:39: $dumpvar ignored, as Verilated without --trace\n");
    co_await vlSelfRef.__VdlySched.delay(0x0000000000989680ULL, 
                                         nullptr, "TopLevel/testB/TopLeveltestB.sv", 
                                         40);
    VL_FINISH_MT("TopLevel/testB/TopLeveltestB.sv", 41, "");
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevelTestB___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VTopLevelTestB___024root___eval_triggers__act(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_triggers__act\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__cp) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TopLevelTestB__DOT__uut__DOT__cp__0))) 
                                                         << 2U)) 
                                                     | (((IData)(
                                                                 (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter) 
                                                                   >> 3U) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr_h3876a222__0)))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.TopLevelTestB__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TopLevelTestB__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__TopLevelTestB__DOT__clk__0 
        = vlSelfRef.TopLevelTestB__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h3876a222__0 = (1U & 
                                              ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter) 
                                               >> 3U));
    vlSelfRef.__Vtrigprevexpr___TOP__TopLevelTestB__DOT__uut__DOT__cp__0 
        = vlSelfRef.TopLevelTestB__DOT__uut__DOT__cp;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTopLevelTestB___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VTopLevelTestB___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VTopLevelTestB___024root___nba_sequent__TOP__0(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___nba_sequent__TOP__0\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter 
        = (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt) 
            & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__ABFlag))
            ? 0U : ((0x0fU == (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter))
                     ? 0U : (0x0000000fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter)))));
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__cp = (1U 
                                                  & ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter) 
                                                     >> 3U));
}

void VTopLevelTestB___024root___nba_sequent__TOP__1(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___nba_sequent__TOP__1\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut 
        = ((4U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
            ? (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)
            : (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin1));
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__addrOut 
        = vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut;
}

extern const VlUnpacked<CData/*7:0*/, 16> VTopLevelTestB__ConstPool__TABLE_hd768dfd6_0;
extern const VlUnpacked<CData/*7:0*/, 16> VTopLevelTestB__ConstPool__TABLE_he29635ec_0;

void VTopLevelTestB___024root___nba_sequent__TOP__2(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___nba_sequent__TOP__2\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint 
        = (0x0000000fU & (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt) 
                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__ABFlag))
                           ? (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP)
                           : ((0x0fU > (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint))
                               ? ((IData)(1U) + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint))
                               : 0U)));
    __Vtableidx1 = vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP = 
        VTopLevelTestB__ConstPool__TABLE_hd768dfd6_0
        [__Vtableidx1];
    __Vtableidx2 = (0x0000000fU & ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP) 
                                   >> 4U));
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt 
        = VTopLevelTestB__ConstPool__TABLE_he29635ec_0
        [__Vtableidx2];
}

void VTopLevelTestB___024root___nba_comb__TOP__0(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___nba_comb__TOP__0\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2;
    TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2 = 0;
    // Body
    if ((1U & (~ ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt) 
                  >> 1U)))) {
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[vlSelfRef.TopLevelTestB__DOT__uut__DOT__addrOut] 
            = vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut;
    }
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut 
        = (0x0000000fU & ((0x00000010U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP))
                           ? ((2U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                               ? vlSelfRef.TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells
                              [vlSelfRef.TopLevelTestB__DOT__uut__DOT__addrOut]
                               : 0U) : (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP)));
    TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2 = 0U;
    if ((8U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))) {
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin1 
            = (0x0000000fU & ((0x00000080U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                               ? ((0x00000040U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                   ? ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)
                                           : ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              + (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                           : 0x0fU))
                                   : ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))
                                           : (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (~ ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                                 ^ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                           : ((~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)) 
                                              + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))))
                               : ((0x00000040U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                   ? ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              & (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                           : ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              ^ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))
                                           : (~ ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                                 & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))))
                                   : ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? 0U : (
                                                   (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)) 
                                                   & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (~ ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                                 + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                           : (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)))))));
    } else {
        TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2 
            = (0x0000000fU & ((0x00000080U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                               ? ((0x00000040U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                   ? ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              - (IData)(1U))
                                           : (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                               + (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))) 
                                              + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                               + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)) 
                                              + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut))
                                           : ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              + VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut), 1U))))
                                   : ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                               & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)) 
                                              - (IData)(1U))
                                           : (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                               + (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))) 
                                              + ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                                 & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))
                                           : ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              + ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                                 & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))))))
                               : ((0x00000040U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                   ? ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                               & (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))) 
                                              - (IData)(1U))
                                           : (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                               - (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)) 
                                              - (IData)(1U)))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                               + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)) 
                                              + ((~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)) 
                                                 | (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))
                                           : ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              + ((~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)) 
                                                 | (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut)))))
                                   : ((0x00000020U 
                                       & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                       ? ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? 0x0fU : 
                                          ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                           + (~ (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))))
                                       : ((0x00000010U 
                                           & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                                           ? ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut) 
                                              + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut))
                                           : (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut))))));
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin1 
            = (0x0000000fU & ((0x00000010U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                               ? (IData)(TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2)
                               : ((IData)(1U) + (IData)(TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2))));
    }
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__ABFlag 
        = (IData)((0x0fU == (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin1)));
}

void VTopLevelTestB___024root___eval_nba(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_nba\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vinline__nba_sequent__TOP__2___Vtableidx1;
    __Vinline__nba_sequent__TOP__2___Vtableidx1 = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__2___Vtableidx2;
    __Vinline__nba_sequent__TOP__2___Vtableidx2 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter 
            = (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt) 
                & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__ABFlag))
                ? 0U : ((0x0fU == (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter))
                         ? 0U : (0x0000000fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter)))));
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__cp 
            = (1U & ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter) 
                     >> 3U));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut 
            = ((4U & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt))
                ? (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__AccOut)
                : (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin1));
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__addrOut 
            = vlSelfRef.TopLevelTestB__DOT__uut__DOT__muxOut;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint 
            = (0x0000000fU & (((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt) 
                               & (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__ABFlag))
                               ? (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP)
                               : ((0x0fU > (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint))
                                   ? ((IData)(1U) + (IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint))
                                   : 0U)));
        __Vinline__nba_sequent__TOP__2___Vtableidx1 
            = vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint;
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP 
            = VTopLevelTestB__ConstPool__TABLE_hd768dfd6_0
            [__Vinline__nba_sequent__TOP__2___Vtableidx1];
        __Vinline__nba_sequent__TOP__2___Vtableidx2 
            = (0x0000000fU & ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP) 
                              >> 4U));
        vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt 
            = VTopLevelTestB__ConstPool__TABLE_he29635ec_0
            [__Vinline__nba_sequent__TOP__2___Vtableidx2];
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTopLevelTestB___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VTopLevelTestB___024root___timing_resume(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___timing_resume\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTopLevelTestB___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VTopLevelTestB___024root___eval_phase__act(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_phase__act\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VTopLevelTestB___024root___eval_triggers__act(vlSelf);
    VTopLevelTestB___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VTopLevelTestB___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        VTopLevelTestB___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void VTopLevelTestB___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VTopLevelTestB___024root___eval_phase__nba(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_phase__nba\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VTopLevelTestB___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VTopLevelTestB___024root___eval_nba(vlSelf);
        VTopLevelTestB___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VTopLevelTestB___024root___eval(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTopLevelTestB___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("TopLevel/testB/TopLeveltestB.sv", 2, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTopLevelTestB___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("TopLevel/testB/TopLeveltestB.sv", 2, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VTopLevelTestB___024root___eval_phase__act(vlSelf));
    } while (VTopLevelTestB___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VTopLevelTestB___024root___eval_debug_assertions(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_debug_assertions\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
