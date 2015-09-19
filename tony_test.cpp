#include <iostream>    // Provides cout and cin
#include <cstdlib>     // Provides EXIT_SUCCESS
#include "card.h"
// #include "player.h"
#include "deck.h"

using namespace std;


// PROTOTYPES for functions used by this demonstration program:
//void dealHand(Deck &d, Player &p, int numCards);




int main( )
{
  Card card1 = Card();
  Card card2 = Card(1, Card::hearts);
  cout << card1.toString() << endl;
  cout << card2.toString() << endl;
  cout << "Same suit? " << card1.sameSuitAs(card2) << endl;
  cout << "Equal Rank? " << (card1 == card2) << endl;
  cout << "inEqual Rank? " << (card1 != card2) << endl;

  cout << "*****************************" << endl;

  Deck shinyDeck = Deck();


    // int numCards = 5;
    
    // Player p1("Joe");
    // Player p2("Jane");
    
    // Deck d;  //create a deck of cards
    // d.shuffle();
    
    // dealHand(d, p1, numCards);
    // dealHand(d, p2, numCards);
       
    // cout << p1.getName() <<" has : " << p1.showHand() << endl;
    // cout << p2.getName() <<" has : " << p2.showHand() << endl;
    
    
    // system("PAUSE");
    
    return EXIT_SUCCESS;  
}



// void dealHand(Deck &d, Player &p, int numCards)
// {
//    for (int i=0; i < numCards; i++)
//       p.addCard(d.dealCard());
// }