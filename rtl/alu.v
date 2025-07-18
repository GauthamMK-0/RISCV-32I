// Description: ALU module for RISCV-32I core
// Supports all RV32I instructions 

module alu (
    input wire [31:0] op_A,
    input wire [31:0] op_B,
    input wire [3:0] alu_ctrl,
    output reg [31:0] alu_result,
    output wire zero_flag

);
localparam ADD = 4'b0000;
localparam SUB = 4'b0001;
localparam AND = 4'b0010;
localparam OR  = 4'b0011;
localparam XOR = 4'b0100;
localparam SLL = 4'b0101;
localparam SRL = 4'b0110;
localparam SRA = 4'b0111;
localparam SLT = 4'b1000;
localparam SLTU = 4'b1001;
localparam PASS = 4'b1010;   // PASS for LUI instruction
localparam ADD_PC = 4'b1011; // ADD_PC for AUIPC instruction

always @(*) begin
    case (alu_ctrl)
        ADD: alu_result = op_A + op_B;        
        SUB: alu_result = op_A - op_B;      
        AND: alu_result = op_A & op_B;        
        OR: alu_result = op_A | op_B;       
        XOR: alu_result = op_A ^ op_B;        
        SLL: alu_result = op_A << op_B[4:0]; 
        SRL: alu_result = op_A >> op_B[4:0];  
        SRA: alu_result = $signed(op_A) >>> op_B[4:0];    
        SLT: alu_result = ($signed(op_A) < $signed(op_B)) ? 32'b1 : 32'b0;   // signed
        SLTU: alu_result = (op_A < op_B) ? 32'b1 : 32'b0;  // unsigned
        PASS: alu_result = op_B;          // forward op_B for LUI instruction
        ADD_PC: alu_result = op_A + op_B; // For AUIPC, add immediate to PC
        default: alu_result = 32'b0;                        
    endcase
end

    assign zero_flag = (alu_result == 32'b0) ? 1'b1 : 1'b0;  // zero flag for BEQ and BNE
    
endmodule
