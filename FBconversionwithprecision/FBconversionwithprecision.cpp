// FBconversionwithprecision.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

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
   cout << endl << setprecision(3) << "This is " << setw(3) << setfill(' ') << fltKilometers << " Kilometers. " << endl;
   return 0;
}