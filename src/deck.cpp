//deck.cpp
#include <iostream>
#include <stdlib.h>     // rand, srand
#include <time.h>       // time
#include "../depend/deck.hpp"

void Deck::swap(int a, int b) {
	if(a==b){ return; }
        // TODO: see if swapping references/pointers is better way
        Card temp = m_cards[a];
        m_cards[a] = m_cards[b];
        m_cards[b] = temp;
}
        
// Constructor, will initialize 52 unique cards
Deck::Deck() { 
	int count = 0;
	CardRank r;
	CardSuit s;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 13; j++) {
			r = CardRank(j);
			s = CardSuit(i);
			m_cards[count] = Card(r, s);
			count++;
		}
        }
}

// Fisher-Yates shuffle (in place)
void Deck::shuffle(){
	int j = 0;
	srand(time(NULL));              // Seed RNG with new value

        for(int i=0; i<51; i++) {
        	j = rand() % 52;        // j randomly generated in range 0 to 51
                swap(i, j);             // Swap cards at indices i and j
        }
} 
        
// Printing
/*  "3, 2"    *
 *  "12, 0"   *
 */
void Deck::print() {
       for(int n=0; n<52; n++) {
               getCard(n).print();
       }
}

/*  "Five of Diamonds"    *
 *  "Ace of Spades"       *
 */
void Deck::prettyPrint() {
       for(int n=0; n<52; n++) {
               getCard(n).prettyPrint();
       }
}
        
// Get a specific card at a given location in the Deck
Card Deck::getCard(int n) { return m_cards[n]; }
