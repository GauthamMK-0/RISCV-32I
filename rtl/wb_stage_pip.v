module wb_stage_pip(
    input wire clk,
    input wire rst,
    input wire [31:0] pc_in,
    input wire [31:0] alu_result_in,
    input wire [31:0] mem_data_in,
    input wire [4:0] rd_in,
    input wire [1:0] wb_sel,
    input wire reg_write_in,
    input wire mem_to_reg_in,

    output reg [31:0] reg_data_out,
    output reg [4:0] rd_out,
    output reg reg_write_out
);

    wire [31:0] pc_4;
    assign pc_4 = pc_in + 32'd4; // PC + 4 for JAL/JALR writeback

    always @ (posedge clk or posedge rst) begin
        if (rst) begin
            reg_data_out   <= 32'b0;
            rd_out         <= 5'b0;
            reg_write_out  <= 1'b0;
            
        end else begin
            case (wb_sel)
                2'b00: reg_data_out <= alu_result_in; // ALU result
                2'b01: reg_data_out <= mem_data_in;   // Load result
                2'b10: reg_data_out <= pc_4;         // JAL/JALR: PC + 4
                default: reg_data_out <= 32'b0;
            endcase

            rd_out        <= rd_in;
            reg_write_out <= reg_write_in;
        end
    end

endmodule
