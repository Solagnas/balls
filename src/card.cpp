//card.cpp
#include "../depend/card.hpp"

const std::string Card::cardRankStr[]={ "Two", "Three", "Four", "Five", "Six", "Seven",
                            "Eight", "Nine", "Ten", "Jack", "Queen", "King", 
                            "Ace" 
}; 
const std::string Card::cardSuitStr[]={ "Spades", "Clubs", "Diamonds", "Hearts" }; 



//default destructor
Card::Card() {}
Card::~Card() {}
Card::Card(CardRank r, CardSuit s) {
	m_rank = r;
	m_suit = s;
}
        
// Getters
std::string Card::getRankStr() { return cardRankStr[m_rank]; }
std::string Card::getSuitStr() { return cardSuitStr[m_suit]; }

int Card::getRank() { return m_rank; }
int Card::getSuit() { return m_suit; }
		
// Setters
void Card::setRank(CardRank r) { m_rank = r; }
void Card::setSuit(CardSuit s) { m_suit = s; }
       
// Printing
// "3, 2"
void Card::print() {
	std::cout << getRank() << ", " << getSuit() 
             << std::endl;       
}
// "Five of Diamonds"
void Card::prettyPrint() {
	std::cout << getRankStr() << " of " << getSuitStr() 
             << std::endl;    
}
