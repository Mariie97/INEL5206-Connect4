`timescale 1ns / 1ps

module InputColumnDecoder_tb;

	// Inputs
	reg [3:0] in_column;

	// Outputs
	wire [1:0] column_decode;

	// Instantiate the Unit Under Test (UUT)
	InputColumnDecoder uut (
		.in_column(in_column), 
		.column_decode(column_decode)
	);

	initial begin
		// Initialize Inputs
		in_column = 0;

		// Wait 100 ns for global reset to finish
		#10;
		
		// Add stimulus here	
		#10 in_column = 4'b0001;
		#10 in_column = 4'b0010;
		#10 in_column = 4'b0100;
		#10 in_column = 4'b1000;
		
      #5 $finish;
	end
      
endmodule

