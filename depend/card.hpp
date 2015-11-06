#ifndef CARD_HPP
#define CARD_HPP
#include <iostream>

enum CardRank { two = 0, three, four, five, six, seven, eight, 
				nine, ten, jack, queen, king, ace 
};
enum CardSuit { spades = 0, clubs, diamonds, hearts };

class Card {
	private:
		CardRank m_rank;
		CardSuit m_suit;
		static const std::string cardRankStr[15];
		static const std::string cardSuitStr[15];
	public:
		//default constructor
		Card();
        
		//default destructor
		~Card();
		Card(CardRank, CardSuit);
        
		// Getters
		std::string getRankStr();
		std::string getSuitStr();
		int getRank();
		int getSuit();
		
        	// Setters
		void setRank(CardRank);
		void setSuit(CardSuit);

    	    	// Printing
        	// "3, 2"
        	void print();
	
       		 // "Five of Diamonds"
       	 	void prettyPrint();
};

#endif
