// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmem_stage_pip__Syms.h"


void Vmem_stage_pip___024root__trace_chg_0_sub_0(Vmem_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmem_stage_pip___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_chg_0\n"); );
    // Init
    Vmem_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem_stage_pip___024root*>(voidSelf);
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmem_stage_pip___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmem_stage_pip___024root__trace_chg_0_sub_0(Vmem_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_chg_0_sub_0\n"); );
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgIData(oldp+2,(vlSelfRef.pc_in),32);
    bufp->chgIData(oldp+3,(vlSelfRef.alu_result_in),32);
    bufp->chgIData(oldp+4,(vlSelfRef.rs2_data_in),32);
    bufp->chgCData(oldp+5,(vlSelfRef.funct3_in),3);
    bufp->chgCData(oldp+6,(vlSelfRef.rd_in),5);
    bufp->chgCData(oldp+7,(vlSelfRef.wb_sel_in),2);
    bufp->chgBit(oldp+8,(vlSelfRef.mem_read_in));
    bufp->chgBit(oldp+9,(vlSelfRef.mem_write_in));
    bufp->chgBit(oldp+10,(vlSelfRef.reg_write_in));
    bufp->chgBit(oldp+11,(vlSelfRef.mem_to_reg_in));
    bufp->chgIData(oldp+12,(vlSelfRef.pc_out),32);
    bufp->chgIData(oldp+13,(vlSelfRef.alu_result_out),32);
    bufp->chgIData(oldp+14,(vlSelfRef.mem_data_out),32);
    bufp->chgCData(oldp+15,(vlSelfRef.rd_out),5);
    bufp->chgCData(oldp+16,(vlSelfRef.wb_sel_out),2);
    bufp->chgBit(oldp+17,(vlSelfRef.reg_write_out));
    bufp->chgBit(oldp+18,(vlSelfRef.mem_to_reg_out));
    bufp->chgBit(oldp+19,(vlSelfRef.mem_stage_pip__DOT__clk));
    bufp->chgBit(oldp+20,(vlSelfRef.mem_stage_pip__DOT__rst));
    bufp->chgIData(oldp+21,(vlSelfRef.mem_stage_pip__DOT__pc_in),32);
    bufp->chgIData(oldp+22,(vlSelfRef.mem_stage_pip__DOT__alu_result_in),32);
    bufp->chgIData(oldp+23,(vlSelfRef.mem_stage_pip__DOT__rs2_data_in),32);
    bufp->chgCData(oldp+24,(vlSelfRef.mem_stage_pip__DOT__funct3_in),3);
    bufp->chgCData(oldp+25,(vlSelfRef.mem_stage_pip__DOT__rd_in),5);
    bufp->chgCData(oldp+26,(vlSelfRef.mem_stage_pip__DOT__wb_sel_in),2);
    bufp->chgBit(oldp+27,(vlSelfRef.mem_stage_pip__DOT__mem_read_in));
    bufp->chgBit(oldp+28,(vlSelfRef.mem_stage_pip__DOT__mem_write_in));
    bufp->chgBit(oldp+29,(vlSelfRef.mem_stage_pip__DOT__reg_write_in));
    bufp->chgBit(oldp+30,(vlSelfRef.mem_stage_pip__DOT__mem_to_reg_in));
    bufp->chgIData(oldp+31,(vlSelfRef.mem_stage_pip__DOT__pc_out),32);
    bufp->chgIData(oldp+32,(vlSelfRef.mem_stage_pip__DOT__alu_result_out),32);
    bufp->chgIData(oldp+33,(vlSelfRef.mem_stage_pip__DOT__mem_data_out),32);
    bufp->chgCData(oldp+34,(vlSelfRef.mem_stage_pip__DOT__rd_out),5);
    bufp->chgCData(oldp+35,(vlSelfRef.mem_stage_pip__DOT__wb_sel_out),2);
    bufp->chgBit(oldp+36,(vlSelfRef.mem_stage_pip__DOT__reg_write_out));
    bufp->chgBit(oldp+37,(vlSelfRef.mem_stage_pip__DOT__mem_to_reg_out));
    bufp->chgCData(oldp+38,(vlSelfRef.mem_stage_pip__DOT__addr_lsb),2);
    bufp->chgCData(oldp+39,(vlSelfRef.mem_stage_pip__DOT__byte_enable),4);
    bufp->chgIData(oldp+40,(vlSelfRef.mem_stage_pip__DOT__mem_data),32);
    bufp->chgIData(oldp+41,(vlSelfRef.mem_stage_pip__DOT__read_data),32);
    bufp->chgCData(oldp+42,(vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__funct3),3);
    bufp->chgCData(oldp+43,(vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__addr_lsb),2);
    bufp->chgCData(oldp+44,(vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__byte_enable),4);
    bufp->chgIData(oldp+45,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_data),32);
    bufp->chgCData(oldp+46,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__addr_lsb),2);
    bufp->chgCData(oldp+47,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__funct3),3);
    bufp->chgIData(oldp+48,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_out),32);
    bufp->chgBit(oldp+49,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__clk));
    bufp->chgIData(oldp+50,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__addr),32);
    bufp->chgIData(oldp+51,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__write_data),32);
    bufp->chgCData(oldp+52,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__byte_enable),4);
    bufp->chgBit(oldp+53,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem_write));
    bufp->chgBit(oldp+54,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem_read));
    bufp->chgIData(oldp+55,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__read_data),32);
    bufp->chgBit(oldp+56,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__clk));
    bufp->chgBit(oldp+57,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rst));
    bufp->chgBit(oldp+58,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_in));
    bufp->chgBit(oldp+59,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_in));
    bufp->chgCData(oldp+60,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__wb_sel_in),2);
    bufp->chgIData(oldp+61,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__pc_in),32);
    bufp->chgIData(oldp+62,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_in),32);
    bufp->chgIData(oldp+63,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_in),32);
    bufp->chgCData(oldp+64,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_in),5);
    bufp->chgIData(oldp+65,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__pc_out),32);
    bufp->chgIData(oldp+66,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out),32);
    bufp->chgIData(oldp+67,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out),32);
    bufp->chgCData(oldp+68,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out),5);
    bufp->chgCData(oldp+69,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__wb_sel_out),2);
    bufp->chgBit(oldp+70,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out));
    bufp->chgBit(oldp+71,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out));
}

void Vmem_stage_pip___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_cleanup\n"); );
    // Init
    Vmem_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem_stage_pip___024root*>(voidSelf);
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
