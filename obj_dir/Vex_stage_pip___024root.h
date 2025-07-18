// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vex_stage_pip.h for the primary calling header

#ifndef VERILATED_VEX_STAGE_PIP___024ROOT_H_
#define VERILATED_VEX_STAGE_PIP___024ROOT_H_  // guard

#include "verilated.h"


class Vex_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vex_stage_pip___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(funct3_in,2,0);
        VL_IN8(rs1_in,4,0);
        VL_IN8(rs2_in,4,0);
        VL_IN8(rd_in,4,0);
        VL_IN8(alu_ctrl_in,3,0);
        VL_IN8(branch_ctrl_in,2,0);
        VL_IN8(wb_sel_in,1,0);
        VL_IN8(reg_write_in,0,0);
        VL_IN8(mem_read_in,0,0);
        VL_IN8(mem_write_in,0,0);
        VL_IN8(mem_to_reg_in,0,0);
        VL_IN8(alu_src_in,0,0);
        VL_IN8(branch_in,0,0);
        VL_IN8(jal_in,0,0);
        VL_IN8(jalr_in,0,0);
        VL_IN8(forward_rs1,1,0);
        VL_IN8(forward_rs2,1,0);
        VL_OUT8(funct3_out,2,0);
        VL_OUT8(rd_out,4,0);
        VL_OUT8(rs1_out,4,0);
        VL_OUT8(rs2_out,4,0);
        VL_OUT8(wb_sel_out,1,0);
        VL_OUT8(mem_read_out,0,0);
        VL_OUT8(mem_write_out,0,0);
        VL_OUT8(reg_write_out,0,0);
        VL_OUT8(mem_to_reg_out,0,0);
        VL_OUT8(branch_taken_out,0,0);
        VL_OUT8(jump_out,0,0);
        VL_OUT8(alu_ctrl_debug,3,0);
        CData/*0:0*/ ex_stage_pip__DOT__clk;
        CData/*0:0*/ ex_stage_pip__DOT__rst;
        CData/*2:0*/ ex_stage_pip__DOT__funct3_in;
        CData/*4:0*/ ex_stage_pip__DOT__rs1_in;
        CData/*4:0*/ ex_stage_pip__DOT__rs2_in;
        CData/*4:0*/ ex_stage_pip__DOT__rd_in;
        CData/*3:0*/ ex_stage_pip__DOT__alu_ctrl_in;
        CData/*2:0*/ ex_stage_pip__DOT__branch_ctrl_in;
        CData/*1:0*/ ex_stage_pip__DOT__wb_sel_in;
        CData/*0:0*/ ex_stage_pip__DOT__reg_write_in;
        CData/*0:0*/ ex_stage_pip__DOT__mem_read_in;
        CData/*0:0*/ ex_stage_pip__DOT__mem_write_in;
        CData/*0:0*/ ex_stage_pip__DOT__mem_to_reg_in;
        CData/*0:0*/ ex_stage_pip__DOT__alu_src_in;
        CData/*0:0*/ ex_stage_pip__DOT__branch_in;
        CData/*0:0*/ ex_stage_pip__DOT__jal_in;
        CData/*0:0*/ ex_stage_pip__DOT__jalr_in;
        CData/*1:0*/ ex_stage_pip__DOT__forward_rs1;
        CData/*1:0*/ ex_stage_pip__DOT__forward_rs2;
        CData/*2:0*/ ex_stage_pip__DOT__funct3_out;
        CData/*4:0*/ ex_stage_pip__DOT__rd_out;
        CData/*4:0*/ ex_stage_pip__DOT__rs1_out;
        CData/*4:0*/ ex_stage_pip__DOT__rs2_out;
        CData/*1:0*/ ex_stage_pip__DOT__wb_sel_out;
        CData/*0:0*/ ex_stage_pip__DOT__mem_read_out;
        CData/*0:0*/ ex_stage_pip__DOT__mem_write_out;
        CData/*0:0*/ ex_stage_pip__DOT__reg_write_out;
        CData/*0:0*/ ex_stage_pip__DOT__mem_to_reg_out;
        CData/*0:0*/ ex_stage_pip__DOT__branch_taken_out;
        CData/*0:0*/ ex_stage_pip__DOT__jump_out;
        CData/*3:0*/ ex_stage_pip__DOT__alu_ctrl_debug;
        CData/*0:0*/ ex_stage_pip__DOT__zero_flag;
        CData/*0:0*/ ex_stage_pip__DOT__branch_taken;
    };
    struct {
        CData/*0:0*/ ex_stage_pip__DOT__jump;
        CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__alu_ctrl;
        CData/*0:0*/ ex_stage_pip__DOT__alu_unit__DOT__zero_flag;
        CData/*2:0*/ ex_stage_pip__DOT__brch_unit__DOT__branch_ctrl;
        CData/*0:0*/ ex_stage_pip__DOT__brch_unit__DOT__branch;
        CData/*0:0*/ ex_stage_pip__DOT__brch_unit__DOT__zero_flag;
        CData/*0:0*/ ex_stage_pip__DOT__brch_unit__DOT__branch_taken;
        CData/*0:0*/ ex_stage_pip__DOT__jmp_unit__DOT__jal;
        CData/*0:0*/ ex_stage_pip__DOT__jmp_unit__DOT__jalr;
        CData/*0:0*/ ex_stage_pip__DOT__jmp_unit__DOT__jump;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__clk;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__rst;
        CData/*2:0*/ ex_stage_pip__DOT__exmem_register__DOT__funct3_in;
        CData/*4:0*/ ex_stage_pip__DOT__exmem_register__DOT__rd_in;
        CData/*4:0*/ ex_stage_pip__DOT__exmem_register__DOT__rs1_in;
        CData/*4:0*/ ex_stage_pip__DOT__exmem_register__DOT__rs2_in;
        CData/*1:0*/ ex_stage_pip__DOT__exmem_register__DOT__wb_sel_in;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__mem_read_in;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__mem_write_in;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__reg_write_in;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_in;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__branch_taken_in;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__jump_in;
        CData/*2:0*/ ex_stage_pip__DOT__exmem_register__DOT__funct3_out;
        CData/*4:0*/ ex_stage_pip__DOT__exmem_register__DOT__rs1_out;
        CData/*4:0*/ ex_stage_pip__DOT__exmem_register__DOT__rs2_out;
        CData/*4:0*/ ex_stage_pip__DOT__exmem_register__DOT__rd_out;
        CData/*1:0*/ ex_stage_pip__DOT__exmem_register__DOT__wb_sel_out;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__mem_read_out;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__mem_write_out;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__reg_write_out;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out;
        CData/*0:0*/ ex_stage_pip__DOT__exmem_register__DOT__jump_out;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(pc_in,31,0);
        VL_IN(rs1_data_in,31,0);
        VL_IN(rs2_data_in,31,0);
        VL_IN(imm_in,31,0);
        VL_IN(forward_data_mem,31,0);
        VL_IN(forward_data_wb,31,0);
        VL_OUT(pc_out,31,0);
        VL_OUT(alu_result_out,31,0);
        VL_OUT(rs2_data_out,31,0);
        VL_OUT(branch_target_out,31,0);
        VL_OUT(jump_target_out,31,0);
        VL_OUT(alu_a_debug,31,0);
        VL_OUT(alu_b_debug,31,0);
        IData/*31:0*/ ex_stage_pip__DOT__pc_in;
        IData/*31:0*/ ex_stage_pip__DOT__rs1_data_in;
        IData/*31:0*/ ex_stage_pip__DOT__rs2_data_in;
        IData/*31:0*/ ex_stage_pip__DOT__imm_in;
        IData/*31:0*/ ex_stage_pip__DOT__forward_data_mem;
        IData/*31:0*/ ex_stage_pip__DOT__forward_data_wb;
        IData/*31:0*/ ex_stage_pip__DOT__pc_out;
        IData/*31:0*/ ex_stage_pip__DOT__alu_result_out;
        IData/*31:0*/ ex_stage_pip__DOT__rs2_data_out;
        IData/*31:0*/ ex_stage_pip__DOT__branch_target_out;
        IData/*31:0*/ ex_stage_pip__DOT__jump_target_out;
        IData/*31:0*/ ex_stage_pip__DOT__alu_a_debug;
    };
    struct {
        IData/*31:0*/ ex_stage_pip__DOT__alu_b_debug;
        IData/*31:0*/ ex_stage_pip__DOT__rs1_data;
        IData/*31:0*/ ex_stage_pip__DOT__rs2_data;
        IData/*31:0*/ ex_stage_pip__DOT__alu_A;
        IData/*31:0*/ ex_stage_pip__DOT__alu_B;
        IData/*31:0*/ ex_stage_pip__DOT__alu_result;
        IData/*31:0*/ ex_stage_pip__DOT__branch_target;
        IData/*31:0*/ ex_stage_pip__DOT__jump_target;
        IData/*31:0*/ ex_stage_pip__DOT__alu_unit__DOT__op_A;
        IData/*31:0*/ ex_stage_pip__DOT__alu_unit__DOT__op_B;
        IData/*31:0*/ ex_stage_pip__DOT__alu_unit__DOT__alu_result;
        IData/*31:0*/ ex_stage_pip__DOT__brch_unit__DOT__op_A;
        IData/*31:0*/ ex_stage_pip__DOT__brch_unit__DOT__op_B;
        IData/*31:0*/ ex_stage_pip__DOT__brch_unit__DOT__imm;
        IData/*31:0*/ ex_stage_pip__DOT__brch_unit__DOT__pc;
        IData/*31:0*/ ex_stage_pip__DOT__brch_unit__DOT__branch_target;
        IData/*31:0*/ ex_stage_pip__DOT__jmp_unit__DOT__pc;
        IData/*31:0*/ ex_stage_pip__DOT__jmp_unit__DOT__rs1_data;
        IData/*31:0*/ ex_stage_pip__DOT__jmp_unit__DOT__imm;
        IData/*31:0*/ ex_stage_pip__DOT__jmp_unit__DOT__jump_target;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__pc_in;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__alu_result_in;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__rs2_data_in;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__branch_target_in;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__jump_target_in;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__pc_out;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__alu_result_out;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__branch_target_out;
        IData/*31:0*/ ex_stage_pip__DOT__exmem_register__DOT__jump_target_out;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vex_stage_pip__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__ADD = 0U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__SUB = 1U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__AND = 2U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__OR = 3U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__XOR = 4U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__SLL = 5U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__SRL = 6U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__SRA = 7U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__SLT = 8U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__SLTU = 9U;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__PASS = 0x0aU;
    static constexpr CData/*3:0*/ ex_stage_pip__DOT__alu_unit__DOT__ADD_PC = 0x0bU;
    static constexpr CData/*2:0*/ ex_stage_pip__DOT__brch_unit__DOT__BEQ = 0U;
    static constexpr CData/*2:0*/ ex_stage_pip__DOT__brch_unit__DOT__BNE = 1U;
    static constexpr CData/*2:0*/ ex_stage_pip__DOT__brch_unit__DOT__BLT = 2U;
    static constexpr CData/*2:0*/ ex_stage_pip__DOT__brch_unit__DOT__BGE = 3U;
    static constexpr CData/*2:0*/ ex_stage_pip__DOT__brch_unit__DOT__BLTU = 4U;
    static constexpr CData/*2:0*/ ex_stage_pip__DOT__brch_unit__DOT__BGEU = 5U;

    // CONSTRUCTORS
    Vex_stage_pip___024root(Vex_stage_pip__Syms* symsp, const char* v__name);
    ~Vex_stage_pip___024root();
    VL_UNCOPYABLE(Vex_stage_pip___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
