`timescale 1ns / 1ps

module ColumnSelector_tb;

	// Inputs
	reg clk;
	reg reset;
	reg throw_again;
	reg [2:0] in_column;
	reg [1:0] state;

	// Outputs
	wire [41:0] out_gameboard;
	wire [41:0] out_players_cells;
	wire invalid_column;
	
	
	// Instantiate the Unit Under Test (UUT)
	ColumnSelector uut (
		.clk(clk), 
		.reset(reset), 
		.in_column(in_column), 
		.state(state), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells),
		.invalid_column(invalid_column),
		.throw_again(throw_again)
	);

	always #10 clk=~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		in_column = 0;
		state = 0;
		reset=0;
		throw_again = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
		
//		#10 state = 2'b01; //P1		
//		 in_column=3'b000;
//		
//		#25 state = 2'b10; //P2
//		in_column=3'b010;
//		
//		#25 state = 2'b01; //P1
//		in_column=3'b000;
//
//		#25 state = 2'b10; //P2
//		in_column=3'b010;
//		
//		#25 state = 2'b01; //P1
//		in_column=3'b110;
//		
//		#25 state = 2'b10; //P2
//		in_column=3'b000;
//	
//		#25 state = 2'b01; //P1
//		in_column=3'b000;

		#10 state = 2'b01; //P1		
		 in_column=3'b000;
		
		#25 state = 2'b10; //P2
		in_column=3'b000;
		
		#25 state = 2'b01; //P1
		in_column=3'b000;

		#25 state = 2'b10; //P2
		in_column=3'b000;
		
		#25 state = 2'b01; //P1
		in_column=3'b000;
		
		#25 state = 2'b10; //P2
		in_column=3'b000;
	
		#25 state = 2'b01; //P1
		in_column=3'b000;
		#5 throw_again = 1;

		in_column=3'b001;
		#5 throw_again = 0;

		
		
		
		#25 reset = 2'b1;
		
		#50 $finish;

end
initial $monitor("column=%d", in_column);      
endmodule

