#include <verilated.h>
#include "Vid_ex_reg.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vid_ex_reg* top = new Vid_ex_reg;

    // Clock tick helper
    auto tick = [&]() {
        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();
    };

    // Initial setup
    top->clk = 0;
    top->rst = 0;  // Assert reset (active low)
    top->id_ex_write = 0;
    top->id_ex_flush = 0;
    tick();  // 1st clock: reset asserted
    tick();  // 2nd clock: still in reset

    top->rst = 1;  // Deassert reset
    tick();  // Exit reset

    // ----------------------------
    // Test 1: Write some data
    // ----------------------------
    top->id_ex_write = 1;
    top->id_ex_flush = 0;

    top->rs1_data_in = 0xAAAA5555;
    top->rs2_data_in = 0x12345678;
    top->imm_in = 0xDEADBEEF;
    top->rs1_in = 5;
    top->rs2_in = 10;
    top->rd_in = 15;
    top->alu_ctrl_in = 0xF;
    top->branch_ctrl_in = 0x5;
    top->reg_write_in = 1;
    top->mem_read_in = 0;
    top->mem_write_in = 1;
    top->mem_to_reg_in = 0;
    top->alu_src_in = 1;
    top->branch_in = 1;
    top->jal_in = 0;
    top->jalr_in = 1;
    tick();

    printf("After write:\n");
    printf("rs1_data_out = 0x%08X\n", top->rs1_data_out);
    printf("rs2_data_out = 0x%08X\n", top->rs2_data_out);
    printf("imm_out      = 0x%08X\n", top->imm_out);
    printf("rs1_out      = %d\n", top->rs1_out);
    printf("rs2_out      = %d\n", top->rs2_out);
    printf("rd_out       = %d\n", top->rd_out);
    printf("alu_ctrl_out = 0x%X\n", top->alu_ctrl_out);
    printf("branch_ctrl_out = 0x%X\n", top->branch_ctrl_out);
    printf("reg_write_out = %d\n", top->reg_write_out);
    printf("mem_write_out = %d\n", top->mem_write_out);
    printf("alu_src_out = %d\n", top->alu_src_out);
    printf("jalr_out = %d\n", top->jalr_out);
    printf("\n");

    // ----------------------------
    // Test 2: Flush the pipeline
    // ----------------------------
    top->id_ex_write = 0;
    top->id_ex_flush = 1;
    tick();

    printf("After flush:\n");
    printf("rs1_data_out = 0x%08X\n", top->rs1_data_out);
    printf("rs2_data_out = 0x%08X\n", top->rs2_data_out);
    printf("imm_out      = 0x%08X\n", top->imm_out);
    printf("rs1_out      = %d\n", top->rs1_out);
    printf("rs2_out      = %d\n", top->rs2_out);
    printf("rd_out       = %d\n", top->rd_out);
    printf("reg_write_out = %d\n", top->reg_write_out);
    printf("\n");

    // ----------------------------
    // Test 3: Write disabled — values should hold
    // ----------------------------
    top->id_ex_flush = 0;
    top->id_ex_write = 0;

    // Change inputs to confirm they're not latched
    top->rs1_data_in = 0xFFFFFFFF;
    top->rs2_data_in = 0xFFFFFFFF;
    top->imm_in = 0xFFFFFFFF;
    top->rs1_in = 31;
    top->rs2_in = 31;
    top->rd_in = 31;
    top->alu_ctrl_in = 0x0;
    top->branch_ctrl_in = 0x0;
    top->reg_write_in = 1;
    top->mem_read_in = 1;
    top->mem_write_in = 1;
    top->mem_to_reg_in = 1;
    top->alu_src_in = 1;
    top->branch_in = 1;
    top->jal_in = 1;
    top->jalr_in = 1;
    tick();

    printf("After write disabled:\n");
    printf("rs1_data_out = 0x%08X\n", top->rs1_data_out);  // Should still be 0
    printf("rs2_data_out = 0x%08X\n", top->rs2_data_out);
    printf("imm_out      = 0x%08X\n", top->imm_out);
    printf("rs1_out      = %d\n", top->rs1_out);
    printf("rs2_out      = %d\n", top->rs2_out);
    printf("rd_out       = %d\n", top->rd_out);
    printf("reg_write_out = %d\n", top->reg_write_out);  // Should still be 0
    printf("\n");

    delete top;
    return 0;
}
