#include "deck.h"

Deck::Deck()
{
  myIndex = 0;
  for (int s = 0; s <= Card::clubs; s++)
  {
  	for (int i = 1; i <= 13; i++)
  	{
  	  myCards[myIndex] = Card(i, static_cast<Card::Suit>(s));
  	  myIndex++;
  	}
  }
  myIndex--; // set index to last card

  // SHOW PRISTINE DECK OF CARDS
  cout << "****Pristine deck****" << endl;
  for (int i = 0; i < SIZE; i++)
  {
    cout << myCards[i].toString() << endl;
  }
}

void Deck::shuffle()
{
  Card tempCard = Card();    // temporary card holder for swapping

  srand (time(NULL));        // use different seed value each time

  for (int i = 0; i <= myIndex; i++)
  {
  	int j = rand() % (i+1);  // generate random number
    tempCard = myCards[i];   // swap cards
    myCards[i] = myCards[j];
    myCards[j] = tempCard;
  }

  // SHOW SHUFFLED CARDS
  cout << "****Shuffled deck****" << endl;
  for (int i = 0; i < SIZE; i++)
  {
    cout << myCards[i].toString() << endl;
  }
}

Card Deck::dealCard()
{
	cout << "current index: " << myIndex << endl;
	myIndex--;
	cout << "decremented index: " << myIndex << endl;

	// SHOW CARD BEING DELT
	cout << "****Dealing card****" << endl;
	cout << myCards[myIndex + 1].toString() << endl;
	return myCards[myIndex + 1];
}

int Deck::size() const
{
  return myIndex;
}