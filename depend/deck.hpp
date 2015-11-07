#ifndef DECK_HPP
#define DECK_HPP
#include "card.hpp"
using namespace std;

class Deck {
	private:
		Card m_cards[52];
        
		void swap(int, int);
        
	public:
        // ------- Constructors -------
		Deck(); 
        
		// --------- Getters ----------
		Card getCard(int);   
        
        // --------- Printing ---------
        void print();
        void prettyPrint();
        
        // --------- Sorting ----------
        void shuffle();
};

#endif
