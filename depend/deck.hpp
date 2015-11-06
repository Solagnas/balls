#ifndef DECK_HPP
#define DECK_HPP
#include "card.hpp"
using namespace std;

class Deck {
	private:
		Card m_cards[52];
        	// Swaps cards at indices a and b
		void swap(int, int);
	public:
		Deck(); 
        	// Fisher-Yates shuffle (in place)
        	void shuffle();
        	void print();
        	void prettyPrint();
		Card getCard(int);
};


//test code


#endif
