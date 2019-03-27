/*
Foster Beaman

Northwest Vista

20190325 v. 1.00

This program is a modified version of a high low game.
*/

#include "pch.h"
#include <iostream>
#include <time.h>
#include <string>
using namespace std;
/*
Psuedo Code
	1. Set output to preference.
	2. Set variables for initial testing.
	3. Do While loop for High Low game.
	4. User input for High Low Do While loop.
	5. Do While loop for difficulty setting.
	6. Modify High Low Do While loop for difficulty setting and loss condition.
	7. User input for difficulty level.
*/
int main()
{
	//Variables
	srand(time(NULL));
	string strDifficulty = "";
	int intLimit = 100;
    int intGuessChance = 7;
	cout << "Welcome to the High Low game." << endl;
	
	//Difficulty Do While loop
	do {
		//User input for difficulty
		cout << "Please enter your desired difficulty from normal, hard or harder: ";
		cin >> strDifficulty;
		cout << endl;
		if (strDifficulty == "normal") {
			intLimit = 100;
			intGuessChance = 7;
		}
		else if (strDifficulty == "hard") {
			intLimit = 1000;
			intGuessChance = 14;
		}
		else if (strDifficulty == "harder") {
			intLimit = 10000;
			intGuessChance = 21;
		}
		else {
			cout << "Not a set difficulty." << endl;
		}
	} while (strDifficulty != "normal" && strDifficulty != "hard" && strDifficulty != "harder");

	//Guess Goal
	int intGuess = rand() % intLimit + 1;
	int intCurrentGuess = 1;
	
	//Do While loop for High Low Game
	do {
		
		int intGuessChanceLimit = 0;
		do {
			//User input for guess
			cout << "You have " << intGuessChance << " chances to guess the correct number." << endl;
			cout << "Guess a number between 1 and " << intLimit << ": ";
			cin >> intCurrentGuess;

		} while (intCurrentGuess < 1 || intCurrentGuess > intLimit);
		
		if (intCurrentGuess > intGuess) {
			cout << "Try guessing lower." << endl;
		}
		else if (intCurrentGuess < intGuess) {
			cout << "You need to guess higher." << endl;
		}
		else {
			cout << "You guessed correctly, you win." << endl;
		}
		
		intGuessChance--;		
		//If statment for loss
		if (intGuessChance == intGuessChanceLimit) {
			cout << "Sorry, but you ran out of guesses." << endl;
		}
	} while (intCurrentGuess != intGuess && intGuessChance != 0);

	return 0;
}