// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_apb_fifo_async__Syms.h"


void Vtb_apb_fifo_async___024root__trace_chg_0_sub_0(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_apb_fifo_async___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_chg_0\n"); );
    // Body
    Vtb_apb_fifo_async___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_apb_fifo_async___024root*>(voidSelf);
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_apb_fifo_async___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_apb_fifo_async___024root__trace_chg_0_sub_0(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_chg_0_sub_0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_apb_fifo_async__DOT__PRESETn));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_apb_fifo_async__DOT__PSEL));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_apb_fifo_async__DOT__PENABLE));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE));
        bufp->chgCData(oldp+5,(vlSelfRef.tb_apb_fifo_async__DOT__PADDR),8);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_apb_fifo_async__DOT__PWDATA),32);
        bufp->chgBit(oldp+7,(vlSelfRef.tb_apb_fifo_async__DOT__r_en_in));
        bufp->chgIData(oldp+8,(vlSelfRef.tb_apb_fifo_async__DOT__st),32);
        bufp->chgCData(oldp+9,((0x000000ffU & vlSelfRef.tb_apb_fifo_async__DOT__PWDATA)),8);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+12,(vlSelfRef.tb_apb_fifo_async__DOT__r_fire_d));
        bufp->chgCData(oldp+13,(vlSelfRef.tb_apb_fifo_async__DOT__exp_front_d),8);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_apb_fifo_async__DOT__read_ok_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+15,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky));
        bufp->chgBit(oldp+17,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+18,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo),8);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo));
        bufp->chgCData(oldp+20,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin),4);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r),4);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_wptr_to_r__DOT__q1),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+23,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo));
        bufp->chgCData(oldp+24,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[3]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[4]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[5]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[6]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[7]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray),4);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w),4);
        bufp->chgCData(oldp+34,(((0x0000000cU & ((~ 
                                                  ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                 | (3U & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w)))),4);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_rptr_to_w__DOT__q1),4);
    }
    bufp->chgBit(oldp+36,(vlSelfRef.tb_apb_fifo_async__DOT__PCLK));
    bufp->chgBit(oldp+37,(vlSelfRef.tb_apb_fifo_async__DOT__r_clk));
    bufp->chgIData(oldp+38,(vlSelfRef.tb_apb_fifo_async__DOT__PRDATA),32);
    bufp->chgBit(oldp+39,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc));
    bufp->chgBit(oldp+40,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access));
    bufp->chgBit(oldp+41,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse));
    bufp->chgBit(oldp+42,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr));
    bufp->chgBit(oldp+43,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo));
    bufp->chgBit(oldp+44,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2));
    bufp->chgBit(oldp+45,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async));
    bufp->chgBit(oldp+46,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff1));
    bufp->chgBit(oldp+47,(((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr) 
                           & ((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo)) 
                              & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en)))));
    bufp->chgCData(oldp+48,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin),4);
    bufp->chgCData(oldp+49,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next),4);
    bufp->chgCData(oldp+50,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next),4);
    bufp->chgCData(oldp+51,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next),4);
    bufp->chgCData(oldp+52,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray),4);
    bufp->chgCData(oldp+53,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next),4);
    bufp->chgBit(oldp+54,(((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next) 
                           == ((0x0000000cU & ((~ ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w) 
                                                   >> 2U)) 
                                               << 2U)) 
                               | (3U & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w))))));
    bufp->chgBit(oldp+55,(((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next) 
                           == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r))));
    bufp->chgBit(oldp+56,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc));
}

void Vtb_apb_fifo_async___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_cleanup\n"); );
    // Body
    Vtb_apb_fifo_async___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_apb_fifo_async___024root*>(voidSelf);
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
