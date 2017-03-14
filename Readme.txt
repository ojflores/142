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