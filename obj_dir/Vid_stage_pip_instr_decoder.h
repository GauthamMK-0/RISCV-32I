// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid_stage_pip.h for the primary calling header

#ifndef VERILATED_VID_STAGE_PIP_INSTR_DECODER_H_
#define VERILATED_VID_STAGE_PIP_INSTR_DECODER_H_  // guard

#include "verilated.h"


class Vid_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vid_stage_pip_instr_decoder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(opcode,6,0);
    VL_OUT8(rd,4,0);
    VL_OUT8(rs1,4,0);
    VL_OUT8(rs2,4,0);
    VL_OUT8(funct3,2,0);
    VL_OUT8(funct7,6,0);
    VL_IN(instr,31,0);
    VL_OUT(imm,31,0);

    // INTERNAL VARIABLES
    Vid_stage_pip__Syms* const vlSymsp;

    // PARAMETERS
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
    Vid_stage_pip_instr_decoder(Vid_stage_pip__Syms* symsp, const char* v__name);
    ~Vid_stage_pip_instr_decoder();
    VL_UNCOPYABLE(Vid_stage_pip_instr_decoder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
