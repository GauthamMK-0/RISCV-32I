// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip.h"
#include "Vid_stage_pip___024root.h"

// FUNCTIONS
Vid_stage_pip__Syms::~Vid_stage_pip__Syms()
{
}

Vid_stage_pip__Syms::Vid_stage_pip__Syms(VerilatedContext* contextp, const char* namep, Vid_stage_pip* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(39);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_id_stage_pip.configure(this, name(), "id_stage_pip", "id_stage_pip", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_id_stage_pip__control.configure(this, name(), "id_stage_pip.control", "control", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_id_stage_pip__decoder.configure(this, name(), "id_stage_pip.decoder", "decoder", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_id_stage_pip__idex_register.configure(this, name(), "id_stage_pip.idex_register", "idex_register", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_id_stage_pip__reg_file.configure(this, name(), "id_stage_pip.reg_file", "reg_file", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"alu_ctrl_out", &(TOP.alu_ctrl_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_src_out", &(TOP.alu_src_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch_ctrl_out", &(TOP.branch_ctrl_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch_out", &(TOP.branch_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"ex_alu_result", &(TOP.ex_alu_result), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"ex_rd", &(TOP.ex_rd), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"ex_reg_write", &(TOP.ex_reg_write), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"forward_rs1", &(TOP.forward_rs1), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"forward_rs2", &(TOP.forward_rs2), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"funct3_out", &(TOP.funct3_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"id_ex_flush", &(TOP.id_ex_flush), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"id_ex_write", &(TOP.id_ex_write), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"imm_out", &(TOP.imm_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"instr_in", &(TOP.instr_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"jal_out", &(TOP.jal_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"jalr_out", &(TOP.jalr_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_alu_result", &(TOP.mem_alu_result), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_rd", &(TOP.mem_rd), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_read_out", &(TOP.mem_read_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_reg_write", &(TOP.mem_reg_write), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.mem_to_reg_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_write_out", &(TOP.mem_write_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_in", &(TOP.pc_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_out", &(TOP.pc_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_data_wb", &(TOP.rd_data_wb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_hzd", &(TOP.rd_hzd), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_out", &(TOP.rd_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_wb", &(TOP.rd_wb), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_out", &(TOP.reg_write_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_wb", &(TOP.reg_write_wb), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs1_data_out", &(TOP.rs1_data_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs1_hzd", &(TOP.rs1_hzd), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs1_out", &(TOP.rs1_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_data_out", &(TOP.rs2_data_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_hzd", &(TOP.rs2_hzd), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_out", &(TOP.rs2_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"wb_sel_out", &(TOP.wb_sel_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"alu_ctrl", &(TOP.id_stage_pip__DOT__alu_ctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"alu_ctrl_out", &(TOP.id_stage_pip__DOT__alu_ctrl_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"alu_src", &(TOP.id_stage_pip__DOT__alu_src), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"alu_src_out", &(TOP.id_stage_pip__DOT__alu_src_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"branch", &(TOP.id_stage_pip__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"branch_ctrl", &(TOP.id_stage_pip__DOT__branch_ctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"branch_ctrl_out", &(TOP.id_stage_pip__DOT__branch_ctrl_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"branch_out", &(TOP.id_stage_pip__DOT__branch_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"clk", &(TOP.id_stage_pip__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"ex_alu_result", &(TOP.id_stage_pip__DOT__ex_alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"ex_rd", &(TOP.id_stage_pip__DOT__ex_rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"ex_reg_write", &(TOP.id_stage_pip__DOT__ex_reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"forward_rs1", &(TOP.id_stage_pip__DOT__forward_rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"forward_rs2", &(TOP.id_stage_pip__DOT__forward_rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"funct3", &(TOP.id_stage_pip__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"funct3_out", &(TOP.id_stage_pip__DOT__funct3_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"funct7", &(TOP.id_stage_pip__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"id_ex_flush", &(TOP.id_stage_pip__DOT__id_ex_flush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"id_ex_write", &(TOP.id_stage_pip__DOT__id_ex_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"imm", &(TOP.id_stage_pip__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"imm_out", &(TOP.id_stage_pip__DOT__imm_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"instr_in", &(TOP.id_stage_pip__DOT__instr_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"jal", &(TOP.id_stage_pip__DOT__jal), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"jal_out", &(TOP.id_stage_pip__DOT__jal_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"jalr", &(TOP.id_stage_pip__DOT__jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"jalr_out", &(TOP.id_stage_pip__DOT__jalr_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_alu_result", &(TOP.id_stage_pip__DOT__mem_alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_rd", &(TOP.id_stage_pip__DOT__mem_rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_read", &(TOP.id_stage_pip__DOT__mem_read), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_read_out", &(TOP.id_stage_pip__DOT__mem_read_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_reg_write", &(TOP.id_stage_pip__DOT__mem_reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_to_reg", &(TOP.id_stage_pip__DOT__mem_to_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.id_stage_pip__DOT__mem_to_reg_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_write", &(TOP.id_stage_pip__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"mem_write_out", &(TOP.id_stage_pip__DOT__mem_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"opcode", &(TOP.id_stage_pip__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"pc_in", &(TOP.id_stage_pip__DOT__pc_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"pc_out", &(TOP.id_stage_pip__DOT__pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rd", &(TOP.id_stage_pip__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rd_data_wb", &(TOP.id_stage_pip__DOT__rd_data_wb), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rd_hzd", &(TOP.id_stage_pip__DOT__rd_hzd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rd_out", &(TOP.id_stage_pip__DOT__rd_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rd_wb", &(TOP.id_stage_pip__DOT__rd_wb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"reg_write", &(TOP.id_stage_pip__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"reg_write_out", &(TOP.id_stage_pip__DOT__reg_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"reg_write_wb", &(TOP.id_stage_pip__DOT__reg_write_wb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs1", &(TOP.id_stage_pip__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs1_data", &(TOP.id_stage_pip__DOT__rs1_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs1_data_forwarded", &(TOP.id_stage_pip__DOT__rs1_data_forwarded), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs1_data_out", &(TOP.id_stage_pip__DOT__rs1_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs1_hzd", &(TOP.id_stage_pip__DOT__rs1_hzd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs1_out", &(TOP.id_stage_pip__DOT__rs1_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs2", &(TOP.id_stage_pip__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs2_data", &(TOP.id_stage_pip__DOT__rs2_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs2_data_forwarded", &(TOP.id_stage_pip__DOT__rs2_data_forwarded), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs2_data_out", &(TOP.id_stage_pip__DOT__rs2_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs2_hzd", &(TOP.id_stage_pip__DOT__rs2_hzd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rs2_out", &(TOP.id_stage_pip__DOT__rs2_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"rst", &(TOP.id_stage_pip__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"wb_sel", &(TOP.id_stage_pip__DOT__wb_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip.varInsert(__Vfinal,"wb_sel_out", &(TOP.id_stage_pip__DOT__wb_sel_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"ADD", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__ADD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"ADD_PC", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__ADD_PC))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"AND", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__AND))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"BEQ", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__BEQ))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"BGE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__BGE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"BGEU", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__BGEU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"BLT", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__BLT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"BLTU", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__BLTU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"BNE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__BNE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"B_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__B_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"I_TYPE_ALU", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__I_TYPE_ALU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"I_TYPE_JALR", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__I_TYPE_JALR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"I_TYPE_LOAD", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__I_TYPE_LOAD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"J_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__J_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"OR", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__OR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"PASS", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__PASS))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"R_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__R_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"SLL", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__SLL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"SLT", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__SLT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"SLTU", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__SLTU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"SRA", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__SRA))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"SRL", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__SRL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"SUB", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__SUB))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"S_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__S_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"U_TYPE_AUIPC", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__U_TYPE_AUIPC))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"U_TYPE_LUI", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__U_TYPE_LUI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"XOR", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__control__DOT__XOR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"alu_ctrl", &(TOP.id_stage_pip__DOT__control__DOT__alu_ctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"alu_src", &(TOP.id_stage_pip__DOT__control__DOT__alu_src), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"branch", &(TOP.id_stage_pip__DOT__control__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"branch_ctrl", &(TOP.id_stage_pip__DOT__control__DOT__branch_ctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"funct3", &(TOP.id_stage_pip__DOT__control__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"funct7", &(TOP.id_stage_pip__DOT__control__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"jal", &(TOP.id_stage_pip__DOT__control__DOT__jal), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"jalr", &(TOP.id_stage_pip__DOT__control__DOT__jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"mem_read", &(TOP.id_stage_pip__DOT__control__DOT__mem_read), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"mem_to_reg", &(TOP.id_stage_pip__DOT__control__DOT__mem_to_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"mem_write", &(TOP.id_stage_pip__DOT__control__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"opcode", &(TOP.id_stage_pip__DOT__control__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"reg_write", &(TOP.id_stage_pip__DOT__control__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__control.varInsert(__Vfinal,"wb_sel", &(TOP.id_stage_pip__DOT__control__DOT__wb_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"B_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__B_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"I_TYPE_ALU", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__I_TYPE_ALU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"I_TYPE_JALR", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__I_TYPE_JALR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"I_TYPE_LOAD", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__I_TYPE_LOAD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"J_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__J_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"R_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__R_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"S_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__S_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"U_TYPE_AUIPC", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__U_TYPE_AUIPC))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"U_TYPE_LUI", const_cast<void*>(static_cast<const void*>(&(TOP.id_stage_pip__DOT__decoder__DOT__U_TYPE_LUI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"funct3", &(TOP.id_stage_pip__DOT__decoder__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"funct7", &(TOP.id_stage_pip__DOT__decoder__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"imm", &(TOP.id_stage_pip__DOT__decoder__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"instr", &(TOP.id_stage_pip__DOT__decoder__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"opcode", &(TOP.id_stage_pip__DOT__decoder__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"rd", &(TOP.id_stage_pip__DOT__decoder__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"rs1", &(TOP.id_stage_pip__DOT__decoder__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__decoder.varInsert(__Vfinal,"rs2", &(TOP.id_stage_pip__DOT__decoder__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"alu_ctrl_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"alu_ctrl_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"alu_src_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__alu_src_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"alu_src_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__alu_src_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"branch_ctrl_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"branch_ctrl_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"branch_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__branch_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"branch_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__branch_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"clk", &(TOP.id_stage_pip__DOT__idex_register__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"funct3_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__funct3_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"funct3_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__funct3_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"id_ex_flush", &(TOP.id_stage_pip__DOT__idex_register__DOT__id_ex_flush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"id_ex_write", &(TOP.id_stage_pip__DOT__idex_register__DOT__id_ex_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"imm_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__imm_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"imm_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__imm_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"jal_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__jal_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"jal_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__jal_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"jalr_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__jalr_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"jalr_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__jalr_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"mem_read_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__mem_read_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"mem_read_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__mem_read_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"mem_write_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__mem_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"mem_write_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__mem_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"pc_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__pc_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"pc_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rd_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__rd_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rd_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__rd_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"reg_write_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__reg_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"reg_write_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__reg_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs1_data_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs1_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs1_data_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs1_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs1_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs1_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs1_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs1_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs2_data_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs2_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs2_data_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs2_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs2_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs2_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rs2_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__rs2_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"rst", &(TOP.id_stage_pip__DOT__idex_register__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"wb_sel_in", &(TOP.id_stage_pip__DOT__idex_register__DOT__wb_sel_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip__idex_register.varInsert(__Vfinal,"wb_sel_out", &(TOP.id_stage_pip__DOT__idex_register__DOT__wb_sel_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"clk", &(TOP.id_stage_pip__DOT__reg_file__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"i", &(TOP.id_stage_pip__DOT__reg_file__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"out_data_rs1", &(TOP.id_stage_pip__DOT__reg_file__DOT__out_data_rs1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"out_data_rs2", &(TOP.id_stage_pip__DOT__reg_file__DOT__out_data_rs2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"rd", &(TOP.id_stage_pip__DOT__reg_file__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"rd_data", &(TOP.id_stage_pip__DOT__reg_file__DOT__rd_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"reg_write", &(TOP.id_stage_pip__DOT__reg_file__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"register_", &(TOP.id_stage_pip__DOT__reg_file__DOT__register_), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,31 ,31,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"rs1", &(TOP.id_stage_pip__DOT__reg_file__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"rs2", &(TOP.id_stage_pip__DOT__reg_file__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_id_stage_pip__reg_file.varInsert(__Vfinal,"rst", &(TOP.id_stage_pip__DOT__reg_file__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
