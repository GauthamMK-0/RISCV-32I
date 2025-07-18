// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vex_stage_pip__Syms.h"


void Vex_stage_pip___024root__trace_chg_0_sub_0(Vex_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vex_stage_pip___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root__trace_chg_0\n"); );
    // Init
    Vex_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vex_stage_pip___024root*>(voidSelf);
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vex_stage_pip___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vex_stage_pip___024root__trace_chg_0_sub_0(Vex_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root__trace_chg_0_sub_0\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgIData(oldp+2,(vlSelfRef.pc_in),32);
    bufp->chgIData(oldp+3,(vlSelfRef.rs1_data_in),32);
    bufp->chgIData(oldp+4,(vlSelfRef.rs2_data_in),32);
    bufp->chgCData(oldp+5,(vlSelfRef.funct3_in),3);
    bufp->chgIData(oldp+6,(vlSelfRef.imm_in),32);
    bufp->chgCData(oldp+7,(vlSelfRef.rs1_in),5);
    bufp->chgCData(oldp+8,(vlSelfRef.rs2_in),5);
    bufp->chgCData(oldp+9,(vlSelfRef.rd_in),5);
    bufp->chgCData(oldp+10,(vlSelfRef.alu_ctrl_in),4);
    bufp->chgCData(oldp+11,(vlSelfRef.branch_ctrl_in),3);
    bufp->chgCData(oldp+12,(vlSelfRef.wb_sel_in),2);
    bufp->chgBit(oldp+13,(vlSelfRef.reg_write_in));
    bufp->chgBit(oldp+14,(vlSelfRef.mem_read_in));
    bufp->chgBit(oldp+15,(vlSelfRef.mem_write_in));
    bufp->chgBit(oldp+16,(vlSelfRef.mem_to_reg_in));
    bufp->chgBit(oldp+17,(vlSelfRef.alu_src_in));
    bufp->chgBit(oldp+18,(vlSelfRef.branch_in));
    bufp->chgBit(oldp+19,(vlSelfRef.jal_in));
    bufp->chgBit(oldp+20,(vlSelfRef.jalr_in));
    bufp->chgCData(oldp+21,(vlSelfRef.forward_rs1),2);
    bufp->chgCData(oldp+22,(vlSelfRef.forward_rs2),2);
    bufp->chgIData(oldp+23,(vlSelfRef.forward_data_mem),32);
    bufp->chgIData(oldp+24,(vlSelfRef.forward_data_wb),32);
    bufp->chgIData(oldp+25,(vlSelfRef.pc_out),32);
    bufp->chgCData(oldp+26,(vlSelfRef.funct3_out),3);
    bufp->chgIData(oldp+27,(vlSelfRef.alu_result_out),32);
    bufp->chgIData(oldp+28,(vlSelfRef.rs2_data_out),32);
    bufp->chgCData(oldp+29,(vlSelfRef.rd_out),5);
    bufp->chgCData(oldp+30,(vlSelfRef.rs1_out),5);
    bufp->chgCData(oldp+31,(vlSelfRef.rs2_out),5);
    bufp->chgIData(oldp+32,(vlSelfRef.branch_target_out),32);
    bufp->chgIData(oldp+33,(vlSelfRef.jump_target_out),32);
    bufp->chgCData(oldp+34,(vlSelfRef.wb_sel_out),2);
    bufp->chgBit(oldp+35,(vlSelfRef.mem_read_out));
    bufp->chgBit(oldp+36,(vlSelfRef.mem_write_out));
    bufp->chgBit(oldp+37,(vlSelfRef.reg_write_out));
    bufp->chgBit(oldp+38,(vlSelfRef.mem_to_reg_out));
    bufp->chgBit(oldp+39,(vlSelfRef.branch_taken_out));
    bufp->chgBit(oldp+40,(vlSelfRef.jump_out));
    bufp->chgIData(oldp+41,(vlSelfRef.alu_a_debug),32);
    bufp->chgIData(oldp+42,(vlSelfRef.alu_b_debug),32);
    bufp->chgCData(oldp+43,(vlSelfRef.alu_ctrl_debug),4);
    bufp->chgBit(oldp+44,(vlSelfRef.ex_stage_pip__DOT__clk));
    bufp->chgBit(oldp+45,(vlSelfRef.ex_stage_pip__DOT__rst));
    bufp->chgIData(oldp+46,(vlSelfRef.ex_stage_pip__DOT__pc_in),32);
    bufp->chgIData(oldp+47,(vlSelfRef.ex_stage_pip__DOT__rs1_data_in),32);
    bufp->chgIData(oldp+48,(vlSelfRef.ex_stage_pip__DOT__rs2_data_in),32);
    bufp->chgCData(oldp+49,(vlSelfRef.ex_stage_pip__DOT__funct3_in),3);
    bufp->chgIData(oldp+50,(vlSelfRef.ex_stage_pip__DOT__imm_in),32);
    bufp->chgCData(oldp+51,(vlSelfRef.ex_stage_pip__DOT__rs1_in),5);
    bufp->chgCData(oldp+52,(vlSelfRef.ex_stage_pip__DOT__rs2_in),5);
    bufp->chgCData(oldp+53,(vlSelfRef.ex_stage_pip__DOT__rd_in),5);
    bufp->chgCData(oldp+54,(vlSelfRef.ex_stage_pip__DOT__alu_ctrl_in),4);
    bufp->chgCData(oldp+55,(vlSelfRef.ex_stage_pip__DOT__branch_ctrl_in),3);
    bufp->chgCData(oldp+56,(vlSelfRef.ex_stage_pip__DOT__wb_sel_in),2);
    bufp->chgBit(oldp+57,(vlSelfRef.ex_stage_pip__DOT__reg_write_in));
    bufp->chgBit(oldp+58,(vlSelfRef.ex_stage_pip__DOT__mem_read_in));
    bufp->chgBit(oldp+59,(vlSelfRef.ex_stage_pip__DOT__mem_write_in));
    bufp->chgBit(oldp+60,(vlSelfRef.ex_stage_pip__DOT__mem_to_reg_in));
    bufp->chgBit(oldp+61,(vlSelfRef.ex_stage_pip__DOT__alu_src_in));
    bufp->chgBit(oldp+62,(vlSelfRef.ex_stage_pip__DOT__branch_in));
    bufp->chgBit(oldp+63,(vlSelfRef.ex_stage_pip__DOT__jal_in));
    bufp->chgBit(oldp+64,(vlSelfRef.ex_stage_pip__DOT__jalr_in));
    bufp->chgCData(oldp+65,(vlSelfRef.ex_stage_pip__DOT__forward_rs1),2);
    bufp->chgCData(oldp+66,(vlSelfRef.ex_stage_pip__DOT__forward_rs2),2);
    bufp->chgIData(oldp+67,(vlSelfRef.ex_stage_pip__DOT__forward_data_mem),32);
    bufp->chgIData(oldp+68,(vlSelfRef.ex_stage_pip__DOT__forward_data_wb),32);
    bufp->chgIData(oldp+69,(vlSelfRef.ex_stage_pip__DOT__pc_out),32);
    bufp->chgCData(oldp+70,(vlSelfRef.ex_stage_pip__DOT__funct3_out),3);
    bufp->chgIData(oldp+71,(vlSelfRef.ex_stage_pip__DOT__alu_result_out),32);
    bufp->chgIData(oldp+72,(vlSelfRef.ex_stage_pip__DOT__rs2_data_out),32);
    bufp->chgCData(oldp+73,(vlSelfRef.ex_stage_pip__DOT__rd_out),5);
    bufp->chgCData(oldp+74,(vlSelfRef.ex_stage_pip__DOT__rs1_out),5);
    bufp->chgCData(oldp+75,(vlSelfRef.ex_stage_pip__DOT__rs2_out),5);
    bufp->chgIData(oldp+76,(vlSelfRef.ex_stage_pip__DOT__branch_target_out),32);
    bufp->chgIData(oldp+77,(vlSelfRef.ex_stage_pip__DOT__jump_target_out),32);
    bufp->chgCData(oldp+78,(vlSelfRef.ex_stage_pip__DOT__wb_sel_out),2);
    bufp->chgBit(oldp+79,(vlSelfRef.ex_stage_pip__DOT__mem_read_out));
    bufp->chgBit(oldp+80,(vlSelfRef.ex_stage_pip__DOT__mem_write_out));
    bufp->chgBit(oldp+81,(vlSelfRef.ex_stage_pip__DOT__reg_write_out));
    bufp->chgBit(oldp+82,(vlSelfRef.ex_stage_pip__DOT__mem_to_reg_out));
    bufp->chgBit(oldp+83,(vlSelfRef.ex_stage_pip__DOT__branch_taken_out));
    bufp->chgBit(oldp+84,(vlSelfRef.ex_stage_pip__DOT__jump_out));
    bufp->chgIData(oldp+85,(vlSelfRef.ex_stage_pip__DOT__alu_a_debug),32);
    bufp->chgIData(oldp+86,(vlSelfRef.ex_stage_pip__DOT__alu_b_debug),32);
    bufp->chgCData(oldp+87,(vlSelfRef.ex_stage_pip__DOT__alu_ctrl_debug),4);
    bufp->chgIData(oldp+88,(vlSelfRef.ex_stage_pip__DOT__rs1_data),32);
    bufp->chgIData(oldp+89,(vlSelfRef.ex_stage_pip__DOT__rs2_data),32);
    bufp->chgIData(oldp+90,(vlSelfRef.ex_stage_pip__DOT__alu_A),32);
    bufp->chgIData(oldp+91,(vlSelfRef.ex_stage_pip__DOT__alu_B),32);
    bufp->chgIData(oldp+92,(vlSelfRef.ex_stage_pip__DOT__alu_result),32);
    bufp->chgBit(oldp+93,(vlSelfRef.ex_stage_pip__DOT__zero_flag));
    bufp->chgBit(oldp+94,(vlSelfRef.ex_stage_pip__DOT__branch_taken));
    bufp->chgIData(oldp+95,(vlSelfRef.ex_stage_pip__DOT__branch_target),32);
    bufp->chgBit(oldp+96,(vlSelfRef.ex_stage_pip__DOT__jump));
    bufp->chgIData(oldp+97,(vlSelfRef.ex_stage_pip__DOT__jump_target),32);
    bufp->chgIData(oldp+98,(vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__op_A),32);
    bufp->chgIData(oldp+99,(vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__op_B),32);
    bufp->chgCData(oldp+100,(vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__alu_ctrl),4);
    bufp->chgIData(oldp+101,(vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__alu_result),32);
    bufp->chgBit(oldp+102,(vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__zero_flag));
    bufp->chgIData(oldp+103,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__op_A),32);
    bufp->chgIData(oldp+104,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__op_B),32);
    bufp->chgCData(oldp+105,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_ctrl),3);
    bufp->chgIData(oldp+106,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__imm),32);
    bufp->chgIData(oldp+107,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__pc),32);
    bufp->chgBit(oldp+108,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch));
    bufp->chgBit(oldp+109,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__zero_flag));
    bufp->chgBit(oldp+110,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_taken));
    bufp->chgIData(oldp+111,(vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_target),32);
    bufp->chgBit(oldp+112,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__clk));
    bufp->chgBit(oldp+113,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rst));
    bufp->chgIData(oldp+114,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_in),32);
    bufp->chgIData(oldp+115,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_in),32);
    bufp->chgCData(oldp+116,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__funct3_in),3);
    bufp->chgIData(oldp+117,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_in),32);
    bufp->chgIData(oldp+118,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_in),32);
    bufp->chgIData(oldp+119,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_in),32);
    bufp->chgCData(oldp+120,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_in),5);
    bufp->chgCData(oldp+121,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_in),5);
    bufp->chgCData(oldp+122,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_in),5);
    bufp->chgCData(oldp+123,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__wb_sel_in),2);
    bufp->chgBit(oldp+124,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_in));
    bufp->chgBit(oldp+125,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_in));
    bufp->chgBit(oldp+126,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_in));
    bufp->chgBit(oldp+127,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_in));
    bufp->chgBit(oldp+128,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_in));
    bufp->chgBit(oldp+129,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_in));
    bufp->chgIData(oldp+130,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_out),32);
    bufp->chgIData(oldp+131,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out),32);
    bufp->chgCData(oldp+132,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__funct3_out),3);
    bufp->chgIData(oldp+133,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out),32);
    bufp->chgCData(oldp+134,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_out),5);
    bufp->chgCData(oldp+135,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_out),5);
    bufp->chgCData(oldp+136,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_out),5);
    bufp->chgIData(oldp+137,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out),32);
    bufp->chgIData(oldp+138,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out),32);
    bufp->chgCData(oldp+139,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__wb_sel_out),2);
    bufp->chgBit(oldp+140,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_out));
    bufp->chgBit(oldp+141,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_out));
    bufp->chgBit(oldp+142,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_out));
    bufp->chgBit(oldp+143,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out));
    bufp->chgBit(oldp+144,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out));
    bufp->chgBit(oldp+145,(vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_out));
    bufp->chgIData(oldp+146,(vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__pc),32);
    bufp->chgIData(oldp+147,(vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__rs1_data),32);
    bufp->chgIData(oldp+148,(vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__imm),32);
    bufp->chgBit(oldp+149,(vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jal));
    bufp->chgBit(oldp+150,(vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jalr));
    bufp->chgBit(oldp+151,(vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump));
    bufp->chgIData(oldp+152,(vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump_target),32);
}

void Vex_stage_pip___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root__trace_cleanup\n"); );
    // Init
    Vex_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vex_stage_pip___024root*>(voidSelf);
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
