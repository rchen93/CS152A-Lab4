`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:16 02/17/2015
// Design Name:   segment_display
// Module Name:   C:/Users/152/Desktop/RKC/lab3/segment_display_test.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: segment_display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module segment_display_test;

	// Inputs
	reg [3:0] count;

	// Outputs
	wire [6:0] display;

	// Instantiate the Unit Under Test (UUT)
	segment_display uut (
		.count(count), 
		.display(display)
	);

	initial begin
		// Initialize Inputs
		count = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		count = 0;
		#1000;
		count = 1;
		#1000;
		count = 2;
		#1000;
		count = 3;
		#1000;
		count = 4;
		#1000;
		count = 5;
		#1000;
		count = 6;
		#1000;
		count = 7;
		#1000;
		count = 8;
		#1000;
		count = 9;
		#1000;
		count = 10;
		#1000;

	end
      
endmodule

