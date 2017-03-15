Readme text for Final Project

Author: Oscar Flores, Khalil Llewellyn, Paul Omosa
Section <142, A>

Date: 3/14/17

Purpose of Program:
	To take orders from customers and output what they have requested.
	Also to split the bill according to how the customer wants to pay.
	
Includes:
	main.cpp
	chair.cpp chair.h
	table.cpp table.h
	
How to Use:
	Run the program with all its included files.
	Select a table, 1-4
	NOTE: Program needs to run at least once to close.
	Select an option on the screen. Pick from numbers 1-4.
	NOTE: When taking an order, you need to enter the right information, otherwise the program crashes.
	When you're finished press 4 to go back to start menu.
	From there you can do it all over again for any other table, or hit 3 to do final check for a selected table an close it out.
	That table will be ready to use once again.
	At the end, just type in yes to exit.
	
Known Errors:
	When it asks for position of person, if it's not an integer the program crashes.
	Ordering more than five items for one given person gives a segmentation fault.
	
UML
Class Table
 - vector<> tables
 - int people
 
 + void chairs()
 + void final_check()
 + void seperate_check()
 + void pay_together()
 + void split_bill()
 + void view_table()
 + void clear_table()
 
Class Chair
 - int position
 + int counter
 + int bill
 + string order[]
 
 + void take_order()
 + void make_bill()
 + void pos_return()
 + void assign_position() 