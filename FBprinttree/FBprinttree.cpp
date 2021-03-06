/*
Foster Beaman

Northwest Vista

20190402 v. 1.00

This program is to create a tree to the user's desired hieght.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

void printTree(int intpHeight) {
   int intMidpoint = intpHeight / 2;
   int intWidth = 1;

   //branches
   for (int intRow = 1; intRow < intpHeight; intRow++) {
      for (int intSpacing = 1; intSpacing <= intpHeight - intRow; intSpacing++) {
         cout << ' ';
      }
      for (int intColumn = 1; intColumn <= intWidth; intColumn++)
      {
         cout << "*";
      }
      intWidth += 2;
      cout << endl;
   }

   //trunk
   for (int intSpacing = 1; intSpacing < intpHeight; intSpacing++) {
      cout << ' ';
   }
   cout << "*" << endl;
}

int main()
{
   //height
   int intTreeHeight = 5;

   //do while loop for making tree
   do {
      cout << "Enter the height of your tree: ";
      cin >> intTreeHeight;
      cout << endl;
      printTree(intTreeHeight);
   } while (intTreeHeight != 0);
   
   return 0;
}

