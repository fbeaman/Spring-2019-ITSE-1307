/*
Foster Beaman
Northwest Vista
20190221 v. 1.0

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
   Psuedo Code
      1.Set output to desired look.
      2.Set variables to defaults and begin equating number of coins to total value of each.
      3.Add value of each set of coins together for end output.
      4.Set up lines for user input.
*/
int main()
{
   //Set variables for number of coins.
   int intHalfDoll = 3;
   int intQuarters = 5;
   int intDimes = 20;
   int intNickles = 35;
   int intPennies = 91;

   //User Input
   cout << endl << "Please enter amount of half dollars: ";
   cin >> intHalfDoll;
   cout << endl << "Please enter amount of quarters: ";
   cin >> intQuarters;
   cout << endl << "Please enter amount of dimes: ";
   cin >> intDimes;
   cout << endl << "Please enter amount of nickles: ";
   cin >> intNickles;
   cout << endl << "Please enter amount of pennies: ";
   cin >> intPennies;
   
   //Math for individual coins and addition of entire amount of change.
   float fltHalfDoll = float(intHalfDoll * .5);
   float fltQuarters = float(intQuarters * .25);
   float fltDimes = float(intDimes * .1);
   float fltNickles = float(intNickles * .05);
   float fltPennies = float(intPennies * .01);
   float fltChange = fltHalfDoll + fltQuarters + fltDimes + fltNickles + fltPennies;
   
   //Final output of change.
   cout << endl << "Here is your total change in dollars: $" << fltChange << endl;
   return 0;
}

