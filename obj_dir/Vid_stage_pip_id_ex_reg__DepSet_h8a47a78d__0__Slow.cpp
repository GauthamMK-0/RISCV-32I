// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip_id_ex_reg.h"

VL_ATTR_COLD void Vid_stage_pip_id_ex_reg___ctor_var_reset(Vid_stage_pip_id_ex_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_id_ex_reg___ctor_var_reset\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->rs1_data_in = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->imm_in = VL_RAND_RESET_I(32);
    vlSelf->rs1_in = VL_RAND_RESET_I(5);
    vlSelf->rs2_in = VL_RAND_RESET_I(5);
    vlSelf->rd_in = VL_RAND_RESET_I(5);
    vlSelf->alu_ctrl_in = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl_in = VL_RAND_RESET_I(3);
    vlSelf->reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->alu_src_in = VL_RAND_RESET_I(1);
    vlSelf->branch_in = VL_RAND_RESET_I(1);
    vlSelf->jal_in = VL_RAND_RESET_I(1);
    vlSelf->jalr_in = VL_RAND_RESET_I(1);
    vlSelf->rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->imm_out = VL_RAND_RESET_I(32);
    vlSelf->rs1_out = VL_RAND_RESET_I(5);
    vlSelf->rs2_out = VL_RAND_RESET_I(5);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->branch_out = VL_RAND_RESET_I(1);
    vlSelf->jal_out = VL_RAND_RESET_I(1);
    vlSelf->jalr_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__imm_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__rd_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__branch_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__jal_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__jalr_out = VL_RAND_RESET_I(1);
}
