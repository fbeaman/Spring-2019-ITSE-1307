/*
* Foster Beaman
*
* Norhtwest Vista
*
* 20190318 v. 1.00
*
* This program is to determine the letter grade for a given number grade, as well as whether the grade passes or fails.
*/
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

/*
* Psuedo Code
*	1. Set output to standards.
*	2. Incorporate If Else statements for A to F letter grades.
*	3. Include equation to round double to nearest int.
*	4. Add Switch statement to simulate If Else loop.
*	5. Add input.
*/

int main()
{
	//Variable
	double dblGrade = 74.45;

	//Input
	cout << "Please enter a double grade value (0-100): ";
	cin >> dblGrade;

	//Equation to round double into int.
	int intGrade = rint(dblGrade);
	
	//If Esle statements
	cout << "If: " << intGrade << endl ;
	if (intGrade > 89) {
		cout << "A";
	}
	else if (intGrade > 79) {
		cout << "B";
	}
	else if (intGrade > 69) {
		cout << "C";
	}
	else if (intGrade > 59) {
		cout << "D";
	}
	else {
		cout << "F";
	}
	cout << endl;

	//Switch statement
	cout << "Switch: ";
	switch (intGrade / 10) {
	case 9: case 10:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	default:
		cout << "F" << endl;
	}

	cout << (intGrade > 69 ? "Pass" : "Fail") << endl;

	
	return 0;
}
