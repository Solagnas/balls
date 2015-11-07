#include "../depend/hand.hpp"

//draws the starting hand and instantiates the Hand
Hand::Hand(Deck& drawFrom) {
    m_cards[0] = drawFrom.removeCard();
    m_cards[1] = drawFrom.removeCard();
    m_nRemainingCards = 2;
}

//removes a card from the target deck and adds it to this hand
void Hand::draw(Deck& drawFrom, int numCards) {
    for(int i = 0; i < numCards; i++) {
        m_cards[ m_nRemainingCards ] = drawFrom.removeCard();
        m_nRemainingCards++;
    }
}

Card Hand::getCard(int n) { return m_cards[n]; }
