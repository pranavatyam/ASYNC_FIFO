// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024ROOT_H_
#define VERILATED_VCOUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_counter__DOT__clk;
    CData/*0:0*/ tb_counter__DOT__rst_n;
    CData/*3:0*/ tb_counter__DOT__count;
    CData/*0:0*/ tb_counter__DOT__en;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_counter__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_counter__DOT__rst_n__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0748d828__0;

    // INTERNAL VARIABLES
    Vcounter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcounter___024root(Vcounter__Syms* symsp, const char* namep);
    ~Vcounter___024root();
    VL_UNCOPYABLE(Vcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
