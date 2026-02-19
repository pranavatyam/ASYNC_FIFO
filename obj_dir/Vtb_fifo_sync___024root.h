// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo_sync.h for the primary calling header

#ifndef VERILATED_VTB_FIFO_SYNC___024ROOT_H_
#define VERILATED_VTB_FIFO_SYNC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fifo_sync__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo_sync___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fifo_sync__DOT__clk;
    CData/*0:0*/ tb_fifo_sync__DOT__rst_n;
    CData/*0:0*/ tb_fifo_sync__DOT__w_en;
    CData/*7:0*/ tb_fifo_sync__DOT__w_data;
    CData/*0:0*/ tb_fifo_sync__DOT__full;
    CData/*0:0*/ tb_fifo_sync__DOT__r_en;
    CData/*7:0*/ tb_fifo_sync__DOT__r_data;
    CData/*0:0*/ tb_fifo_sync__DOT__empty;
    CData/*2:0*/ tb_fifo_sync__DOT__dut__DOT__w_ptr;
    CData/*2:0*/ tb_fifo_sync__DOT__dut__DOT__r_ptr;
    CData/*3:0*/ tb_fifo_sync__DOT__dut__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_sync__DOT__rst_n__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> tb_fifo_sync__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h062de31c__0;

    // INTERNAL VARIABLES
    Vtb_fifo_sync__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fifo_sync___024root(Vtb_fifo_sync__Syms* symsp, const char* namep);
    ~Vtb_fifo_sync___024root();
    VL_UNCOPYABLE(Vtb_fifo_sync___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
