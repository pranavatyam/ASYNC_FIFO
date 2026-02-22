// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_apb_fifo_async.h for the primary calling header

#include "Vtb_apb_fifo_async__pch.h"

VL_ATTR_COLD void Vtb_apb_fifo_async___024root___eval_initial__TOP(Vtb_apb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__0(Vtb_apb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__1(Vtb_apb_fifo_async___024root* vlSelf);
VlCoroutine Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__2(Vtb_apb_fifo_async___024root* vlSelf);

void Vtb_apb_fifo_async___024root___eval_initial(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_initial\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_apb_fifo_async___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__0(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_apb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_apb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_apb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_apb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*7:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_write__0__addr;
    __Vtask_tb_apb_fifo_async__DOT__apb_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_write__0__data;
    __Vtask_tb_apb_fifo_async__DOT__apb_write__0__data = 0;
    CData/*7:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_read__1__addr;
    __Vtask_tb_apb_fifo_async__DOT__apb_read__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_read__1__data;
    __Vtask_tb_apb_fifo_async__DOT__apb_read__1__data = 0;
    CData/*7:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_write__2__addr;
    __Vtask_tb_apb_fifo_async__DOT__apb_write__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_write__2__data;
    __Vtask_tb_apb_fifo_async__DOT__apb_write__2__data = 0;
    CData/*7:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_read__3__addr;
    __Vtask_tb_apb_fifo_async__DOT__apb_read__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_apb_fifo_async__DOT__apb_read__3__data;
    __Vtask_tb_apb_fifo_async__DOT__apb_read__3__data = 0;
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__PCLK = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__r_clk = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PRESETn = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PWRITE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PADDR = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PWDATA = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__r_en_in = 0U;
    tb_apb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_apb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_apb_fifo_async.PCLK)", 
                                                             "tb/tb_apb_fifo_async.sv", 
                                                             176);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_apb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_apb_fifo_async__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_apb_fifo_async__DOT__PRESETn = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in = 1U;
    VL_WRITEF_NX("RESET RELEASED at t=%0t\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_tb_apb_fifo_async__DOT__apb_write__0__data = 1U;
    __Vtask_tb_apb_fifo_async__DOT__apb_write__0__addr = 0U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         69);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PADDR = __Vtask_tb_apb_fifo_async__DOT__apb_write__0__addr;
    vlSelfRef.tb_apb_fifo_async__DOT__PWDATA = __Vtask_tb_apb_fifo_async__DOT__apb_write__0__data;
    vlSelfRef.tb_apb_fifo_async__DOT__PWRITE = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PWRITE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PADDR = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PWDATA = 0U;
    __Vtask_tb_apb_fifo_async__DOT__apb_read__1__addr = 4U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PADDR = __Vtask_tb_apb_fifo_async__DOT__apb_read__1__addr;
    vlSelfRef.tb_apb_fifo_async__DOT__PWRITE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_apb_fifo_async__DOT__apb_read__1__data 
        = vlSelfRef.tb_apb_fifo_async__DOT__PRDATA;
    vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PADDR = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__st = __Vtask_tb_apb_fifo_async__DOT__apb_read__1__data;
    VL_WRITEF_NX("STATUS after enable: 0x%08x (EMPTY=%0b FULL=%0b)\n",0,
                 32,vlSelfRef.tb_apb_fifo_async__DOT__st,
                 1,(1U & vlSelfRef.tb_apb_fifo_async__DOT__st),
                 1,(1U & (vlSelfRef.tb_apb_fifo_async__DOT__st 
                          >> 1U)));
    vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val 
            = (0x000000ffU & ((IData)(0x10U) + vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__i));
        vlSelfRef.tb_apb_fifo_async__DOT__exp_q.push_back(vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val);
        VL_WRITEF_NX("APB WRITE: data=0x%0x\n",0,8,
                     vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val);
        __Vtask_tb_apb_fifo_async__DOT__apb_write__2__data 
            = vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val;
        __Vtask_tb_apb_fifo_async__DOT__apb_write__2__addr = 8U;
        co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_apb_fifo_async.PCLK)", 
                                                             "tb/tb_apb_fifo_async.sv", 
                                                             69);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_apb_fifo_async__DOT__PADDR = __Vtask_tb_apb_fifo_async__DOT__apb_write__2__addr;
        vlSelfRef.tb_apb_fifo_async__DOT__PWDATA = __Vtask_tb_apb_fifo_async__DOT__apb_write__2__data;
        vlSelfRef.tb_apb_fifo_async__DOT__PWRITE = 1U;
        vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 1U;
        vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
        co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_apb_fifo_async.PCLK)", 
                                                             "tb/tb_apb_fifo_async.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 1U;
        co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_apb_fifo_async.PCLK)", 
                                                             "tb/tb_apb_fifo_async.sv", 
                                                             79);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__PWRITE = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__PADDR = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__PWDATA = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__i);
    }
    tb_apb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 = 6U;
    while (VL_LTS_III(32, 0U, tb_apb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h5a42c159__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_apb_fifo_async.r_clk)", 
                                                             "tb/tb_apb_fifo_async.sv", 
                                                             203);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_apb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_apb_fifo_async__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    while (VL_GTS_III(32, 8U, vlSelfRef.tb_apb_fifo_async__DOT__read_ok_count)) {
        co_await vlSelfRef.__VtrigSched_h5a42c159__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_apb_fifo_async.r_clk)", 
                                                             "tb/tb_apb_fifo_async.sv", 
                                                             207);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_apb_fifo_async__DOT__r_en_in = 
            (1U & (~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo)));
        co_await vlSelfRef.__VtrigSched_h5a42c159__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_apb_fifo_async.r_clk)", 
                                                             "tb/tb_apb_fifo_async.sv", 
                                                             211);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_apb_fifo_async__DOT__r_en_in = 0U;
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_apb_fifo_async__DOT__exp_q.size())))) {
        VL_WRITEF_NX("ERROR: Scoreboard not empty at end. remaining=%0d\n[%0t] %%Fatal: tb_apb_fifo_async.sv:218: Assertion failed in %Ntb_apb_fifo_async\n",0,
                     32,vlSelfRef.tb_apb_fifo_async__DOT__exp_q.size(),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_apb_fifo_async.sv", 218, "", false);
    }
    __Vtask_tb_apb_fifo_async__DOT__apb_read__3__addr = 4U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PADDR = __Vtask_tb_apb_fifo_async__DOT__apb_read__3__addr;
    vlSelfRef.tb_apb_fifo_async__DOT__PWRITE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_hc57c9dbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_apb_fifo_async.PCLK)", 
                                                         "tb/tb_apb_fifo_async.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_apb_fifo_async__DOT__apb_read__3__data 
        = vlSelfRef.tb_apb_fifo_async__DOT__PRDATA;
    vlSelfRef.tb_apb_fifo_async__DOT__PSEL = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PENABLE = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__PADDR = 0U;
    vlSelfRef.tb_apb_fifo_async__DOT__st = __Vtask_tb_apb_fifo_async__DOT__apb_read__3__data;
    VL_WRITEF_NX("FINAL STATUS: 0x%08x (EMPTY=%0b FULL=%0b OVF=%0b)\n",0,
                 32,vlSelfRef.tb_apb_fifo_async__DOT__st,
                 1,(1U & vlSelfRef.tb_apb_fifo_async__DOT__st),
                 1,(1U & (vlSelfRef.tb_apb_fifo_async__DOT__st 
                          >> 1U)),1,(1U & (vlSelfRef.tb_apb_fifo_async__DOT__st 
                                           >> 2U)));
    if (VL_UNLIKELY(((1U & (~ vlSelfRef.tb_apb_fifo_async__DOT__st))))) {
        VL_WRITEF_NX("ERROR: Expected EMPTY=1 at end\n[%0t] %%Fatal: tb_apb_fifo_async.sv:227: Assertion failed in %Ntb_apb_fifo_async\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_apb_fifo_async.sv", 227, "", false);
    }
    VL_WRITEF_NX("PASS \342\234\205  Wrote 8 bytes via APB and read them back in-order across CDC.\n",0);
    VL_FINISH_MT("tb/tb_apb_fifo_async.sv", 231, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;}

VlCoroutine Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__1(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001b58ULL, 
                                             nullptr, 
                                             "tb/tb_apb_fifo_async.sv", 
                                             61);
        vlSelfRef.tb_apb_fifo_async__DOT__r_clk = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__r_clk)));
    }
    co_return;}

VlCoroutine Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__2(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_apb_fifo_async.sv", 
                                             60);
        vlSelfRef.tb_apb_fifo_async__DOT__PCLK = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PCLK)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_apb_fifo_async___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_apb_fifo_async___024root___eval_triggers__act(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_triggers__act\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 3U) 
                                                        | (((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2__0)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo__0)) 
                                                           << 1U) 
                                                          | ((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async__0)))) 
                                                      << 4U) 
                                                     | (((((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PRESETn)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PRESETn__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb_apb_fifo_async__DOT__PCLK) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__PCLK__0))) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_rst_n_in__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__r_clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_apb_fifo_async__DOT__r_clk__0))))))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_apb_fifo_async___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_apb_fifo_async___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___trigger_anySet__act\n"); );
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

void Vtb_apb_fifo_async___024root___act_comb__TOP__0(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___act_comb__TOP__0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b = 0;
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b = 0;
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async 
        = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__PRESETn) 
           & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in));
    vlSelfRef.tb_apb_fifo_async__DOT__PRDATA = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE)))) {
        vlSelfRef.tb_apb_fifo_async__DOT__PRDATA = 
            ((0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))
              ? ((0xfffffffeU & vlSelfRef.tb_apb_fifo_async__DOT__PRDATA) 
                 | (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en))
              : ((4U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))
                  ? ((0xfffffff8U & vlSelfRef.tb_apb_fifo_async__DOT__PRDATA) 
                     | (((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky) 
                         << 2U) | (((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo) 
                                    << 1U) | (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo))))
                  : 0U));
        if ((1U & (~ VL_ONEHOT_I((((4U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR)) 
                                   << 1U) | (0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))))))) {
            if ((0U != (((4U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR)) 
                         << 1U) | (0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: apb_fifo_async.sv:178: Assertion failed in %Ntb_apb_fifo_async.dut: unique case, but multiple matches found for '8'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR));
                    VL_STOP_MT("rtl/apb_fifo_async.sv", 178, "");
                }
            }
        }
    }
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc 
        = ((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo)) 
           & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__r_en_in));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access 
        = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__PENABLE) 
           & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PSEL));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin) 
                          + (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc)));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr 
        = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access) 
           & ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE) 
              & (8U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))));
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b), 1U) 
                          ^ (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b)));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next 
        = __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout;
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc 
        = (((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo)) 
            & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr)) 
           & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin) 
                          + (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc)));
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b), 1U) 
                          ^ (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b)));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next 
        = __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout;
}

void Vtb_apb_fifo_async___024root___eval_act(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_act\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_apb_fifo_async___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__0(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo) {
        if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc) {
            vlSelfRef.__VdlyVal__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_apb_fifo_async__DOT__PWDATA);
            vlSelfRef.__VdlyDim0__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0 
                = (7U & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin));
            vlSelfRef.__VdlySet__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0 = 1U;
        }
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next;
    } else {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin = 0U;
    }
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__1(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__1\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in) {
        if (vlSelfRef.tb_apb_fifo_async__DOT__r_fire_d) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo) 
                              != (IData)(vlSelfRef.tb_apb_fifo_async__DOT__exp_front_d))))) {
                VL_WRITEF_NX("ERROR: Data mismatch at t=%0t got=0x%0x exp=0x%0x\n[%0t] %%Fatal: tb_apb_fifo_async.sv:145: Assertion failed in %Ntb_apb_fifo_async\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo),
                             8,vlSelfRef.tb_apb_fifo_async__DOT__exp_front_d,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_apb_fifo_async.sv", 145, "", false);
            } else {
                VL_WRITEF_NX("OK: READ t=%0t data=0x%0x (remaining=%0d empty=%0b full=%0b)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo),
                             32,vlSelfRef.tb_apb_fifo_async__DOT__exp_q.size(),
                             1,vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo,
                             1,(IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo));
                vlSelfRef.tb_apb_fifo_async__DOT__read_ok_count 
                    = ((IData)(1U) + vlSelfRef.tb_apb_fifo_async__DOT__read_ok_count);
            }
        }
    } else {
        vlSelfRef.tb_apb_fifo_async__DOT__read_ok_count = 0U;
    }
    if (vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in) {
        vlSelfRef.tb_apb_fifo_async__DOT__r_fire_d 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc;
        if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc) {
            if (VL_UNLIKELY(((0U == vlSelfRef.tb_apb_fifo_async__DOT__exp_q.size())))) {
                VL_WRITEF_NX("ERROR: Read fired but scoreboard empty at t=%0t\n[%0t] %%Fatal: tb_apb_fifo_async.sv:129: Assertion failed in %Ntb_apb_fifo_async\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_apb_fifo_async.sv", 129, "", false);
            }
            vlSelfRef.tb_apb_fifo_async__DOT__exp_front_d 
                = vlSelfRef.tb_apb_fifo_async__DOT__exp_q.pop_front();
        }
    } else {
        vlSelfRef.tb_apb_fifo_async__DOT__r_fire_d = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__exp_front_d = 0U;
    }
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__2(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__2\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_apb_fifo_async__DOT__PRESETn) {
        if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse) {
            vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky = 0U;
        } else if ((((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr) 
                     & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en)) 
                    & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo))) {
            vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky = 1U;
        }
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse = 0U;
        if ((((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access) 
              & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE)) 
             & (0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR)))) {
            if ((4U & vlSelfRef.tb_apb_fifo_async__DOT__PWDATA)) {
                vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse = 1U;
            }
            vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en 
                = (1U & vlSelfRef.tb_apb_fifo_async__DOT__PWDATA);
        }
    } else {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en = 0U;
    }
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__3(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__3\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo 
        = (1U & ((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2)) 
                 | ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next) 
                    == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r))));
    if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2) {
        if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc) {
            vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo 
                = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem
                [(7U & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin))];
        }
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_wptr_to_r__DOT__q1;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_wptr_to_r__DOT__q1 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray;
    } else {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_wptr_to_r__DOT__q1 = 0U;
    }
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__4(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__4\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0) {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[vlSelfRef.__VdlyDim0__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem__v0;
    }
    if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo) {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo 
            = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next) 
               == ((0x0000000cU & ((~ ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w) 
                                       >> 2U)) << 2U)) 
                   | (3U & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w))));
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_rptr_to_w__DOT__q1;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_rptr_to_w__DOT__q1 
            = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray;
    } else {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_rptr_to_w__DOT__q1 = 0U;
    }
}

void Vtb_apb_fifo_async___024root___nba_comb__TOP__0(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_comb__TOP__0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc 
        = ((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo)) 
           & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__r_en_in));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin) 
                          + (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc)));
}

void Vtb_apb_fifo_async___024root___nba_comb__TOP__1(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_comb__TOP__1\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__PRDATA = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE)))) {
        vlSelfRef.tb_apb_fifo_async__DOT__PRDATA = 
            ((0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))
              ? ((0xfffffffeU & vlSelfRef.tb_apb_fifo_async__DOT__PRDATA) 
                 | (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en))
              : ((4U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))
                  ? ((0xfffffff8U & vlSelfRef.tb_apb_fifo_async__DOT__PRDATA) 
                     | (((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky) 
                         << 2U) | (((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo) 
                                    << 1U) | (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo))))
                  : 0U));
        if ((1U & (~ VL_ONEHOT_I((((4U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR)) 
                                   << 1U) | (0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))))))) {
            if ((0U != (((4U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR)) 
                         << 1U) | (0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: apb_fifo_async.sv:178: Assertion failed in %Ntb_apb_fifo_async.dut: unique case, but multiple matches found for '8'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR));
                    VL_STOP_MT("rtl/apb_fifo_async.sv", 178, "");
                }
            }
        }
    }
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__5(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__5\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray 
        = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2)
            ? (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next)
            : 0U);
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__6(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__6\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_apb_fifo_async__DOT__PRESETn) {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo = 1U;
        if (vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse) {
            vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo = 0U;
        }
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse = 0U;
        if ((((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access) 
              & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE)) 
             & (0U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR)))) {
            if ((2U & vlSelfRef.tb_apb_fifo_async__DOT__PWDATA)) {
                vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse = 1U;
            }
        }
    } else {
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo = 0U;
        vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse = 0U;
    }
}

void Vtb_apb_fifo_async___024root___nba_comb__TOP__2(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_comb__TOP__2\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b = 0;
    // Body
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b), 1U) 
                          ^ (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__b)));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next 
        = __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__5__Vfuncout;
}

void Vtb_apb_fifo_async___024root___nba_sequent__TOP__7(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_sequent__TOP__7\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2 
        = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async) 
           && (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff1));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff1 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async;
}

void Vtb_apb_fifo_async___024root___nba_comb__TOP__3(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_comb__TOP__3\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access 
        = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__PENABLE) 
           & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PSEL));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr 
        = ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access) 
           & ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE) 
              & (8U == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__PADDR))));
}

void Vtb_apb_fifo_async___024root___nba_comb__TOP__4(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___nba_comb__TOP__4\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b = 0;
    // Body
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc 
        = (((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo)) 
            & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr)) 
           & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin) 
                          + (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc)));
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b 
        = vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next;
    __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout 
        = (0x0000000fU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b), 1U) 
                          ^ (IData)(__Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__b)));
    vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next 
        = __Vfunc_tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__bin2gray__4__Vfuncout;
}

void Vtb_apb_fifo_async___024root___eval_nba(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_nba\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000024ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000000041ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000000024ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x0000000000000045ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000006dULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000000041ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000045ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_apb_fifo_async___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x000000000000002dULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_apb_fifo_async___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vtb_apb_fifo_async___024root___timing_commit(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___timing_commit\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hc57c9dbd__0.commit(
                                                   "@(posedge tb_apb_fifo_async.PCLK)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h5a42c159__0.commit(
                                                   "@(posedge tb_apb_fifo_async.r_clk)");
    }
}

void Vtb_apb_fifo_async___024root___timing_resume(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___timing_resume\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc57c9dbd__0.resume(
                                                   "@(posedge tb_apb_fifo_async.PCLK)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5a42c159__0.resume(
                                                   "@(posedge tb_apb_fifo_async.r_clk)");
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_apb_fifo_async___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_apb_fifo_async___024root___eval_phase__act(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_phase__act\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_apb_fifo_async___024root___eval_triggers__act(vlSelf);
    Vtb_apb_fifo_async___024root___timing_commit(vlSelf);
    Vtb_apb_fifo_async___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_apb_fifo_async___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_apb_fifo_async___024root___timing_resume(vlSelf);
        Vtb_apb_fifo_async___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_apb_fifo_async___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_apb_fifo_async___024root___eval_phase__nba(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_phase__nba\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_apb_fifo_async___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_apb_fifo_async___024root___eval_nba(vlSelf);
        Vtb_apb_fifo_async___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_apb_fifo_async___024root___eval(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_apb_fifo_async___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_apb_fifo_async.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_apb_fifo_async___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_apb_fifo_async.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_apb_fifo_async___024root___eval_phase__act(vlSelf));
    } while (Vtb_apb_fifo_async___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_apb_fifo_async___024root___eval_debug_assertions(Vtb_apb_fifo_async___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root___eval_debug_assertions\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
