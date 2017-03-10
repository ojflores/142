#include "table.h"

Table::Table(){
	people = 0;
};

//inserts the chairs into the vector
void Table::chairs(){
	people = 2;
	int i;
	for (i = 0; i < people; i++){
		tables.push_back(Chair());
		cout << endl;
		tables[i].assign_position(i);
	}
	int pos;
	for (i = 0; i < people; i++){
		cout << "which position is this for?\n";
		cin >> pos;
		pos -= 1;
		tables[pos].take_order();
	}
}

//bills the people individually for their order
void Table::seperate_check(){
	int i;
	for (i = 0; i < people; i++){
		cout << "Person " << i+1 << " owes this much\n";
		tables[i].make_bill();
	}
}

//adds up the total to be paid for by one person
void Table::pay_together(){
	int final_bill, i;
	for (i = 0; i < people; i++){
		
		tables[i].make_bill();
		final_bill += tables[i].bill;
	}
	cout << "Your final bill is: \n";
	cout << final_bill << endl;
}

//splits the bill evenly between the group
void Table::split_bill(){
	float final_bill;
	int i;
	for (i = 0; i < people; i++){
		tables[i].make_bill();
		final_bill += tables[i].bill;
	}
	final_bill /= people;
	cout << "each person owes: " << final_bill << endl;
	
}

void Table::view_table(){
	if (people == 0){
		int r;
		cout << "there is no one at this table.\n";
		cout << "press 1 to return\n";
		cin >> r;
		return;
	}
	int i;
	for (i=0; i < people; i++){
		cout << tables[i].pos_return() << endl;
	}
}

