// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fifo_async__pch.h"

//============================================================
// Constructors

Vtb_fifo_async::Vtb_fifo_async(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fifo_async__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fifo_async::Vtb_fifo_async(const char* _vcname__)
    : Vtb_fifo_async(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fifo_async::~Vtb_fifo_async() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fifo_async___024root___eval_debug_assertions(Vtb_fifo_async___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fifo_async___024root___eval_static(Vtb_fifo_async___024root* vlSelf);
void Vtb_fifo_async___024root___eval_initial(Vtb_fifo_async___024root* vlSelf);
void Vtb_fifo_async___024root___eval_settle(Vtb_fifo_async___024root* vlSelf);
void Vtb_fifo_async___024root___eval(Vtb_fifo_async___024root* vlSelf);

void Vtb_fifo_async::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fifo_async::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fifo_async___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fifo_async___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fifo_async___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fifo_async___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fifo_async___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fifo_async::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_fifo_async::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fifo_async::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fifo_async___024root___eval_final(Vtb_fifo_async___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_async::final() {
    Vtb_fifo_async___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fifo_async::hierName() const { return vlSymsp->name(); }
const char* Vtb_fifo_async::modelName() const { return "Vtb_fifo_async"; }
unsigned Vtb_fifo_async::threads() const { return 1; }
void Vtb_fifo_async::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fifo_async::atClone() const {
    contextp()->threadPoolpOnClone();
}
