#include <iostream>
#include <stdlib.h>     // rand, srand
#include <time.h>       // time
using namespace std;

enum CardRank { two = 0, three, four, five, six, seven, eight, 
				nine, ten, jack, queen, king, ace 
};
enum CardSuit { spades = 0, clubs, diamonds, hearts };
 
const char *cardRankStr[]={ "Two", "Three", "Four", "Five", "Six", "Seven",
                            "Eight", "Nine", "Ten", "Jack", "Queen", "King", 
                            "Ace" 
}; 
const char *cardSuitStr[]={ "Spades", "Clubs", "Diamonds", "Hearts" }; 
 
 
 
class Card {
	private:
		CardRank m_rank;
		CardSuit m_suit;
	public:
		//default constructor
		Card() {}
        
		//default destructor
		~Card() {}
		Card(CardRank r, CardSuit s) {
			m_rank = r;
			m_suit = s;
		}
        
		// Getters
		string getRankStr() { return cardRankStr[m_rank]; }
        string getSuitStr() { return cardSuitStr[m_suit]; }
		int getRank() { return m_rank; }
		int getSuit() { return m_suit; }
		
        // Setters
		void setRank(CardRank r) { m_rank = r; }
		void setSuit(CardSuit s) { m_suit = s; }
       
        // Printing
        // "3, 2"
        void print() {
            cout << getRank() << ", " << getSuit() 
                 << endl;        
        }

        // "Five of Diamonds"
        void prettyPrint() {
            cout << getRankStr() << " of " << getSuitStr() 
                 << endl;    
        }
};

class Deck {
	private:
		Card m_cards[52];
        
        // Swaps cards at indices a and b
        void swap(int a, int b){
            if(a==b){ return; }
            
            // TODO: see if swapping references/pointers is better way
            Card temp = m_cards[a];
            m_cards[a] = m_cards[b];
            m_cards[b] = temp;
        }
        
	public:
		// Constructor, will initialize 52 unique cards
		Deck(){ 
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
        void shuffle(){
            int j = 0;
            srand(time(NULL));          // Seed RNG with new value

            for(int i=0; i<51; i++) {
                j = rand() % 52;        // j randomly generated in range 0 to 51
                swap(i, j);             // Swap cards at indices i and j
            }
        }
        
        // Printing
        /*  "3, 2"
            "12, 0"
            ...         */
        void print() {
            for(int n=0; n<52; n++) {
                getCard(n).print();
            }
        }

        /*  "Five of Diamonds"
            "Ace of Spades"
            ...                 */
        void prettyPrint() {
            for(int n=0; n<52; n++) {
                getCard(n).prettyPrint();
            }
        }
        
		// Get a specific card at a given location in the Deck
		Card getCard(int n) { return m_cards[n]; }
};


//test code
int main() {		
	//initialize deck
    Deck gameDeck;
    
	//index for the card array
    int n = 17;
    
	//prints in form -- rank, suit -- as integers
    gameDeck.getCard(n).print();
    
    // Prints all cards in deck in order
    gameDeck.prettyPrint();
    cout << endl;
    
    // Shuffles deck
    gameDeck.shuffle();
    gameDeck.prettyPrint();
    
    return 0;
}
