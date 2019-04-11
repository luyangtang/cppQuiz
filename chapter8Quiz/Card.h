#ifndef CARD_H
#define CARD_H

class Card
{
public:
  enum CardSuit
  {
  	SUIT_CLUB,
  	SUIT_DIAMOND,
  	SUIT_HEART,
  	SUIT_SPADE,
  	MAX_SUITS
  };

  enum CardRank
  {
  	RANK_2,
  	RANK_3,
  	RANK_4,
  	RANK_5,
  	RANK_6,
  	RANK_7,
  	RANK_8,
  	RANK_9,
  	RANK_10,
  	RANK_JACK,
  	RANK_QUEEN,
  	RANK_KING,
  	RANK_ACE,
  	MAX_RANKS
  };

private:
  CardRank m_rank;
  CardSuit m_suit;

public:
  //constructor
  Card(CardRank _rank = CardRank::RANK_ACE, CardSuit _suit = CardSuit::SUIT_SPADE)
    : m_rank(_rank), m_suit(_suit) {}

  const void printCard () const;

  const int getCardValue() const;

};


#endif