module instr_mem (
    input wire [31:0] addr,
    output wire [31:0] instr

);

reg [31:0] memory [0:255]; // 1KB instruction memory (32-bit)

// Initialize the instruction memory with some instructions
initial begin
    memory[0]  = 32'h00000093; // addi x1, x0, 0      ; x1 = 0
    memory[1]  = 32'h00500113; // addi x2, x0, 5      ; x2 = 5
    memory[2]  = 32'h00a00193; // addi x3, x0, 10     ; x3 = 10
    memory[3]  = 32'h00218333; // add x6, x3, x2      ; x6 = 10 + 5 = 15

    // ---------- Forwarding Test ----------
    memory[4]  = 32'h006282b3; // add x5, x5, x6      ; x5 += x6 → should forward x6 (EX hazard)
    memory[5]  = 32'h0062a2b3; // add x5, x5, x6      ; x5 += x6 → should forward x6 (MEM hazard)

    // ---------- Jump Test ----------
    memory[6]  = 32'h004000ef; // jal x1, 4           ; jump to PC+4+4 = PC+8 = instr[8], x1 = PC+4

    memory[7]  = 32'h00000013; // nop                ; should be skipped due to jump
    memory[8]  = 32'h00108093; // addi x1, x1, 1      ; x1 = x1 + 1

    // ---------- Branch Test (BEQ taken) ----------
    memory[9]  = 32'h00310063; // beq x2, x3, +6      ; x2 = 5, x3 = 10 → not equal → skip
    memory[10] = 32'h00c00093; // addi x1, x0, 12     ; skipped if branch taken

    // Update x3 = 5 (match x2)
    memory[11] = 32'h00500193; // addi x3, x0, 5      ; x3 = 5
    memory[12] = 32'h00319063; // beq x2, x3, +6      ; x2 = 5, x3 = 5 → branch taken, skip next

    memory[13] = 32'h00d00093; // addi x1, x0, 13     ; skipped if branch taken
    memory[14] = 32'h00100113; // addi x2, x0, 1      ; executed regardless
end






assign instr = memory[addr[9:2]]; // Assuming 4-byte aligned addresses
    
endmodule