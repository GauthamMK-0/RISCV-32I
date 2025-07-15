// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline___024root.h"

void Vpipeline___024root___ico_sequent__TOP__0(Vpipeline___024root* vlSelf);

void Vpipeline___024root___eval_ico(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_ico\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpipeline___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vpipeline__ConstPool__TABLE_hfaa174bc_0;

VL_INLINE_OPT void Vpipeline___024root___ico_sequent__TOP__0(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___ico_sequent__TOP__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.dbg_if_pc = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__dbg_if_pc = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.dbg_if_instr = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pipeline__DOT__dbg_if_instr = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instr_out 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.dbg_id_rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.dbg_id_rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.dbg_id_rd = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__dbg_id_rd = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.dbg_id_rs1_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.dbg_id_rs2_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.dbg_ex_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.dbg_ex_alu_result = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.dbg_mem_alu_result = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.dbg_mem_read_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.dbg_wb_data = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out;
    vlSelfRef.dbg_wb_rd = vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out;
    vlSelfRef.dbg_wb_reg_write = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs1_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs2_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_result = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__dbg_mem_alu_result = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__dbg_mem_read_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__dbg_wb_data = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out;
    vlSelfRef.pipeline__DOT__dbg_wb_rd = vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out;
    vlSelfRef.pipeline__DOT__dbg_wb_reg_write = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__ex_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__imm_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_ctrl_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_src_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_result_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rd_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_read_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_ctrl_debug 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.dbg_ex_branch_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.pipeline__DOT__dbg_ex_branch_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_target_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.dbg_ex_branch_taken = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__dbg_ex_branch_taken = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_taken_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.dbg_mem_data = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.pipeline__DOT__dbg_mem_data = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_data_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.dbg_mem_write_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__dbg_mem_write_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_write_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_target_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__rd_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__reg_write_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__reg_write_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__funct3_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch_ctrl_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__wb_sel_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_read_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_write_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_to_reg_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__jal_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__jalr_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__funct3_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__wb_sel_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_to_reg_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__pc_4 = 
        ((IData)(4U) + vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out);
    vlSelfRef.pipeline__DOT__mem_stage__DOT__wb_sel_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_to_reg_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.pipeline__DOT__id_rs1_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.pipeline__DOT__id_rs2_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__id_alu_src = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.pipeline__DOT__mem_data = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.pipeline__DOT__mem_pc = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__mem_wb_sel = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__mem_mem_to_reg = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instr = 
        vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.pipeline__DOT__if_pc = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__id_rd = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__ex_mem_write = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__id_funct3 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.pipeline__DOT__id_wb_sel = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__id_reg_write = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__id_mem_read = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__id_mem_write = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__id_mem_to_reg = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__ex_pc = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__ex_rs2_data = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__ex_wb_sel = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__ex_mem_to_reg = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__mem_alu_result = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__ex_mem_read = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__wb_reg_data = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc;
    vlSelfRef.pipeline__DOT__ex_alu_result = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__pc_4 
        = ((IData)(4U) + vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc);
    vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__read_data;
    vlSelfRef.pipeline__DOT__branch_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.pipeline__DOT__jump_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.pipeline__DOT__id_branch_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.pipeline__DOT__branch_taken = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__if_id_flush = ((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out) 
                                            | (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out));
    vlSelfRef.pipeline__DOT__jump = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.pipeline__DOT__id_jal = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out;
    vlSelfRef.pipeline__DOT__id_jalr = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb 
        = (3U & vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out);
    vlSelfRef.pipeline__DOT__id_branch = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out;
    vlSelfRef.pipeline__DOT__rst = vlSelfRef.rst;
    vlSelfRef.pipeline__DOT__id_imm = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out;
    vlSelfRef.pipeline__DOT__ex_funct3 = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_out;
    vlSelfRef.pipeline__DOT__id_rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__id_rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__clk = vlSelfRef.clk;
    vlSelfRef.pipeline__DOT__id_pc = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__id_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__ex_reg_write = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__ex_rs2 = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__ex_rs1 = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__wb_rd = vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out;
    vlSelfRef.pipeline__DOT__wb_reg_write = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__mem_rd = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__mem_reg_write = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__if_instr = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data_in 
        = vlSelfRef.pipeline__DOT__id_rs1_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__id_rs2_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_src_in 
        = vlSelfRef.pipeline__DOT__id_alu_src;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__mem_data_in 
        = vlSelfRef.pipeline__DOT__mem_data;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__pc_in = vlSelfRef.pipeline__DOT__mem_pc;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__wb_sel 
        = vlSelfRef.pipeline__DOT__mem_wb_sel;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__mem_mem_to_reg;
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_in 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__instr;
    vlSelfRef.pipeline__DOT__id_stage__DOT__pc_in = vlSelfRef.pipeline__DOT__if_pc;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rd_in = vlSelfRef.pipeline__DOT__id_rd;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_write_in 
        = vlSelfRef.pipeline__DOT__ex_mem_write;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__id_funct3;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__id_wb_sel;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__id_reg_write;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_read_in 
        = vlSelfRef.pipeline__DOT__id_mem_read;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_write_in 
        = vlSelfRef.pipeline__DOT__id_mem_write;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__id_mem_to_reg;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__ex_pc;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__ex_rs2_data;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__ex_wb_sel;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__ex_mem_to_reg;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_alu_result 
        = vlSelfRef.pipeline__DOT__mem_alu_result;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_data_mem 
        = vlSelfRef.pipeline__DOT__mem_alu_result;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__mem_alu_result;
    vlSelfRef.pipeline__DOT__hzd__DOT__ex_mem_read 
        = vlSelfRef.pipeline__DOT__ex_mem_read;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_read_in 
        = vlSelfRef.pipeline__DOT__ex_mem_read;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_data_wb 
        = vlSelfRef.pipeline__DOT__wb_reg_data;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_data_wb 
        = vlSelfRef.pipeline__DOT__wb_reg_data;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__addr 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__current_pc 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
    vlSelfRef.pipeline__DOT__id_stage__DOT__ex_alu_result 
        = vlSelfRef.pipeline__DOT__ex_alu_result;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__ex_alu_result;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data;
    vlSelfRef.pipeline__DOT__if_stage__DOT__branch_target 
        = vlSelfRef.pipeline__DOT__branch_target;
    vlSelfRef.pipeline__DOT__if_stage__DOT__jump_target 
        = vlSelfRef.pipeline__DOT__jump_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_branch_ctrl;
    vlSelfRef.pipeline__DOT__hzd__DOT__branch_taken 
        = vlSelfRef.pipeline__DOT__branch_taken;
    vlSelfRef.pipeline__DOT__if_stage__DOT__branch_taken 
        = vlSelfRef.pipeline__DOT__branch_taken;
    vlSelfRef.pipeline__DOT__hzd__DOT__if_id_flush 
        = vlSelfRef.pipeline__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__hzd__DOT__id_ex_flush 
        = vlSelfRef.pipeline__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_flush 
        = vlSelfRef.pipeline__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__id_ex_flush = vlSelfRef.pipeline__DOT__if_id_flush;
    if (vlSelfRef.pipeline__DOT__jump) {
        vlSelfRef.pipeline__DOT__hzd__DOT__jump = 1U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__jump = 1U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc 
            = vlSelfRef.pipeline__DOT__jump_target;
    } else {
        vlSelfRef.pipeline__DOT__hzd__DOT__jump = 0U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__jump = 0U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc 
            = ((IData)(vlSelfRef.pipeline__DOT__branch_taken)
                ? vlSelfRef.pipeline__DOT__branch_target
                : vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__pc_4);
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jal_in 
        = vlSelfRef.pipeline__DOT__id_jal;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jalr_in 
        = vlSelfRef.pipeline__DOT__id_jalr;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump = 0U;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__addr_lsb 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__addr_lsb 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_in 
        = vlSelfRef.pipeline__DOT__id_branch;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__rst = vlSelfRef.pipeline__DOT__rst;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rst = vlSelfRef.pipeline__DOT__rst;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__rst = vlSelfRef.pipeline__DOT__rst;
    vlSelfRef.pipeline__DOT__if_stage__DOT__rst = vlSelfRef.pipeline__DOT__rst;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rst = vlSelfRef.pipeline__DOT__rst;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__imm_in 
        = vlSelfRef.pipeline__DOT__id_imm;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__ex_funct3;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_out 
        = ((4U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
            ? ((2U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                ? 0U : ((1U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                         ? ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                             ? (0xffffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)
                             : ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                 ? (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                    >> 0x10U) : 0U))
                         : ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                             ? ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                 ? (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                    >> 0x18U) : (0xffU 
                                                 & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                    >> 0x10U)))
                             : ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                 ? (0xffU & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                             >> 8U))
                                 : (0xffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)))))
            : ((2U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                ? ((1U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                    ? 0U : vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)
                : ((1U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                    ? ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                        ? (((- (IData)((1U & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data))
                        : ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                            ? (((- (IData)((vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                             >> 0x10U))
                            : 0U)) : ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                       ? ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                           >> 0x1fU))) 
                                               << 8U) 
                                              | (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                 >> 0x18U))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                              >> 0x17U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                    >> 0x10U))))
                                       : ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                              >> 0xfU)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                    >> 8U)))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)))))));
    __Vtableidx1 = (((IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb) 
                     << 3U) | (IData)(vlSelfRef.pipeline__DOT__ex_funct3));
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__byte_enable 
        = Vpipeline__ConstPool__TABLE_hfaa174bc_0[__Vtableidx1];
    vlSelfRef.pipeline__DOT__fwd__DOT__id_rs1 = vlSelfRef.pipeline__DOT__id_rs1;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_in 
        = vlSelfRef.pipeline__DOT__id_rs1;
    vlSelfRef.pipeline__DOT__fwd__DOT__id_rs2 = vlSelfRef.pipeline__DOT__id_rs2;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_in 
        = vlSelfRef.pipeline__DOT__id_rs2;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__clk = vlSelfRef.pipeline__DOT__clk;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__clk = vlSelfRef.pipeline__DOT__clk;
    vlSelfRef.pipeline__DOT__if_stage__DOT__clk = vlSelfRef.pipeline__DOT__clk;
    vlSelfRef.pipeline__DOT__id_stage__DOT__clk = vlSelfRef.pipeline__DOT__clk;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__clk = vlSelfRef.pipeline__DOT__clk;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_target = 0U;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in = vlSelfRef.pipeline__DOT__id_pc;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_alu_ctrl;
    vlSelfRef.pipeline__DOT__id_stage__DOT__ex_reg_write 
        = vlSelfRef.pipeline__DOT__ex_reg_write;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_reg_write 
        = vlSelfRef.pipeline__DOT__ex_reg_write;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__ex_reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__hzd__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_rs2 = vlSelfRef.pipeline__DOT__ex_rs2;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_rs1 = vlSelfRef.pipeline__DOT__ex_rs1;
    vlSelfRef.pipeline__DOT__fwd__DOT__wb_rd = vlSelfRef.pipeline__DOT__wb_rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_wb = vlSelfRef.pipeline__DOT__wb_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__wb_reg_write 
        = vlSelfRef.pipeline__DOT__wb_reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write_wb 
        = vlSelfRef.pipeline__DOT__wb_reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_rd 
        = vlSelfRef.pipeline__DOT__mem_rd;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_in = vlSelfRef.pipeline__DOT__mem_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__mem_rd = vlSelfRef.pipeline__DOT__mem_rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_reg_write 
        = vlSelfRef.pipeline__DOT__mem_reg_write;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__mem_reg_write;
    vlSelfRef.pipeline__DOT__fwd__DOT__mem_reg_write 
        = vlSelfRef.pipeline__DOT__mem_reg_write;
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__ex_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__ex_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__id_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 3U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 1U;
    }
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 0U;
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__ex_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__ex_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__id_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 3U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 1U;
    }
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__ex_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__ex_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex = 1U;
    }
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__ex_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__ex_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex = 1U;
    }
    vlSelfRef.pipeline__DOT__id_stage__DOT__instr_in 
        = vlSelfRef.pipeline__DOT__if_instr;
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd 
        = (0x1fU & (vlSelfRef.pipeline__DOT__if_instr 
                    >> 7U));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct7 
        = (vlSelfRef.pipeline__DOT__if_instr >> 0x19U);
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct3 
        = (7U & (vlSelfRef.pipeline__DOT__if_instr 
                 >> 0xcU));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1 
        = (0x1fU & (vlSelfRef.pipeline__DOT__if_instr 
                    >> 0xfU));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2 
        = (0x1fU & (vlSelfRef.pipeline__DOT__if_instr 
                    >> 0x14U));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode 
        = (0x7fU & vlSelfRef.pipeline__DOT__if_instr);
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__imm 
        = ((0x40U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                         ? ((((- (IData)(
                                                         (vlSelfRef.pipeline__DOT__if_instr 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.pipeline__DOT__if_instr 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.pipeline__DOT__if_instr) 
                                                | (0x800U 
                                                   & (vlSelfRef.pipeline__DOT__if_instr 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.pipeline__DOT__if_instr 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.pipeline__DOT__if_instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.pipeline__DOT__if_instr 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.pipeline__DOT__if_instr 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | (((0x1000U 
                                                        & (vlSelfRef.pipeline__DOT__if_instr 
                                                           >> 0x13U)) 
                                                       | (0x800U 
                                                          & (vlSelfRef.pipeline__DOT__if_instr 
                                                             << 4U))) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.pipeline__DOT__if_instr 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.pipeline__DOT__if_instr 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.pipeline__DOT__if_instr)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.pipeline__DOT__if_instr 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.pipeline__DOT__if_instr 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.pipeline__DOT__if_instr 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.pipeline__DOT__if_instr)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.pipeline__DOT__if_instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.pipeline__DOT__if_instr 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.pipeline__DOT__if_instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.pipeline__DOT__if_instr 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rd_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem_write 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_write_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__funct3_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__wb_sel_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__reg_write_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_read_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_write_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_to_reg_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__write_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__rs2_data_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__wb_sel_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_to_reg_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem_read 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_read_in;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rd_data 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rd_data_wb;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__addr 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_in;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__branch_target 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__branch_target;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__jump_target 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__jump_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_ctrl 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_ctrl_in;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__branch_taken 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__branch_taken;
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__if_id_flush 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_flush 
        = vlSelfRef.pipeline__DOT__id_ex_flush;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__jump 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__jump;
    vlSelfRef.pipeline__DOT__if_stage__DOT__next_pc 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jal 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jal_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jalr 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jalr_in;
    if (vlSelfRef.pipeline__DOT__id_jal) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump = 1U;
    } else if (vlSelfRef.pipeline__DOT__id_jalr) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump = 1U;
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump = vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rst 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rst;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rst 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__rst;
    vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__rst 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__rst;
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__rst 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__rst;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rst 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rst;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rst 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rst;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__imm 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__imm_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__imm 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__imm_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__funct3 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__funct3_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__funct3 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__funct3_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__byte_enable;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__clk 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__clk;
    vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__clk 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__clk;
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__clk 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__clk;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__clk 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__clk;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__clk 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__clk;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__clk 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__clk;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__clk 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__clk;
    if (vlSelfRef.pipeline__DOT__id_branch) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_target 
            = (vlSelfRef.pipeline__DOT__id_pc + vlSelfRef.pipeline__DOT__id_imm);
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_target 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__pc 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__pc 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_ctrl 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_ctrl_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__reg_write_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__rd_in;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rd_wb;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__reg_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write_wb;
    vlSelfRef.pipeline__DOT__forward_rs2_id = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id;
    vlSelfRef.pipeline__DOT__forward_rs1_id = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id;
    vlSelfRef.pipeline__DOT__forward_rs2_ex = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex))
            ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out)));
    vlSelfRef.pipeline__DOT__forward_rs1_ex = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex))
            ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out)));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__instr 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__instr_in;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_hzd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd;
    vlSelfRef.pipeline__DOT__rd_hzd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__funct7 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct7;
    vlSelfRef.pipeline__DOT__id_stage__DOT__funct3 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct3;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_hzd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1;
    vlSelfRef.pipeline__DOT__rs1_hzd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1))
            ? 0U : (((IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out) 
                     & ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1) 
                        == (IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out)))
                     ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                     : vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_
                    [vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1]));
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_hzd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2;
    vlSelfRef.pipeline__DOT__rs2_hzd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2))
            ? 0U : (((IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out) 
                     & ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2) 
                        == (IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out)))
                     ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                     : vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_
                    [vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2]));
    vlSelfRef.pipeline__DOT__hzd__DOT__load_hazard 
        = ((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out) 
           & ((((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out) 
                == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1)) 
               | ((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out) 
                  == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2))) 
              & (0U != (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out))));
    vlSelfRef.pipeline__DOT__id_stage__DOT__imm = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__imm;
    vlSelfRef.pipeline__DOT__id_stage__DOT__opcode 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__id_ex_flush 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_flush;
    vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__next_pc 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__next_pc;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jump;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_data;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__byte_enable 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_target;
    vlSelfRef.pipeline__DOT__id_stage__DOT__forward_rs2 
        = vlSelfRef.pipeline__DOT__forward_rs2_id;
    vlSelfRef.pipeline__DOT__id_stage__DOT__forward_rs1 
        = vlSelfRef.pipeline__DOT__forward_rs1_id;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_rs2 
        = vlSelfRef.pipeline__DOT__forward_rs2_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__op_B 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B = 
        ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out)
          ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out
          : vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data);
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_rs1 
        = vlSelfRef.pipeline__DOT__forward_rs1_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__op_A 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__rs1_data 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target = 0U;
    if (vlSelfRef.pipeline__DOT__id_jal) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target 
            = (vlSelfRef.pipeline__DOT__id_pc + vlSelfRef.pipeline__DOT__id_imm);
    } else if (vlSelfRef.pipeline__DOT__id_jalr) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target 
            = (0xfffffffeU & (vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
                              + vlSelfRef.pipeline__DOT__id_imm));
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A = 
        ((0xbU == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out))
          ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out
          : vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data);
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__funct7 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__funct7;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__funct3 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__funct3;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__funct3;
    vlSelfRef.pipeline__DOT__hzd__DOT__id_rs1 = vlSelfRef.pipeline__DOT__rs1_hzd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rs1 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__out_data_rs1 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data_forwarded 
        = ((3U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id))
            ? vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data)));
    vlSelfRef.pipeline__DOT__hzd__DOT__id_rs2 = vlSelfRef.pipeline__DOT__rs2_hzd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rs2 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__out_data_rs2 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data_forwarded 
        = ((3U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id))
            ? vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data)));
    vlSelfRef.pipeline__DOT__pc_write = (1U & (~ (IData)(vlSelfRef.pipeline__DOT__hzd__DOT__load_hazard)));
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__imm;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__opcode 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__opcode;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_read = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_write = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_to_reg = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_read = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jal = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jalr = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch_ctrl = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
    if ((0x40U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jal = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 2U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 2U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl 
                                = ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? 9U : 8U);
                        } else if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3) 
                                             >> 1U)))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jalr = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch_ctrl 
                                    = ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                ? 5U
                                                : 4U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                ? 3U
                                                : 2U))
                                        : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                             ? 1U : 0U)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0xaU;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 0U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl 
                            = ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                        ? 2U : 3U) : 
                                   ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                     ? ((0U == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct7))
                                         ? 6U : 7U)
                                     : 4U)) : ((2U 
                                                & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct7))
                                                     ? 0U
                                                     : 1U))));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0xbU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl 
                        = ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                            ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct7))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                   ? 5U
                                                   : 0U)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                }
            }
        }
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__op_B 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.dbg_ex_alu_op_b = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_op_b = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_b_debug 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_target 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__op_A 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.dbg_ex_alu_op_a = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_op_a = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_a_debug 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                         ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                             ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                                + vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                             : vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                         : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                             ? ((vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                                 < vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                                 ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A, vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                                                ? 1U
                                                : 0U))))
            : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A, 
                                         (0x1fU & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B))
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           >> (0x1fU & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)))
                    : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           << (0x1fU & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B))
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           ^ vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)))
                : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           | vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B))
                    : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           - vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           + vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)))));
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data_forwarded;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data_forwarded;
    vlSelfRef.pipeline__DOT__hzd__DOT__pc_write = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__hzd__DOT__if_id_write 
        = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__hzd__DOT__id_ex_write 
        = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_write 
        = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__if_id_write = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__id_ex_write = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_read 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_read;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_to_reg 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_to_reg;
    vlSelfRef.pipeline__DOT__id_stage__DOT__jal = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jal;
    vlSelfRef.pipeline__DOT__id_stage__DOT__jalr = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jalr;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_src 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src;
    vlSelfRef.pipeline__DOT__id_stage__DOT__wb_sel 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch_ctrl 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch_ctrl;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_ctrl 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_result 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_result;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag 
        = (0U == vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_result);
    vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__pc_write 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__pc_write;
    vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_write 
        = vlSelfRef.pipeline__DOT__if_id_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_write 
        = vlSelfRef.pipeline__DOT__id_ex_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_read;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_to_reg;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__jal;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__jalr;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__branch;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__alu_src;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__wb_sel;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__branch_ctrl;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__alu_ctrl;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_result;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__zero_flag 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__zero_flag 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_taken = 0U;
    if (vlSelfRef.pipeline__DOT__id_branch) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_taken 
            = (1U & ((4U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                      ? ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl) 
                                   >> 1U))) && ((1U 
                                                 & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                                                 ? 
                                                (vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
                                                 >= vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data)
                                                 : 
                                                (vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
                                                 < vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data)))
                      : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                          ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                              ? VL_GTES_III(32, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data)
                              : VL_LTS_III(32, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data))
                          : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                              ? (~ (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag))
                              : (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag)))));
    }
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__if_id_write 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__id_ex_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_write;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_taken 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_taken;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_taken;
}

void Vpipeline___024root___eval_triggers__ico(Vpipeline___024root* vlSelf);

bool Vpipeline___024root___eval_phase__ico(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__ico\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpipeline___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vpipeline___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpipeline___024root___eval_act(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_act\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpipeline___024root___nba_sequent__TOP__0(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__1(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_comb__TOP__0(Vpipeline___024root* vlSelf);

void Vpipeline___024root___eval_nba(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_nba\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__1(vlSelf);
        Vpipeline___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__0(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0;
    __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0;
    __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0;
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1;
    __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1;
    __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1;
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2;
    __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2;
    __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2;
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3;
    __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3;
    __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3;
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3 = 0;
    // Body
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0 = 0U;
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1 = 0U;
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2 = 0U;
    __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3 = 0U;
    if (vlSelfRef.pipeline__DOT__ex_mem_write) {
        if ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable))) {
            __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0 
                = (0xffU & vlSelfRef.pipeline__DOT__ex_rs2_data);
            __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0 
                = (0x3ffU & (vlSelfRef.pipeline__DOT__ex_alu_result 
                             >> 2U));
            __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable))) {
            __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1 
                = (0xffU & (vlSelfRef.pipeline__DOT__ex_rs2_data 
                            >> 8U));
            __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1 
                = (0x3ffU & (vlSelfRef.pipeline__DOT__ex_alu_result 
                             >> 2U));
            __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable))) {
            __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2 
                = (0xffU & (vlSelfRef.pipeline__DOT__ex_rs2_data 
                            >> 0x10U));
            __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2 
                = (0x3ffU & (vlSelfRef.pipeline__DOT__ex_alu_result 
                             >> 2U));
            __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable))) {
            __VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3 
                = (vlSelfRef.pipeline__DOT__ex_rs2_data 
                   >> 0x18U);
            __VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3 
                = (0x3ffU & (vlSelfRef.pipeline__DOT__ex_alu_result 
                             >> 2U));
            __VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3 = 1U;
        }
    }
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__read_data 
        = ((IData)(vlSelfRef.pipeline__DOT__ex_mem_read)
            ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem
           [(0x3ffU & (vlSelfRef.pipeline__DOT__ex_alu_result 
                       >> 2U))] : 0U);
    if (__VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0) {
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem[__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem
                [__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0]) 
               | (IData)(__VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v0));
    }
    if (__VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1) {
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem[__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem
                [__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2) {
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem[__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem
                [__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3) {
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem[__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem
                [__VdlyDim0__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__pipeline__DOT__mem_stage__DOT__memory__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__read_data;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data;
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__1(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v0;
    __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v0 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32;
    __VdlyVal__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32 = 0;
    CData/*4:0*/ __VdlyDim0__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32;
    __VdlyDim0__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32;
    __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32 = 0;
    // Body
    __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v0 = 0U;
    __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 1U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 2U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 3U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 4U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 5U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 6U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 7U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 8U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 9U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0xaU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0xbU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0xcU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0xdU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0xeU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0xfU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x10U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x11U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x12U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x13U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x14U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x15U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x16U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x17U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x18U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x19U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x1aU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x1bU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x1cU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x1dU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x1eU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x1fU;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__i = 0x20U;
        __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v0 = 1U;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_out = 0U;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out = 0U;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_out = 0U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_out = 0U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out = 0U;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out = 0U;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out = 0U;
        vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out = 0U;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_out = 0U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out = 0U;
        vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out = 0U;
    } else {
        if (((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
             & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd)))) {
            __VdlyVal__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32 
                = vlSelfRef.pipeline__DOT__wb_reg_data;
            __VdlyDim0__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32 
                = vlSelfRef.pipeline__DOT__wb_rd;
            __VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32 = 1U;
        }
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_out 
            = vlSelfRef.pipeline__DOT__ex_wb_sel;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_out 
            = vlSelfRef.pipeline__DOT__id_wb_sel;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out 
            = vlSelfRef.pipeline__DOT__ex_pc;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out 
            = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_data;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_out 
            = vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_target;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_out 
            = vlSelfRef.pipeline__DOT__id_pc;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out 
            = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_target;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_out 
            = vlSelfRef.pipeline__DOT__id_funct3;
        if (vlSelfRef.pipeline__DOT__if_id_flush) {
            vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out = 0U;
            vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out = 0U;
        } else if (vlSelfRef.pipeline__DOT__if_id_write) {
            vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out 
                = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
            vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out 
                = vlSelfRef.pipeline__DOT__if_stage__DOT__instr;
        }
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_out 
            = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data;
        if (vlSelfRef.pipeline__DOT__pc_write) {
            vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc 
                = vlSelfRef.pipeline__DOT__if_stage__DOT__next_pc;
        }
        if (vlSelfRef.pipeline__DOT__id_ex_flush) {
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out = 0U;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out = 0U;
        } else if (vlSelfRef.pipeline__DOT__id_ex_write) {
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__wb_sel;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_read;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_write;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_to_reg;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__rd;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__funct3;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__branch_ctrl;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__jal;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__jalr;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__branch;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__alu_src;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__imm;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data_forwarded;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out 
                = vlSelfRef.pipeline__DOT__if_pc;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__alu_ctrl;
            vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out 
                = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data_forwarded;
        }
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out 
            = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_result;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_out 
            = vlSelfRef.pipeline__DOT__id_rs2;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out 
            = vlSelfRef.pipeline__DOT__id_rd;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_out 
            = vlSelfRef.pipeline__DOT__id_rs1;
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out 
            = vlSelfRef.pipeline__DOT__ex_alu_result;
        vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out 
            = ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_wb_sel))
                ? vlSelfRef.pipeline__DOT__mem_alu_result
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__mem_wb_sel))
                    ? vlSelfRef.pipeline__DOT__mem_data
                    : ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_wb_sel))
                        ? vlSelfRef.pipeline__DOT__wb_stage__DOT__pc_4
                        : 0U)));
        vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_out 
            = vlSelfRef.pipeline__DOT__ex_rd;
        vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out 
            = vlSelfRef.pipeline__DOT__mem_rd;
    }
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__ex_mem_to_reg));
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__id_mem_to_reg));
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__id_mem_write));
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__jump));
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_taken));
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__id_mem_read));
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__id_reg_write));
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__ex_reg_write));
    vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.pipeline__DOT__mem_reg_write));
    if (__VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v0) {
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[1U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[2U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[3U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[4U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[5U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[6U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[7U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[8U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[9U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0xaU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0xbU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0xcU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0xdU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0xeU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0xfU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x10U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x11U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x12U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x13U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x14U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x15U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x16U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x17U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x18U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x19U] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x1aU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x1bU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x1cU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x1dU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x1eU] = 0U;
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[0x1fU] = 0U;
    }
    if (__VdlySet__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32) {
        vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[__VdlyDim0__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32] 
            = __VdlyVal__pipeline__DOT__id_stage__DOT__reg_file__DOT__register___v32;
    }
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_to_reg_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__mem_mem_to_reg = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__wb_sel_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__mem_wb_sel = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__wb_sel_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__ex_wb_sel = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_to_reg_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__ex_mem_to_reg = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__pc_4 = 
        ((IData)(4U) + vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out);
    vlSelfRef.pipeline__DOT__mem_pc = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out;
    vlSelfRef.dbg_mem_data = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.pipeline__DOT__dbg_mem_data = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_data_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.pipeline__DOT__mem_data = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.dbg_mem_write_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__dbg_mem_write_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_write_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__ex_mem_write = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_target_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.pipeline__DOT__jump_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__ex_pc = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.dbg_ex_branch_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.pipeline__DOT__dbg_ex_branch_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_target_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.pipeline__DOT__branch_target = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__funct3_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_out;
    vlSelfRef.pipeline__DOT__ex_funct3 = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_out;
    vlSelfRef.dbg_if_pc = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__dbg_if_pc = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__if_pc = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__ex_rs2_data = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.pipeline__DOT__jump = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.pipeline__DOT__if_stage__DOT__instr = 
        vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__pc_4 
        = ((IData)(4U) + vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc);
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__id_reg_write = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__wb_sel_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__id_wb_sel = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_read_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__id_mem_read = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_write_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__id_mem_write = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_to_reg_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.pipeline__DOT__id_mem_to_reg = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.dbg_ex_branch_taken = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__dbg_ex_branch_taken = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_taken_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__branch_taken = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.pipeline__DOT__if_id_flush = ((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out) 
                                            | (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out));
    vlSelfRef.dbg_mem_read_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__dbg_mem_read_en = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_read_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.pipeline__DOT__ex_mem_read = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.dbg_id_rd = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__dbg_id_rd = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__id_rd = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__reg_write_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__ex_reg_write = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__funct3_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.pipeline__DOT__id_funct3 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch_ctrl_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.pipeline__DOT__id_branch_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.dbg_ex_alu_result = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_result = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_result_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__ex_alu_result = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb 
        = (3U & vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out);
    vlSelfRef.pipeline__DOT__id_stage__DOT__jal_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out;
    vlSelfRef.pipeline__DOT__id_jal = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__jalr_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.pipeline__DOT__id_jalr = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out;
    vlSelfRef.pipeline__DOT__id_branch = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out;
    vlSelfRef.dbg_id_rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__id_rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.dbg_id_rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__id_rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_src_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.pipeline__DOT__id_alu_src = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__ex_rs2 = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rd_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_out 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__ex_rs1 = vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__imm_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out;
    vlSelfRef.pipeline__DOT__id_imm = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out;
    vlSelfRef.dbg_id_rs2_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs2_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__id_rs2_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__pc_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out;
    vlSelfRef.pipeline__DOT__id_pc = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out;
    vlSelfRef.dbg_ex_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__ex_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_ctrl_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_ctrl_debug 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.pipeline__DOT__id_alu_ctrl = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.dbg_mem_alu_result = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__dbg_mem_alu_result = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.pipeline__DOT__mem_alu_result = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.dbg_id_rs1_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.pipeline__DOT__dbg_id_rs1_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data_out 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.pipeline__DOT__id_rs1_data = vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.dbg_wb_data = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out;
    vlSelfRef.pipeline__DOT__dbg_wb_data = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out;
    vlSelfRef.pipeline__DOT__wb_reg_data = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__reg_write_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__mem_reg_write = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__rd_out 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.pipeline__DOT__mem_rd = vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.dbg_if_instr = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pipeline__DOT__dbg_if_instr = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instr_out 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pipeline__DOT__if_instr = vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.dbg_wb_rd = vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out;
    vlSelfRef.pipeline__DOT__dbg_wb_rd = vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out;
    vlSelfRef.pipeline__DOT__wb_rd = vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out;
    vlSelfRef.dbg_wb_reg_write = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__dbg_wb_reg_write = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__wb_reg_write = vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__mem_mem_to_reg;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__wb_sel 
        = vlSelfRef.pipeline__DOT__mem_wb_sel;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__ex_wb_sel;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__ex_mem_to_reg;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__pc_in = vlSelfRef.pipeline__DOT__mem_pc;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__mem_data_in 
        = vlSelfRef.pipeline__DOT__mem_data;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_write_in 
        = vlSelfRef.pipeline__DOT__ex_mem_write;
    vlSelfRef.pipeline__DOT__if_stage__DOT__jump_target 
        = vlSelfRef.pipeline__DOT__jump_target;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__ex_pc;
    vlSelfRef.pipeline__DOT__if_stage__DOT__branch_target 
        = vlSelfRef.pipeline__DOT__branch_target;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__ex_funct3;
    vlSelfRef.pipeline__DOT__id_stage__DOT__pc_in = vlSelfRef.pipeline__DOT__if_pc;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__ex_rs2_data;
    if (vlSelfRef.pipeline__DOT__jump) {
        vlSelfRef.pipeline__DOT__hzd__DOT__jump = 1U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__jump = 1U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_in 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__instr;
        vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__addr 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
        vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__current_pc 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
        vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_in 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__reg_write_in 
            = vlSelfRef.pipeline__DOT__id_reg_write;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__wb_sel_in 
            = vlSelfRef.pipeline__DOT__id_wb_sel;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_read_in 
            = vlSelfRef.pipeline__DOT__id_mem_read;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_write_in 
            = vlSelfRef.pipeline__DOT__id_mem_write;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_to_reg_in 
            = vlSelfRef.pipeline__DOT__id_mem_to_reg;
        vlSelfRef.pipeline__DOT__hzd__DOT__branch_taken 
            = vlSelfRef.pipeline__DOT__branch_taken;
        vlSelfRef.pipeline__DOT__if_stage__DOT__branch_taken 
            = vlSelfRef.pipeline__DOT__branch_taken;
        vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc 
            = vlSelfRef.pipeline__DOT__jump_target;
    } else {
        vlSelfRef.pipeline__DOT__hzd__DOT__jump = 0U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__jump = 0U;
        vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_in 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__instr;
        vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__addr 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
        vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__current_pc 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
        vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_in 
            = vlSelfRef.pipeline__DOT__if_stage__DOT__current_pc;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__reg_write_in 
            = vlSelfRef.pipeline__DOT__id_reg_write;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__wb_sel_in 
            = vlSelfRef.pipeline__DOT__id_wb_sel;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_read_in 
            = vlSelfRef.pipeline__DOT__id_mem_read;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_write_in 
            = vlSelfRef.pipeline__DOT__id_mem_write;
        vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_to_reg_in 
            = vlSelfRef.pipeline__DOT__id_mem_to_reg;
        if (vlSelfRef.pipeline__DOT__branch_taken) {
            vlSelfRef.pipeline__DOT__hzd__DOT__branch_taken = 1U;
            vlSelfRef.pipeline__DOT__if_stage__DOT__branch_taken = 1U;
            vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc 
                = vlSelfRef.pipeline__DOT__branch_target;
        } else {
            vlSelfRef.pipeline__DOT__hzd__DOT__branch_taken = 0U;
            vlSelfRef.pipeline__DOT__if_stage__DOT__branch_taken = 0U;
            vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc 
                = vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__pc_4;
        }
    }
    vlSelfRef.pipeline__DOT__hzd__DOT__if_id_flush 
        = vlSelfRef.pipeline__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__hzd__DOT__id_ex_flush 
        = vlSelfRef.pipeline__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_flush 
        = vlSelfRef.pipeline__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__id_ex_flush = vlSelfRef.pipeline__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__hzd__DOT__ex_mem_read 
        = vlSelfRef.pipeline__DOT__ex_mem_read;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_read_in 
        = vlSelfRef.pipeline__DOT__ex_mem_read;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rd_in = vlSelfRef.pipeline__DOT__id_rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__ex_reg_write 
        = vlSelfRef.pipeline__DOT__ex_reg_write;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_reg_write 
        = vlSelfRef.pipeline__DOT__ex_reg_write;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__ex_reg_write;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__id_funct3;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_branch_ctrl;
    vlSelfRef.pipeline__DOT__id_stage__DOT__ex_alu_result 
        = vlSelfRef.pipeline__DOT__ex_alu_result;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__ex_alu_result;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__addr_lsb 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__addr_lsb 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb;
    __Vtableidx1 = (((IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb) 
                     << 3U) | (IData)(vlSelfRef.pipeline__DOT__ex_funct3));
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__byte_enable 
        = Vpipeline__ConstPool__TABLE_hfaa174bc_0[__Vtableidx1];
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jal_in 
        = vlSelfRef.pipeline__DOT__id_jal;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jalr_in 
        = vlSelfRef.pipeline__DOT__id_jalr;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump = 0U;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_in 
        = vlSelfRef.pipeline__DOT__id_branch;
    vlSelfRef.pipeline__DOT__fwd__DOT__id_rs2 = vlSelfRef.pipeline__DOT__id_rs2;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_in 
        = vlSelfRef.pipeline__DOT__id_rs2;
    vlSelfRef.pipeline__DOT__fwd__DOT__id_rs1 = vlSelfRef.pipeline__DOT__id_rs1;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_in 
        = vlSelfRef.pipeline__DOT__id_rs1;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_src_in 
        = vlSelfRef.pipeline__DOT__id_alu_src;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_rs2 = vlSelfRef.pipeline__DOT__ex_rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__hzd__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_rd = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__ex_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__ex_rs1 = vlSelfRef.pipeline__DOT__ex_rs1;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__imm_in 
        = vlSelfRef.pipeline__DOT__id_imm;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__id_rs2_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_target = 0U;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in = vlSelfRef.pipeline__DOT__id_pc;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_alu_ctrl;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_alu_result 
        = vlSelfRef.pipeline__DOT__mem_alu_result;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_data_mem 
        = vlSelfRef.pipeline__DOT__mem_alu_result;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__mem_alu_result;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data_in 
        = vlSelfRef.pipeline__DOT__id_rs1_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_data_wb 
        = vlSelfRef.pipeline__DOT__wb_reg_data;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_data_wb 
        = vlSelfRef.pipeline__DOT__wb_reg_data;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_reg_write 
        = vlSelfRef.pipeline__DOT__mem_reg_write;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__mem_reg_write;
    vlSelfRef.pipeline__DOT__fwd__DOT__mem_reg_write 
        = vlSelfRef.pipeline__DOT__mem_reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_rd 
        = vlSelfRef.pipeline__DOT__mem_rd;
    vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_in = vlSelfRef.pipeline__DOT__mem_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__mem_rd = vlSelfRef.pipeline__DOT__mem_rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__instr_in 
        = vlSelfRef.pipeline__DOT__if_instr;
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd 
        = (0x1fU & (vlSelfRef.pipeline__DOT__if_instr 
                    >> 7U));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct7 
        = (vlSelfRef.pipeline__DOT__if_instr >> 0x19U);
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct3 
        = (7U & (vlSelfRef.pipeline__DOT__if_instr 
                 >> 0xcU));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1 
        = (0x1fU & (vlSelfRef.pipeline__DOT__if_instr 
                    >> 0xfU));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2 
        = (0x1fU & (vlSelfRef.pipeline__DOT__if_instr 
                    >> 0x14U));
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode 
        = (0x7fU & vlSelfRef.pipeline__DOT__if_instr);
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__imm 
        = ((0x40U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                         ? ((((- (IData)(
                                                         (vlSelfRef.pipeline__DOT__if_instr 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.pipeline__DOT__if_instr 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.pipeline__DOT__if_instr) 
                                                | (0x800U 
                                                   & (vlSelfRef.pipeline__DOT__if_instr 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.pipeline__DOT__if_instr 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.pipeline__DOT__if_instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.pipeline__DOT__if_instr 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.pipeline__DOT__if_instr 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | (((0x1000U 
                                                        & (vlSelfRef.pipeline__DOT__if_instr 
                                                           >> 0x13U)) 
                                                       | (0x800U 
                                                          & (vlSelfRef.pipeline__DOT__if_instr 
                                                             << 4U))) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.pipeline__DOT__if_instr 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.pipeline__DOT__if_instr 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.pipeline__DOT__if_instr)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.pipeline__DOT__if_instr 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.pipeline__DOT__if_instr 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.pipeline__DOT__if_instr 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.pipeline__DOT__if_instr)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.pipeline__DOT__if_instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.pipeline__DOT__if_instr 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.pipeline__DOT__if_instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.pipeline__DOT__if_instr 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    vlSelfRef.pipeline__DOT__fwd__DOT__wb_rd = vlSelfRef.pipeline__DOT__wb_rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_wb = vlSelfRef.pipeline__DOT__wb_rd;
    vlSelfRef.pipeline__DOT__fwd__DOT__wb_reg_write 
        = vlSelfRef.pipeline__DOT__wb_reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write_wb 
        = vlSelfRef.pipeline__DOT__wb_reg_write;
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__ex_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__ex_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__id_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 3U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id = 1U;
    }
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 0U;
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__ex_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__ex_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__id_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 3U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__id_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id = 1U;
    }
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__ex_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__ex_rs2)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex = 1U;
    }
    vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex = 0U;
    if ((((IData)(vlSelfRef.pipeline__DOT__mem_reg_write) 
          & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_rd))) 
         & ((IData)(vlSelfRef.pipeline__DOT__mem_rd) 
            == (IData)(vlSelfRef.pipeline__DOT__ex_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex = 2U;
    } else if ((((IData)(vlSelfRef.pipeline__DOT__wb_reg_write) 
                 & (0U != (IData)(vlSelfRef.pipeline__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.pipeline__DOT__wb_rd) 
                   == (IData)(vlSelfRef.pipeline__DOT__ex_rs1)))) {
        vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex = 1U;
    }
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__wb_sel_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_to_reg_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem_write 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_write_in;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__jump_target 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__jump_target;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__branch_target 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__branch_target;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__funct3 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__funct3_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__funct3 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__funct3_in;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__write_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__rs2_data_in;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__jump 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__jump;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__reg_write_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__wb_sel_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_read_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_write_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__mem_to_reg_in;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__branch_taken 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__branch_taken;
    vlSelfRef.pipeline__DOT__if_stage__DOT__next_pc 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc;
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__if_id_flush 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_flush;
    vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_flush 
        = vlSelfRef.pipeline__DOT__id_ex_flush;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__mem_read 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_read_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rd_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__reg_write_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__funct3_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_ctrl 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_ctrl_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__addr 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__alu_result_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_mask__DOT__byte_enable;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jal 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jal_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jalr 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jalr_in;
    if (vlSelfRef.pipeline__DOT__id_jal) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump = 1U;
    } else if (vlSelfRef.pipeline__DOT__id_jalr) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump = 1U;
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump = vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_in;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__rd_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__imm 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__imm_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__imm 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__imm_in;
    if (vlSelfRef.pipeline__DOT__id_branch) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_target 
            = (vlSelfRef.pipeline__DOT__id_pc + vlSelfRef.pipeline__DOT__id_imm);
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_target 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__pc 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__pc 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__pc_in;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_ctrl 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_ctrl_in;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rd_data 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rd_data_wb;
    vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__instr 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__instr_in;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd_hzd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd;
    vlSelfRef.pipeline__DOT__rd_hzd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__funct7 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct7;
    vlSelfRef.pipeline__DOT__id_stage__DOT__funct3 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__funct3;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_hzd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1;
    vlSelfRef.pipeline__DOT__rs1_hzd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1 = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1))
            ? 0U : (((IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out) 
                     & ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1) 
                        == (IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out)))
                     ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                     : vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_
                    [vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1]));
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_hzd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2;
    vlSelfRef.pipeline__DOT__rs2_hzd = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2 = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2))
            ? 0U : (((IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_write_out) 
                     & ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2) 
                        == (IData)(vlSelfRef.pipeline__DOT__wb_stage__DOT__rd_out)))
                     ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                     : vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__register_
                    [vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2]));
    vlSelfRef.pipeline__DOT__hzd__DOT__load_hazard 
        = ((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out) 
           & ((((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out) 
                == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs1)) 
               | ((IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out) 
                  == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__rs2))) 
              & (0U != (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out))));
    vlSelfRef.pipeline__DOT__id_stage__DOT__imm = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__imm;
    vlSelfRef.pipeline__DOT__id_stage__DOT__opcode 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__decoder__DOT__opcode;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rd 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rd_wb;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__reg_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write_wb;
    vlSelfRef.pipeline__DOT__forward_rs2_id = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id;
    vlSelfRef.pipeline__DOT__forward_rs1_id = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id;
    vlSelfRef.pipeline__DOT__forward_rs2_ex = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex))
            ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_ex))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out)));
    vlSelfRef.pipeline__DOT__forward_rs1_ex = vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex))
            ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_ex))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out)));
    vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__next_pc 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__next_pc;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__id_ex_flush 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_flush;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memory__DOT__byte_enable 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__byte_enable;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jump;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_target;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__funct7 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__funct7;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__funct3 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__funct3;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__funct3;
    vlSelfRef.pipeline__DOT__hzd__DOT__id_rs1 = vlSelfRef.pipeline__DOT__rs1_hzd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rs1 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__out_data_rs1 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data_forwarded 
        = ((3U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id))
            ? vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs1_id))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data)));
    vlSelfRef.pipeline__DOT__hzd__DOT__id_rs2 = vlSelfRef.pipeline__DOT__rs2_hzd;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__rs2 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_file__DOT__out_data_rs2 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data;
    vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data_forwarded 
        = ((3U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id))
            ? vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out
            : ((2U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id))
                ? vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out
                : ((1U == (IData)(vlSelfRef.pipeline__DOT__fwd__DOT__forward_rs2_id))
                    ? vlSelfRef.pipeline__DOT__wb_stage__DOT__reg_data_out
                    : vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data)));
    vlSelfRef.pipeline__DOT__pc_write = (1U & (~ (IData)(vlSelfRef.pipeline__DOT__hzd__DOT__load_hazard)));
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__imm;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__opcode 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__opcode;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_read = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_write = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_to_reg = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_read = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jal = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jalr = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch_ctrl = 0U;
    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
    if ((0x40U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jal = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 2U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 2U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl 
                                = ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? 9U : 8U);
                        } else if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3) 
                                             >> 1U)))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jalr = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch = 1U;
                                vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch_ctrl 
                                    = ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                ? 5U
                                                : 4U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                ? 3U
                                                : 2U))
                                        : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                             ? 1U : 0U)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                            vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0xaU;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 0U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl 
                            = ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                        ? 2U : 3U) : 
                                   ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                     ? ((0U == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct7))
                                         ? 6U : 7U)
                                     : 4U)) : ((2U 
                                                & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct7))
                                                     ? 0U
                                                     : 1U))));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                        vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0xbU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 0U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl 
                        = ((4U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                            ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct7))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__funct3))
                                                   ? 5U
                                                   : 0U)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__opcode))) {
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = 1U;
                    vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = 0U;
                }
            }
        }
    }
    vlSelfRef.pipeline__DOT__id_stage__DOT__forward_rs2 
        = vlSelfRef.pipeline__DOT__forward_rs2_id;
    vlSelfRef.pipeline__DOT__id_stage__DOT__forward_rs1 
        = vlSelfRef.pipeline__DOT__forward_rs1_id;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_rs2 
        = vlSelfRef.pipeline__DOT__forward_rs2_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__op_B 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B = 
        ((IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out)
          ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out
          : vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data);
    vlSelfRef.pipeline__DOT__ex_stage__DOT__forward_rs1 
        = vlSelfRef.pipeline__DOT__forward_rs1_ex;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__op_A 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__rs1_data 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target = 0U;
    if (vlSelfRef.pipeline__DOT__id_jal) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target 
            = (vlSelfRef.pipeline__DOT__id_pc + vlSelfRef.pipeline__DOT__id_imm);
    } else if (vlSelfRef.pipeline__DOT__id_jalr) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target 
            = (0xfffffffeU & (vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
                              + vlSelfRef.pipeline__DOT__id_imm));
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A = 
        ((0xbU == (IData)(vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out))
          ? vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out
          : vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data);
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs1_data_forwarded;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__rs2_data_forwarded;
    vlSelfRef.pipeline__DOT__hzd__DOT__pc_write = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__hzd__DOT__if_id_write 
        = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__hzd__DOT__id_ex_write 
        = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__if_stage__DOT__pc_write 
        = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__if_id_write = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__id_ex_write = vlSelfRef.pipeline__DOT__pc_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_read 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_read;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__mem_to_reg 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__mem_to_reg;
    vlSelfRef.pipeline__DOT__id_stage__DOT__jal = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jal;
    vlSelfRef.pipeline__DOT__id_stage__DOT__jalr = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__jalr;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_src 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_src;
    vlSelfRef.pipeline__DOT__id_stage__DOT__wb_sel 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__wb_sel;
    vlSelfRef.pipeline__DOT__id_stage__DOT__branch_ctrl 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__branch_ctrl;
    vlSelfRef.pipeline__DOT__id_stage__DOT__alu_ctrl 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__op_B 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.dbg_ex_alu_op_b = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_op_b = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_b_debug 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_target 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__op_A 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.dbg_ex_alu_op_a = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.pipeline__DOT__dbg_ex_alu_op_a = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_a_debug 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                         ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                             ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                                + vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                             : vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                         : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                             ? ((vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                                 < vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                                 ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A, vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                                                ? 1U
                                                : 0U))))
            : ((4U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                ? ((2U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A, 
                                         (0x1fU & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B))
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           >> (0x1fU & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)))
                    : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           << (0x1fU & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B))
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           ^ vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)))
                : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           | vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           & vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B))
                    : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_alu_ctrl))
                        ? (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           - vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)
                        : (vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_A 
                           + vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_B)))));
    vlSelfRef.pipeline__DOT__if_stage__DOT__prog_counter__DOT__pc_write 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__pc_write;
    vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_write 
        = vlSelfRef.pipeline__DOT__if_id_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_write 
        = vlSelfRef.pipeline__DOT__id_ex_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__reg_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_read;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__mem_to_reg;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__jal;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__jalr;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__branch;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__alu_src;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__wb_sel;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__branch_ctrl;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_in 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__alu_ctrl;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__jump_target;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_result 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_result;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag 
        = (0U == vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_result);
    vlSelfRef.pipeline__DOT__if_stage__DOT__ifid_register__DOT__if_id_write 
        = vlSelfRef.pipeline__DOT__if_stage__DOT__if_id_write;
    vlSelfRef.pipeline__DOT__id_stage__DOT__idex_register__DOT__id_ex_write 
        = vlSelfRef.pipeline__DOT__id_stage__DOT__id_ex_write;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_result;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__zero_flag 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__alu_unit__DOT__zero_flag 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_taken = 0U;
    if (vlSelfRef.pipeline__DOT__id_branch) {
        vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_taken 
            = (1U & ((4U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                      ? ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl) 
                                   >> 1U))) && ((1U 
                                                 & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                                                 ? 
                                                (vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
                                                 >= vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data)
                                                 : 
                                                (vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data 
                                                 < vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data)))
                      : ((2U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                          ? ((1U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                              ? VL_GTES_III(32, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data)
                              : VL_LTS_III(32, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs1_data, vlSelfRef.pipeline__DOT__ex_stage__DOT__rs2_data))
                          : ((1U & (IData)(vlSelfRef.pipeline__DOT__id_branch_ctrl))
                              ? (~ (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag))
                              : (IData)(vlSelfRef.pipeline__DOT__ex_stage__DOT__zero_flag)))));
    }
    vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_taken 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_taken;
    vlSelfRef.pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_in 
        = vlSelfRef.pipeline__DOT__ex_stage__DOT__branch_taken;
}

VL_INLINE_OPT void Vpipeline___024root___nba_comb__TOP__0(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_comb__TOP__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_out 
        = ((4U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
            ? ((2U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                ? 0U : ((1U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                         ? ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                             ? (0xffffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)
                             : ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                 ? (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                    >> 0x10U) : 0U))
                         : ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                             ? ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                 ? (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                    >> 0x18U) : (0xffU 
                                                 & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                    >> 0x10U)))
                             : ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                 ? (0xffU & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                             >> 8U))
                                 : (0xffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)))))
            : ((2U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                ? ((1U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                    ? 0U : vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)
                : ((1U & (IData)(vlSelfRef.pipeline__DOT__ex_funct3))
                    ? ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                        ? (((- (IData)((1U & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data))
                        : ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                            ? (((- (IData)((vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                             >> 0x10U))
                            : 0U)) : ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                       ? ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                           >> 0x1fU))) 
                                               << 8U) 
                                              | (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                 >> 0x18U))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                              >> 0x17U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                    >> 0x10U))))
                                       : ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_stage__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                              >> 0xfU)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                    >> 8U)))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.pipeline__DOT__mem_stage__DOT__read_data)))))));
    vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_data 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_out;
    vlSelfRef.pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_in 
        = vlSelfRef.pipeline__DOT__mem_stage__DOT__mem_data;
}

void Vpipeline___024root___eval_triggers__act(Vpipeline___024root* vlSelf);

bool Vpipeline___024root___eval_phase__act(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__act\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpipeline___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpipeline___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpipeline___024root___eval_phase__nba(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__nba\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpipeline___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__ico(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__nba(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__act(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG

void Vpipeline___024root___eval(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vpipeline___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/pipeline.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpipeline___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpipeline___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/pipeline.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpipeline___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/pipeline.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpipeline___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpipeline___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpipeline___024root___eval_debug_assertions(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_debug_assertions\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
