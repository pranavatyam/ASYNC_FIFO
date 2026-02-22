// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "Vcounter__pch.h"

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__0(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__1(Vcounter___024root* vlSelf);

void Vcounter___024root___eval_initial(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__0(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb_counter__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    // Body
    vlSelfRef.tb_counter__DOT__clk = 0U;
    vlSelfRef.tb_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_counter__DOT__en = 0U;
    tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h0748d828__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_counter.clk)", 
                                                             "tb/tb_counter.sv", 
                                                             25);
        tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_counter__DOT__rst_n = 1U;
    vlSelfRef.tb_counter__DOT__en = 1U;
    tb_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, tb_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h0748d828__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_counter.clk)", 
                                                             "tb/tb_counter.sv", 
                                                             30);
        tb_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_counter__DOT__en = 0U;
    tb_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 5U;
    while (VL_LTS_III(32, 0U, tb_counter__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h0748d828__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_counter.clk)", 
                                                             "tb/tb_counter.sv", 
                                                             33);
        tb_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Final count value: %2#\n",0,4,vlSelfRef.tb_counter__DOT__count);
    VL_FINISH_MT("tb/tb_counter.sv", 36, "");
    co_return;}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__1(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_counter.sv", 
                                             16);
        vlSelfRef.tb_counter__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_counter__DOT__clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcounter___024root___eval_triggers__act(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_triggers__act\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb_counter__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_counter__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__clk__0 
        = vlSelfRef.tb_counter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__rst_n__0 
        = vlSelfRef.tb_counter__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcounter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___trigger_anySet__act\n"); );
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

void Vcounter___024root___nba_sequent__TOP__0(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___nba_sequent__TOP__0\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_counter__DOT__rst_n) {
        if (vlSelfRef.tb_counter__DOT__en) {
            vlSelfRef.tb_counter__DOT__count = (0x0000000fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_counter__DOT__count)));
        }
    } else {
        vlSelfRef.tb_counter__DOT__count = 0U;
    }
}

void Vcounter___024root___eval_nba(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_nba\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.tb_counter__DOT__rst_n) {
            if (vlSelfRef.tb_counter__DOT__en) {
                vlSelfRef.tb_counter__DOT__count = 
                    (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_counter__DOT__count)));
            }
        } else {
            vlSelfRef.tb_counter__DOT__count = 0U;
        }
    }
}

void Vcounter___024root___timing_commit(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___timing_commit\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h0748d828__0.commit(
                                                   "@(posedge tb_counter.clk)");
    }
}

void Vcounter___024root___timing_resume(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___timing_resume\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0748d828__0.resume(
                                                   "@(posedge tb_counter.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcounter___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcounter___024root___eval_phase__act(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_phase__act\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounter___024root___eval_triggers__act(vlSelf);
    Vcounter___024root___timing_commit(vlSelf);
    Vcounter___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcounter___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcounter___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vcounter___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcounter___024root___eval_phase__nba(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_phase__nba\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcounter___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcounter___024root___eval_nba(vlSelf);
        Vcounter___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcounter___024root___eval(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcounter___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_counter.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcounter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_counter.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcounter___024root___eval_phase__act(vlSelf));
    } while (Vcounter___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcounter___024root___eval_debug_assertions(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_debug_assertions\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
