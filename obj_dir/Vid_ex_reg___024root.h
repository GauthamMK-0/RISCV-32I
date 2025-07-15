// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid_ex_reg.h for the primary calling header

#ifndef VERILATED_VID_EX_REG___024ROOT_H_
#define VERILATED_VID_EX_REG___024ROOT_H_  // guard

#include "verilated.h"


class Vid_ex_reg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vid_ex_reg___024root final : public VerilatedModule {
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
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(rs1_data_in,31,0);
    VL_IN(rs2_data_in,31,0);
    VL_IN(imm_in,31,0);
    VL_OUT(rs1_data_out,31,0);
    VL_OUT(rs2_data_out,31,0);
    VL_OUT(imm_out,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vid_ex_reg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vid_ex_reg___024root(Vid_ex_reg__Syms* symsp, const char* v__name);
    ~Vid_ex_reg___024root();
    VL_UNCOPYABLE(Vid_ex_reg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
