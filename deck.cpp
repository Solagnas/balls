#include <iostream>
using namespace std;

enum cardRank { two = 0, three, four, five, six, seven, eight, 
				nine, ten, jack, queen, king, ace 
};
enum cardSuit { spades = 0, clubs, diamonds, hearts };
 
class card {
	private:
		cardRank m_rank;
		cardSuit m_suit;
	public:
		//default constructor
		card() {}
		//default destructor
		~card() {}
		card(cardRank r, cardSuit s) {
			m_rank = r;
			m_suit = s;
		}
		//getters
		/* TODO:
		 * write logic to make these return rank and suit as strings where necessary
		 */

		int getRank() { return m_rank; }
		int getSuit() { return m_suit; }
		//setters
		void setRank(cardRank r) { m_rank = r; }
		void setSuit(cardSuit s) { m_suit = s; }
};

class deck {
	private:
		card m_cards[52];
	public:
		//constructor, will initialize 52 unique cards
		deck(){ 
			int count = 0;
			cardRank r;
			cardSuit s;
			for(int i = 0; i < 4; i++)
				for(int j = 0; j < 13; j++) {
					r = cardRank(j);
					s = cardSuit(i);
					m_cards[count] = card(r, s);
					count++;
				}
		}
		//getter a specific card at a given location in the deck
		card getCard(int n) { return m_cards[n]; }
};


int main() {		//test code
	//initialize deck
    deck gameDeck;
	//index for the card array
    int n = 17;
	//prints in form -- rank, suit -- as integers
	cout << gameDeck.getCard(n).getRank() << ", " << gameDeck.getCard(n).getSuit() 
		 << endl;
    return 0;
}
