// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid_stage_pip.h for the primary calling header

#ifndef VERILATED_VID_STAGE_PIP___024ROOT_H_
#define VERILATED_VID_STAGE_PIP___024ROOT_H_  // guard

#include "verilated.h"


class Vid_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vid_stage_pip___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(id_ex_flush,0,0);
        VL_IN8(id_ex_write,0,0);
        VL_IN8(reg_write_wb,0,0);
        VL_IN8(rd_wb,4,0);
        VL_IN8(ex_rd,4,0);
        VL_IN8(mem_rd,4,0);
        VL_IN8(ex_reg_write,0,0);
        VL_IN8(mem_reg_write,0,0);
        VL_IN8(forward_rs1,1,0);
        VL_IN8(forward_rs2,1,0);
        VL_OUT8(rs1_hzd,4,0);
        VL_OUT8(rs2_hzd,4,0);
        VL_OUT8(rd_hzd,4,0);
        VL_OUT8(rs1_out,4,0);
        VL_OUT8(rs2_out,4,0);
        VL_OUT8(rd_out,4,0);
        VL_OUT8(funct3_out,2,0);
        VL_OUT8(alu_ctrl_out,3,0);
        VL_OUT8(branch_ctrl_out,2,0);
        VL_OUT8(wb_sel_out,1,0);
        VL_OUT8(reg_write_out,0,0);
        VL_OUT8(mem_read_out,0,0);
        VL_OUT8(mem_write_out,0,0);
        VL_OUT8(mem_to_reg_out,0,0);
        VL_OUT8(jal_out,0,0);
        VL_OUT8(jalr_out,0,0);
        VL_OUT8(branch_out,0,0);
        VL_OUT8(alu_src_out,0,0);
        CData/*0:0*/ id_stage_pip__DOT__clk;
        CData/*0:0*/ id_stage_pip__DOT__rst;
        CData/*0:0*/ id_stage_pip__DOT__id_ex_flush;
        CData/*0:0*/ id_stage_pip__DOT__id_ex_write;
        CData/*0:0*/ id_stage_pip__DOT__reg_write_wb;
        CData/*4:0*/ id_stage_pip__DOT__rd_wb;
        CData/*4:0*/ id_stage_pip__DOT__ex_rd;
        CData/*4:0*/ id_stage_pip__DOT__mem_rd;
        CData/*0:0*/ id_stage_pip__DOT__ex_reg_write;
        CData/*0:0*/ id_stage_pip__DOT__mem_reg_write;
        CData/*1:0*/ id_stage_pip__DOT__forward_rs1;
        CData/*1:0*/ id_stage_pip__DOT__forward_rs2;
        CData/*4:0*/ id_stage_pip__DOT__rs1_hzd;
        CData/*4:0*/ id_stage_pip__DOT__rs2_hzd;
        CData/*4:0*/ id_stage_pip__DOT__rd_hzd;
        CData/*4:0*/ id_stage_pip__DOT__rs1_out;
        CData/*4:0*/ id_stage_pip__DOT__rs2_out;
        CData/*4:0*/ id_stage_pip__DOT__rd_out;
        CData/*2:0*/ id_stage_pip__DOT__funct3_out;
        CData/*3:0*/ id_stage_pip__DOT__alu_ctrl_out;
        CData/*2:0*/ id_stage_pip__DOT__branch_ctrl_out;
        CData/*1:0*/ id_stage_pip__DOT__wb_sel_out;
        CData/*0:0*/ id_stage_pip__DOT__reg_write_out;
        CData/*0:0*/ id_stage_pip__DOT__mem_read_out;
        CData/*0:0*/ id_stage_pip__DOT__mem_write_out;
        CData/*0:0*/ id_stage_pip__DOT__mem_to_reg_out;
        CData/*0:0*/ id_stage_pip__DOT__jal_out;
        CData/*0:0*/ id_stage_pip__DOT__jalr_out;
        CData/*0:0*/ id_stage_pip__DOT__branch_out;
        CData/*0:0*/ id_stage_pip__DOT__alu_src_out;
        CData/*6:0*/ id_stage_pip__DOT__opcode;
        CData/*2:0*/ id_stage_pip__DOT__funct3;
        CData/*6:0*/ id_stage_pip__DOT__funct7;
        CData/*4:0*/ id_stage_pip__DOT__rs1;
    };
    struct {
        CData/*4:0*/ id_stage_pip__DOT__rs2;
        CData/*4:0*/ id_stage_pip__DOT__rd;
        CData/*3:0*/ id_stage_pip__DOT__alu_ctrl;
        CData/*2:0*/ id_stage_pip__DOT__branch_ctrl;
        CData/*1:0*/ id_stage_pip__DOT__wb_sel;
        CData/*0:0*/ id_stage_pip__DOT__reg_write;
        CData/*0:0*/ id_stage_pip__DOT__mem_read;
        CData/*0:0*/ id_stage_pip__DOT__mem_write;
        CData/*0:0*/ id_stage_pip__DOT__mem_to_reg;
        CData/*0:0*/ id_stage_pip__DOT__jal;
        CData/*0:0*/ id_stage_pip__DOT__jalr;
        CData/*0:0*/ id_stage_pip__DOT__branch;
        CData/*0:0*/ id_stage_pip__DOT__alu_src;
        CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__opcode;
        CData/*4:0*/ id_stage_pip__DOT__decoder__DOT__rd;
        CData/*4:0*/ id_stage_pip__DOT__decoder__DOT__rs1;
        CData/*4:0*/ id_stage_pip__DOT__decoder__DOT__rs2;
        CData/*2:0*/ id_stage_pip__DOT__decoder__DOT__funct3;
        CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__funct7;
        CData/*6:0*/ id_stage_pip__DOT__control__DOT__opcode;
        CData/*2:0*/ id_stage_pip__DOT__control__DOT__funct3;
        CData/*6:0*/ id_stage_pip__DOT__control__DOT__funct7;
        CData/*3:0*/ id_stage_pip__DOT__control__DOT__alu_ctrl;
        CData/*2:0*/ id_stage_pip__DOT__control__DOT__branch_ctrl;
        CData/*1:0*/ id_stage_pip__DOT__control__DOT__wb_sel;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__reg_write;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__mem_read;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__mem_write;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__mem_to_reg;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__jal;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__jalr;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__branch;
        CData/*0:0*/ id_stage_pip__DOT__control__DOT__alu_src;
        CData/*0:0*/ id_stage_pip__DOT__reg_file__DOT__clk;
        CData/*0:0*/ id_stage_pip__DOT__reg_file__DOT__rst;
        CData/*0:0*/ id_stage_pip__DOT__reg_file__DOT__reg_write;
        CData/*4:0*/ id_stage_pip__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ id_stage_pip__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ id_stage_pip__DOT__reg_file__DOT__rd;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__clk;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__rst;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__id_ex_write;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__id_ex_flush;
        CData/*2:0*/ id_stage_pip__DOT__idex_register__DOT__funct3_in;
        CData/*4:0*/ id_stage_pip__DOT__idex_register__DOT__rs1_in;
        CData/*4:0*/ id_stage_pip__DOT__idex_register__DOT__rs2_in;
        CData/*4:0*/ id_stage_pip__DOT__idex_register__DOT__rd_in;
        CData/*3:0*/ id_stage_pip__DOT__idex_register__DOT__alu_ctrl_in;
        CData/*2:0*/ id_stage_pip__DOT__idex_register__DOT__branch_ctrl_in;
        CData/*1:0*/ id_stage_pip__DOT__idex_register__DOT__wb_sel_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__reg_write_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__mem_read_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__mem_write_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__mem_to_reg_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__alu_src_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__branch_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__jal_in;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__jalr_in;
        CData/*2:0*/ id_stage_pip__DOT__idex_register__DOT__funct3_out;
        CData/*4:0*/ id_stage_pip__DOT__idex_register__DOT__rs1_out;
        CData/*4:0*/ id_stage_pip__DOT__idex_register__DOT__rs2_out;
        CData/*4:0*/ id_stage_pip__DOT__idex_register__DOT__rd_out;
        CData/*3:0*/ id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out;
        CData/*2:0*/ id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out;
    };
    struct {
        CData/*1:0*/ id_stage_pip__DOT__idex_register__DOT__wb_sel_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__reg_write_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__mem_read_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__mem_write_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__alu_src_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__branch_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__jal_out;
        CData/*0:0*/ id_stage_pip__DOT__idex_register__DOT__jalr_out;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(instr_in,31,0);
        VL_IN(pc_in,31,0);
        VL_IN(rd_data_wb,31,0);
        VL_IN(ex_alu_result,31,0);
        VL_IN(mem_alu_result,31,0);
        VL_OUT(pc_out,31,0);
        VL_OUT(rs1_data_out,31,0);
        VL_OUT(rs2_data_out,31,0);
        VL_OUT(imm_out,31,0);
        IData/*31:0*/ id_stage_pip__DOT__instr_in;
        IData/*31:0*/ id_stage_pip__DOT__pc_in;
        IData/*31:0*/ id_stage_pip__DOT__rd_data_wb;
        IData/*31:0*/ id_stage_pip__DOT__ex_alu_result;
        IData/*31:0*/ id_stage_pip__DOT__mem_alu_result;
        IData/*31:0*/ id_stage_pip__DOT__pc_out;
        IData/*31:0*/ id_stage_pip__DOT__rs1_data_out;
        IData/*31:0*/ id_stage_pip__DOT__rs2_data_out;
        IData/*31:0*/ id_stage_pip__DOT__imm_out;
        IData/*31:0*/ id_stage_pip__DOT__imm;
        IData/*31:0*/ id_stage_pip__DOT__rs1_data;
        IData/*31:0*/ id_stage_pip__DOT__rs2_data;
        IData/*31:0*/ id_stage_pip__DOT__rs1_data_forwarded;
        IData/*31:0*/ id_stage_pip__DOT__rs2_data_forwarded;
        IData/*31:0*/ id_stage_pip__DOT__decoder__DOT__instr;
        IData/*31:0*/ id_stage_pip__DOT__decoder__DOT__imm;
        IData/*31:0*/ id_stage_pip__DOT__reg_file__DOT__rd_data;
        IData/*31:0*/ id_stage_pip__DOT__reg_file__DOT__out_data_rs1;
        IData/*31:0*/ id_stage_pip__DOT__reg_file__DOT__out_data_rs2;
        IData/*31:0*/ id_stage_pip__DOT__reg_file__DOT__i;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__pc_in;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__rs1_data_in;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__rs2_data_in;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__imm_in;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__pc_out;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__rs1_data_out;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__rs2_data_out;
        IData/*31:0*/ id_stage_pip__DOT__idex_register__DOT__imm_out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> id_stage_pip__DOT__reg_file__DOT__register_;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vid_stage_pip__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__R_TYPE = 0x33U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__I_TYPE_LOAD = 3U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__I_TYPE_ALU = 0x13U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__I_TYPE_JALR = 0x67U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__S_TYPE = 0x23U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__B_TYPE = 0x63U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__J_TYPE = 0x6fU;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__U_TYPE_LUI = 0x37U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__decoder__DOT__U_TYPE_AUIPC = 0x17U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__ADD = 0U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__SUB = 1U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__AND = 2U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__OR = 3U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__XOR = 4U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__SLL = 5U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__SRL = 6U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__SRA = 7U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__SLT = 8U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__SLTU = 9U;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__PASS = 0x0aU;
    static constexpr CData/*3:0*/ id_stage_pip__DOT__control__DOT__ADD_PC = 0x0bU;
    static constexpr CData/*2:0*/ id_stage_pip__DOT__control__DOT__BEQ = 0U;
    static constexpr CData/*2:0*/ id_stage_pip__DOT__control__DOT__BNE = 1U;
    static constexpr CData/*2:0*/ id_stage_pip__DOT__control__DOT__BLT = 2U;
    static constexpr CData/*2:0*/ id_stage_pip__DOT__control__DOT__BGE = 3U;
    static constexpr CData/*2:0*/ id_stage_pip__DOT__control__DOT__BLTU = 4U;
    static constexpr CData/*2:0*/ id_stage_pip__DOT__control__DOT__BGEU = 5U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__R_TYPE = 0x33U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__I_TYPE_LOAD = 3U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__I_TYPE_ALU = 0x13U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__I_TYPE_JALR = 0x67U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__S_TYPE = 0x23U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__B_TYPE = 0x63U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__J_TYPE = 0x6fU;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__U_TYPE_LUI = 0x37U;
    static constexpr CData/*6:0*/ id_stage_pip__DOT__control__DOT__U_TYPE_AUIPC = 0x17U;

    // CONSTRUCTORS
    Vid_stage_pip___024root(Vid_stage_pip__Syms* symsp, const char* v__name);
    ~Vid_stage_pip___024root();
    VL_UNCOPYABLE(Vid_stage_pip___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
