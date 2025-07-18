#include "Vid_stage_pip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

VerilatedVcdC* tfp = nullptr;

void tick(Vid_stage_pip* top, VerilatedVcdC* tfp) {
    top->clk = 0; top->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(5);
    top->clk = 1; top->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(5);
}

void reset(Vid_stage_pip* top) {
    top->rst = 1;
    top->eval();
    tick(top, tfp);
    top->rst = 0;
    top->eval();
    tick(top, tfp);
}

int main() {
    Verilated::traceEverOn(true);
    Vid_stage_pip* top = new Vid_stage_pip;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("id_stage.vcd");

    reset(top);

    // --- Test 1: ADD x10, x10, x11 ---
    top->instr_in = 0x00B50533; // ADD x10, x10, x11
    top->pc_in = 0x00000000;
    top->reg_write_wb = 1;
    top->rd_wb = 5;
    top->rd_data_wb = 42;
    top->ex_alu_result = 100;
    top->mem_alu_result = 200;
    top->ex_rd = 10;
    top->mem_rd = 11;
    top->ex_reg_write = 1;
    top->mem_reg_write = 1;
    top->forward_rs1 = 0b01;  // WB
    top->forward_rs2 = 0b10;  // MEM
    top->id_ex_flush = 0;
    top->id_ex_write = 1;
    tick(top, tfp);

    // --- Test 2: ADDI x0, x0, 0 (Flush Active) ---
    top->instr_in = 0x00000013; // ADDI x0, x0, 0
    top->pc_in = 0x00000004;
    top->id_ex_flush = 1;
    top->id_ex_write = 0;
    tick(top, tfp);

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
