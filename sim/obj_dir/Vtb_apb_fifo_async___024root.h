// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_apb_fifo_async.h for the primary calling header

#ifndef VERILATED_VTB_APB_FIFO_ASYNC___024ROOT_H_
#define VERILATED_VTB_APB_FIFO_ASYNC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_apb_fifo_async__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_apb_fifo_async___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_apb_fifo_async__DOT__PCLK;
    CData/*0:0*/ tb_apb_fifo_async__DOT__PRESETn;
    CData/*0:0*/ tb_apb_fifo_async__DOT__r_clk;
    CData/*0:0*/ tb_apb_fifo_async__DOT__r_rst_n_in;
    CData/*0:0*/ tb_apb_fifo_async__DOT__PSEL;
    CData/*0:0*/ tb_apb_fifo_async__DOT__PENABLE;
    CData/*0:0*/ tb_apb_fifo_async__DOT__PWRITE;
    CData/*7:0*/ tb_apb_fifo_async__DOT__PADDR;
    CData/*0:0*/ tb_apb_fifo_async__DOT__r_en_in;
    CData/*0:0*/ tb_apb_fifo_async__DOT__r_fire_d;
    CData/*7:0*/ tb_apb_fifo_async__DOT__exp_front_d;
    CData/*7:0*/ tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__apb_access;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__en;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__wdata_wr;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff1;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__full_fifo;
    CData/*7:0*/ tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__empty_fifo;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc;
    CData/*0:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_rptr_to_w__DOT__q1;
    CData/*3:0*/ tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_wptr_to_r__DOT__q1;
    CData/*7:0*/ __VdlyVal__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0;
    CData/*2:0*/ __VdlyDim0__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0;
    CData/*0:0*/ __VdlySet__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_rst_n_in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PCLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PRESETn__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2__0;
    IData/*31:0*/ tb_apb_fifo_async__DOT__PWDATA;
    IData/*31:0*/ tb_apb_fifo_async__DOT__PRDATA;
    IData/*31:0*/ tb_apb_fifo_async__DOT__read_ok_count;
    IData/*31:0*/ tb_apb_fifo_async__DOT__st;
    IData/*31:0*/ tb_apb_fifo_async__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlQueue<CData/*7:0*/> tb_apb_fifo_async__DOT__exp_q;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc57c9dbd__0;
    VlTriggerScheduler __VtrigSched_h5a42c159__0;

    // INTERNAL VARIABLES
    Vtb_apb_fifo_async__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_apb_fifo_async___024root(Vtb_apb_fifo_async__Syms* symsp, const char* namep);
    ~Vtb_apb_fifo_async___024root();
    VL_UNCOPYABLE(Vtb_apb_fifo_async___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
