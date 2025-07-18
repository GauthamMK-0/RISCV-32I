// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vex_stage_pip__pch.h"
#include "Vex_stage_pip.h"
#include "Vex_stage_pip___024root.h"

// FUNCTIONS
Vex_stage_pip__Syms::~Vex_stage_pip__Syms()
{
}

Vex_stage_pip__Syms::Vex_stage_pip__Syms(VerilatedContext* contextp, const char* namep, Vex_stage_pip* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ex_stage_pip.configure(this, name(), "ex_stage_pip", "ex_stage_pip", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ex_stage_pip__alu_unit.configure(this, name(), "ex_stage_pip.alu_unit", "alu_unit", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ex_stage_pip__brch_unit.configure(this, name(), "ex_stage_pip.brch_unit", "brch_unit", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ex_stage_pip__exmem_register.configure(this, name(), "ex_stage_pip.exmem_register", "exmem_register", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ex_stage_pip__jmp_unit.configure(this, name(), "ex_stage_pip.jmp_unit", "jmp_unit", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"alu_a_debug", &(TOP.alu_a_debug), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_b_debug", &(TOP.alu_b_debug), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_ctrl_debug", &(TOP.alu_ctrl_debug), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_ctrl_in", &(TOP.alu_ctrl_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_result_out", &(TOP.alu_result_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_src_in", &(TOP.alu_src_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch_ctrl_in", &(TOP.branch_ctrl_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch_in", &(TOP.branch_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch_taken_out", &(TOP.branch_taken_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch_target_out", &(TOP.branch_target_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"forward_data_mem", &(TOP.forward_data_mem), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"forward_data_wb", &(TOP.forward_data_wb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"forward_rs1", &(TOP.forward_rs1), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"forward_rs2", &(TOP.forward_rs2), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"funct3_in", &(TOP.funct3_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"funct3_out", &(TOP.funct3_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"imm_in", &(TOP.imm_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"jal_in", &(TOP.jal_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"jalr_in", &(TOP.jalr_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"jump_out", &(TOP.jump_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"jump_target_out", &(TOP.jump_target_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_read_in", &(TOP.mem_read_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_read_out", &(TOP.mem_read_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.mem_to_reg_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.mem_to_reg_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_write_in", &(TOP.mem_write_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_write_out", &(TOP.mem_write_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_in", &(TOP.pc_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_out", &(TOP.pc_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_in", &(TOP.rd_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_out", &(TOP.rd_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_in", &(TOP.reg_write_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_out", &(TOP.reg_write_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs1_data_in", &(TOP.rs1_data_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs1_in", &(TOP.rs1_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs1_out", &(TOP.rs1_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_data_in", &(TOP.rs2_data_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_data_out", &(TOP.rs2_data_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_in", &(TOP.rs2_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_out", &(TOP.rs2_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"wb_sel_in", &(TOP.wb_sel_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"wb_sel_out", &(TOP.wb_sel_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_A", &(TOP.ex_stage_pip__DOT__alu_A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_B", &(TOP.ex_stage_pip__DOT__alu_B), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_a_debug", &(TOP.ex_stage_pip__DOT__alu_a_debug), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_b_debug", &(TOP.ex_stage_pip__DOT__alu_b_debug), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_ctrl_debug", &(TOP.ex_stage_pip__DOT__alu_ctrl_debug), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_ctrl_in", &(TOP.ex_stage_pip__DOT__alu_ctrl_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_result", &(TOP.ex_stage_pip__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_result_out", &(TOP.ex_stage_pip__DOT__alu_result_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"alu_src_in", &(TOP.ex_stage_pip__DOT__alu_src_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"branch_ctrl_in", &(TOP.ex_stage_pip__DOT__branch_ctrl_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"branch_in", &(TOP.ex_stage_pip__DOT__branch_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"branch_taken", &(TOP.ex_stage_pip__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"branch_taken_out", &(TOP.ex_stage_pip__DOT__branch_taken_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"branch_target", &(TOP.ex_stage_pip__DOT__branch_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"branch_target_out", &(TOP.ex_stage_pip__DOT__branch_target_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"clk", &(TOP.ex_stage_pip__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"forward_data_mem", &(TOP.ex_stage_pip__DOT__forward_data_mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"forward_data_wb", &(TOP.ex_stage_pip__DOT__forward_data_wb), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"forward_rs1", &(TOP.ex_stage_pip__DOT__forward_rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"forward_rs2", &(TOP.ex_stage_pip__DOT__forward_rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"funct3_in", &(TOP.ex_stage_pip__DOT__funct3_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"funct3_out", &(TOP.ex_stage_pip__DOT__funct3_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"imm_in", &(TOP.ex_stage_pip__DOT__imm_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"jal_in", &(TOP.ex_stage_pip__DOT__jal_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"jalr_in", &(TOP.ex_stage_pip__DOT__jalr_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"jump", &(TOP.ex_stage_pip__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"jump_out", &(TOP.ex_stage_pip__DOT__jump_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"jump_target", &(TOP.ex_stage_pip__DOT__jump_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"jump_target_out", &(TOP.ex_stage_pip__DOT__jump_target_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"mem_read_in", &(TOP.ex_stage_pip__DOT__mem_read_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"mem_read_out", &(TOP.ex_stage_pip__DOT__mem_read_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.ex_stage_pip__DOT__mem_to_reg_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.ex_stage_pip__DOT__mem_to_reg_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"mem_write_in", &(TOP.ex_stage_pip__DOT__mem_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"mem_write_out", &(TOP.ex_stage_pip__DOT__mem_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"pc_in", &(TOP.ex_stage_pip__DOT__pc_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"pc_out", &(TOP.ex_stage_pip__DOT__pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rd_in", &(TOP.ex_stage_pip__DOT__rd_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rd_out", &(TOP.ex_stage_pip__DOT__rd_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"reg_write_in", &(TOP.ex_stage_pip__DOT__reg_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"reg_write_out", &(TOP.ex_stage_pip__DOT__reg_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs1_data", &(TOP.ex_stage_pip__DOT__rs1_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs1_data_in", &(TOP.ex_stage_pip__DOT__rs1_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs1_in", &(TOP.ex_stage_pip__DOT__rs1_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs1_out", &(TOP.ex_stage_pip__DOT__rs1_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs2_data", &(TOP.ex_stage_pip__DOT__rs2_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs2_data_in", &(TOP.ex_stage_pip__DOT__rs2_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs2_data_out", &(TOP.ex_stage_pip__DOT__rs2_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs2_in", &(TOP.ex_stage_pip__DOT__rs2_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rs2_out", &(TOP.ex_stage_pip__DOT__rs2_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"rst", &(TOP.ex_stage_pip__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"wb_sel_in", &(TOP.ex_stage_pip__DOT__wb_sel_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"wb_sel_out", &(TOP.ex_stage_pip__DOT__wb_sel_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ex_stage_pip.varInsert(__Vfinal,"zero_flag", &(TOP.ex_stage_pip__DOT__zero_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"ADD", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__ADD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"ADD_PC", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__ADD_PC))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"AND", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__AND))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"OR", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__OR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"PASS", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__PASS))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"SLL", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__SLL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"SLT", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__SLT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"SLTU", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__SLTU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"SRA", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__SRA))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"SRL", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__SRL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"SUB", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__SUB))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"XOR", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__alu_unit__DOT__XOR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"alu_ctrl", &(TOP.ex_stage_pip__DOT__alu_unit__DOT__alu_ctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"alu_result", &(TOP.ex_stage_pip__DOT__alu_unit__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"op_A", &(TOP.ex_stage_pip__DOT__alu_unit__DOT__op_A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"op_B", &(TOP.ex_stage_pip__DOT__alu_unit__DOT__op_B), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__alu_unit.varInsert(__Vfinal,"zero_flag", &(TOP.ex_stage_pip__DOT__alu_unit__DOT__zero_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"BEQ", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__brch_unit__DOT__BEQ))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"BGE", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__brch_unit__DOT__BGE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"BGEU", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__brch_unit__DOT__BGEU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"BLT", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__brch_unit__DOT__BLT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"BLTU", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__brch_unit__DOT__BLTU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"BNE", const_cast<void*>(static_cast<const void*>(&(TOP.ex_stage_pip__DOT__brch_unit__DOT__BNE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"branch", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"branch_ctrl", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__branch_ctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"branch_taken", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"branch_target", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__branch_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"imm", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"op_A", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__op_A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"op_B", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__op_B), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"pc", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__brch_unit.varInsert(__Vfinal,"zero_flag", &(TOP.ex_stage_pip__DOT__brch_unit__DOT__zero_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"alu_result_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__alu_result_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"alu_result_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"branch_taken_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"branch_taken_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"branch_target_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__branch_target_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"branch_target_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"clk", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"funct3_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__funct3_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"funct3_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__funct3_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"jump_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__jump_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"jump_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__jump_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"jump_target_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__jump_target_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"jump_target_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"mem_read_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__mem_read_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"mem_read_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__mem_read_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"mem_write_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__mem_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"mem_write_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__mem_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"pc_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__pc_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"pc_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rd_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rd_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rd_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rd_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"reg_write_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__reg_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"reg_write_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__reg_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rs1_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rs1_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rs1_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rs1_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rs2_data_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rs2_data_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rs2_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rs2_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rs2_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rs2_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"rst", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"wb_sel_in", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__wb_sel_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ex_stage_pip__exmem_register.varInsert(__Vfinal,"wb_sel_out", &(TOP.ex_stage_pip__DOT__exmem_register__DOT__wb_sel_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ex_stage_pip__jmp_unit.varInsert(__Vfinal,"imm", &(TOP.ex_stage_pip__DOT__jmp_unit__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__jmp_unit.varInsert(__Vfinal,"jal", &(TOP.ex_stage_pip__DOT__jmp_unit__DOT__jal), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__jmp_unit.varInsert(__Vfinal,"jalr", &(TOP.ex_stage_pip__DOT__jmp_unit__DOT__jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__jmp_unit.varInsert(__Vfinal,"jump", &(TOP.ex_stage_pip__DOT__jmp_unit__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ex_stage_pip__jmp_unit.varInsert(__Vfinal,"jump_target", &(TOP.ex_stage_pip__DOT__jmp_unit__DOT__jump_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__jmp_unit.varInsert(__Vfinal,"pc", &(TOP.ex_stage_pip__DOT__jmp_unit__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ex_stage_pip__jmp_unit.varInsert(__Vfinal,"rs1_data", &(TOP.ex_stage_pip__DOT__jmp_unit__DOT__rs1_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
    }
}
