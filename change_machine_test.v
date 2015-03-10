`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:59:47 03/10/2015
// Design Name:   change_machine
// Module Name:   C:/Users/Roger/Dropbox/CS/CS152A/Lab4/Lab4/change_machine_test.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: change_machine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module change_machine_test;

	// Inputs
	reg [6:0] change;

	// Outputs
	wire [3:0] nickel;
	wire [3:0] dime;
	wire [3:0] quarter;

	// Instantiate the Unit Under Test (UUT)
	change_machine uut (
		.change(change), 
		.nickel(nickel), 
		.dime(dime), 
		.quarter(quarter)
	);

	initial begin
		// Initialize Inputs
		change = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		change = 7'b0001111;
		#1000;
	end
      
endmodule

