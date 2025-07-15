// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid_stage_pip.h for the primary calling header

#ifndef VERILATED_VID_STAGE_PIP_ID_EX_REG_H_
#define VERILATED_VID_STAGE_PIP_ID_EX_REG_H_  // guard

#include "verilated.h"


class Vid_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vid_stage_pip_id_ex_reg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(id_ex_write,0,0);
    VL_IN8(id_ex_flush,0,0);
    VL_IN8(rs1_in,4,0);
    VL_IN8(rs2_in,4,0);
    VL_IN8(rd_in,4,0);
    VL_IN8(alu_ctrl_in,3,0);
    VL_IN8(branch_ctrl_in,2,0);
    VL_IN8(reg_write_in,0,0);
    VL_IN8(mem_read_in,0,0);
    VL_IN8(mem_write_in,0,0);
    VL_IN8(mem_to_reg_in,0,0);
    VL_IN8(alu_src_in,0,0);
    VL_IN8(branch_in,0,0);
    VL_IN8(jal_in,0,0);
    VL_IN8(jalr_in,0,0);
    VL_OUT8(rs1_out,4,0);
    VL_OUT8(rs2_out,4,0);
    VL_OUT8(rd_out,4,0);
    VL_OUT8(alu_ctrl_out,3,0);
    VL_OUT8(branch_ctrl_out,2,0);
    VL_OUT8(reg_write_out,0,0);
    VL_OUT8(mem_read_out,0,0);
    VL_OUT8(mem_write_out,0,0);
    VL_OUT8(mem_to_reg_out,0,0);
    VL_OUT8(alu_src_out,0,0);
    VL_OUT8(branch_out,0,0);
    VL_OUT8(jal_out,0,0);
    VL_OUT8(jalr_out,0,0);
    CData/*4:0*/ __Vdly__rs1_out;
    CData/*4:0*/ __Vdly__rs2_out;
    CData/*4:0*/ __Vdly__rd_out;
    CData/*3:0*/ __Vdly__alu_ctrl_out;
    CData/*2:0*/ __Vdly__branch_ctrl_out;
    CData/*0:0*/ __Vdly__reg_write_out;
    CData/*0:0*/ __Vdly__mem_read_out;
    CData/*0:0*/ __Vdly__mem_write_out;
    CData/*0:0*/ __Vdly__mem_to_reg_out;
    CData/*0:0*/ __Vdly__alu_src_out;
    CData/*0:0*/ __Vdly__branch_out;
    CData/*0:0*/ __Vdly__jal_out;
    CData/*0:0*/ __Vdly__jalr_out;
    VL_IN(rs1_data_in,31,0);
    VL_IN(rs2_data_in,31,0);
    VL_IN(imm_in,31,0);
    VL_OUT(rs1_data_out,31,0);
    VL_OUT(rs2_data_out,31,0);
    VL_OUT(imm_out,31,0);
    IData/*31:0*/ __Vdly__rs1_data_out;
    IData/*31:0*/ __Vdly__rs2_data_out;
    IData/*31:0*/ __Vdly__imm_out;

    // INTERNAL VARIABLES
    Vid_stage_pip__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vid_stage_pip_id_ex_reg(Vid_stage_pip__Syms* symsp, const char* v__name);
    ~Vid_stage_pip_id_ex_reg();
    VL_UNCOPYABLE(Vid_stage_pip_id_ex_reg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
