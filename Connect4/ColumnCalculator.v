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
	input enable,
	input [11:0] counters,
	input [3:0] selected_column,
	output reg [4:0] column_position,
	output reg add
    );

	integer i;


	always@(enable, selected_column, counters)begin
	add=0;
	if(enable==1'b0) column_position = 5'b11111;
	else begin
		case(selected_column)
			4'b1110: begin
						if(counters[2:0]!=3'b100)
						begin
							column_position = counters[2:0] * 3'b100;
							add=1;

						end
						end
			
			4'b1101: begin
						if(counters[5:3]!=3'b100) 
						begin
							column_position = counters[5:3] * 3'b100 + 3'b001;
								add=1;
						end
						end
			
			4'b1011: begin
						if(counters[8:6]!=3'b100) 
						begin
							column_position =counters[8:6] * 3'b100 + 3'b010;
								add=1;
						end
						end
			4'b0111: begin
						if(counters[11:9]!=3'b100)
						begin
							column_position = counters[11:9] * 3'b100 + 3'b011;
							add=1;
						end
						end
			
			default: column_position = 5'b11111;
		endcase
	end
	end

endmodule