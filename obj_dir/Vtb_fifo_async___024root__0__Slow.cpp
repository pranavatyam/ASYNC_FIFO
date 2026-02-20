// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_async.h for the primary calling header

#include "Vtb_fifo_async__pch.h"

VL_ATTR_COLD void Vtb_fifo_async___024root___eval_static(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_static\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_clk__0 
        = vlSelfRef.tb_fifo_async__DOT__w_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_rst_n__0 
        = vlSelfRef.tb_fifo_async__DOT__w_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_clk__0 
        = vlSelfRef.tb_fifo_async__DOT__r_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_rst_n__0 
        = vlSelfRef.tb_fifo_async__DOT__r_rst_n;
}

VL_ATTR_COLD void Vtb_fifo_async___024root___eval_final(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_final\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_async___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fifo_async___024root___eval_phase__stl(Vtb_fifo_async___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_async___024root___eval_settle(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_settle\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fifo_async___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_fifo_async.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_fifo_async___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_fifo_async___024root___eval_triggers__stl(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_triggers__stl\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo_async___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_fifo_async___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_async___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fifo_async___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fifo_async___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_fifo_async___024root___eval_stl(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_stl\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout = 0;
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b = 0;
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout = 0;
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b = 0;
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc 
            = ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)) 
               & (IData)(vlSelfRef.tb_fifo_async__DOT__w_en));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc 
            = ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty)) 
               & (IData)(vlSelfRef.tb_fifo_async__DOT__r_en));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin) 
                              + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc)));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin) 
                              + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc)));
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b, 1U) 
                              ^ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
            = __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b, 1U) 
                              ^ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
            = __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
    }
}

VL_ATTR_COLD bool Vtb_fifo_async___024root___eval_phase__stl(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_phase__stl\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fifo_async___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_fifo_async___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_fifo_async___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_fifo_async___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_async___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fifo_async___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_fifo_async.w_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_fifo_async.w_rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_fifo_async.r_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_fifo_async.r_rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge tb_fifo_async.w_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(negedge tb_fifo_async.r_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo_async___024root___ctor_var_reset(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___ctor_var_reset\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fifo_async__DOT__w_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10506297422261258076ull);
    vlSelf->tb_fifo_async__DOT__w_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14608051737742377890ull);
    vlSelf->tb_fifo_async__DOT__r_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 802405791111336985ull);
    vlSelf->tb_fifo_async__DOT__r_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16286858059180679571ull);
    vlSelf->tb_fifo_async__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9587523687031566971ull);
    vlSelf->tb_fifo_async__DOT__w_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8323578955981543646ull);
    vlSelf->tb_fifo_async__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16445637810698988191ull);
    vlSelf->tb_fifo_async__DOT__r_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1706882913386559048ull);
    vlSelf->tb_fifo_async__DOT__r_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12749364516839184337ull);
    vlSelf->tb_fifo_async__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11530242892662108880ull);
    vlSelf->tb_fifo_async__DOT__exp_q.atDefault() = 0;
    vlSelf->tb_fifo_async__DOT__r_fire_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4265521985807386539ull);
    vlSelf->tb_fifo_async__DOT__exp_front_d = 0;
    vlSelf->tb_fifo_async__DOT__full_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14427526383686743709ull);
    vlSelf->tb_fifo_async__DOT__empty_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13928749309701197297ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fifo_async__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8713680225523620615ull);
    }
    vlSelf->tb_fifo_async__DOT__dut__DOT__w_bin = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6839981104552083393ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__w_bin_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7573791915782309539ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__w_gray = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1412938903243451945ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__w_gray_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7210002700517929939ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__r_bin = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18302383264822081745ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__r_bin_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5606412276888092378ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__r_gray = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12290652310174303531ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__r_gray_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1586201476063105246ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__r_gray_sync_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9395537791855767413ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__w_gray_sync_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8514450385595445272ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__w_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4015541664060951591ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__r_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15477943824331114992ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11556708321531337089ull);
    vlSelf->tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5652599749487779309ull);
    vlSelf->__VdlyVal__tb_fifo_async__DOT__dut__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_fifo_async__DOT__dut__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
