/*
Foster Beaman

Norhtwest Vista

20190404 v. 1.00

This program is to check whether a user input string is a palindrome or not.
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

/*
Psuedo Code
	1. Output set to desired look.
	2. Boolean to check if palindrome.
	3. User input for palindrome.
	4. Do While loop for multiple iterations.
*/

//Boolean to check if palindrome.
bool isPalindrome(string strpPalin)
{
	int intLength = strpPalin.length(strPalin);

	//For look to check if palindrome.
	for (int intI = 0; intI < intLength / 2; intI++)
		if (strpPalin != str[intLength - 1 - intI])
			
			return false;

	return true;
}
int main()
{
	//String Variable
	string strPalin = " ";

	//Output
	cout << "Please enter a string to check if it is a palindrome." << endl;
	cout << "Enter # to quit." << endl;
	
	//Do While for multiple palindrome checks.
	do {
		cout << "Entry: ";
		
		//Input
		cin >> strPalin;
		cout << endl;

		isPalindrome(strpPalin);

	} while (strPalin != "#");

	return 0;
}
