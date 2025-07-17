// Description: Instruction memory

module instr_mem (
    input wire [31:0] addr,
    output wire [31:0] instr

);

reg [31:0] memory [0:255]; // 1KB instruction memory (32-bit)

// Load instructions manually or use .hex files
initial begin
    // For testing only
    // I-type (Immediate ALU operations)
    memory[0]  = 32'h00100093; // addi x1, x0, 1
    memory[1]  = 32'h00200113; // addi x2, x0, 2
    memory[2]  = 32'h00300193; // addi x3, x0, 3
    memory[3]  = 32'h00400213; // addi x4, x0, 4

    // R-type (ALU operations)
    memory[4]  = 32'h002082b3; // add x5, x1, x2
    memory[5]  = 32'h40228333; // sub x6, x5, x2
    memory[6]  = 32'h0042f3b3; // and x7, x5, x4
    memory[7]  = 32'h0052e433; // or  x8, x5, x5
    memory[8]  = 32'h0062c4b3; // xor x9, x5, x6
    memory[9]  = 32'h00729433; // sll x10, x5, x7
    memory[10] = 32'h0082d4b3; // srl x9, x5, x8
    memory[11] = 32'h40a2d533; // sra x10, x5, x10
    memory[12] = 32'h00b2a5b3; // slt x11, x5, x11
    memory[13] = 32'h00c2b633; // sltu x12, x5, x12

    // I-type (Immediate logic and shifts)
    memory[14] = 32'h0010a693; // slti x13, x1, 1
    memory[15] = 32'h0010b713; // sltiu x14, x1, 1
    memory[16] = 32'h0010c793; // xori x15, x1, 1
    memory[17] = 32'h0010d813; // ori x16, x1, 1
    memory[18] = 32'h0010e893; // andi x17, x1, 1
    memory[19] = 32'h00109613; // slli x18, x1, 1
    memory[20] = 32'h0010d693; // srli x13, x1, 1
    memory[21] = 32'h4010d713; // srai x14, x1, 1
    
end

assign instr = memory[addr[9:2]]; // 4-byte aligned addresses
    
endmodule
