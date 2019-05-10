/*
Foster Beaman

Northwest Vista

20190505 v. 1.00

This program is meant to simulate a game of Blackjack.

*/

#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
using namespace std;

int main()
{
	srand((int)time(NULL));

	Player objDealer;
	Player objPlayer;
	Deck objDeck = Deck(4);
	Player inputPlayerBet;
	Player intpMoney;
	char charDifficulty;
	char charMenuOptions;

	std::cout << "Welcome to Blackjack." << endl;
	std::cout << "[S]tart Game." << endl;
	std::cout << "[C]hange Difficulty." << endl;
	std::cout << "[Q]uit." << endl;
	cin >> charMenuOptions;
	std::cout << endl;

	switch (charMenuOptions) {
	case 's': case 'S':
		//cout << objCard.toString() << endl;
		objDealer.setPlayerName("Dealer");
		std::cout << objDealer.toString() << endl;
		std::cout << objPlayer.toString() << endl;

		//objPlayer.inputPlayerBet();

		objDeck.shuffle();

		for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {
			objDealer.addCard(objDeck.getCard());
			objPlayer.addCard(objDeck.getCard());
		}

		//Should add some logic to prevent adding more cards that needed
		while (objDealer.getHandPointValue() <= 16) {
			objDealer.addCard(objDeck.getCard());
		}

		std::cout << objDealer.toString() << endl;
		std::cout << objPlayer.toString() << endl;

		if (objDeck.shouldShuffle()) {
			objDeck.shuffle();
		}

		if (objDealer.getHandPointValue() > objPlayer.getHandPointValue()) {
			// TODO: Add logic for game win conditions.
		}

		break;
	case 'c': case 'C':
		std::cout << "Here are the difficulty levels:" << endl;
		std::cout << "[E]asy Difficulty: Number of Decks: 3" << endl;
		std::cout << "[M]edium Difficulty (Default): Number of Decks: 4" << endl;
		std::cout << "[H]ard Difficulty: Number of Decks: 7" << endl;
		std::cout << "Select Difficulty: ";
		cin >> charDifficulty;
		std::cout << endl;

		switch (charDifficulty) {
		case 'e': case 'E':
			objDeck = Deck(3);
			break;
		case 'm': case 'M':
			objDeck = Deck(4);
			break;
		case 'h': case 'H':
			objDeck = Deck(7);
			break;
		default:
			objDeck = Deck(4);
			break;
		};
		break;
	case 'q': case 'Q':
		objDeck = Deck(7);
		break;
	default:
		objDeck = Deck(4);
		break;
	};

	
	
	
	return 0;
}