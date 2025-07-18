#include "Vwb_stage_pip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vwb_stage_pip* dut, VerilatedVcdC* tfp) {
    dut->clk = 0;
    dut->eval();
    tfp->dump(main_time);
    main_time += 5;

    dut->clk = 1;
    dut->eval();
    tfp->dump(main_time);
    main_time += 5;
}

void reset(Vwb_stage_pip* dut, VerilatedVcdC* tfp) {
    dut->rst = 1;
    tick(dut, tfp);
    tick(dut, tfp);
    dut->rst = 0;
    tick(dut, tfp);
}

void print_outputs(Vwb_stage_pip* dut) {
    std::cout << std::hex << std::setfill('0');
    std::cout << "Reg Data OUT  : 0x" << std::setw(8) << dut->reg_data_out << "\n";
    std::cout << "RD OUT        : " << std::dec << static_cast<int>(dut->rd_out) << "\n";
    std::cout << "RegWrite OUT  : " << static_cast<int>(dut->reg_write_out) << "\n";
    std::cout << "-----------------------------\n";
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vwb_stage_pip* dut = new Vwb_stage_pip;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("wb_stage.vcd");

    std::cout << "--- Resetting ---\n";
    reset(dut, tfp);

    // Test 1: wb_sel = 00 (ALU result)
    std::cout << "--- Test 1: ALU result writeback (wb_sel = 00) ---\n";
    dut->pc_in         = 0x100;
    dut->alu_result_in = 0xdeadbeef;
    dut->mem_data_in   = 0xaaaaaaaa;
    dut->rd_in         = 5;
    dut->wb_sel        = 0b00;
    dut->reg_write_in  = 1;
    dut->mem_to_reg_in = 0;
    tick(dut, tfp);
    print_outputs(dut);

    // Test 2: wb_sel = 01 (Memory data)
    std::cout << "--- Test 2: Load result writeback (wb_sel = 01) ---\n";
    dut->alu_result_in = 0x11111111;
    dut->mem_data_in   = 0x12345678;
    dut->rd_in         = 10;
    dut->wb_sel        = 0b01;
    dut->reg_write_in  = 1;
    tick(dut, tfp);
    print_outputs(dut);

    // Test 3: wb_sel = 10 (PC + 4)
    std::cout << "--- Test 3: PC+4 writeback (wb_sel = 10) ---\n";
    dut->pc_in         = 0x200;
    dut->rd_in         = 7;
    dut->wb_sel        = 0b10;
    dut->reg_write_in  = 1;
    tick(dut, tfp);
    print_outputs(dut);

    // Test 4: wb_sel = 11 (default case: zero)
    std::cout << "--- Test 4: Undefined wb_sel (wb_sel = 11) ---\n";
    dut->alu_result_in = 0x88888888;
    dut->mem_data_in   = 0xffffffff;
    dut->pc_in         = 0x300;
    dut->rd_in         = 15;
    dut->wb_sel        = 0b11;
    dut->reg_write_in  = 1;
    tick(dut, tfp);
    print_outputs(dut);

    std::cout << "--- Simulation Done ---\n";
    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}
