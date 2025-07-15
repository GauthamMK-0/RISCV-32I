// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid_stage_pip.h for the primary calling header

#ifndef VERILATED_VID_STAGE_PIP_ID_STAGE_PIP_H_
#define VERILATED_VID_STAGE_PIP_ID_STAGE_PIP_H_  // guard

#include "verilated.h"
class Vid_stage_pip_control_unit;
class Vid_stage_pip_id_ex_reg;
class Vid_stage_pip_instr_decoder;
class Vid_stage_pip_registers;


class Vid_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vid_stage_pip_id_stage_pip final : public VerilatedModule {
  public:
    // CELLS
    Vid_stage_pip_instr_decoder* __PVT__decoder;
    Vid_stage_pip_control_unit* __PVT__control;
    Vid_stage_pip_registers* __PVT__reg_file;
    Vid_stage_pip_id_ex_reg* __PVT__idex_register;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(id_ex_flush,0,0);
    VL_IN8(id_ex_write,0,0);
    VL_IN8(reg_write_wb,0,0);
    VL_IN8(rd_wb,4,0);
    VL_OUT8(rs1_hzd,4,0);
    VL_OUT8(rs2_hzd,4,0);
    VL_OUT8(rd_hzd,4,0);
    VL_OUT8(rs1_out,4,0);
    VL_OUT8(rs2_out,4,0);
    VL_OUT8(rd_out,4,0);
    VL_OUT8(alu_ctrl_out,3,0);
    VL_OUT8(branch_ctrl_out,2,0);
    VL_OUT8(reg_write_out,0,0);
    VL_OUT8(mem_read_out,0,0);
    VL_OUT8(mem_write_out,0,0);
    VL_OUT8(mem_to_reg_out,0,0);
    VL_OUT8(jal_out,0,0);
    VL_OUT8(jalr_out,0,0);
    VL_OUT8(branch_out,0,0);
    VL_OUT8(alu_src_out,0,0);
    CData/*6:0*/ opcode;
    CData/*2:0*/ funct3;
    CData/*6:0*/ funct7;
    CData/*4:0*/ rs1;
    CData/*4:0*/ rs2;
    CData/*4:0*/ rd;
    CData/*3:0*/ alu_ctrl;
    CData/*2:0*/ branch_ctrl;
    CData/*0:0*/ reg_write;
    CData/*0:0*/ mem_read;
    CData/*0:0*/ mem_write;
    CData/*0:0*/ mem_to_reg;
    CData/*0:0*/ jal;
    CData/*0:0*/ jalr;
    CData/*0:0*/ branch;
    CData/*0:0*/ alu_src;
    VL_IN(instr_in,31,0);
    VL_IN(pc_in,31,0);
    VL_IN(rd_data_wb,31,0);
    VL_OUT(rs1_data_out,31,0);
    VL_OUT(rs2_data_out,31,0);
    VL_OUT(imm_out,31,0);
    IData/*31:0*/ imm;
    IData/*31:0*/ rs1_data;
    IData/*31:0*/ rs2_data;

    // INTERNAL VARIABLES
    Vid_stage_pip__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vid_stage_pip_id_stage_pip(Vid_stage_pip__Syms* symsp, const char* v__name);
    ~Vid_stage_pip_id_stage_pip();
    VL_UNCOPYABLE(Vid_stage_pip_id_stage_pip);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
