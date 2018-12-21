

/*

A deck of cards has 52 unique cards (13 card ranks of 4 suits). 
Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades).

Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.

Create a printCard() function that takes a const Card reference as a parameter and prints the card rank and value as a 2-letter code (e.g. the jack of spades would print as JS).

A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards, and initialize it with one of each card.

Write a function named printDeck() that takes the deck as a const reference parameter and prints the values in the deck. Use a for-each loop.

Write a swapCard function that takes two Cards and swaps their values.

Write a function to shuffle the deck of cards called shuffleDeck(). 
To do this, use a for loop to step through each element of your array. 
Pick a random number between 1 and 52, and call swapCard with the current card and the card picked at random. 
Update your main function to shuffle the deck and print out the shuffled deck.

Write a function named getCardValue() that returns the value of a Card 
(e.g. a 2 is worth 2, a ten, jack, queen, or king is worth 10. Assume an Ace is worth 11).
*/



#include <iostream>
#include <array>


enum class CardRank
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
	MAX_RANK
};


enum class CardSuit
{
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES,
	MAX_SUIT
};

struct Card
{
	CardRank rank;
	CardSuit suit;
};


void printCard(const Card &card)
{
	using namespace std;
	switch (card.rank)
	{
	case CardRank::RANK_2: cout << 2;break;
	case CardRank::RANK_3: cout << 3;break;
	case CardRank::RANK_4: cout << 4;break;
	case CardRank::RANK_5: cout << 5;break;
	case CardRank::RANK_6: cout << 6;break;
	case CardRank::RANK_7: cout << 7;break;
	case CardRank::RANK_8: cout << 8;break;
	case CardRank::RANK_9: cout << 9;break;
	case CardRank::RANK_10: cout << 'T';break;
	case CardRank::RANK_JACK: cout << 'J';break;
	case CardRank::RANK_QUEEN: cout << 'Q';break;
	case CardRank::RANK_KING: cout << 'K';break;
	case CardRank::RANK_ACE: cout << 'A';break;
	}

	switch (card.suit)
	{
	case CardSuit::CLUBS: cout << 'C'; break;
	case CardSuit::DIAMONDS: cout << 'D'; break;
	case CardSuit::HEARTS: cout << 'H'; break;
	case CardSuit::SPADES: cout << 'S'; break;
	}
}


void cardStructTest()
{
	Card card;
	card.rank = CardRank::RANK_2;
	card.suit = CardSuit::SPADES;
	printCard(card);
}


int main()
{
	
	std::array <Card, 52> cardArray;

	using index_t = std::array<Card, 52>::size_type;

	// to calculate the permutation level
	int tmpSuit = 0;
	int tmpRank = 0;

	for (index_t ind = 0; ind < cardArray.size(); ind++)
	{
		tmpRank = ind % 4;
		tmpSuit = (ind - tmpRank) / 4;

		Card tmpCard;
		tmpCard.rank = static_cast<CardRank>(tmpRank);
		tmpCard.suit = static_cast<CardSuit>(tmpSuit);
		cardArray[ind] = tmpCard;
	}


	for (index_t ind = 0; ind < cardArray.size(); ind++)
	{
		printCard(cardArray[ind]);
	}

	return 0;
}
