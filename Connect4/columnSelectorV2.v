`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:29 04/04/2021 
// Design Name: 
// Module Name:    ColumnSelectorV2 
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

module ColumnSelectorV2(//input clk //clock
//					input [2:0] in_column, // selected column (0-6)
//					input [1:0] state,
//					output reg [41:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
//					output reg [41:0] out_players_cells // keep track of player cells. 0-Player1, 1-Player2 
//					//output out_invalidColumn // 0-column is valid, 1-column is invalid, is full 
					enable,
					clk,
					in_column,
					//state,
					out_gameboard,
					out_players_cells
					
    );
	 input enable;
	 input clk;
	 input [3:0]in_column;
	 //input [1:0]state;
	 output out_gameboard;
	 output out_players_cells;
	 
	 reg [15:0]out_gameboard;
	 reg [15:0]out_players_cells;
	 
	 
	 //reg [2:0]row_counter[0:6];

integer i;
initial begin
//	for(i=0; i<7; i=i+1)begin
//		row_counter[i] = 0;
//	end
		
	for(i=0; i<16; i=i+1)begin
			out_gameboard[i] = 0;
	end
	
	
end



 

always@(posedge clk)
begin	
//	if(reset==1'b1)
//	begin
//		out_gameboard = 42'bX;
//		out_players_cells = 42'bX;
//	end

//	case(state)
//		2'b00: begin
//			out_gameboard = 42'b0; // Game init
//		end
	
//		2'b01: begin  //P1 turn 
				

					if(enable == 1)begin
						out_gameboard[in_column] <= 1;
					end
					
//				end
//		2'b10: //P2 turn 
//			begin  
//				if(row_counter[in_column]<6) begin
//					out_gameboard[in_column+(row_counter[in_column]*7)] = 1;
//					out_players_cells[in_column] = 1;
//					row_counter[in_column] = row_counter[in_column] + 1;
//				end

//				if(enable == 1)begin
//					out_gameboard[in_column] <= 1;
//				end
				
//			end
			//2'b11: //End Game
	
//	endcase

end
endmodule
