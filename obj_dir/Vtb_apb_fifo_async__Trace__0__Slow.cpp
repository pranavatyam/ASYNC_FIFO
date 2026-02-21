// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_apb_fifo_async__Syms.h"


VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_init_sub__TOP__0(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_init_sub__TOP__0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_apb_fifo_async", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+58,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+37,0,"PCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"PRESETn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"r_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"r_rst_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"PSEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"PENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"PWRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"PADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"PWDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"PRDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"PREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"PSLVERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"r_en_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"r_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"empty_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"full_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"r_fire_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"exp_front_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, false,-1, 7,0);
    tracep->declBus(c+15,0,"read_ok_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+58,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+37,0,"PCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"PRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"PSEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"PENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"PWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"PADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"PWDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"PRDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"PREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"PSLVERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"r_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"r_rst_n_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"r_en_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"r_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"empty_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"full_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"ADDR_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"ADDR_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"ADDR_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+41,0,"apb_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ovf_sticky",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"soft_reset_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"clr_flags_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"wdata_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_rst_n_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"r_rst_n_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"r_rst_n_async",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"r_rst_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"r_rst_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"w_en_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"w_data_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"full_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"r_en_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"r_data_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"empty_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"apb_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+58,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+37,0,"w_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"r_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"r_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+65,0,"PW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+49,0,"w_bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"w_bin_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"w_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"w_gray_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"r_bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"r_bin_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"r_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"r_gray_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"r_gray_sync_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"w_gray_sync_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"full_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"empty_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"w_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"r_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"w_gray_full_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("u_sync_rptr_to_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_sync_wptr_to_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_init_top(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_init_top\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_apb_fifo_async___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_apb_fifo_async___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_apb_fifo_async___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_register(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_register\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_apb_fifo_async___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_apb_fifo_async___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_apb_fifo_async___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_apb_fifo_async___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_const_0_sub_0(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_const_0\n"); );
    // Body
    Vtb_apb_fifo_async___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_apb_fifo_async___024root*>(voidSelf);
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_apb_fifo_async___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_const_0_sub_0(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_const_0_sub_0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+58,(8U),32);
    bufp->fullBit(oldp+59,(1U));
    bufp->fullBit(oldp+60,(0U));
    bufp->fullCData(oldp+61,(0U),8);
    bufp->fullCData(oldp+62,(4U),8);
    bufp->fullCData(oldp+63,(8U),8);
    bufp->fullIData(oldp+64,(3U),32);
    bufp->fullIData(oldp+65,(4U),32);
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_full_0_sub_0(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_full_0\n"); );
    // Body
    Vtb_apb_fifo_async___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_apb_fifo_async___024root*>(voidSelf);
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_apb_fifo_async___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_apb_fifo_async___024root__trace_full_0_sub_0(Vtb_apb_fifo_async___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_apb_fifo_async___024root__trace_full_0_sub_0\n"); );
    Vtb_apb_fifo_async__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.tb_apb_fifo_async__DOT__PRESETn));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_apb_fifo_async__DOT__r_rst_n_in));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_apb_fifo_async__DOT__PSEL));
    bufp->fullBit(oldp+4,(vlSelfRef.tb_apb_fifo_async__DOT__PENABLE));
    bufp->fullBit(oldp+5,(vlSelfRef.tb_apb_fifo_async__DOT__PWRITE));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_apb_fifo_async__DOT__PADDR),8);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_apb_fifo_async__DOT__PWDATA),32);
    bufp->fullBit(oldp+8,(vlSelfRef.tb_apb_fifo_async__DOT__r_en_in));
    bufp->fullIData(oldp+9,(vlSelfRef.tb_apb_fifo_async__DOT__st),32);
    bufp->fullCData(oldp+10,((0x000000ffU & vlSelfRef.tb_apb_fifo_async__DOT__PWDATA)),8);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_apb_fifo_async__DOT__unnamedblk1__DOT__unnamedblk2__DOT__val),8);
    bufp->fullBit(oldp+13,(vlSelfRef.tb_apb_fifo_async__DOT__r_fire_d));
    bufp->fullCData(oldp+14,(vlSelfRef.tb_apb_fifo_async__DOT__exp_front_d),8);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_apb_fifo_async__DOT__read_ok_count),32);
    bufp->fullBit(oldp+16,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en));
    bufp->fullBit(oldp+17,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__ovf_sticky));
    bufp->fullBit(oldp+18,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__clr_flags_pulse));
    bufp->fullCData(oldp+19,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_data_fifo),8);
    bufp->fullBit(oldp+20,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__empty_fifo));
    bufp->fullCData(oldp+21,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin),4);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r),4);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_wptr_to_r__DOT__q1),4);
    bufp->fullBit(oldp+24,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo));
    bufp->fullCData(oldp+25,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[0]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[1]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[2]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[3]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[4]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[5]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[6]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__mem[7]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray),4);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w),4);
    bufp->fullCData(oldp+35,(((0x0000000cU & ((~ ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w) 
                                                  >> 2U)) 
                                              << 2U)) 
                              | (3U & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w)))),4);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__u_sync_rptr_to_w__DOT__q1),4);
    bufp->fullBit(oldp+37,(vlSelfRef.tb_apb_fifo_async__DOT__PCLK));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_apb_fifo_async__DOT__r_clk));
    bufp->fullIData(oldp+39,(vlSelfRef.tb_apb_fifo_async__DOT__PRDATA),32);
    bufp->fullBit(oldp+40,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_inc));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__apb_access));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__soft_reset_pulse));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__w_rst_n_fifo));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff2));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_n_async));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__r_rst_ff1));
    bufp->fullBit(oldp+48,(((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__wdata_wr) 
                            & ((~ (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__full_fifo)) 
                               & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__en)))));
    bufp->fullCData(oldp+49,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin),4);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_bin_next),4);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next),4);
    bufp->fullCData(oldp+52,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_bin_next),4);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray),4);
    bufp->fullCData(oldp+54,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next),4);
    bufp->fullBit(oldp+55,(((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_next) 
                            == ((0x0000000cU & ((~ 
                                                 ((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w) 
                                                  >> 2U)) 
                                                << 2U)) 
                                | (3U & (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_sync_w))))));
    bufp->fullBit(oldp+56,(((IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__r_gray_next) 
                            == (IData)(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_gray_sync_r))));
    bufp->fullBit(oldp+57,(vlSelfRef.tb_apb_fifo_async__DOT__dut__DOT__u_fifo__DOT__w_inc));
}
