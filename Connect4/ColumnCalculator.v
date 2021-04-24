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
	input clk,
	input enable,
	input [3:0] selected_column,
	input [2:0] counter_0,
	input [2:0] counter_1,
	input [2:0] counter_2,
	input [2:0] counter_3,
	output reg [4:0] column_position,
	output reg add,
	output reg [1:0] c_register
    );



always@(posedge clk)begin
							add = 0;

	if(enable==1'b0) column_position = 5'b11111;
	else begin
		case(selected_column)
			4'b1110: begin
						if(counter_0!=3'b100)
						begin
							column_position = counter_0 * 3'b100;
							c_register = 2'b00;
							add = 1;
						end
						
						else
						begin
							column_position = 5'b11111;
							add = 0;
						end
						end
			
			4'b1101: begin
						if(counter_1!=3'b100) 
						begin
							column_position = counter_1 * 3'b100 + 3'b001;
							c_register = 2'b01;
							add = 1;
						end
						else
						begin
							column_position = 5'b11111;
							add = 0;
						end
						end
			
			4'b1011: begin
						if(counter_2!=3'b100) 
						begin
							column_position = counter_2 * 3'b100 + 3'b010;
							c_register = 2'b10;
							add=1;
						end
						else
						begin
							column_position = 5'b11111;
							add = 0;
						end					
						end
			4'b0111: begin
						if(counter_3!=3'b100)
						begin
							column_position = counter_3 * 3'b100 + 3'b011;
							c_register = 2'b11;
							add=1;
						end
						else
						begin
							column_position = 5'b11111;
							add = 0;
						end
						end
			
			default: column_position = 5'b11111;
		endcase
	end
end

endmodule