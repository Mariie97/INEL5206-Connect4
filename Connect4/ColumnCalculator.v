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
	input [3:0] selected_column,
	output reg [3:0] column_position,
	output reg invalid_column
    );
	 
	reg [2:0]counter_0 = 0;
	reg [2:0]counter_1 = 0;
	reg [2:0]counter_2 = 0;
	reg [2:0]counter_3 = 0;

	integer i;

	always@(posedge enable)begin
		case(selected_column)
			4'b1110: begin
				if(counter_0==3'b100) begin
					column_position <= counter_0 * 3'b100;
					counter_0 <= counter_0 + 3'b001;
				end
				else invalid_column <= 1;
			end
			
			4'b1101: begin
						if(counter_1==3'b100) begin
							column_position <= counter_1 * 3'b100 + 3'b001;
							counter_1 <= counter_1 + 3'b001;
						end
						end
			
			4'b1011: begin
						if(counter_2==3'b100) begin
							column_position <= counter_2 * 3'b100 + 3'b010;
							counter_2 <= counter_2 + 3'b001;
						end
						else invalid_column <= 1;
						
						end
			4'b0111: begin
						if(counter_3==3'b100) begin
							column_position <= counter_3 * 3'b100 + 3'b011;
							counter_3 <= counter_3 + 3'b001;
						end
						else invalid_column <= 1;
						end
			
			default: counter_0 <= counter_0 + 3'b000;
		
		endcase
	//end
	end


endmodule