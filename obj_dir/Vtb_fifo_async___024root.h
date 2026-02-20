// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo_async.h for the primary calling header

#ifndef VERILATED_VTB_FIFO_ASYNC___024ROOT_H_
#define VERILATED_VTB_FIFO_ASYNC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fifo_async__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo_async___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fifo_async__DOT__w_clk;
    CData/*0:0*/ tb_fifo_async__DOT__w_rst_n;
    CData/*0:0*/ tb_fifo_async__DOT__r_clk;
    CData/*0:0*/ tb_fifo_async__DOT__r_rst_n;
    CData/*0:0*/ tb_fifo_async__DOT__w_en;
    CData/*7:0*/ tb_fifo_async__DOT__w_data;
    CData/*0:0*/ tb_fifo_async__DOT__full;
    CData/*0:0*/ tb_fifo_async__DOT__r_en;
    CData/*7:0*/ tb_fifo_async__DOT__r_data;
    CData/*0:0*/ tb_fifo_async__DOT__empty;
    CData/*0:0*/ tb_fifo_async__DOT__r_fire_d;
    CData/*7:0*/ tb_fifo_async__DOT__exp_front_d;
    CData/*0:0*/ tb_fifo_async__DOT__full_seen;
    CData/*0:0*/ tb_fifo_async__DOT__empty_seen;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__w_bin;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__w_bin_next;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__w_gray;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__w_gray_next;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__r_bin;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__r_bin_next;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__r_gray;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__r_gray_next;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__r_gray_sync_w;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__w_gray_sync_r;
    CData/*0:0*/ tb_fifo_async__DOT__dut__DOT__w_inc;
    CData/*0:0*/ tb_fifo_async__DOT__dut__DOT__r_inc;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__u_sync_rptr_to_w__DOT__q1;
    CData/*3:0*/ tb_fifo_async__DOT__dut__DOT__u_sync_wptr_to_r__DOT__q1;
    CData/*7:0*/ __VdlyVal__tb_fifo_async__DOT__dut__DOT__mem__v0;
    CData/*2:0*/ __VdlyDim0__tb_fifo_async__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __VdlySet__tb_fifo_async__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_async__DOT__w_rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_async__DOT__r_rst_n__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> tb_fifo_async__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlQueue<CData/*7:0*/> tb_fifo_async__DOT__exp_q;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h725980de__0;
    VlTriggerScheduler __VtrigSched_hefe03e3f__0;

    // INTERNAL VARIABLES
    Vtb_fifo_async__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fifo_async___024root(Vtb_fifo_async__Syms* symsp, const char* namep);
    ~Vtb_fifo_async___024root();
    VL_UNCOPYABLE(Vtb_fifo_async___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
