#ifndef HAND_HPP
#define HAND_HPP
#include <iostream>
#include "card.hpp"
#include "deck.hpp"

class Hand {
    private:
        Card m_cards[15];
        int m_nRemainingCards;
    public:
        Hand(Deck&);
        Hand();
        ~Hand();

        void draw(Deck&, int);
        Card getCard(int);

        void print();
        void prettyPrint();
};

#endif
