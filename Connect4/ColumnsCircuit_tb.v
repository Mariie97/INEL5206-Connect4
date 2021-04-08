`timescale 1ns / 1ps

module ColumnsCircuit_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [6:0] in_column;
	reg [1:0] state;

	// Outputs
	wire [2:0] column_decode;
	wire [41:0] out_gameboard;
	wire [41:0] out_players_cells;
	wire invalid_column;
	wire next_turn_player;

	// Instantiate the Unit Under Test (UUT)
	ColumnsCircuit uut (
		.clk(clk), 
		.reset(reset), 
		.in_column(in_column), 
		.state(state), 
		.column_decode(column_decode), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells), 
		.invalid_column(invalid_column), 
		.next_turn_player(next_turn_player)
	);
	always #10 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in_column = 0;
		state = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		#5 in_column = 7'b0000001;
		#10 state = 2'b01; //P1	
				
		#5 in_column = 7'b0000100;
		#10 state = 2'b10; //P2
				
		#5 in_column = 7'b0000001;
		#10 state = 2'b01; //P1
				
		#5 in_column = 7'b0000100;
		#10 state = 2'b10; //P2
				
		#5 in_column = 7'b1000000;
		#10 state = 2'b01; //P1
		
		#5 in_column = 7'b0000001;
		#10 state = 2'b10; //P2
		
  		#5 in_column = 7'b0000001;		
		#10 state = 2'b01; //P1
		
		#5 in_column = 7'b0000001;
		#10 state = 2'b10; //P2
				
		#5 in_column = 7'b0000001; //column 1 is full
		#10 state = 2'b01; //P1
		
		#5 in_column = 7'b0000001; //invalid column
		#10 state = 2'b10; //P2	
		
		#5 in_column = 7'b0000010;

		
		#10 reset = 1;
		
		#5 $finish;

end
endmodule

