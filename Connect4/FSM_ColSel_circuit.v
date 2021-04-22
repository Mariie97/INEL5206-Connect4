`timescale 1ns / 1ps

`include "ColumnSelector.v"
`include "ColumnCalculator.v"
`include "DetectWinner.v"
`include "ThreeBitCounter.v"

 
module FSM_ColSel_circuit(
	  input clk,// clock of the circuit 
     input reset,// reset 
     input enable,
	  input [3:0] in_column, // selected column (0-6)
	  output [15:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
	  output [15:0] out_players_cells, // keep track of player cells. 0-Player1, 1-Player2 
	  output [1:0] out_game_status, // keep track of player cells. 0-Player1, 1-Player2 
	  output [1:0] current_state, // keep track of player cells. 0-Player1, 1-Player2 
	  output playerTurn,
	  output [4:0] column_calc,
	  output [7:0] LEDs
    );
 
 
 wire [1:0] state;
 wire [1:0] in_game_status;
 wire pturn;
 wire add;
 wire oset_invalid_column;
 wire [4:0] column_position;
 wire [11:0] counters;


	FSM fsm (
		.clk(clk), 
		.reset(reset), 
		.in_game_status(in_game_status), 
		.player_turn(pturn), 
		.out_game_status(out_game_status),
		.current_state(state)
	);
	
	ThreeBitCounter tbc (
		.clk(clk),
		.reset(reset), 
		.column(in_column), 
		.add(add), 
		.count(counters)
	);
	
	ColumnCalculator CC(
		.enable(enable),
		.counters(counters),		
		.selected_column(in_column),
		.column_position(column_position),
		.add(add)
    );
		
	ColumnSelector CS (
		.column_position(column_position), 
		.state(state), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells),
		.next_player(pturn)
	);
	
	DetectWinner DW (
		.clk(clk), 
		.reset(reset),
	   .game_board(out_gameboard),
	   .player_cells(out_players_cells),
	   .game_status(in_game_status)   
	);
	
	DisplayGameStatus DGS (
		.state(state),
		.game_status(out_game_status),
		.LEDs(LEDs)
	);
	
	assign current_state = state;
	assign playerTurn = pturn;
	assign column_calc = column_position;	
endmodule