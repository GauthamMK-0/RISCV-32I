// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip_id_stage_pip.h"

VL_ATTR_COLD void Vid_stage_pip_id_stage_pip___ctor_var_reset(Vid_stage_pip_id_stage_pip* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vid_stage_pip_id_stage_pip___ctor_var_reset\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->instr_in = VL_RAND_RESET_I(32);
    vlSelf->pc_in = VL_RAND_RESET_I(32);
    vlSelf->reg_write_wb = VL_RAND_RESET_I(1);
    vlSelf->rd_wb = VL_RAND_RESET_I(5);
    vlSelf->rd_data_wb = VL_RAND_RESET_I(32);
    vlSelf->rs1_hzd = VL_RAND_RESET_I(5);
    vlSelf->rs2_hzd = VL_RAND_RESET_I(5);
    vlSelf->rd_hzd = VL_RAND_RESET_I(5);
    vlSelf->rs1_out = VL_RAND_RESET_I(5);
    vlSelf->rs2_out = VL_RAND_RESET_I(5);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->imm_out = VL_RAND_RESET_I(32);
    vlSelf->alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->jal_out = VL_RAND_RESET_I(1);
    vlSelf->jalr_out = VL_RAND_RESET_I(1);
    vlSelf->branch_out = VL_RAND_RESET_I(1);
    vlSelf->alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->imm = VL_RAND_RESET_I(32);
    vlSelf->rs1_data = VL_RAND_RESET_I(32);
    vlSelf->rs2_data = VL_RAND_RESET_I(32);
    vlSelf->alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->reg_write = VL_RAND_RESET_I(1);
    vlSelf->mem_read = VL_RAND_RESET_I(1);
    vlSelf->mem_write = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->jal = VL_RAND_RESET_I(1);
    vlSelf->jalr = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->alu_src = VL_RAND_RESET_I(1);
}
