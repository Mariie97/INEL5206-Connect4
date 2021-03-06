`timescale 1ns / 1ps

module ColumnSelector_tb;

	// Inputs
	reg clk;
	reg [4:0] column_position;
	reg [2:0] state;

	// Outputs
	wire [15:0] out_gameboard;
	wire [15:0] out_players_cells;
	wire next_player;
	
	
	// Instantiate the Unit Under Test (UUT)
	ColumnSelector uut (
		.clk(clk), 
		.column_position(column_position), 
		.state(state), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells),
		.next_player(next_player)
	);

	always #10 clk=~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		column_position = 5'b11111;
		state = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
		
		#10 state = 2'b01; //P1		
		in_column = 3'b000;
		#2 in_column = 3'b111;
		
		#10 state = 2'b10; //P2
		in_column = 3'b000;
		#2 in_column = 3'b111;
		
		#10 state = 2'b01; //P1
		in_column = 3'b000;
		#1 in_column = 3'b111;

		#10 state = 2'b10; //P2
		in_column = 3'b000;
		#2 in_column = 3'b111;
		
		#10 state = 2'b01; //P1
		in_column = 3'b000;
		#2 in_column = 3'b111;
		
		#2 throw_again = 1;
		#1 throw_again = 0;
		#2 throw_again = 1;		
		in_column = 3'b011;
		#2 in_column = 3'b111;
		#2 throw_again = 0;	
	
		#10 state = 2'b010; //P2
		in_column = 3'b001;
		#2 in_column = 3'b111;

		#10 state = 2'b01; //P1
		in_column= 3'b010;
		#2 in_column = 3'b111;		

		#10 in_column = 2'b001;
		#2 in_column = 3'b111;
		
		#1 reset = 2'b1;
		
//		#10 state = 2'b01; //P1
//		in_column = 2'b11;
//
//		#10 state = 2'b10; //P2
//		in_column = 2'b10;
//		
//		#10 state = 2'b01; //P1
//		in_column = 2'b00;
//
//		in_column = 2'b01;
//		#5 throw_again = 0;		
//		
//		#1 reset = 2'b1;
		
		#50 $finish;

end
endmodule

