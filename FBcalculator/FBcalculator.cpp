/*
Foster Beaman

Northwest Vista

20190226 v. 1.0

A simple calculator for the equation of C = A*B / A-B.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
   Pseudo Code
      1. Start with output to find best look.
      2. Have variables set and equation for testing and tuning.
      3. Include user input to test practical test.
*/
int main()
{
   // Variables
   double dblDeciA = .01;
   double dblDeciB = .02;

   // User Input
   cout << endl << "We will be using this equation for this program: C = AB / A - B.";
   cout << endl << "Please enter a number for A: ";
   cin >> dblDeciA;
   cout << endl << "Please enter a second number for B: ";
   cin >> dblDeciB;

   // Equation Processing
   float fltAnsC = float((dblDeciA * dblDeciB) / (dblDeciA - dblDeciB));

   // End Output
   cout << endl << "Here is the answer for the equation: " << fltAnsC << endl;
   return 0;
}

