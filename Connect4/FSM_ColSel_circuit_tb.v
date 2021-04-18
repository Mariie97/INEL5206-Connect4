`timescale 1ns / 1ps

module FSM_ColSel_circuit_tb;

	// Inputs
	reg clk;
	reg reset;
	reg enable;
	reg [3:0] in_column;
	reg [1:0] in_game_status;

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
		.in_game_status(in_game_status), 
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
//		in_game_status = 0;
//
//        
//		// Add stimulus here
//		
//		#10 in_game_status = 2'b00; //P1		
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//		
//		
//		#10 in_game_status = 2'b00; //P2
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//		
//		
//		#20 in_game_status = 2'b00; //P1
//		#10 in_column = 3'b010;
//		#5 in_column = 3'b111;
//
//
//		#20 in_game_status = 2'b00; //P2
//		#10 in_column = 3'b011;
//		#5 in_column = 3'b111;
//		
//		#30 in_game_status = 2'b00; //P1
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//
//		
//		#30 in_game_status = 2'b00; //P2
//		#10 in_column = 3'b001;
//		#5 in_column = 3'b111;
//
//	
//		#40 in_game_status = 2'b00; //P1
//		#10 in_column = 3'b000;
//		#5 in_column = 3'b111;
//
//		
//		#30 in_game_status = 2'b00; //P2
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
		in_game_status = 0;

        
		// Add stimulus here
		#10
		
		#15 in_game_status = 2'b00; //P1		
		#15 in_column = 4'b1110;
		enable = 1'b1;
		#5 enable = 1'b0;
		
		
		
		#15 in_game_status = 2'b00; //P2
		#15 in_column = 4'b1110;
		enable = 1'b1;
		#5 enable = 1'b0;
		
		
		#15 in_game_status = 2'b00; //P1
		#15 in_column = 4'b1101;
		enable = 1'b1;
		#5 enable = 1'b0;


		#15 in_game_status = 2'b00; //P2
		#10 in_column = 4'b1011;
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#30 in_game_status = 2'b00; //P1
		#15 in_column = 4'b1110;
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#30 in_game_status = 2'b00; //P2
		#15 in_column = 4'b1110;
		enable = 1'b1;
		#5 enable = 1'b0;
	
		#40 in_game_status = 2'b00; //P1
		#15 in_column = 4'b1110;
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#30 in_game_status = 2'b00; //P2
		#15 in_column = 4'b1110;
		enable = 1'b1;
		#5 enable = 1'b0;
		
		#30 in_column = 4'b1011;
		enable = 1'b1;
		#5 enable = 1'b0;
		#10 reset = 1;
		#5 reset = 0;
		
		#30 in_game_status = 2'b01; //P2
		
		#45 reset = 1;
		in_game_status = 2'b00; //P2

		#5 reset = 0;
		
		#30 in_game_status = 2'b10; //P2
		
		#45 reset = 1;
		in_game_status = 2'b00; //P2
		#5 reset = 0;
		
		#30 in_game_status = 2'b11; //P2



		
		

		#50 $finish;

	end
      
endmodule