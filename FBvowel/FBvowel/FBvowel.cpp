/*
Foster Beaman

Northwest Vista

20190404 v. 1.00

This program to verify if a character is a vowel or not.
*/

#include "pch.h"
#include <iostream>
using namespace std;

/*
Psuedo Code
	1. Output set for desired look.
	2. Boolean set to check for vowel.
	3. User input for vowel check.
	4. Do While loop for multiple iterations.
*/

//Boolean to check if vowel.
bool isVowel(char charVowel)
{
	//Switch statement for vowels.
	switch (charVowel)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'Y':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		cout << "Is a vowel." << endl;
		return true;

	default:
		cout << "Is not a vowel." << endl;
		return false;
	}
	cout << endl;
}
int main()
{
	//Variable
	char charVowel = 'a';

	// Output
	cout << "This program is to determine if a letter is a vowel or not." << endl;
	cout << "Enter # to quit." << endl;
	
	//Do While loop for vowel boolean.
	do {
		//Input
		cout << "Enter a letter: ";
		cin >> charVowel;
		cout << endl;

		isVowel(charVowel);
	} while (charVowel != '#');

	return 0;
}