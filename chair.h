#ifndef CHAIR_H_
#define CHAIR_H_
#include <string>
#include <iostream>
#define ITEMS 5
using namespace std;


class Chair{
private:
	int counter;
public:
	int bill;
	string order[ITEMS];

	//constructor
	Chair();
	
	//takes the order of the customer
	void take_order();
	
	//adds the order up and makes a bill from it
	void make_bill(int[], string[]);
	
	
	
	
};










#endif