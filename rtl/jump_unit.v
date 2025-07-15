module jump_unit(
    input wire [31:0] pc,
    input wire [31:0] rs1_data,
    input wire [31:0] imm,
    input wire jal,
    input wire jalr,
    output reg jump,
    output reg [31:0] jump_target

);

always @(*) begin
    jump = 1'b0;
    jump_target = 32'b0;

    if (jal) begin
        jump = 1'b1;
        jump_target = pc + imm;
    end else if (jalr) begin 
        jump = 1'b1;
        jump_target = (rs1_data + imm) & 32'hFFFFFFFE;
    end
end

endmodule