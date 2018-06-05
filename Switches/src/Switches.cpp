//============================================================================
// Name        : Switches.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int value = 4;

	switch(value) {
	//cases can use constants or literal values, but not variables
	case 4:
		cout << "Value is 4" << endl;
		//breaks are used to stop the code from running into the next case
		break;
	case 5:
		cout << "Value is 5" << endl;
		break;
	case 6:
		cout << "Value is 6" << endl;
		break;
	case 7:
		cout << "Value is 7" << endl;
		break;
	case 8:
		cout << "Value is 8" << endl;
		break;
	//use a default case so that something happens even if no cases match
	default:
		cout << "Unrecognized value" << endl;
	}

	//switches cannot use string values
	int fruitChoice;
	do {
		cout << "Please choose a fruit" << endl <<"1. Banana" << endl << "2. Cantaloupe" << endl << "3. Watermelon" << endl;
		cin >> fruitChoice;
			if (fruitChoice > 3 || fruitChoice < 1 ){
				cout << "Please enter a valid number" << endl;
			}
	} while (fruitChoice > 3 || fruitChoice < 1);

	switch (fruitChoice) {
	case 1:
		cout << "You have chosen bananas" << endl;
		break;
	case 2:
		cout << "You have chosen cantaloupe" << endl;
		break;
	case 3:
		cout << "You have chosen watermelon" << endl;
		break;
	default:
		cout << "Please enter a valid fruit choice" << endl;
	}
	return 0;
}
