#include "Deck.h"
#include <array>
#include "Card.h"
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include <iostream>


void Deck::Init()
{
  m_cardIndex = 0;

  // srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
  // rand(); // If using Visual Studio, discard first random value

  std::array<Card, 52> deck;

  // We could initialize each card individually, but that would be a pain.  Let's use a loop.
  int card = 0;
  for (int suit = 0; suit < Card::MAX_SUITS; ++suit)
  for (int rank = 0; rank < Card::MAX_RANKS; ++rank)
  {
    deck[card++] = Card(static_cast<Card::CardRank>(rank), static_cast<Card::CardSuit>(suit));
  }

  m_deck = deck;

}



void Deck::printDeck() const
{
  for (const auto &card : m_deck)
  {
    card.printCard();
    std::cout << ' ';
  }

  std::cout << '\n';
}


void Deck::swapCard(Card &a, Card &b)
{
  Card temp = a;
  a = b;
  b = temp;
}



int Deck::getRandomNumber(int min, int max)
{
  static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
  // evenly distribute the random number across our range
  return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}


void Deck::shuffleDeck()
{
  // Step through each card in the deck
  for (int index = 0; index < 52; ++index)
  {
    // Pick a random card, any card
    int swapIndex = getRandomNumber(0, 51);
    // Swap it with the current card
    swapCard(m_deck[index], m_deck[swapIndex]);
  }

  // reset index
  m_cardIndex = 0;
}



const Card& Deck::dealCard()
{
  const Card &tmp = m_deck[m_cardIndex++];
  return tmp;
}