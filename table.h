#ifndef TABLE_H_
#define TABLE_H_
#include <vector>
#include "chair.h"

class Table{
private:
		vector<Chair> tables;
		int people;
public:
		//constructor
		Table();
		
		//inserts the chairs into the vector
		void chairs();
		
		//asks and orients how the customer wants to be billed
		void final_check();
		
		//bills the people individually for their order
		void seperate_check();
		
		//adds up the total to be paid for by one person
		void pay_together();
		
		//splits the bill evenly between the group
		void split_bill();
		
		//outputs all the items that have been ordered and which position has ordered it
		void view_table();
		
		//clears everything from the table 
		void clear_table();
};
#endif