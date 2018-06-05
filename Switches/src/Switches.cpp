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
	//use a default case so that something happens even if no cases match
	default:
		cout << "Unrecognized value" << endl;
	}
	return 0;
}
