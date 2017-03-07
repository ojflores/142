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
void Chair::make_bill(int array[], string menu[]){
	bill = 0;
	int i, x;
	for (i = 0; i < counter; i++){
		x = 0;
		while (order[i] != menu[x]){
			x++;
		}
		bill += array[x];
	}
	
	cout << bill << endl;
	
}