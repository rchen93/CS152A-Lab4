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
	reg clk;
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
	wire [6:0] output_change;
	wire [15:0] output_quantity;
	wire [15:0] output_revenue;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
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
		.output_change(output_change),
		.output_quantity(output_quantity),
		.output_revenue(output_revenue)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
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
		#1000;			// State: Quantity - 001
		info = 0;	
		#1000;			// State: Price - 000
		admin = 1;
		#1000;			// State: Revenue - 010
		info = 1;
		#1000; 			// State: Update - 011
		admin = 0; 	
		#1000;
		buy = 1;
		#1000;
		buy = 0;
		#1000; 			// State: Quantity - 001
		admin = 1; 
		info = 0; 
		#1000; 			// State: Revenue - 010
		//nickel = 1;
		#1000; 			// State: Revenue - 010
		//nickel = 0;
		admin = 0;
		info = 0;
		#1000;			// State: Price - 000
		nickel = 1;		// Money: 0000101
		#10;				// State: Buy - 100
		nickel = 0;
		#10;
		buy = 1;
		#100;
		buy = 0;			// Not enough money
		#1000;
		nickel = 1;		// Money: 0001010
		#10;
		nickel = 0;		
		#1000;
		dime = 1;		// Money: 0010100
		#10;
		dime = 0;
		#1000;
		quarter = 1;	// Money: 0101101
		#10;
		quarter = 0;
		#10;
		buy = 1;
		#100;
		buy = 0;			// Change: 0001010
		#100;				// State: Price - 000
							// Quantity: 1001
							// Revenue: 0000000000100011
		admin = 1;		
		#1000;			// State: Revenue - 010
		info = 1;
		#1000;			// State: Update - 011
		nickel = 1;
		#10;
		nickel = 0;
		#10;				//	Quantity: 00001110
		dime = 1;
		#10;
		dime = 0;
		#10;				//	Quantity: 00011000
		quarter = 1;
		#10;
		quarter = 0;
		#10;				// Quantity: 00110001
		admin = 0;
		#1000;
		info = 0;
		#1000;			// State: Price - 000
		nickel = 1;		// Money: 0000101
		#10;				// State: Buy - 100
		nickel = 0;
		#10;
		rst = 1;			// State: Price - 000
		#1000;			// Money: 0000000
		rst = 0;			// Change: 0000101
		#1000;		   
		admin = 1;		 
		#1000;
		info = 0; 		// State: Revenue 010
		#1000;
		rst = 1;
		#1000;			// Revenue: 0000000000000000
		rst = 0; 
		#1000; 
		info = 1; 		// State: Update - 011
		#1000;
		rst = 1;
		#1000;			// Quantity: 00000000
	end
	always
		#5 clk = ~clk;
     
endmodule

