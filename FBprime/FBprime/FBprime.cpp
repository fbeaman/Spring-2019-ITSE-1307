/*
Foster Beaman

Northwest Vista

20190401 v. 1.00

This program is meant to find all prime numbers within a set range.
*/

#include "pch.h"
#include <iostream>
using namespace std;

/*
Psuedo Code
	1. Output for listing all prime numbers.
	2. Initiate variables for boolean and main solution.
	3. If Else statement to shift through potential prime numbers.
	4. If statement to confirm prime numbers.
	5. For statement to set range for all prime numbers.
*/

bool isPrime(int intValue) {
	//Variable
	int intPrimeDivisionCount = 0;

	//If Else statement for prime formula.
	if (intValue == 0) {
		return false;
		cout << "Not a prime.";
	}
	else {
		for (int intPrimeCheck = 2;
			intPrimeCheck < intValue;
			intPrimeCheck++) {

			if (intValue % intPrimeCheck == 0) {
				intPrimeDivisionCount++;
			}
		}
	}

	//If statement to check if prime.
	if (intPrimeDivisionCount >= 1) {
		return false;
		cout << "Not a prime." << endl;
	}

	return true;
}

int main()
{
	//Variable
	int intNumber = 0;

	//For statement to set range for primes.
	for (int intRange = 1; intRange <= 10000; intRange++) {
		intNumber = intRange;

		if (isPrime(intNumber)) {
			cout << ", " << intNumber;
		}
	}

}