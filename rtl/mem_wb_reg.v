module mem_wb_reg (
    input wire clk,
    input wire rst,
    input wire reg_write_in,
    input wire mem_to_reg_in,
    input wire [1:0] wb_sel_in,
    input wire [31:0] pc_in,
    input wire [31:0] alu_result_in,
    input wire [31:0] mem_data_in,
    input wire [4:0] rd_in,

    output reg [31:0] pc_out,
    output reg [31:0] alu_result_out,
    output reg [31:0] mem_data_out,
    output reg [4:0] rd_out,
    output reg [1:0] wb_sel_out,
    output reg reg_write_out,
    output reg mem_to_reg_out

);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        reg_write_out <= 1'b0;
        mem_to_reg_out <= 1'b0;
        wb_sel_out <= 2'b0;
        pc_out <= 32'b0;
        alu_result_out <= 32'b0;
        mem_data_out <= 32'b0;
        rd_out <= 5'b0;

    end else begin
        reg_write_out <= reg_write_in;
        mem_to_reg_out <= mem_to_reg_in;
        wb_sel_out <= wb_sel_in;
        alu_result_out <= alu_result_in;
        pc_out <= pc_in;
        mem_data_out <= mem_data_in;
        rd_out <= rd_in;
    end
end

endmodule