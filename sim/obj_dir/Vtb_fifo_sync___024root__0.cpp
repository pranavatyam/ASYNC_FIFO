// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_sync.h for the primary calling header

#include "Vtb_fifo_sync__pch.h"

VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_sync___024root* vlSelf);
VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_sync___024root* vlSelf);

void Vtb_fifo_sync___024root___eval_initial(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_initial\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fifo_sync__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_fifo_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_fifo_sync__DOT__unnamedblk1__DOT__i;
    tb_fifo_sync__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_fifo_sync__DOT__unnamedblk2__DOT__i;
    tb_fifo_sync__DOT__unnamedblk2__DOT__i = 0;
    // Body
    vlSelfRef.tb_fifo_sync__DOT__clk = 0U;
    vlSelfRef.tb_fifo_sync__DOT__rst_n = 0U;
    vlSelfRef.tb_fifo_sync__DOT__w_en = 0U;
    vlSelfRef.tb_fifo_sync__DOT__r_en = 0U;
    vlSelfRef.tb_fifo_sync__DOT__w_data = 0U;
    tb_fifo_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_fifo_sync__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h062de31c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_sync.clk)", 
                                                             "tb/tb_fifo_sync.sv", 
                                                             25);
        tb_fifo_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_fifo_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_sync__DOT__rst_n = 1U;
    VL_WRITEF_NX("t=%0t RESET RELEASED empty=%0b full=%0b\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,1,(0U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)),
                 1,(8U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)));
    tb_fifo_sync__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, tb_fifo_sync__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h062de31c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_sync.clk)", 
                                                             "tb/tb_fifo_sync.sv", 
                                                             31);
        vlSelfRef.tb_fifo_sync__DOT__w_en = 1U;
        vlSelfRef.tb_fifo_sync__DOT__w_data = (0x000000ffU 
                                               & ((IData)(0x0aU) 
                                                  + tb_fifo_sync__DOT__unnamedblk1__DOT__i));
        VL_WRITEF_NX("t=%0t WRITE data=%0# full=%0b empty=%0b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,8,(IData)(vlSelfRef.tb_fifo_sync__DOT__w_data),
                     1,(8U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)),
                     1,(0U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)));
        tb_fifo_sync__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                  + tb_fifo_sync__DOT__unnamedblk1__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h062de31c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fifo_sync.clk)", 
                                                         "tb/tb_fifo_sync.sv", 
                                                         36);
    vlSelfRef.tb_fifo_sync__DOT__w_en = 0U;
    tb_fifo_sync__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, tb_fifo_sync__DOT__unnamedblk2__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h062de31c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fifo_sync.clk)", 
                                                             "tb/tb_fifo_sync.sv", 
                                                             41);
        vlSelfRef.tb_fifo_sync__DOT__r_en = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fifo_sync.sv", 
                                             43);
        VL_WRITEF_NX("t=%0t READ  data=%0# full=%0b empty=%0b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,8,(IData)(vlSelfRef.tb_fifo_sync__DOT__r_data),
                     1,(8U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)),
                     1,(0U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)));
        tb_fifo_sync__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                  + tb_fifo_sync__DOT__unnamedblk2__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h062de31c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fifo_sync.clk)", 
                                                         "tb/tb_fifo_sync.sv", 
                                                         46);
    vlSelfRef.tb_fifo_sync__DOT__r_en = 0U;
    VL_FINISH_MT("tb/tb_fifo_sync.sv", 49, "");
    co_return;}

VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_fifo_sync.sv", 
                                             19);
        vlSelfRef.tb_fifo_sync__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_fifo_sync___024root___eval_triggers__act(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_triggers__act\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb_fifo_sync__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_fifo_sync__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0 
        = vlSelfRef.tb_fifo_sync__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__rst_n__0 
        = vlSelfRef.tb_fifo_sync__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo_sync___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_fifo_sync___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___trigger_anySet__act\n"); );
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

void Vtb_fifo_sync___024root___nba_sequent__TOP__0(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___nba_sequent__TOP__0\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__tb_fifo_sync__DOT__dut__DOT__count;
    __Vdly__tb_fifo_sync__DOT__dut__DOT__count = 0;
    CData/*7:0*/ __VdlyVal__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    __VdlyVal__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    __VdlyDim0__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    __VdlySet__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __Vdly__tb_fifo_sync__DOT__dut__DOT__count = vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count;
    __VdlySet__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_fifo_sync__DOT__rst_n) {
        __Vdly__tb_fifo_sync__DOT__dut__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
                                        & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
                                                 & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
                                            & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
                                           & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((1U 
                                                 == 
                                                 ((((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
                                                    & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__full))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
                                                     & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__empty))))) 
                                                << 1U) 
                                               | (2U 
                                                  == 
                                                  ((((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
                                                     & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__full))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
                                                      & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__empty)))))))))))) {
            if ((0U != (((1U == ((((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
                                   & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
                                            & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__empty))))) 
                         << 1U) | (2U == ((((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
                                            & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
                                           & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__empty)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: fifo_sync.sv:59: Assertion failed in %Ntb_fifo_sync.dut: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,((((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
                                      & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__full))) 
                                     << 1U) | ((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
                                               & (~ (IData)(vlSelfRef.tb_fifo_sync__DOT__empty)))));
                    VL_STOP_MT("rtl/fifo_sync.sv", 59, "");
                }
            }
        }
    } else {
        __Vdly__tb_fifo_sync__DOT__dut__DOT__count = 0U;
    }
    if (vlSelfRef.tb_fifo_sync__DOT__rst_n) {
        if (((IData)(vlSelfRef.tb_fifo_sync__DOT__w_en) 
             & (8U != (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)))) {
            __VdlyVal__tb_fifo_sync__DOT__dut__DOT__mem__v0 
                = vlSelfRef.tb_fifo_sync__DOT__w_data;
            __VdlyDim0__tb_fifo_sync__DOT__dut__DOT__mem__v0 
                = vlSelfRef.tb_fifo_sync__DOT__dut__DOT__w_ptr;
            __VdlySet__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 1U;
            vlSelfRef.tb_fifo_sync__DOT__dut__DOT__w_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__w_ptr)));
        }
        if (((IData)(vlSelfRef.tb_fifo_sync__DOT__r_en) 
             & (0U != (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count)))) {
            vlSelfRef.tb_fifo_sync__DOT__r_data = vlSelfRef.tb_fifo_sync__DOT__dut__DOT__mem
                [vlSelfRef.tb_fifo_sync__DOT__dut__DOT__r_ptr];
            vlSelfRef.tb_fifo_sync__DOT__dut__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__r_ptr)));
        }
    } else {
        vlSelfRef.tb_fifo_sync__DOT__dut__DOT__w_ptr = 0U;
        vlSelfRef.tb_fifo_sync__DOT__dut__DOT__r_ptr = 0U;
        vlSelfRef.tb_fifo_sync__DOT__r_data = 0U;
    }
    if (__VdlySet__tb_fifo_sync__DOT__dut__DOT__mem__v0) {
        vlSelfRef.tb_fifo_sync__DOT__dut__DOT__mem[__VdlyDim0__tb_fifo_sync__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    }
    vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count = __Vdly__tb_fifo_sync__DOT__dut__DOT__count;
    vlSelfRef.tb_fifo_sync__DOT__full = (8U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count));
    vlSelfRef.tb_fifo_sync__DOT__empty = (0U == (IData)(vlSelfRef.tb_fifo_sync__DOT__dut__DOT__count));
}

void Vtb_fifo_sync___024root___eval_nba(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_nba\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_fifo_sync___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_fifo_sync___024root___timing_commit(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___timing_commit\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h062de31c__0.commit(
                                                   "@(posedge tb_fifo_sync.clk)");
    }
}

void Vtb_fifo_sync___024root___timing_resume(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___timing_resume\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h062de31c__0.resume(
                                                   "@(posedge tb_fifo_sync.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fifo_sync___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fifo_sync___024root___eval_phase__act(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_phase__act\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fifo_sync___024root___eval_triggers__act(vlSelf);
    Vtb_fifo_sync___024root___timing_commit(vlSelf);
    Vtb_fifo_sync___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fifo_sync___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_fifo_sync___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_fifo_sync___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fifo_sync___024root___eval_phase__nba(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_phase__nba\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fifo_sync___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_fifo_sync___024root___eval_nba(vlSelf);
        Vtb_fifo_sync___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_fifo_sync___024root___eval(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fifo_sync___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_fifo_sync.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_fifo_sync___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_fifo_sync.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_fifo_sync___024root___eval_phase__act(vlSelf));
    } while (Vtb_fifo_sync___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_fifo_sync___024root___eval_debug_assertions(Vtb_fifo_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_debug_assertions\n"); );
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
