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
	wire [6:0] LEDs;
	 wire [2:0] counter_0;
	wire [2:0] counter_1;
	wire [2:0] counter_2;
 wire [2:0] counter_3;


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
		.column_calc(column_calc),
		.LEDs(LEDs),
		.counter_0(counter_0),
		.counter_1(counter_1),
		.counter_2(counter_2),
		.counter_3(counter_3)
		);

	always #10 clk = ~clk;

	initial begin

// Initialize Inputs
		clk = 0;
		enable = 0;
		reset = 0;
		in_column = 4'b0000;
        
		// Add stimulus here
		#100
		
		#10 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#35 in_column = 4'b1101; //P2
		enable = 1'b1;
		#5 enable = 1'b0;

		
		#35 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;



		#35 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#35 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#35 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
	
		#35 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;
		
//		 P1 WINS
		
		
		
		#60 reset = 1;
		#20 reset = 0;
		
		//Start new game
		#35 in_column = 4'b1101; //P1
		enable = 1'b1;
		#5 enable = 1'b0;

		#35 in_column = 4'b1110; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#35 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;

		#35 in_column = 4'b1101; //P2
		enable = 1'b1;
		#5 enable = 1'b0;		
		
		#35 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;

		#35 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	

		#35 in_column = 4'b0111; //P1
		enable = 1'b1;
		#5 enable = 1'b0;

		#35 in_column = 4'b0111; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		#35 in_column = 4'b0111; //P1
		enable = 1'b1;
		#5 enable = 1'b0;

		#35 in_column = 4'b0111; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		// P2 WINS


		#60 reset = 1;
		#20 reset = 0;
		
		

		
		//Start new game
		#35 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#35 in_column = 4'b1101; //P2
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#35 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#35 in_column = 4'b0111; //P2
		enable = 1'b1;
		#2 enable = 1'b0;		
		
		#35 in_column = 4'b0111; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#35 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	

		#35 in_column = 4'b1101; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#35 in_column = 4'b1110; //P2
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		#35 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;


		#35 in_column = 4'b1101; //P2 
		enable = 1'b1;
		#5 enable = 1'b0;	

		#35 in_column = 4'b1011; //P1
		enable = 1'b1;
		#5 enable = 1'b0;	

		#35 in_column = 4'b0111; //P2
		enable = 1'b1;
		#5 enable = 1'b0;


		#35 in_column = 4'b1110; //P1
		enable = 1'b1;
		#5 enable = 1'b0;	
		
		#35 in_column = 4'b1011; //P2
		enable = 1'b1;
		#5 enable = 1'b0;


		#35 in_column = 4'b1101; //P1 
		enable = 1'b1;
		#5 enable = 1'b0;			
		
		#35 in_column = 4'b0111; //P1 
		enable = 1'b1;
		#5 enable = 1'b0;		
		
		//TIE GAME


//		#10 $finish;

	end
      
endmodule