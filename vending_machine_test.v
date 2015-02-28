`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:55:00 02/25/2015
// Design Name:   vending_machine
// Module Name:   C:/Users/152/Desktop/RKC/Lab4/vending_machine_test.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vending_machine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vending_machine_test;

	// Inputs
	//reg clk;
	reg [1:0] item;
	reg nickel;
	reg dime;
	reg quarter;
	reg rst;
	reg admin;
	reg info;
	reg buy;

	// Outputs
	wire [2:0] output_state;
	wire [6:0] output_money;
	wire [2:0] output_coin;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		//.clk(clk), 
		.item(item), 
		.nickel(nickel), 
		.dime(dime), 
		.quarter(quarter), 
		.rst(rst), 
		.admin(admin), 
		.info(info), 
		.buy(buy), 
		.output_state(output_state),
		.output_money(output_money),
		.output_coin(output_coin)
	);

	initial begin
		// Initialize Inputs
		//clk = 0;
		item = 0;
		nickel = 0;
		dime = 0;
		quarter = 0;
		rst = 0;
		admin = 0;
		info = 0;
		buy = 0;
		// Initial State: Price - 000

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		info = 1;
		#500;			// State: Quantity - 001
		info = 0;	
		#500;			// State: Price - 000
		admin = 1;
		#500;			// State: Revenue - 010
		info = 1;
		#500; 		// State: Update - 011
		admin = 0; 
		#500; 		// State: Quantity - 001
		admin = 1; 
		info = 0; 
		#500; 		// State: Revenue - 010
		nickel = 1;
		#500; 		// State: Revenue - 010
		nickel = 0;
		admin = 0;
		info = 0;
		#500;			// State: Price - 000
		nickel = 1;
		#500;			// State: Buy - 100
		nickel = 0;
		nickel = 1;
		
		

	end
     
endmodule

