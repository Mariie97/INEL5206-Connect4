
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:10:35 04/13/2021 
// Design Name: 
// Module Name:    ColumnCalculator 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ColumnCalculator(
	input reset,
	input enable,
	input [3:0] selected_column,
	output reg [4:0] column_position
    );
	 
	reg [2:0]counter_0 = 0;
	reg [2:0]counter_1 = 0;
	reg [2:0]counter_2 = 0;
	reg [2:0]counter_3 = 0;

	integer i;

	always@(enable, reset)begin
	if (reset==1'b1) begin
		counter_0 <= 0;
		counter_1 <= 0;
		counter_2 <= 0;
		counter_3 <= 0;
	end
	else begin
	if(enable==1'b0) column_position <= 5'b11111;
	else begin
		case(selected_column)
			4'b1110: begin
						if(counter_0!=3'b100)
						begin
							column_position <= counter_0 * 3'b100;
							counter_0 <= counter_0 + 3'b001;
						end
						else counter_0<=3'b100;
						end
			
			
			4'b1101: begin
						if(counter_1!=3'b100) 
						begin
							column_position <= counter_1 * 3'b100 + 3'b001;
							counter_1 <= counter_1 + 3'b001;
						end
						else counter_1<=3'b100;						
						end
			
			4'b1011: begin
						if(counter_2!=3'b100) 
						begin
							column_position <= counter_2 * 3'b100 + 3'b010;
							counter_2 <= counter_2 + 3'b001;
						end
						else counter_2<=3'b100;
						end
			4'b0111: begin
						if(counter_3!=3'b100)
						begin
							column_position <= counter_3 * 3'b100 + 3'b011;
							counter_3 <= counter_3 + 3'b001;
						end
						else counter_3<=3'b100;
						end
			
			default: column_position <= 5'b11111;
		endcase
	end
	end
	end

endmodule
