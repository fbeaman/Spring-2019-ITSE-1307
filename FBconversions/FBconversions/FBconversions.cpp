/*
Foster Beaman

Northwest Vista

20190206 v. 1.00

This program is to convert a user input amount of distance in miles to the kilometer equivalent.
*/
#include "pch.h"
#include <iostream>

using namespace std;

/*
	Pseudo Code
		1. Set variable for user input for Miles.
		2. Have user input desired number of Miles to convert into Kilometers.
		3. Have actual conversion equation for Miles to Kilometers.
		4. Output to show converted Kilometers.
*/
int main()
{
	// Set Variables
	int intMiles = 1;
	//Kilometer conversion rate = 1.609

	// Input
	cout << endl << "Please enter desired distance in Miles: ";
	cin >> intMiles;

	// Processing
	float fltKilometers = (float)intMiles * 1.609;

	// Output
	cout << endl << "This is " << fltKilometers << " Kilometers. " << endl;
	return 0;
}