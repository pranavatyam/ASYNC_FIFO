// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_sync.h for the primary calling header

#include "Vtb_fifo_sync__pch.h"

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_static(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_static\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0 
        = vlSelfRef.tb_fifo_sync__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__rst_n__0 
        = vlSelfRef.tb_fifo_sync__DOT__rst_n;
}

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_final(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_final\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fifo_sync___024root___eval_phase__stl(Vtb_fifo_sync___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_settle(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_settle\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fifo_sync___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_fifo_sync.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_fifo_sync___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_triggers__stl(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_triggers__stl\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo_sync___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_fifo_sync___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fifo_sync___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fifo_sync___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_fifo_sync___024root___stl_sequent__TOP__0(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___stl_sequent__TOP__0\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_sync__DOT__full = (8U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count));
    vlSelfRef.tb_fifo_sync__DOT__empty = (0U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count));
}

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_stl(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_stl\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.tb_fifo_sync__DOT__full = (8U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count));
        vlSelfRef.tb_fifo_sync__DOT__empty = (0U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count));
    }
}

VL_ATTR_COLD bool Vtb_fifo_sync___024root___eval_phase__stl(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_phase__stl\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fifo_sync___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_fifo_sync___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_fifo_sync___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_fifo_sync___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fifo_sync___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_fifo_sync.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_fifo_sync.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo_sync___024root___ctor_var_reset(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___ctor_var_reset\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fifo_sync__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12885472739945958128ull);
    vlSelf->tb_fifo_sync__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3502585473903923710ull);
    vlSelf->tb_fifo_sync__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16837737057643179421ull);
    vlSelf->tb_fifo_sync__DOT__w_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13415908606833255624ull);
    vlSelf->tb_fifo_sync__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7318339297502742879ull);
    vlSelf->tb_fifo_sync__DOT__r_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14052052415387231467ull);
    vlSelf->tb_fifo_sync__DOT__r_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4591685931228931199ull);
    vlSelf->tb_fifo_sync__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2839791396041650776ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fifo_sync__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10858067304789280455ull);
    }
    vlSelf->tb_fifo_sync__DOT__dut__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3455753340062006825ull);
    vlSelf->tb_fifo_sync__DOT__dut__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 325925247566744372ull);
    vlSelf->tb_fifo_sync__DOT__dut__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7357142463195029247ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
