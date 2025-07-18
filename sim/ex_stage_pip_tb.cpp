#include "Vex_stage_pip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

VerilatedVcdC* tfp = nullptr;

void tick(Vex_stage_pip* top, VerilatedVcdC* tfp) {
    top->clk = 0; top->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(1);
    top->clk = 1; top->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(1);
}

void reset(Vex_stage_pip* top) {
    top->rst = 1;
    top->eval();
    tick(top, tfp);
    top->rst = 0;
    top->eval();
    tick(top, tfp);
}

int main() {
    Verilated::traceEverOn(true);
    Vex_stage_pip* top = new Vex_stage_pip;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("ex_stage.vcd");

    reset(top);

    // Shared control signals
    top->reg_write_in = 1;
    top->mem_read_in = 0;
    top->mem_write_in = 0;
    top->mem_to_reg_in = 0;
    top->wb_sel_in = 0;
    top->jal_in = 0;
    top->jalr_in = 0;

    // Test 1: Simple ADD rs1 + rs2 = 10 + 10
    top->alu_ctrl_in = 0b0000;
    top->alu_src_in = 0;
    top->rs1_data_in = 10;
    top->rs2_data_in = 10;
    top->forward_rs1 = 0;
    top->forward_rs2 = 0;
    tick(top, tfp);

    // Test 2: Forward rs1 from MEM
    top->rs1_data_in = 0;
    top->rs2_data_in = 5;
    top->forward_rs1 = 0b10;
    top->forward_data_mem = 20;
    top->forward_rs2 = 0b00;
    tick(top, tfp);

    // Test 3: Forward rs2 from WB
    top->rs1_data_in = 10;
    top->rs2_data_in = 0;
    top->forward_rs1 = 0b00;
    top->forward_rs2 = 0b01;
    top->forward_data_wb = 12;
    tick(top, tfp);

    // Test 4: Branch taken (BEQ)
    top->rs1_data_in = 42;
    top->rs2_data_in = 42;
    top->branch_in = 1;
    top->branch_ctrl_in = 0b000;
    top->alu_ctrl_in = 0b0001;
    top->alu_src_in = 0;
    top->forward_rs1 = 0;
    top->forward_rs2 = 0;
    top->imm_in = 4;
    tick(top, tfp);

    // Test 5: Branch not taken (BEQ)
    top->rs1_data_in = 10;
    top->rs2_data_in = 20;
    tick(top, tfp);

    // Test 6: JAL
    reset(top);
    top->pc_in = 8;
    top->imm_in = 100;
    top->jal_in = 1;
    top->jalr_in = 0;
    tick(top, tfp);

    // Test 7: Forward rs1 from MEM + rs2 from WB
    top->rs1_data_in = 0;
    top->rs2_data_in = 0;
    top->forward_rs1 = 0b10;
    top->forward_rs2 = 0b01;
    top->forward_data_mem = 20;
    top->forward_data_wb = 5;
    top->alu_ctrl_in = 0b0000;
    tick(top, tfp);

    // Test 8: I-type ADDI
    top->alu_src_in = 1;
    top->rs1_data_in = 17;
    top->imm_in = 8;
    top->forward_rs1 = 0b00;
    top->forward_rs2 = 0b00;
    tick(top, tfp);

    // Test 9: rs2 forwarding
    top->alu_src_in = 0;
    top->rs1_data_in = 1;
    top->forward_rs2 = 0b10;
    top->forward_data_mem = 77;
    tick(top, tfp);

    // Test 10: JALR
    reset(top);
    top->pc_in = 12;
    top->rs1_data_in = 100;
    top->imm_in = 8;
    top->jal_in = 0;
    top->jalr_in = 1;
    tick(top, tfp);

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
