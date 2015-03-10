`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:22 03/09/2015
// Design Name:   eight_bit_bcd
// Module Name:   C:/Users/152/Desktop/RKC/Lab4/eight_bit_bcd_test.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: eight_bit_bcd
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sixteen_bit_bcd_test;

	// Inputs
	reg [15:0] binary;

	// Outputs
	wire [3:0] D4;
	wire [3:0] hundreds;
	wire [3:0] tens;
	wire [3:0] ones;

	// Instantiate the Unit Under Test (UUT)
	sixteen_bit_bcd uut (
		.binary(binary), 
		.D4(D4),
		.hundreds(hundreds), 
		.tens(tens), 
		.ones(ones)
	);

	initial begin
		// Initialize Inputs
		binary = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		binary = 8'b01111101;
		#100;
		binary = 16'b0000010011100101;
		#100;

	end
      
endmodule

