module branch_unit (
    input wire [31:0] op_A,
    input wire [31:0] op_B,
    input wire [2:0] branch_ctrl,
    input wire [31:0] imm,
    input wire [31:0] pc,
    input wire branch,
    input wire zero_flag,
    output reg branch_taken,
    output reg [31:0] branch_target
);

localparam BEQ = 3'b000;  // Branch if equal
localparam BNE = 3'b001;  // Branch if not equal
localparam BLT = 3'b010;  // Branch if less than
localparam BGE = 3'b011;  // Branch if greater than or equal
localparam BLTU = 3'b100; // Branch if less than unsigned
localparam BGEU = 3'b101; // Branch if greater than or equal unsigned

    always @(*) begin
        branch_taken = 1'b0;
        branch_target = 32'b0;

         if (branch) begin 
            branch_target = pc + imm;
            case (branch_ctrl)
                BEQ: branch_taken = zero_flag; 
                BNE: branch_taken = !zero_flag;  
                BLT: branch_taken = ($signed(op_A) < $signed(op_B));  
                BGE: branch_taken = ($signed(op_A) >= $signed(op_B)); 
                BLTU: branch_taken = (op_A < op_B); 
                BGEU: branch_taken = (op_A >= op_B); 
                default: branch_taken = 1'b0;        
            endcase
         end

end
    
endmodule