#include "deck.h"

Deck::Deck()
{
  myIndex = 0;
  for (int s = 0; s <= Card::clubs; s++)
  {
  	cout << s << endl;
  	for (int i = 1; i <= 13; i++)
  	{
  	  
  	  myCards[myIndex] = Card(i, static_cast<Card::Suit>(s));
  	  myIndex++;
  	}
  }
  cout<< "****************************" << endl;
  for (int i = 0; i < 52; i++)
  {
    cout << myCards[i].toString() << endl;
  }
}
