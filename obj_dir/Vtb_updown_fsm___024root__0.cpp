// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_updown_fsm.h for the primary calling header

#include "Vtb_updown_fsm__pch.h"

VlCoroutine Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__0(Vtb_updown_fsm___024root* vlSelf);
VlCoroutine Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__1(Vtb_updown_fsm___024root* vlSelf);

void Vtb_updown_fsm___024root___eval_initial(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_initial\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__0(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_updown_fsm__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_updown_fsm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_updown_fsm__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_updown_fsm__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.tb_updown_fsm__DOT__clk = 0U;
    vlSelfRef.tb_updown_fsm__DOT__rst_n = 0U;
    tb_updown_fsm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_updown_fsm__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h1d6a355c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_updown_fsm.clk)", 
                                                             "tb/tb_updown_fsm.sv", 
                                                             19);
        tb_updown_fsm__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_updown_fsm__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_updown_fsm__DOT__rst_n = 1U;
    tb_updown_fsm__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000019U;
    while (VL_LTS_III(32, 0U, tb_updown_fsm__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h1d6a355c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_updown_fsm.clk)", 
                                                             "tb/tb_updown_fsm.sv", 
                                                             23);
        VL_WRITEF_NX("t=%0t count=%0#\n",0,64,VL_TIME_UNITED_Q(1),
                     -12,4,(IData)(vlSelfRef.tb_updown_fsm__DOT__count));
        tb_updown_fsm__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_updown_fsm__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_FINISH_MT("tb/tb_updown_fsm.sv", 27, "");
    co_return;}

VlCoroutine Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__1(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_updown_fsm.sv", 
                                             13);
        vlSelfRef.tb_updown_fsm__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_updown_fsm__DOT__clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_updown_fsm___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_updown_fsm___024root___eval_triggers__act(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_triggers__act\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb_updown_fsm__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_updown_fsm__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__clk__0 
        = vlSelfRef.tb_updown_fsm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__rst_n__0 
        = vlSelfRef.tb_updown_fsm__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_updown_fsm___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_updown_fsm___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*3:0*/, 64> Vtb_updown_fsm__ConstPool__TABLE_h3adfc933_0;

void Vtb_updown_fsm___024root___nba_sequent__TOP__0(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___nba_sequent__TOP__0\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_updown_fsm__DOT__count) 
                     << 2U) | (((IData)(vlSelfRef.tb_updown_fsm__DOT__dut__DOT__state) 
                                << 1U) | (IData)(vlSelfRef.tb_updown_fsm__DOT__rst_n)));
    vlSelfRef.tb_updown_fsm__DOT__count = Vtb_updown_fsm__ConstPool__TABLE_h3adfc933_0
        [__Vtableidx1];
    vlSelfRef.tb_updown_fsm__DOT__dut__DOT__state = 
        ((IData)(vlSelfRef.tb_updown_fsm__DOT__rst_n) 
         && (IData)(vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state));
    if (vlSelfRef.tb_updown_fsm__DOT__dut__DOT__state) {
        vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 1U;
        if ((0U == (IData)(vlSelfRef.tb_updown_fsm__DOT__count))) {
            vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 0U;
        }
    } else {
        vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 0U;
        if ((0x0aU == (IData)(vlSelfRef.tb_updown_fsm__DOT__count))) {
            vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 1U;
        }
    }
}

void Vtb_updown_fsm___024root___eval_nba(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_nba\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vinline__nba_sequent__TOP__0___Vtableidx1;
    __Vinline__nba_sequent__TOP__0___Vtableidx1 = 0;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vtableidx1 
            = (((IData)(vlSelfRef.tb_updown_fsm__DOT__count) 
                << 2U) | (((IData)(vlSelfRef.tb_updown_fsm__DOT__dut__DOT__state) 
                           << 1U) | (IData)(vlSelfRef.tb_updown_fsm__DOT__rst_n)));
        vlSelfRef.tb_updown_fsm__DOT__count = Vtb_updown_fsm__ConstPool__TABLE_h3adfc933_0
            [__Vinline__nba_sequent__TOP__0___Vtableidx1];
        vlSelfRef.tb_updown_fsm__DOT__dut__DOT__state 
            = ((IData)(vlSelfRef.tb_updown_fsm__DOT__rst_n) 
               && (IData)(vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state));
        if (vlSelfRef.tb_updown_fsm__DOT__dut__DOT__state) {
            vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 1U;
            if ((0U == (IData)(vlSelfRef.tb_updown_fsm__DOT__count))) {
                vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 0U;
            }
        } else {
            vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 0U;
            if ((0x0aU == (IData)(vlSelfRef.tb_updown_fsm__DOT__count))) {
                vlSelfRef.tb_updown_fsm__DOT__dut__DOT__next_state = 1U;
            }
        }
    }
}

void Vtb_updown_fsm___024root___timing_commit(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___timing_commit\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h1d6a355c__0.commit(
                                                   "@(posedge tb_updown_fsm.clk)");
    }
}

void Vtb_updown_fsm___024root___timing_resume(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___timing_resume\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1d6a355c__0.resume(
                                                   "@(posedge tb_updown_fsm.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_updown_fsm___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_updown_fsm___024root___eval_phase__act(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_phase__act\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_updown_fsm___024root___eval_triggers__act(vlSelf);
    Vtb_updown_fsm___024root___timing_commit(vlSelf);
    Vtb_updown_fsm___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_updown_fsm___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_updown_fsm___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_updown_fsm___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_updown_fsm___024root___eval_phase__nba(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_phase__nba\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_updown_fsm___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_updown_fsm___024root___eval_nba(vlSelf);
        Vtb_updown_fsm___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_updown_fsm___024root___eval(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_updown_fsm___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_updown_fsm.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_updown_fsm___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_updown_fsm.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_updown_fsm___024root___eval_phase__act(vlSelf));
    } while (Vtb_updown_fsm___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_updown_fsm___024root___eval_debug_assertions(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_debug_assertions\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
