`timescale 1ns / 1ps


module ColumnSelector(
					input clk,
					input enable,
					input throw_again,
					input [3:0] column_position, // selected column (0-3)
					input [1:0] state,
					output reg [15:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
					output reg [15:0] out_players_cells, // keep track of player cells. 0-Player1, 1-Player2 
//					output reg invalid_column, // 0-column is valid, 1-column is invalid, is full 
					output reg next_player // 0=player1, 1=player2
    );
	 

parameter GAME_INIT=2'b00, P1_TURN=2'b01, P2_TURN=2'b10, END_GAME=2'b11; //STATES

integer i;
initial begin
	for(i=0; i<16; i=i+1)begin
		out_gameboard[i] = 0;
		out_players_cells[i] = 0;
	end
	next_player = 0;
end


//always@(state, posedge throw_again, column_position)
always@(posedge clk)
begin
	case(state)
		GAME_INIT, END_GAME: begin // initialize data
						out_gameboard <= 16'b0; 
						out_players_cells <= 16'b0;
//						invalid_column <= 1'b0;
						next_player <= 0;
						end
		P1_TURN: begin  //P1 turn 
					if(enable == 1) begin
						out_gameboard[column_position] <= 1;
						out_players_cells[column_position] <= 0;
						next_player <= 1;
					end
		
//					if(in_column == 3'b111) invalid_column <= 1;
//					else begin
//					if(out_gameboard[in_column]==1'b0)
//						begin
//							out_gameboard[in_column] <= 1;
//							out_players_cells[in_column] <= 0;
//							invalid_column <= 1'b0;
//							next_player <= 1;
//						end
//					else
//						begin
//							for(i=in_column+4; i<CELLS_NUMBER; i=i+4)
//								begin
//									if(out_gameboard[i]==1'b0 && flag_token_placed==1'b0)
//										begin
//											out_gameboard[i]<=1;
//											out_players_cells[i] <= 0;
//											assign flag_token_placed = 1;
//											invalid_column <= 1'b0;
//										end
//								end
//								if (flag_token_placed==1'b1) 
//								begin
//									assign flag_token_placed = 0;
//									next_player <= 1;
//								end
//								else begin
//									$monitor("Invalid column %b", invalid_column);
//									invalid_column <= 1'b1;	
//									next_player <= 0;
//								end								
//							end								
//						end
					end
			P2_TURN: begin//P2 turn 
						if(enable == 1) begin
							out_gameboard[column_position] <= 1;
							out_players_cells[column_position] <= 1;
							next_player <= 0;
						end
//					if(in_column == 3'b111) invalid_column <= 1;
//					else begin
//					if(out_gameboard[in_column]==1'b0)
//						begin
//							out_gameboard[in_column] <= 1;
//							out_players_cells[in_column] <= 1;
//							invalid_column <= 1'b0;
//							next_player <= 0;
//						end
//					else
//						begin
//							for(i=in_column+4; i<CELLS_NUMBER; i=i+4)
//								begin
//									if(out_gameboard[i]==1'b0 && flag_token_placed==1'b0)
//										begin
//											out_gameboard[i] <= 1;
//											out_players_cells[i] <= 1;
//											assign flag_token_placed = 1;
//											invalid_column <= 1'b0;
//										end
//								end
//								if (flag_token_placed==1'b1) 
//								begin
//									assign flag_token_placed = 0;
//									next_player <= 0;
//								end
//								else begin
//										invalid_column <= 1'b1;	
//										next_player <= 1;
//										end								
//									end								
//						end
					end
	endcase
	end
endmodule

