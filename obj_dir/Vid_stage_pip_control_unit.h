// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid_stage_pip.h for the primary calling header

#ifndef VERILATED_VID_STAGE_PIP_CONTROL_UNIT_H_
#define VERILATED_VID_STAGE_PIP_CONTROL_UNIT_H_  // guard

#include "verilated.h"


class Vid_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vid_stage_pip_control_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(opcode,6,0);
    VL_IN8(funct3,2,0);
    VL_IN8(funct7,6,0);
    VL_OUT8(alu_ctrl,3,0);
    VL_OUT8(branch_ctrl,2,0);
    VL_OUT8(reg_write,0,0);
    VL_OUT8(mem_read,0,0);
    VL_OUT8(mem_write,0,0);
    VL_OUT8(mem_to_reg,0,0);
    VL_OUT8(jal,0,0);
    VL_OUT8(jalr,0,0);
    VL_OUT8(branch,0,0);
    VL_OUT8(alu_src,0,0);

    // INTERNAL VARIABLES
    Vid_stage_pip__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*3:0*/ ADD = 0U;
    static constexpr CData/*3:0*/ SUB = 1U;
    static constexpr CData/*3:0*/ AND = 2U;
    static constexpr CData/*3:0*/ OR = 3U;
    static constexpr CData/*3:0*/ XOR = 4U;
    static constexpr CData/*3:0*/ SLL = 5U;
    static constexpr CData/*3:0*/ SRL = 6U;
    static constexpr CData/*3:0*/ SRA = 7U;
    static constexpr CData/*3:0*/ SLT = 8U;
    static constexpr CData/*3:0*/ SLTU = 9U;
    static constexpr CData/*2:0*/ BEQ = 0U;
    static constexpr CData/*2:0*/ BNE = 1U;
    static constexpr CData/*2:0*/ BLT = 2U;
    static constexpr CData/*2:0*/ BGE = 3U;
    static constexpr CData/*2:0*/ BLTU = 4U;
    static constexpr CData/*2:0*/ BGEU = 5U;
    static constexpr CData/*6:0*/ R_TYPE = 0x33U;
    static constexpr CData/*6:0*/ I_TYPE_LOAD = 3U;
    static constexpr CData/*6:0*/ I_TYPE_ALU = 0x13U;
    static constexpr CData/*6:0*/ I_TYPE_JALR = 0x67U;
    static constexpr CData/*6:0*/ S_TYPE = 0x23U;
    static constexpr CData/*6:0*/ B_TYPE = 0x63U;
    static constexpr CData/*6:0*/ J_TYPE = 0x6fU;
    static constexpr CData/*6:0*/ U_TYPE_LUI = 0x37U;
    static constexpr CData/*6:0*/ U_TYPE_AUIPC = 0x17U;

    // CONSTRUCTORS
    Vid_stage_pip_control_unit(Vid_stage_pip__Syms* symsp, const char* v__name);
    ~Vid_stage_pip_control_unit();
    VL_UNCOPYABLE(Vid_stage_pip_control_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
