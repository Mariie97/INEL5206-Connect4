`timescale 1ns / 1ps
 
module FSM_ColSel_circuit(
	  input clk,// clock of the circuit 
     input reset,// reset 
	  input [2:0] in_column, // selected column (0-6)
	  input [1:0] in_game_status,
	  output [15:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
	  output [15:0] out_players_cells, // keep track of player cells. 0-Player1, 1-Player2 
	  output [1:0] out_game_status, // keep track of player cells. 0-Player1, 1-Player2 
	  output [1:0] current_state, // keep track of player cells. 0-Player1, 1-Player2 
	  output throw_again,
	  output oinvalid_column,
	  output playerTurn
    );
 
 
 wire invalid_column; //Flag when column is full 
 wire [1:0] state;
 wire throw_againw;
 wire pturn;


	FSM fsm (
		.clk(clk), 
		.reset(reset), 
		.invalid_column(invalid_column), 
		.in_game_status(in_game_status), 
		.player_turn(pturn), 
		.out_game_status(out_game_status),
		.current_state(state),
		.throw_again(throw_againw)
	);
	
		
	ColumnSelector CS (
		.clk(clk), 
		.reset(reset), 
		.throw_again(throw_againw),
		.in_column(in_column), 
		.state(state), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells),
		.invalid_column(invalid_column),
		.next_player(pturn)
	);
	
	assign current_state = state;
	assign throw_again = throw_againw;
	assign oinvalid_column= invalid_column;
	assign playerTurn = pturn;
	
endmodule
