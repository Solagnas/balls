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
        void draw(Deck&, int);
        Card getCard(int);
        Hand(Deck&);
};

#endif
