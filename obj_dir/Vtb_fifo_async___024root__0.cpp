// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_async.h for the primary calling header

#include "Vtb_fifo_async__pch.h"

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__3(Vtb_fifo_async___024root* vlSelf);

void Vtb_fifo_async___024root___eval_initial(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_async__DOT__w_clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000fa0ULL, 
                                             nullptr, 
                                             "tb/tb_fifo_async.sv", 
                                             53);
        vlSelfRef.tb_fifo_async__DOT__w_clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_fifo_async__DOT__w_clk)));
    }
    co_return;}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_async__DOT__r_clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001b58ULL, 
                                             nullptr, 
                                             "tb/tb_fifo_async.sv", 
                                             58);
        vlSelfRef.tb_fifo_async__DOT__r_clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_fifo_async__DOT__r_clk)));
    }
    co_return;}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(Vtb_fifo_async___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(Vtb_fifo_async___024root* vlSelf, VlForkSync __Vfork_1__sync);

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__tb_fifo_async__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__tb_fifo_async__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i;
    __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__i;
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__i = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_9__DOT____Vrepeat8;
    __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_10__DOT____Vrepeat9;
    __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0;
    // Body
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    vlSelfRef.tb_fifo_async__DOT__w_en = 0U;
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    vlSelfRef.tb_fifo_async__DOT__w_data = 0U;
    vlSelfRef.tb_fifo_async__DOT__w_rst_n = 0U;
    vlSelfRef.tb_fifo_async__DOT__r_rst_n = 0U;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             103);
        __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             104);
        __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_async__DOT__w_rst_n = 1U;
    vlSelfRef.tb_fifo_async__DOT__r_rst_n = 1U;
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             110);
        __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             111);
        __Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__2__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_async__DOT__head = 0U;
    vlSelfRef.tb_fifo_async__DOT__tail = 0U;
    vlSelfRef.tb_fifo_async__DOT__sc_count = 0U;
    VL_WRITEF_NX("t=%0t RESET RELEASED  empty=%0b full=%0b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.tb_fifo_async__DOT__empty),
                 1,vlSelfRef.tb_fifo_async__DOT__full);
    __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__tb_fifo_async__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i = 0;
    VL_WRITEF_NX("\n--- TEST 1: Fill-to-FULL ---\n",0);
    __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             159);
        vlSelfRef.tb_fifo_async__DOT__w_en = 1U;
        vlSelfRef.tb_fifo_async__DOT__w_data = (0x000000ffU 
                                                & ((IData)(0x64U) 
                                                   + __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i));
        __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i 
            = ((IData)(1U) + __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__i);
    }
    co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fifo_async.w_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         164);
    vlSelfRef.tb_fifo_async__DOT__w_en = 0U;
    __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__tb_fifo_async__DOT__unnamedblk1_5__DOT____Vrepeat4 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__tb_fifo_async__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             168);
        __Vtask_tb_fifo_async__DOT__test_fill_to_full__4__tb_fifo_async__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_fifo_async__DOT__test_fill_to_full__4__tb_fifo_async__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_fifo_async__DOT__sc_count)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_async.sv:171: Assertion failed in %Ntb_fifo_async.test_fill_to_full: Expected scoreboard count=8 after fill, got %0d (t=%0t)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.tb_fifo_async__DOT__sc_count,
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("tb/tb_fifo_async.sv", 171, "", false);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)))))) {
        VL_WRITEF_NX("NOTE: full is not asserted right now (t=%0t). This can happen depending on flag timing, but sc_count says FIFO is full.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF_NX("PASS: Filled 8 items (sc_count=%0d). full=%0b\n",0,
                 32,vlSelfRef.tb_fifo_async__DOT__sc_count,
                 1,(IData)(vlSelfRef.tb_fifo_async__DOT__full));
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__i = 0;
    VL_WRITEF_NX("\n--- TEST 2: Drain-to-EMPTY ---\n",0);
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__i = 0U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__i)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             189);
        vlSelfRef.tb_fifo_async__DOT__r_en = 1U;
        __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__i 
            = ((IData)(1U) + __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__i);
    }
    co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fifo_async.r_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         193);
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             197);
        __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_fifo_async__DOT__sc_count)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_async.sv:200: Assertion failed in %Ntb_fifo_async.test_drain_to_empty: Expected scoreboard count=0 after drain, got %0d (t=%0t)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.tb_fifo_async__DOT__sc_count,
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("tb/tb_fifo_async.sv", 200, "", false);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty)))))) {
        VL_WRITEF_NX("NOTE: empty is not asserted right now (t=%0t). This can happen depending on flag timing, but sc_count says FIFO is empty.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_7__DOT____Vrepeat6 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             208);
        vlSelfRef.tb_fifo_async__DOT__r_en = 1U;
        __Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (__Vtask_tb_fifo_async__DOT__test_drain_to_empty__5__tb_fifo_async__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fifo_async.r_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         211);
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    VL_WRITEF_NX("PASS: Drained to empty (sc_count=%0d). empty=%0b\n",0,
                 32,vlSelfRef.tb_fifo_async__DOT__sc_count,
                 1,(IData)(vlSelfRef.tb_fifo_async__DOT__empty));
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    vlSelfRef.tb_fifo_async__DOT__w_en = 0U;
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    vlSelfRef.tb_fifo_async__DOT__w_data = 0U;
    vlSelfRef.tb_fifo_async__DOT__w_rst_n = 0U;
    vlSelfRef.tb_fifo_async__DOT__r_rst_n = 0U;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             103);
        __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             104);
        __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_async__DOT__w_rst_n = 1U;
    vlSelfRef.tb_fifo_async__DOT__r_rst_n = 1U;
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             110);
        __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             111);
        __Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_fifo_async__DOT__apply_reset__6__tb_fifo_async__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_async__DOT__head = 0U;
    vlSelfRef.tb_fifo_async__DOT__tail = 0U;
    vlSelfRef.tb_fifo_async__DOT__sc_count = 0U;
    VL_WRITEF_NX("t=%0t RESET RELEASED  empty=%0b full=%0b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.tb_fifo_async__DOT__empty),
                 1,vlSelfRef.tb_fifo_async__DOT__full);
    vlSelf->__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__WRITER__DOT__i = 0;
    vlSelf->__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__READER__DOT__j = 0;
    vlSelf->__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__READER__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0;
    VL_WRITEF_NX("\n--- TEST 3: Simultaneous R/W (directed) ---\n",0);
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(vlSelf, __Vfork_1__sync);
    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(vlSelf, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "tb/tb_fifo_async.sv", 
                                  228);
    __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_9__DOT____Vrepeat8 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             254);
        __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_9__DOT____Vrepeat8 
            = (__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_9__DOT____Vrepeat8 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_10__DOT____Vrepeat9 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_10__DOT____Vrepeat9)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             255);
        __Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_10__DOT____Vrepeat9 
            = (__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__unnamedblk1_10__DOT____Vrepeat9 
               - (IData)(1U));
    }
    VL_WRITEF_NX("PASS: Simultaneous test completed (sc_count=%0d, empty=%0b full=%0b)\n\nALL TESTS PASSED \342\234\205 (t=%0t)\n",0,
                 32,vlSelfRef.tb_fifo_async__DOT__sc_count,
                 1,(IData)(vlSelfRef.tb_fifo_async__DOT__empty),
                 1,vlSelfRef.tb_fifo_async__DOT__full,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("tb/tb_fifo_async.sv", 276, "");
    co_return;}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(Vtb_fifo_async___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__READER__DOT__unnamedblk1_8__DOT____Vrepeat7 = 5U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__READER__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             243);
        vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__READER__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__tb_fifo_async__DOT__READER__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__READER__DOT__j = 0U;
    while (VL_GTS_III(32, 0x00000028U, vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__READER__DOT__j)) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             245);
        vlSelfRef.tb_fifo_async__DOT__r_en = 1U;
        vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__READER__DOT__j 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__READER__DOT__j);
    }
    co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fifo_async.r_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         248);
    vlSelfRef.tb_fifo_async__DOT__r_en = 0U;
    __Vfork_1__sync.done("tb/tb_fifo_async.sv", 240);
    co_return;}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(Vtb_fifo_async___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__WRITER__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__WRITER__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.w_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             232);
        vlSelfRef.tb_fifo_async__DOT__w_en = 1U;
        vlSelfRef.tb_fifo_async__DOT__w_data = (0x000000ffU 
                                                & ((IData)(0xc8U) 
                                                   + vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__WRITER__DOT__i));
        vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__WRITER__DOT__i 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_fifo_async__DOT__test_simultaneous_rw__8__WRITER__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h7259801f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fifo_async.w_clk)", 
                                                         "tb/tb_fifo_async.sv", 
                                                         236);
    vlSelfRef.tb_fifo_async__DOT__w_en = 0U;
    __Vfork_1__sync.done("tb/tb_fifo_async.sv", 229);
    co_return;}

VlCoroutine Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__3(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_tb_fifo_async__DOT__sc_pop__1__v;
    __Vtask_tb_fifo_async__DOT__sc_pop__1__v = 0;
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VtrigSched_hefe03d7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_async.r_clk)", 
                                                             "tb/tb_fifo_async.sv", 
                                                             136);
        if (vlSelfRef.tb_fifo_async__DOT__r_rst_n) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__r_en) 
                              & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty)))))) {
                if (VL_UNLIKELY((VL_GTES_III(32, 0U, vlSelfRef.tb_fifo_async__DOT__sc_count)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_async.sv:84: Assertion failed in %Ntb_fifo_async.sc_pop: SCOREBOARD underflow at t=%0t\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                    VL_STOP_MT("tb/tb_fifo_async.sv", 84, "", false);
                }
                __Vtask_tb_fifo_async__DOT__sc_pop__1__v 
                    = vlSelfRef.tb_fifo_async__DOT__exp_q
                    [(0x0000001fU & vlSelfRef.tb_fifo_async__DOT__head)];
                vlSelfRef.tb_fifo_async__DOT__head 
                    = VL_MODDIVS_III(32, ((IData)(1U) 
                                          + vlSelfRef.tb_fifo_async__DOT__head), (IData)(0x00000020U));
                vlSelfRef.tb_fifo_async__DOT__sc_count 
                    = (vlSelfRef.tb_fifo_async__DOT__sc_count 
                       - (IData)(1U));
                vlSelfRef.tb_fifo_async__DOT__unnamedblk1__DOT__exp 
                    = __Vtask_tb_fifo_async__DOT__sc_pop__1__v;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "tb/tb_fifo_async.sv", 
                                                     141);
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__r_data) 
                                  != (IData)(vlSelfRef.tb_fifo_async__DOT__unnamedblk1__DOT__exp))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_async.sv:143: Assertion failed in %Ntb_fifo_async.unnamedblk1: READ MISMATCH at t=%0t: got=%0# exp=%0# (empty=%0b full=%0b sc_count=%0d)\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__r_data),
                                 8,vlSelfRef.tb_fifo_async__DOT__unnamedblk1__DOT__exp,
                                 1,(IData)(vlSelfRef.tb_fifo_async__DOT__empty),
                                 1,vlSelfRef.tb_fifo_async__DOT__full,
                                 32,vlSelfRef.tb_fifo_async__DOT__sc_count);
                    VL_STOP_MT("tb/tb_fifo_async.sv", 143, "", false);
                }
                VL_WRITEF_NX("t=%0t R  data=%0#  empty=%0b  sc_count=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__r_data),
                             1,vlSelfRef.tb_fifo_async__DOT__empty,
                             32,vlSelfRef.tb_fifo_async__DOT__sc_count);
            }
        }
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
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 4U) 
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
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b = 0;
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
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
}

void Vtb_fifo_async___024root___eval_act(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_act\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout = 0;
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b = 0;
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout = 0;
    CData/*3:0*/ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b;
    __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b = 0;
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
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
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b, 1U) 
                              ^ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
            = __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
        __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b, 1U) 
                              ^ __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
            = __Vinline__act_comb__TOP__0___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
    }
}

void Vtb_fifo_async___024root___nba_sequent__TOP__0(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_sequent__TOP__0\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0 = 0U;
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
    // Locals
    CData/*7:0*/ __Vtask_tb_fifo_async__DOT__sc_push__0__v;
    __Vtask_tb_fifo_async__DOT__sc_push__0__v = 0;
    // Body
    if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__w_en) 
                          & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)))))) {
            __Vtask_tb_fifo_async__DOT__sc_push__0__v 
                = vlSelfRef.tb_fifo_async__DOT__w_data;
            if (VL_UNLIKELY((VL_LTES_III(32, 0x00000020U, vlSelfRef.tb_fifo_async__DOT__sc_count)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_async.sv:75: Assertion failed in %Ntb_fifo_async.sc_push: SCOREBOARD overflow at t=%0t\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9);
                VL_STOP_MT("tb/tb_fifo_async.sv", 75, "", false);
            }
            vlSelfRef.tb_fifo_async__DOT__exp_q[(0x0000001fU 
                                                 & vlSelfRef.tb_fifo_async__DOT__tail)] 
                = __Vtask_tb_fifo_async__DOT__sc_push__0__v;
            vlSelfRef.tb_fifo_async__DOT__tail = VL_MODDIVS_III(32, 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.tb_fifo_async__DOT__tail), (IData)(0x00000020U));
            vlSelfRef.tb_fifo_async__DOT__sc_count 
                = ((IData)(1U) + vlSelfRef.tb_fifo_async__DOT__sc_count);
            VL_WRITEF_NX("t=%0t W  data=%0#  full=%0b  sc_count=%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__w_data),
                         1,vlSelfRef.tb_fifo_async__DOT__full,
                         32,vlSelfRef.tb_fifo_async__DOT__sc_count);
        }
    }
}

void Vtb_fifo_async___024root___nba_sequent__TOP__3(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_sequent__TOP__3\n"); );
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
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b = 0;
    // Body
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc = 
        ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)) 
         & (IData)(vlSelfRef.tb_fifo_async__DOT__w_en));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin) 
                          + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc)));
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
}

void Vtb_fifo_async___024root___nba_sequent__TOP__4(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___nba_sequent__TOP__4\n"); );
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
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b = 0;
    // Body
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b 
        = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
    __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b), 1U) 
                          ^ (IData)(__Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b)));
    vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
        = __Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
}

void Vtb_fifo_async___024root___eval_nba(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___eval_nba\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vinline__nba_sequent__TOP__2___Vtask_tb_fifo_async__DOT__sc_push__0__v;
    __Vinline__nba_sequent__TOP__2___Vtask_tb_fifo_async__DOT__sc_push__0__v = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
    __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b;
    __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
    __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b;
    __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b = 0;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0 = 0U;
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
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.tb_fifo_async__DOT__w_rst_n) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_async__DOT__w_en) 
                              & (~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)))))) {
                __Vinline__nba_sequent__TOP__2___Vtask_tb_fifo_async__DOT__sc_push__0__v 
                    = vlSelfRef.tb_fifo_async__DOT__w_data;
                if (VL_UNLIKELY((VL_LTES_III(32, 0x00000020U, vlSelfRef.tb_fifo_async__DOT__sc_count)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_async.sv:75: Assertion failed in %Ntb_fifo_async.sc_push: SCOREBOARD overflow at t=%0t\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                    VL_STOP_MT("tb/tb_fifo_async.sv", 75, "", false);
                }
                vlSelfRef.tb_fifo_async__DOT__exp_q[(0x0000001fU 
                                                     & vlSelfRef.tb_fifo_async__DOT__tail)] 
                    = __Vinline__nba_sequent__TOP__2___Vtask_tb_fifo_async__DOT__sc_push__0__v;
                vlSelfRef.tb_fifo_async__DOT__tail 
                    = VL_MODDIVS_III(32, ((IData)(1U) 
                                          + vlSelfRef.tb_fifo_async__DOT__tail), (IData)(0x00000020U));
                vlSelfRef.tb_fifo_async__DOT__sc_count 
                    = ((IData)(1U) + vlSelfRef.tb_fifo_async__DOT__sc_count);
                VL_WRITEF_NX("t=%0t W  data=%0#  full=%0b  sc_count=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelfRef.tb_fifo_async__DOT__w_data),
                             1,vlSelfRef.tb_fifo_async__DOT__full,
                             32,vlSelfRef.tb_fifo_async__DOT__sc_count);
            }
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
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc 
            = ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__empty)) 
               & (IData)(vlSelfRef.tb_fifo_async__DOT__r_en));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin) 
                              + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_inc)));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc 
            = ((~ (IData)(vlSelfRef.tb_fifo_async__DOT__full)) 
               & (IData)(vlSelfRef.tb_fifo_async__DOT__w_en));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin) 
                              + (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_inc)));
        __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_bin_next;
        __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b, 1U) 
                              ^ __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__w_gray_next 
            = __Vinline__nba_comb__TOP__1___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__9__Vfuncout;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray 
            = ((IData)(vlSelfRef.tb_fifo_async__DOT__r_rst_n)
                ? (IData)(vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next)
                : 0U);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b 
            = vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_bin_next;
        __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout 
            = (0x0000000fU & (VL_SHIFTR_III(4,4,32, __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b, 1U) 
                              ^ __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__b));
        vlSelfRef.tb_fifo_async__DOT__dut__DOT__r_gray_next 
            = __Vinline__nba_comb__TOP__2___Vfunc_tb_fifo_async__DOT__dut__DOT__bin2gray__10__Vfuncout;
    }
}

void Vtb_fifo_async___024root___timing_commit(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___timing_commit\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h7259801f__0.commit(
                                                   "@(posedge tb_fifo_async.w_clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hefe03d7e__0.commit(
                                                   "@(posedge tb_fifo_async.r_clk)");
    }
}

void Vtb_fifo_async___024root___timing_resume(Vtb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_async___024root___timing_resume\n"); );
    Vtb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7259801f__0.resume(
                                                   "@(posedge tb_fifo_async.w_clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hefe03d7e__0.resume(
                                                   "@(posedge tb_fifo_async.r_clk)");
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
