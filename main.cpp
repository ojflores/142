#include <iostream>
#include <string>
#include "chair.h"
#include "table.h"

using namespace std;


void command(Table& object){
	int access;
	do {
		cout << "\n\n";
		cout << "what would you like to do? \n";
		cout << "1: view what has been ordered for this table \n";
		cout << "2: take order for table\n";
		cout << "3: make final bill and close out this table\n";
		cout << "4: exit and go back\n";
		cin >> access;
		switch(access){
			case 1: object.view_table();
					break;
			case 2: object.chairs();
					break;
		}
	}while (access != 4);
	cout << "\n\n";
}

int main(){
	
	
	Table A;
	Table B;
	Table C;
	Table D;
	
	int counter;
	string access;
	do{
		cout << "Which table would you like to look at? 1, 2, 3, or 4? " << endl;
		cin >> counter;
		switch (counter){
			case 1: command(A);
					break;
			case 2: command(B);
					break;
			case 3: command(C);
					break;
			case 4: command(D);
					break;
		}
		cout << "would you like to exit? yes/no?" << endl;
		cin >> access;
	}while (access != "yes");
	
	
	
	
	
	
	return 0;
}