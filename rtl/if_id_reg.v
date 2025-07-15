module if_id_reg(
    input wire clk,
    input wire rst,
    input wire if_id_write,
    input wire if_id_flush,
    input wire [31:0] instr_in,
    input wire [31:0] pc_in,
    output reg [31:0] instr_out,
    output reg [31:0] pc_out
);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        instr_out <= 32'b0; 
        pc_out <= 32'b0; 
    end else if (if_id_flush) begin
        instr_out <= 32'b0;
        pc_out <= 32'b0;
    end else if (if_id_write) begin
        instr_out <= instr_in; 
        pc_out <= pc_in; 
    end
end
    
endmodule