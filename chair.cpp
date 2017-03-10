#include "chair.h"

Chair::Chair() {};

//takes the order of each individual chair
void Chair::take_order(){
	int i;
	cout << "How many items? ";
	cin >> counter;
	for (i=0; i < counter; i++){
		cout << "Item number " << i+1 << " is: " << endl;
		cin >> order[i];
	}
	
}


//makes the bill for each individual chair
void Chair::make_bill(){
	string menu[ITEMS] = {"salad", "meatloaf", "nachos", "pizza", "burrito"};
	int menu_price[ITEMS] = {10, 12, 8, 9, 10};
	bill = 0;
	int i, x;
	for (i = 0; i < counter; i++){
		x = 0;
		while (order[i] != menu[x]){
			x++;
		}
		bill += menu_price[x];
	}
	
	cout << bill << endl;
	
}

//returns the position of the chair
int Chair::pos_return(){
	return position;
}

//assigns the position of the person ordering
void Chair::assign_position(int p){
	position = p;
}