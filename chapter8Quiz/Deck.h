#ifndef DECK_H
#define DECK_H
#include <array>
#include "Card.h"

class Deck
{
private:
  std::array<Card, 52> m_deck;
  int m_cardIndex;

public:
  // constructor
  Deck()
  {
    Init();
  }

  void Init();

  void printDeck() const;

  static void swapCard(Card &a, Card &b);


  // Generate a random number between min and max (inclusive)
  // Assumes srand() has already been called
  static int getRandomNumber(int min, int max);


  void shuffleDeck();

  const Card& dealCard();
  

};


#endif