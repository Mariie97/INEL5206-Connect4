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
	output reg [3:0] column_position
    );
	 
	reg [1:0]counter_0 = 0;
	reg [1:0]counter_1 = 0;
	reg [1:0]counter_2 = 0;
	reg [1:0]counter_3 = 0;
	
	
	
	
	integer i;
	//reg [1:0]counter[0:3];
//	initial begin
//		for(i=0; i<4; i=i+1)begin
//			counter[i] = 0;
//		end
//		
//		column_position = 0;
//	end
	
	always@(posedge enable)begin
	//if(enable == 1)begin
		case(selected_column)
			4'b0001: begin
				column_position <= counter_0 * 4;
				counter_0 <= counter_0 + 2'b01;
			end
			
			4'b0010: begin
				column_position <= counter_1 * 4 + 1;
				counter_1 <= counter_1 + 2'b01;
			end
			
			4'b0100: begin
				column_position <= counter_2 * 4 + 2;
				counter_2 <= counter_2 + 2'b01;
			end
			
			4'b1000: begin
				column_position <= counter_3 * 4 + 3;
				counter_3 <= counter_3 + 2'b01;
			end
			
			default: counter_0 <= counter_0 + 2'b00;
		
		endcase
	//end
	end


endmodule
