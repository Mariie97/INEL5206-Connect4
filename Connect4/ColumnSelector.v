`timescale 1ns / 1ps


module ColumnSelector(
					input [4:0] column_position, // selected column (0-3)
					input [1:0] state,
					output reg [15:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
					output reg [15:0] out_players_cells, // keep track of player cells. 0-Player1, 1-Player2 
					output reg next_player // 0=player1, 1=player2
    );
	 

parameter GAME_INIT=2'b00, P1_TURN=2'b01, P2_TURN=2'b10, END_GAME=2'b11; //STATES

initial begin
	out_gameboard <= 16'b0;
	next_player <= 0;
end


always@(state, column_position)
begin
	case(state)
		GAME_INIT: begin // initialize data
						out_gameboard <= 16'b0; 
						out_players_cells <= 16'b0;
						next_player <= 0;
						end
		P1_TURN: begin  //P1 turn 
					if(column_position!=5'b11111) begin
						out_gameboard[column_position] <= 1;
						out_players_cells[column_position] <= 0;
						next_player <= 1;
						end
					end
		P2_TURN: begin//P2 turn 
					if(column_position!=5'b11111) begin
						out_gameboard[column_position] <= 1;
						out_players_cells[column_position] <= 1;
						next_player <= 0;
						end
					end
//		END_GAME: next_player <= 0; 
	endcase
end
endmodule