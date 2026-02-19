// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_updown_fsm.h for the primary calling header

#ifndef VERILATED_VTB_UPDOWN_FSM___024ROOT_H_
#define VERILATED_VTB_UPDOWN_FSM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_updown_fsm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_updown_fsm___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_updown_fsm__DOT__clk;
    CData/*0:0*/ tb_updown_fsm__DOT__rst_n;
    CData/*3:0*/ tb_updown_fsm__DOT__count;
    CData/*0:0*/ tb_updown_fsm__DOT__dut__DOT__state;
    CData/*0:0*/ tb_updown_fsm__DOT__dut__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_updown_fsm__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_updown_fsm__DOT__rst_n__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1d6a355c__0;

    // INTERNAL VARIABLES
    Vtb_updown_fsm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_updown_fsm___024root(Vtb_updown_fsm__Syms* symsp, const char* namep);
    ~Vtb_updown_fsm___024root();
    VL_UNCOPYABLE(Vtb_updown_fsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
