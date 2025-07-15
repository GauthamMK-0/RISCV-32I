#include "Vregisters.h"       
#include "verilated.h"
#include <iostream>
#include <cassert>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vregisters *dut = new Vregisters;

    dut->clk = 0;
    dut->rst = 1;
    dut->eval();

    dut->clk = 1;
    dut->eval();

    dut->rst = 0;
    dut->eval();

    dut->en = 1;
    dut->addr_rd = 5;
    dut->in_data = 0xDEADBEEF;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();

    dut->addr_A = 5;
    dut->addr_B = 0;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();

    std::cout << "Reading from register 5 (addr_A): 0x" << std::hex << dut->out_data_A << std::endl;
    std::cout << "Reading from register 0 (addr_B): 0x" << std::hex << dut->out_data_B << std::endl;

    // Assertions to validate behavior
    assert(dut->out_data_A == 0xDEADBEEF);
    assert(dut->out_data_B == 0x0);

    std::cout << "Test passed successfully" << std::endl;

    delete dut;
    return 0;
}


