`timescale 1ns / 1ps

module FSM_ColSel_circuit_tb;

	// Inputs
	reg clk;
	reg reset;
	reg enable;
	reg [3:0] in_column;

	// Outputs
	wire [15:0] out_gameboard;
	wire [15:0] out_players_cells;
	wire [1:0] out_game_status;
	wire [1:0] current_state;
	wire [4:0] column_calc;
	

	// Instantiate the Unit Under Test (UUT)
	FSM_ColSel_circuit uut (
		.clk(clk), 
		.reset(reset), 
		.enable(enable), 
		.in_column(in_column), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells), 
		.out_game_status(out_game_status),
		.current_state(current_state),
		.playerTurn(playerTurn),
		.column_calc(column_calc)
		);

	always #10 clk = ~clk;

	initial begin
//		// Initialize Inputs
//		clk = 0;
//		reset = 0;
//		in_column = 3'b111;


//
//        
//		// Add stimulus here
//		
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//		
//		
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//		
//		
//		#10 in_column = 3'b010;
//		#5 in_column = 3'b111;
//
//
//		#10 in_column = 3'b011;
//		#5 in_column = 3'b111;
//		
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//
//		
//		#10 in_column = 3'b001;
//		#5 in_column = 3'b111;
//
//	
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//
//		
//		#10 in_column = 3'b000;
//		
//		#30 in_column = 3'b011;
//		#10 reset = 1;
//
//		#50 $finish;





// Initialize Inputs
		clk = 0;
		enable = 0;
		reset = 0;
		in_column = 4'b0000;
        
		// Add stimulus here
		#100
		
		#15 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;
		
		
		
		#15 in_column = 4'b1101; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		
		#15 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#10 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#15 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#45 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
	
		#15 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#15 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#30 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;
		
		// P1 WINS
		
		#10 reset = 1;
		#5 reset = 0;
		
		//Start new game
		#15 in_column = 4'b1101; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1110; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#15 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1101; //P2
		enable = 1'b1;
		#5 enable = 1'b0;		
		
		#15 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	

		#15 in_column = 4'b0111; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b0111; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		#15 in_column = 4'b0111; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b0111; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		// P2 WINS

		#20 reset = 1;
		#5 reset = 0;
		
		
		
		
		//Start new game
		#15 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1101; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#15 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b0111; //P2
		enable = 1'b1;
		#5 enable = 1'b0;		
		
		#15 in_column = 4'b0111; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	

		#15 in_column = 4'b1101; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1110; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		#15 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1101; //P2 
		enable = 1'b1;
		#5 enable = 1'b0;	

		#15 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;	

		#15 in_column = 4'b0111; //P2
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		#15 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_column = 4'b1101; //P1 
		enable = 1'b1;
		#5 enable = 1'b0;			
		
		#15 in_column = 4'b0111; //P1 
		enable = 1'b1;
		#5 enable = 1'b0;		
		
		//TIE GAME

	

		#500 $finish;

	end
      
endmodule