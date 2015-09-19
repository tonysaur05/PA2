

#include "card.h"

Card::Card()
{
  myRank = 1;
  mySuit = spades;
}

Card::Card(int rank, Suit s)
{
  myRank = rank;
  mySuit = s;
}

string Card::toString() const
{
  return rankString(myRank) + suitString(mySuit);
}

bool Card::sameSuitAs(const Card& c) const
{
  if (mySuit == c.mySuit)
    {
	  return true;
	}
    return false;
}

int Card::getRank() const
{
  return myRank;
}

string Card::suitString(Suit s) const
{
  switch (s)
  {
  	case spades:   return "s";
  	case hearts:   return "h";
  	case diamonds: return "d";
  	case clubs:    return "c";
  }
}

string Card::rankString(int r) const
{
  switch (r)
  {
  	case 1:  return "A";
  	case 11: return "J";
  	case 12: return "Q";
  	case 13: return "K";
  	default: return to_string(myRank);
  }
}

bool Card::operator == (const Card& rhs) const
{
  if (myRank == rhs.myRank)
  {
  	return true;
  }
  return false;
}

bool Card::operator != (const Card& rhs) const
{
  if (myRank != rhs.myRank)
  {
  	return true;
  }
  return false;
}