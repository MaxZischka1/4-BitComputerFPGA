// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopLevelTestB.h for the primary calling header

#include "VTopLevelTestB__pch.h"

VL_ATTR_COLD void VTopLevelTestB___024root___eval_static(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_static\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__TopLevelTestB__DOT__clk__0 
        = vlSelfRef.TopLevelTestB__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h3876a222__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__TopLevelTestB__DOT__uut__DOT__cp__0 
        = vlSelfRef.TopLevelTestB__DOT__uut__DOT__cp;
}

VL_ATTR_COLD void VTopLevelTestB___024root___eval_static__TOP(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_static__TOP\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter = 0U;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint = 0U;
}

VL_ATTR_COLD void VTopLevelTestB___024root___eval_initial__TOP(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_initial__TOP\n"); );
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
}

VL_ATTR_COLD void VTopLevelTestB___024root___eval_final(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_final\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevelTestB___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTopLevelTestB___024root___eval_phase__stl(VTopLevelTestB___024root* vlSelf);

VL_ATTR_COLD void VTopLevelTestB___024root___eval_settle(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_settle\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTopLevelTestB___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("TopLevel/testB/TopLeveltestB.sv", 2, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VTopLevelTestB___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VTopLevelTestB___024root___eval_triggers__stl(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_triggers__stl\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTopLevelTestB___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VTopLevelTestB___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevelTestB___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VTopLevelTestB___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VTopLevelTestB___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*7:0*/, 16> VTopLevelTestB__ConstPool__TABLE_hd768dfd6_0;
extern const VlUnpacked<CData/*7:0*/, 16> VTopLevelTestB__ConstPool__TABLE_he29635ec_0;

VL_ATTR_COLD void VTopLevelTestB___024root___stl_sequent__TOP__0(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___stl_sequent__TOP__0\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2;
    TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin2 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__cp = (1U 
                                                  & ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter) 
                                                     >> 3U));
    __Vtableidx1 = vlSelfRef.TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint;
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP = 
        VTopLevelTestB__ConstPool__TABLE_hd768dfd6_0
        [__Vtableidx1];
    __Vtableidx2 = (0x0000000fU & ((IData)(vlSelfRef.TopLevelTestB__DOT__uut__DOT__progP) 
                                   >> 4U));
    vlSelfRef.TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt 
        = VTopLevelTestB__ConstPool__TABLE_he29635ec_0
        [__Vtableidx2];
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

VL_ATTR_COLD void VTopLevelTestB___024root___eval_stl(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_stl\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VTopLevelTestB___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VTopLevelTestB___024root___eval_phase__stl(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___eval_phase__stl\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VTopLevelTestB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VTopLevelTestB___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VTopLevelTestB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VTopLevelTestB___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevelTestB___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VTopLevelTestB___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge TopLevelTestB.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge TopLevelTestB.uut.Pcblock.counter[3])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge TopLevelTestB.uut.cp)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTopLevelTestB___024root___ctor_var_reset(VTopLevelTestB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevelTestB___024root___ctor_var_reset\n"); );
    VTopLevelTestB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->TopLevelTestB__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11924744249523742307ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__cp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1321011458323048897ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__ABFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13685228695574464143ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__progP = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5997348078532928611ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__muxOut = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13550595608822985340ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__addrOut = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5434595186857360571ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__AccOut = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1075952017359603114ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9267741595652049464ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__Pcblock__DOT__programCountint = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14403012672310751961ull);
    vlSelf->TopLevelTestB__DOT__uut__DOT__controlBlock__DOT__progInt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8647521779579533321ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TopLevelTestB__DOT__uut__DOT__ramBlock__DOT__dataCells[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2406028917067662806ull);
    }
    vlSelf->TopLevelTestB__DOT__uut__DOT__aluBlock__DOT__Fin1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16447850840083130144ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__TopLevelTestB__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr_h3876a222__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TopLevelTestB__DOT__uut__DOT__cp__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
