`timescale 1ns / 1ps

module ColumnsCircuit(
				input clk, // clock
				input reset, // reset
				input [6:0] in_column,
				input [1:0] state,
				output [2:0] column_decode,
				output [41:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
				output [41:0] out_players_cells, // keep track of player cells. 0-Player1, 1-Player2 
				output invalid_column // 0-column is valid, 1-column is invalid, is full 
    );
	 

wire [2:0] column_decode;

	InputColumnDecoder colDecode (
		.in_column(in_column), 
		.column_decode(column_decode)
	);
	
	ColumnSelector cs(
		.clk(clk), 
		.reset(reset), 
		.in_column(column_decode), 
		.state(state), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells),
		.invalid_column(invalid_column)
		);


endmodule
