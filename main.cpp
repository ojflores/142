#include <iostream>
#include <string>
#define ITEMS 5
using namespace std;
/*
string menu[ITEMS] = {"salad", "meatloaf", "nachos", "pizza", "burrito"};
int menu_price[ITEMS] = {10, 12, 8, 9, 10};
*/

void test(){
	string access;
	do {
		cout << "command the object here\n";
		cin >> access;
		cout << "start the table object here.\n";
	}while (access != "yes");
}

int main(){
	int counter;
	string access;
	do{
		cout << "Which table would you like to look at? 1, 2, or 3? " << endl;
		cin >> counter;
		switch (counter){
			case 1: test();
					break;
			case 2: cout << "you have chosen 2\n";
					break;
			case 3: cout << "you have chosen 3\n";
					break;
		}
		cout << "would you like to exit? yes/no?" << endl;
		cin >> access;
	}while (access != "yes");
	
	
	
	
	
	
	return 0;
}