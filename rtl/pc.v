module pc (
    input wire clk,
    input wire rst,
    input wire pc_write,
    input wire [31:0] next_pc,
    output reg [31:0] current_pc
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            current_pc <= 32'b0; 
        end else if (pc_write) begin
            current_pc <= next_pc; 
        end
    end
    
endmodule
