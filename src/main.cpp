#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include "../depend/card.hpp"
#include "../depend/deck.hpp"
#include "../depend/player.hpp"


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
    
    
    // ------------ Player Test ------------
    std::string player1Name = "Pooby Nooples";
    Player poobyNooples(player1Name, PlayerPosition(0)); 
    poobyNooples.print();
    poobyNooples.prettyPrint();
    
    return 0;
}
