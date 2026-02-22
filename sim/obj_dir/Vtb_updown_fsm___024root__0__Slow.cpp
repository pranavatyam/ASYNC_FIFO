// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_updown_fsm.h for the primary calling header

#include "Vtb_updown_fsm__pch.h"

VL_ATTR_COLD void Vtb_updown_fsm___024root___eval_static(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_static\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__clk__0 
        = vlSelfRef.tb_updown_fsm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__rst_n__0 
        = vlSelfRef.tb_updown_fsm__DOT__rst_n;
}

VL_ATTR_COLD void Vtb_updown_fsm___024root___eval_final(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_final\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_updown_fsm___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_updown_fsm___024root___eval_phase__stl(Vtb_updown_fsm___024root* vlSelf);

VL_ATTR_COLD void Vtb_updown_fsm___024root___eval_settle(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_settle\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_updown_fsm___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_updown_fsm.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_updown_fsm___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_updown_fsm___024root___eval_triggers__stl(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_triggers__stl\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_updown_fsm___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_updown_fsm___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_updown_fsm___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_updown_fsm___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_updown_fsm___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_updown_fsm___024root___stl_sequent__TOP__0(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___stl_sequent__TOP__0\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vtb_updown_fsm___024root___eval_stl(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_stl\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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

VL_ATTR_COLD bool Vtb_updown_fsm___024root___eval_phase__stl(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___eval_phase__stl\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_updown_fsm___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_updown_fsm___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_updown_fsm___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_updown_fsm___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_updown_fsm___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_updown_fsm___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_updown_fsm.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_updown_fsm.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_updown_fsm___024root___ctor_var_reset(Vtb_updown_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updown_fsm___024root___ctor_var_reset\n"); );
    Vtb_updown_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_updown_fsm__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11158734855508157556ull);
    vlSelf->tb_updown_fsm__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10156327092723876182ull);
    vlSelf->tb_updown_fsm__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4362077456852897854ull);
    vlSelf->tb_updown_fsm__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3701147142108611780ull);
    vlSelf->tb_updown_fsm__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13647795285205102637ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_updown_fsm__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
