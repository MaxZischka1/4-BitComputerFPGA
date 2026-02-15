// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTopLevelTestB__pch.h"

//============================================================
// Constructors

VTopLevelTestB::VTopLevelTestB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTopLevelTestB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTopLevelTestB::VTopLevelTestB(const char* _vcname__)
    : VTopLevelTestB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTopLevelTestB::~VTopLevelTestB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTopLevelTestB___024root___eval_debug_assertions(VTopLevelTestB___024root* vlSelf);
#endif  // VL_DEBUG
void VTopLevelTestB___024root___eval_static(VTopLevelTestB___024root* vlSelf);
void VTopLevelTestB___024root___eval_initial(VTopLevelTestB___024root* vlSelf);
void VTopLevelTestB___024root___eval_settle(VTopLevelTestB___024root* vlSelf);
void VTopLevelTestB___024root___eval(VTopLevelTestB___024root* vlSelf);

void VTopLevelTestB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTopLevelTestB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTopLevelTestB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTopLevelTestB___024root___eval_static(&(vlSymsp->TOP));
        VTopLevelTestB___024root___eval_initial(&(vlSymsp->TOP));
        VTopLevelTestB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTopLevelTestB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTopLevelTestB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VTopLevelTestB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTopLevelTestB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTopLevelTestB___024root___eval_final(VTopLevelTestB___024root* vlSelf);

VL_ATTR_COLD void VTopLevelTestB::final() {
    VTopLevelTestB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTopLevelTestB::hierName() const { return vlSymsp->name(); }
const char* VTopLevelTestB::modelName() const { return "VTopLevelTestB"; }
unsigned VTopLevelTestB::threads() const { return 1; }
void VTopLevelTestB::prepareClone() const { contextp()->prepareClone(); }
void VTopLevelTestB::atClone() const {
    contextp()->threadPoolpOnClone();
}
