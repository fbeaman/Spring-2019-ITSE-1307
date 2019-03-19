// FBgrades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double dblGrade = 74.45;

	cout << "Please enter a double grade value (0-100): ";
	cin >> dblGrade;

	if (cin) {
		int intGrade = rint(dblGrade);
	}
//	cout << "If: " << intGrade << endl ;
//	if (intGrade > 89) {
//		cout << "A";
//	}
//	else if (intGrade > 79) {
//		cout << "B";
//	}
//	else if (intGrade > 69) {
//		cout << "C";
//	}
//	else if (intGrade > 59) {
//		cout << "D";
//	}
//	else {
//		cout << "F";
//	}
//	cout << endl;

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