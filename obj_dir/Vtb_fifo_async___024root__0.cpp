// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_async.h for the primary calling header

#include "Vtb_fifo_async__pch.h"

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_async___024root* vlSelf);

void Vtb_fifo_async___024root___eval_initial(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_fifo_async__DOT__w_clk = 0U;
    vlSelfRef.tb_fifo_async__DOT__r_clk = 0U;
    vlSelfRef.tb_fifo_async__DOT__w_rst_n = 0U;
    vlSelfRef.tb_fifo_async__DOT__r_rst_n = 0U;
    vlSelfRef.tb_fifo_async__DOT__w_en = 0U;
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    vlSelfRef.tb_fifo_async__DOT__w_data = 0U;
    vlSelfRef.tb_fifo_async__DOT__full_seen = 0U;
    vlSelfRef.tb_fifo_async__DOT__empty_seen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                         nullptr, "tb/tb_fifo_async.sv", 
                                         127);
    vlSelfRef.tb_fifo_async__DOT__w_rst_n = 1U;
    vlSelfRef.tb_fifo_async__DOT__r_rst_n = 1U;
    VL_WRITEF_NX("RESET RELEASED at t=%0t\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x000000c8U;
    while (VL_LTS_III(32, 0U, tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h725980de__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             136);
        vlSelfRef.tb_fifo_async__DOT__full_seen = vlSelfRef.tb_fifo_async__DOT__full;
        vlSelfRef.tb_fifo_async__DOT__w_en = 0U;
        if ((0x0000003cU > VL_URANDOM_RANGE_I(0U, 0x00000063U))) {
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__full_seen)))))) {
                vlSelfRef.tb_fifo_async__DOT__w_en = 1U;
                vlSelfRef.tb_fifo_async__DOT__w_data 
                    = (0x000000ffU & VL_URANDOM_RANGE_I(0U, 0x000000ffU));
                VL_WRITEF_NX("W: t=%0t data=%0# full=%0b empty=%0b qsize=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__w_data),
                             1,vlSelfRef.tb_fifo_async__DOT__full,
                             1,(IData)(vlSelfRef.tb_fifo_async__DOT__empty),
                             32,vlSelfRef.tb_fifo_async__DOT__exp_q.size());
            }
        }
        co_await vlSelfRef.__VtrigSched_hefe03e3f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             152);
        vlSelfRef.tb_fifo_async__DOT__empty_seen = vlSelfRef.tb_fifo_async__DOT__empty;
        vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
        if ((0x0000003cU > VL_URANDOM_RANGE_I(0U, 0x00000063U))) {
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty_seen)))))) {
                vlSelfRef.tb_fifo_async__DOT__r_en = 1U;
                VL_WRITEF_NX("R: t=%0t request (empty=%0b full=%0b qsize=%0d)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,1,(IData)(vlSelfRef.tb_fifo_async__DOT__empty),
                             1,vlSelfRef.tb_fifo_async__DOT__full,
                             32,vlSelfRef.tb_fifo_async__DOT__exp_q.size());
            }
        }
        tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_h725980de__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_async.w_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         166);
    vlSelfRef.tb_fifo_async__DOT__w_en = 0U;
    co_await vlSelfRef.__VtrigSched_hefe03e3f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_async.r_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         169);
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    VL_WRITEF_NX("DONE driving. Draining... qsize=%0d\n",0,
                 32,vlSelfRef.tb_fifo_async__DOT__exp_q.size());
    while (VL_LTS_III(32, 0U, vlSelfRef.tb_fifo_async__DOT__exp_q.size())) {
        co_await vlSelfRef.__VtrigSched_hefe03e3f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             176);
        vlSelfRef.tb_fifo_async__DOT__empty_seen = vlSelfRef.tb_fifo_async__DOT__empty;
        vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
        if ((1U & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty_seen)))) {
            vlSelfRef.tb_fifo_async__DOT__r_en = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_hefe03e3f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_async.r_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         186);
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_fifo_async__DOT__exp_q.size())))) {
        VL_WRITEF_NX("ERROR: scoreboard not empty at end. qsize=%0d\n[%0t] %%Fatal: tb_fifo_async.sv:192: Assertion failed in %Ntb_fifo_async\n",0,
                     32,vlSelfRef.tb_fifo_async__DOT__exp_q.size(),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_fifo_async.sv", 192, "", false);
    }
    VL_WRITEF_NX("PASS. Final qsize=%0d empty=%0b full=%0b\n",0,
                 32,vlSelfRef.tb_fifo_async__DOT__exp_q.size(),
                 1,vlSelfRef.tb_fifo_async__DOT__empty,
                 1,(IData)(vlSelfRef.tb_fifo_async__DOT__full));
    VL_FINISH_MT("tb/tb_fifo_async.sv", 196, "");
    co_return;}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001b58ULL, 
                                             nullptr, 
                                             "tb/tb_fifo_async.sv", 
                                             29);
        vlSelfRef.tb_fifo_async__DOT__r_clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_fifo_async__DOT__r_clk)));
    }
    co_return;}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000fa0ULL, 
                                             nullptr, 
                                             "tb/tb_fifo_async.sv", 
                                             28);
        vlSelfRef.tb_fifo_async__DOT__w_clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_fifo_async__DOT__w_clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_async___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_fifo_async___024root___eval_triggers__act(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_triggers__act\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_fifo_async__DOT__r_clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_clk__0)) 
                                                       << 6U) 
                                                      | ((((~ (IData)(vlSelfRef.tb_fifo_async__DOT__w_clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_clk__0)) 
                                                          << 5U) 
                                                         | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                            << 4U))) 
                                                     | (((((~ (IData)(vlSelfRef.tb_fifo_async__DOT__r_rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_rst_n__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb_fifo_async__DOT__r_clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_clk__0))) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSelfRef.tb_fifo_async__DOT__w_rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_rst_n__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb_fifo_async__DOT__w_clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_clk__0 
        = vlSelfRef.tb_fifo_async__DOT__w_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_rst_n__0 
        = vlSelfRef.tb_fifo_async__DOT__w_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_clk__0 
        = vlSelfRef.tb_fifo_async__DOT__r_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_rst_n__0 
        = vlSelfRef.tb_fifo_async__DOT__r_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo_async___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_fifo_async___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___trigger_anySet__act\n"); );
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

void Vtb_fifo_async___024root___act_comb__TOP__0(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___act_comb__TOP__0\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b = 0;
    // Body
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc = 
        ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)) 
         & (IData)(vlSelfRef.tb_fifo_async__DOT__w_en));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc = 
        ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty)) 
         & (IData)(vlSelfRef.tb_fifo_async__DOT__r_en));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin) 
                          + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin) 
                          + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc)));
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
}

void Vtb_fifo_async___024root___eval_act(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_act\n"); );
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
    if ((0x0000000000000070ULL & vlSelfRef.__VactTriggered
         [0U])) {
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

void Vtb_fifo_async___024root___nba_sequent__TOP__0(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_sequent__TOP__0\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__w_en) 
                          & (IData)(vlSelfRef.tb_fifo_async__DOT__full_seen))))) {
            VL_WRITEF_NX("ERROR: TB asserted w_en even though FULL was seen at drive time. t=%0t\n[%0t] %%Fatal: tb_fifo_async.sv:98: Assertion failed in %Ntb_fifo_async\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_fifo_async.sv", 98, "", false);
        }
    }
    vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
        if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc) {
            vlSelfRef.tb_fifo_async__DOT__exp_q.push_back(vlSelfRef.tb_fifo_async__DOT__w_data);
        }
    } else {
        vlSelfRef.tb_fifo_async__DOT__exp_q.clear();
    }
    if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
        if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc) {
            vlSelfRef.__VdlyVal__tb_fifo_async__DOT__dut__DOT__mem__v0 
                = vlSelfRef.tb_fifo_async__DOT__w_data;
            vlSelfRef.__VdlyDim0__tb_fifo_async__DOT__dut__DOT__mem__v0 
                = (7U & (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin));
            vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0 = 1U;
        }
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
    } else {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin = 0U;
    }
}

void Vtb_fifo_async___024root___nba_sequent__TOP__1(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_sequent__TOP__1\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__r_en) 
                          & (IData)(vlSelfRef.tb_fifo_async__DOT__empty_seen))))) {
            VL_WRITEF_NX("ERROR: TB asserted r_en even though EMPTY was seen at drive time. t=%0t\n[%0t] %%Fatal: tb_fifo_async.sv:107: Assertion failed in %Ntb_fifo_async\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_fifo_async.sv", 107, "", false);
        }
    }
    if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
        if (vlSelfRef.tb_fifo_async__DOT__r_fire_d) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__r_data) 
                              != (IData)(vlSelfRef.tb_fifo_async__DOT__exp_front_d))))) {
                VL_WRITEF_NX("ERROR: Data mismatch at t=%0t got=%0# exp=%0d\n[%0t] %%Fatal: tb_fifo_async.sv:84: Assertion failed in %Ntb_fifo_async\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__r_data),
                             8,vlSelfRef.tb_fifo_async__DOT__exp_front_d,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_fifo_async.sv", 84, "", false);
            } else {
                VL_WRITEF_NX("OK: READ t=%0t data=%0# (empty=%0b full=%0b qsize=%0d)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__r_data),
                             1,vlSelfRef.tb_fifo_async__DOT__empty,
                             1,(IData)(vlSelfRef.tb_fifo_async__DOT__full),
                             32,vlSelfRef.tb_fifo_async__DOT__exp_q.size());
            }
        }
    }
    if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
        vlSelfRef.tb_fifo_async__DOT__r_fire_d = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc;
        if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc) {
            if (VL_UNLIKELY(((0U == vlSelfRef.tb_fifo_async__DOT__exp_q.size())))) {
                VL_WRITEF_NX("ERROR: Read fired but scoreboard empty at t=%0t\n[%0t] %%Fatal: tb_fifo_async.sv:69: Assertion failed in %Ntb_fifo_async\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_fifo_async.sv", 69, "", false);
            }
            vlSelfRef.tb_fifo_async__DOT__exp_front_d 
                = vlSelfRef.tb_fifo_async__DOT__exp_q.pop_front();
        }
    } else {
        vlSelfRef.tb_fifo_async__DOT__r_fire_d = 0U;
        vlSelfRef.tb_fifo_async__DOT__exp_front_d = 0U;
    }
    vlSelfRef.tb_fifo_async__DOT__empty = (1U & ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__r_rst_n)) 
                                                 | ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next) 
                                                    == (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_sync_r))));
    if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
        if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc) {
            vlSelfRef.tb_fifo_async__DOT__r_data = 
                vlSelfRef.tb_fifo_async__DOT__dut__DOT__mem
                [(7U & (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin))];
        }
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_sync_r 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray;
    } else {
        vlSelfRef.tb_fifo_async__DOT__r_data = 0U;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin = 0U;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_sync_r = 0U;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1 = 0U;
    }
}

void Vtb_fifo_async___024root___nba_sequent__TOP__2(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_sequent__TOP__2\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__mem[vlSelfRef.__VdlyDim0__tb_fifo_async__DOT__dut__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_fifo_async__DOT__dut__DOT__mem__v0;
    }
    if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
        vlSelfRef.tb_fifo_async__DOT__full = ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next) 
                                              == ((0x0000000cU 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w) 
                                                        >> 2U)) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w))));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray;
    } else {
        vlSelfRef.tb_fifo_async__DOT__full = 0U;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray = 0U;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w = 0U;
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1 = 0U;
    }
}

void Vtb_fifo_async___024root___nba_comb__TOP__0(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_comb__TOP__0\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc = 
        ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty)) 
         & (IData)(vlSelfRef.tb_fifo_async__DOT__r_en));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin) 
                          + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc)));
}

void Vtb_fifo_async___024root___nba_comb__TOP__1(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_comb__TOP__1\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b = 0;
    // Body
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc = 
        ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)) 
         & (IData)(vlSelfRef.tb_fifo_async__DOT__w_en));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin) 
                          + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc)));
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
}

void Vtb_fifo_async___024root___nba_sequent__TOP__3(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_sequent__TOP__3\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray 
        = ((IData)(vlSelfRef.tb_fifo_async__DOT__r_rst_n)
            ? (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next)
            : 0U);
}

void Vtb_fifo_async___024root___nba_comb__TOP__2(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_comb__TOP__2\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b = 0;
    // Body
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
}

void Vtb_fifo_async___024root___eval_nba(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_nba\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
    __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b;
    __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
    __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b;
    __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b = 0;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__w_en) 
                              & (IData)(vlSelfRef.tb_fifo_async__DOT__full_seen))))) {
                VL_WRITEF_NX("ERROR: TB asserted w_en even though FULL was seen at drive time. t=%0t\n[%0t] %%Fatal: tb_fifo_async.sv:98: Assertion failed in %Ntb_fifo_async\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_fifo_async.sv", 98, "", false);
            }
        }
        vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0 = 0U;
        if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
            if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc) {
                vlSelfRef.tb_fifo_async__DOT__exp_q.push_back(vlSelfRef.tb_fifo_async__DOT__w_data);
            }
        } else {
            vlSelfRef.tb_fifo_async__DOT__exp_q.clear();
        }
        if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
            if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc) {
                vlSelfRef.__VdlyVal__tb_fifo_async__DOT__dut__DOT__mem__v0 
                    = vlSelfRef.tb_fifo_async__DOT__w_data;
                vlSelfRef.__VdlyDim0__tb_fifo_async__DOT__dut__DOT__mem__v0 
                    = (7U & (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin));
                vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0 = 1U;
            }
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
        } else {
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin = 0U;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__r_en) 
                              & (IData)(vlSelfRef.tb_fifo_async__DOT__empty_seen))))) {
                VL_WRITEF_NX("ERROR: TB asserted r_en even though EMPTY was seen at drive time. t=%0t\n[%0t] %%Fatal: tb_fifo_async.sv:107: Assertion failed in %Ntb_fifo_async\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_fifo_async.sv", 107, "", false);
            }
        }
        if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
            if (vlSelfRef.tb_fifo_async__DOT__r_fire_d) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__r_data) 
                                  != (IData)(vlSelfRef.tb_fifo_async__DOT__exp_front_d))))) {
                    VL_WRITEF_NX("ERROR: Data mismatch at t=%0t got=%0# exp=%0d\n[%0t] %%Fatal: tb_fifo_async.sv:84: Assertion failed in %Ntb_fifo_async\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__r_data),
                                 8,vlSelfRef.tb_fifo_async__DOT__exp_front_d,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("tb/tb_fifo_async.sv", 84, "", false);
                } else {
                    VL_WRITEF_NX("OK: READ t=%0t data=%0# (empty=%0b full=%0b qsize=%0d)\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__r_data),
                                 1,vlSelfRef.tb_fifo_async__DOT__empty,
                                 1,(IData)(vlSelfRef.tb_fifo_async__DOT__full),
                                 32,vlSelfRef.tb_fifo_async__DOT__exp_q.size());
                }
            }
        }
        if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
            vlSelfRef.tb_fifo_async__DOT__r_fire_d 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc;
            if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc) {
                if (VL_UNLIKELY(((0U == vlSelfRef.tb_fifo_async__DOT__exp_q.size())))) {
                    VL_WRITEF_NX("ERROR: Read fired but scoreboard empty at t=%0t\n[%0t] %%Fatal: tb_fifo_async.sv:69: Assertion failed in %Ntb_fifo_async\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("tb/tb_fifo_async.sv", 69, "", false);
                }
                vlSelfRef.tb_fifo_async__DOT__exp_front_d 
                    = vlSelfRef.tb_fifo_async__DOT__exp_q.pop_front();
            }
        } else {
            vlSelfRef.tb_fifo_async__DOT__r_fire_d = 0U;
            vlSelfRef.tb_fifo_async__DOT__exp_front_d = 0U;
        }
        vlSelfRef.tb_fifo_async__DOT__empty = (1U & 
                                               ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__r_rst_n)) 
                                                | ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next) 
                                                   == (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_sync_r))));
        if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
            if (vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc) {
                vlSelfRef.tb_fifo_async__DOT__r_data 
                    = vlSelfRef.tb_fifo_async__DOT__dut__DOT__mem
                    [(7U & (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin))];
            }
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_sync_r 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray;
        } else {
            vlSelfRef.tb_fifo_async__DOT__r_data = 0U;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin = 0U;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_sync_r = 0U;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1 = 0U;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0) {
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__mem[vlSelfRef.__VdlyDim0__tb_fifo_async__DOT__dut__DOT__mem__v0] 
                = vlSelfRef.__VdlyVal__tb_fifo_async__DOT__dut__DOT__mem__v0;
        }
        if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
            vlSelfRef.tb_fifo_async__DOT__full = ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next) 
                                                  == 
                                                  ((0x0000000cU 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w) 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w))));
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1 
                = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray;
        } else {
            vlSelfRef.tb_fifo_async__DOT__full = 0U;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray = 0U;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_sync_w = 0U;
            vlSelfRef.tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1 = 0U;
        }
    }
    if ((0x000000000000007cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc 
            = ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty)) 
               & (IData)(vlSelfRef.tb_fifo_async__DOT__r_en));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin) 
                              + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc)));
    }
    if ((0x0000000000000073ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc 
            = ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)) 
               & (IData)(vlSelfRef.tb_fifo_async__DOT__w_en));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin) 
                              + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc)));
        __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
        __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b, 1U) 
                              ^ __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
            = __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__0__Vfuncout;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray 
            = ((IData)(vlSelfRef.tb_fifo_async__DOT__r_rst_n)
                ? (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next)
                : 0U);
    }
    if ((0x000000000000007cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
        __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b, 1U) 
                              ^ __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
            = __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__1__Vfuncout;
    }
}

void Vtb_fifo_async___024root___timing_commit(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___timing_commit\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x0000000000000020ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_h725980de__0.commit(
                                                   "@(negedge tb_fifo_async.w_clk)");
    }
    if ((! (0x0000000000000040ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hefe03e3f__0.commit(
                                                   "@(negedge tb_fifo_async.r_clk)");
    }
}

void Vtb_fifo_async___024root___timing_resume(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___timing_resume\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_h725980de__0.resume(
                                                   "@(negedge tb_fifo_async.w_clk)");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_hefe03e3f__0.resume(
                                                   "@(negedge tb_fifo_async.r_clk)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fifo_async___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fifo_async___024root___eval_phase__act(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_phase__act\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fifo_async___024root___eval_triggers__act(vlSelf);
    Vtb_fifo_async___024root___timing_commit(vlSelf);
    Vtb_fifo_async___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fifo_async___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_fifo_async___024root___timing_resume(vlSelf);
        Vtb_fifo_async___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_fifo_async___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fifo_async___024root___eval_phase__nba(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_phase__nba\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fifo_async___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_fifo_async___024root___eval_nba(vlSelf);
        Vtb_fifo_async___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_fifo_async___024root___eval(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fifo_async___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_fifo_async.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_fifo_async___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_fifo_async.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_fifo_async___024root___eval_phase__act(vlSelf));
    } while (Vtb_fifo_async___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_fifo_async___024root___eval_debug_assertions(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_debug_assertions\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
