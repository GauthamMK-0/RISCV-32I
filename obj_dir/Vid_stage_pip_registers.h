// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid_stage_pip.h for the primary calling header

#ifndef VERILATED_VID_STAGE_PIP_REGISTERS_H_
#define VERILATED_VID_STAGE_PIP_REGISTERS_H_  // guard

#include "verilated.h"


class Vid_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vid_stage_pip_registers final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(reg_write,0,0);
        VL_IN8(rs1,4,0);
        VL_IN8(rs2,4,0);
        VL_IN8(rd,4,0);
        CData/*4:0*/ __VdlyDim0__register___v0;
        CData/*0:0*/ __VdlySet__register___v0;
        CData/*0:0*/ __VdlySet__register___v1;
        CData/*0:0*/ __VdlySet__register___v2;
        CData/*0:0*/ __VdlySet__register___v3;
        CData/*0:0*/ __VdlySet__register___v4;
        CData/*0:0*/ __VdlySet__register___v5;
        CData/*0:0*/ __VdlySet__register___v6;
        CData/*0:0*/ __VdlySet__register___v7;
        CData/*0:0*/ __VdlySet__register___v8;
        CData/*0:0*/ __VdlySet__register___v9;
        CData/*0:0*/ __VdlySet__register___v10;
        CData/*0:0*/ __VdlySet__register___v11;
        CData/*0:0*/ __VdlySet__register___v12;
        CData/*0:0*/ __VdlySet__register___v13;
        CData/*0:0*/ __VdlySet__register___v14;
        CData/*0:0*/ __VdlySet__register___v15;
        CData/*0:0*/ __VdlySet__register___v16;
        CData/*0:0*/ __VdlySet__register___v17;
        CData/*0:0*/ __VdlySet__register___v18;
        CData/*0:0*/ __VdlySet__register___v19;
        CData/*0:0*/ __VdlySet__register___v20;
        CData/*0:0*/ __VdlySet__register___v21;
        CData/*0:0*/ __VdlySet__register___v22;
        CData/*0:0*/ __VdlySet__register___v23;
        CData/*0:0*/ __VdlySet__register___v24;
        CData/*0:0*/ __VdlySet__register___v25;
        CData/*0:0*/ __VdlySet__register___v26;
        CData/*0:0*/ __VdlySet__register___v27;
        CData/*0:0*/ __VdlySet__register___v28;
        CData/*0:0*/ __VdlySet__register___v29;
        CData/*0:0*/ __VdlySet__register___v30;
        CData/*0:0*/ __VdlySet__register___v31;
        VL_IN(rd_data,31,0);
        VL_OUT(out_data_rs1,31,0);
        VL_OUT(out_data_rs2,31,0);
        IData/*31:0*/ i;
        IData/*31:0*/ __Vlvbound_hf3ed909f__0;
        IData/*31:0*/ __Vlvbound_haf5f2db3__0;
        IData/*31:0*/ __VdlyVal__register___v0;
        IData/*31:0*/ __VdlyVal__register___v1;
        IData/*31:0*/ __VdlyVal__register___v2;
        IData/*31:0*/ __VdlyVal__register___v3;
        IData/*31:0*/ __VdlyVal__register___v4;
        IData/*31:0*/ __VdlyVal__register___v5;
        IData/*31:0*/ __VdlyVal__register___v6;
        IData/*31:0*/ __VdlyVal__register___v7;
        IData/*31:0*/ __VdlyVal__register___v8;
        IData/*31:0*/ __VdlyVal__register___v9;
        IData/*31:0*/ __VdlyVal__register___v10;
        IData/*31:0*/ __VdlyVal__register___v11;
        IData/*31:0*/ __VdlyVal__register___v12;
        IData/*31:0*/ __VdlyVal__register___v13;
        IData/*31:0*/ __VdlyVal__register___v14;
        IData/*31:0*/ __VdlyVal__register___v15;
        IData/*31:0*/ __VdlyVal__register___v16;
        IData/*31:0*/ __VdlyVal__register___v17;
        IData/*31:0*/ __VdlyVal__register___v18;
    };
    struct {
        IData/*31:0*/ __VdlyVal__register___v19;
        IData/*31:0*/ __VdlyVal__register___v20;
        IData/*31:0*/ __VdlyVal__register___v21;
        IData/*31:0*/ __VdlyVal__register___v22;
        IData/*31:0*/ __VdlyVal__register___v23;
        IData/*31:0*/ __VdlyVal__register___v24;
        IData/*31:0*/ __VdlyVal__register___v25;
        IData/*31:0*/ __VdlyVal__register___v26;
        IData/*31:0*/ __VdlyVal__register___v27;
        IData/*31:0*/ __VdlyVal__register___v28;
        IData/*31:0*/ __VdlyVal__register___v29;
        IData/*31:0*/ __VdlyVal__register___v30;
        IData/*31:0*/ __VdlyVal__register___v31;
        VlUnpacked<IData/*31:0*/, 31> register_;
    };

    // INTERNAL VARIABLES
    Vid_stage_pip__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vid_stage_pip_registers(Vid_stage_pip__Syms* symsp, const char* v__name);
    ~Vid_stage_pip_registers();
    VL_UNCOPYABLE(Vid_stage_pip_registers);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
