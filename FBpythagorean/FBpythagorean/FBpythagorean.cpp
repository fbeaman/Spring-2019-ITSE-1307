/*
Foster Beaman

Northwest Vista

20190210 v. 1.00

This progam is to complete Pythagoras Theorem through use of given input for sides A and B.
*/

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

/*
	Pseudo Code
		Step 1: Prepare output lines to settle how the end product will look.
		Step 2: Set variable terms for input and output.
		Step 3: Set equation with pre-set variables to confirm proper fuctioning.
		Step 4: Include lines for user input so that user may utilize program.
*/

int main()
{
	// Variables
	int intSideA = 2;
	int intSideB = 3;
	double dblSideC = 0;

	// User Input
	cout << endl << "The Pythagoras Theorem application." ;
    cout << endl << "Please enter length of side A: " ;
	cin >> intSideA;
	cout << endl << "Please enter length of side B: " ;
	cin >> intSideB;

	// Processing
	dblSideC = sqrt(pow(intSideA, 2) + (intSideB * intSideB));

	// Program Output
	cout << endl << "This is the length of side C: " << dblSideC << " inches." ;
	
	return 0;
}