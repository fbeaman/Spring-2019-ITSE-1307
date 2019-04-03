/*
Foster Beaman

Northwest Vista

20190401 v. 1.00

This program is to convert letters into numbers using the telephone number scheme.
*/

#include "pch.h"
#include <iostream>
#include <cctype>
using namespace std;

/*
Psuedo Code
	1. Set up output.
	2. Initiate variable to use.
	3. Create Switch statement to convert letters into numbers based on telephone keypad.
	4. Do While loop for user input to insert as many letters as user desires.
	5. User input.
*/

int main()
{
	//Variable
	char charLetters;
	
	//Output
	cout << "Please enter letters one at a time." << endl;
	cout << "Enter # to finish: ";

	//Do While to stop only when # is put in.
	do {
		//User input.
		cin >> charLetters;
		cout << static_cast<char> (toupper(charLetters)) << endl;
		
		//Switch statement to convert letters to numbers.
		switch (charLetters)
		{

		case '1':
			cout << '1';
			break;

		case 'A': case 'B': case 'C':
			cout << '2';
			break;

		case 'D': case 'E': case 'F':
			cout << '3';
			break;

		case 'G': case 'H': case 'I':
			cout << '4';
			break;

		case 'J': case 'K': case 'L':
			cout << '5';
			break;

		case 'M': case 'N': case 'O':
			cout << '6';
			break;

		case 'P': case 'Q': case 'R': case 'S':
			cout << '7';
			break;

		case 'T': case 'U': case 'V':
			cout << '8';
			break;

		case 'W': case 'X': case 'Y': case 'Z':
			cout << '9';
			break;

		case '0':
			cout << '0';
			break;

		default:
			cout << "Can not turn into a number. ";
		}
	} while (charLetters != '#');
	
}