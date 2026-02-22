// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_apb_fifo_async.h for the primary calling header

#include "Vtb_apb_fifo_async__pch.h"

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___eval_static(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_static\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_clk__0 
        = vlSelfRef.tb_apb_fifo_async__DOT__r_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_rst_n_in__0 
        = vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PCLK__0 
        = vlSelfRef.tb_apb_fifo_async__DOT__PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PRESETn__0 
        = vlSelfRef.tb_apb_fifo_async__DOT__PRESETn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async__0 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo__0 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2__0 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2;
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___eval_initial__TOP(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_initial__TOP\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("waves.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___eval_final(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_final\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_apb_fifo_async___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_apb_fifo_async___024root___eval_phase__stl(Vtb_apb_fifo_async___024root* vlSelf);

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___eval_settle(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_settle\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_apb_fifo_async___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_apb_fifo_async.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_apb_fifo_async___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___eval_triggers__stl(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_triggers__stl\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_apb_fifo_async___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_apb_fifo_async___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_apb_fifo_async___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_apb_fifo_async___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_apb_fifo_async___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___trigger_anySet__stl\n"); );
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

void Vtb_apb_fifo_async___024root___act_comb__TOP__0(Vtb_apb_fifo_async___024root* vlSelf);

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___eval_stl(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_stl\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_apb_fifo_async___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_apb_fifo_async___024root___eval_phase__stl(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_phase__stl\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_apb_fifo_async___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_apb_fifo_async___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_apb_fifo_async___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_apb_fifo_async___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_apb_fifo_async___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_apb_fifo_async___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_apb_fifo_async.r_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_apb_fifo_async.r_rst_n_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_apb_fifo_async.PCLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_apb_fifo_async.PRESETn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge tb_apb_fifo_async.dut.r_rst_n_async)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge tb_apb_fifo_async.dut.w_rst_n_fifo)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(negedge tb_apb_fifo_async.dut.r_rst_ff2)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___ctor_var_reset(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___ctor_var_reset\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_apb_fifo_async__DOT__PCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14674936124484479503ull);
    vlSelf->tb_apb_fifo_async__DOT__PRESETn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2584838428452117008ull);
    vlSelf->tb_apb_fifo_async__DOT__r_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15053790411836883103ull);
    vlSelf->tb_apb_fifo_async__DOT__r_rst_n_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13220186066571273889ull);
    vlSelf->tb_apb_fifo_async__DOT__PSEL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9106747130435005030ull);
    vlSelf->tb_apb_fifo_async__DOT__PENABLE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2663971503532205343ull);
    vlSelf->tb_apb_fifo_async__DOT__PWRITE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1723770953541659072ull);
    vlSelf->tb_apb_fifo_async__DOT__PADDR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11350091496263574014ull);
    vlSelf->tb_apb_fifo_async__DOT__PWDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2904451861048857503ull);
    vlSelf->tb_apb_fifo_async__DOT__PRDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6395257407387574816ull);
    vlSelf->tb_apb_fifo_async__DOT__r_en_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5740928697125066837ull);
    vlSelf->tb_apb_fifo_async__DOT__exp_q.atDefault() = 0;
    vlSelf->tb_apb_fifo_async__DOT__r_fire_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3778620130337689686ull);
    vlSelf->tb_apb_fifo_async__DOT__exp_front_d = 0;
    vlSelf->tb_apb_fifo_async__DOT__read_ok_count = 0;
    vlSelf->tb_apb_fifo_async__DOT__st = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1082958674703441777ull);
    vlSelf->tb_apb_fifo_async__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val = 0;
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__apb_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7667570475989658172ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7865545235539517147ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13800810164993047748ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 357693704734270345ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1835296730230828878ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__wdata_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5540012898449764775ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1724733683784773274ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15788929862074069030ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15809812646513793651ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2607106939301407546ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__full_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10941090115085727770ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8802749670567377013ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__empty_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8576457655408995963ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11992281748298763299ull);
    }
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1724716946134916069ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5389762492000684139ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13117034903127293093ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8131342457045916372ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12666810015738842971ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16888630833925604827ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6090723013947728056ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12297517737273876237ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2384829684299866189ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14568698735748158361ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8395702696823325361ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15242827711924455987ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_rptr_to_w__DOT__q1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8429251346298879018ull);
    vlSelf->tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_wptr_to_r__DOT__q1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4072984460850228427ull);
    vlSelf->__VdlyVal__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_rst_n_in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PCLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PRESETn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
