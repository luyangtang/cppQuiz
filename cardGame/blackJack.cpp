

/*

A deck of cards has 52 unique cards (13 card ranks of 4 suits). 
Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades).
*/




#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>


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


void printDeck(const std::array<Card, 52> &cardArray)
{
	
	for (Card card : cardArray)
	{
		printCard(card);
		std::cout << ' ';
	}
	std::cout << '\n';
}


void testPrintDeck()
{
	std::array <Card, 52> cardArray;

	using index_t = std::array<Card, 52>::size_type;

	// to calculate the permutation level
	int tmpSuit = 0;
	int tmpRank = 0;

	for (index_t ind = 0; ind < cardArray.size(); ind++)
	{
		tmpRank = ind % 13; // rank is the modulo
		tmpSuit = (int)ind / 13; // suit is the floor of ind/13

		Card tmpCard;

		// populate the card info 
		tmpCard.rank = static_cast<CardRank>(tmpRank);
		tmpCard.suit = static_cast<CardSuit>(tmpSuit);
		cardArray[ind] = tmpCard;
	}


	printDeck(cardArray);
}


void swapCard(Card &cardA, Card &cardB)
{

	// tmp intermediate variable
	Card tmpCard = cardA;
	cardA = cardB;
	cardB = tmpCard;
}


std::array <Card, 52> generateDeck()
{
	std::array <Card, 52> deck;
	using index_t = std::array <Card, 52>::size_type;

	int tmpSuit = 0;
	int tmpRank = 0;
	Card tmpCard;

	for (index_t i = 0; i < deck.size(); i++)
	{
		tmpSuit = (int) i / 13;
		tmpRank = i % 13;
		

		// populate the card info
		tmpCard.rank = static_cast <CardRank>(tmpRank);
		tmpCard.suit = static_cast <CardSuit>(tmpSuit);
		deck[i] = tmpCard;


		/* better
		for (int suit = 0; suit < MAX_SUITS; ++suit)
			for (int rank = 0; rank < MAX_RANKS; ++rank)
			{
				deck[card].suit = static_cast<CardSuit>(suit);
				deck[card].rank = static_cast<CardRank>(rank);
				++card;
			}
		*/
	}

	return deck;
}

int generateRandomNumber(int min = 0, int max = 51)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);  // static used for efficiency, so we only calculate this value once
															// evenly distribute the random number across our range
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


void testSwapCard()
{
	std::array <Card, 52> cardArray = generateDeck();


	printDeck(cardArray);

	swapCard(cardArray[0], cardArray[1]);

	printDeck(cardArray);
}


void shuffleDeck(std::array <Card,52> &deck)
{
	std::rand(); // for visual studio
	int rand;
	for (Card card : deck)
	{
		rand = generateRandomNumber();
		swapCard(card, deck[rand]);
	}
}


void testShuffuleDeck()
{
	std::array <Card, 52> cardArray = generateDeck();

	printDeck(cardArray);

	// set random seed
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	// shuffle the card
	/*for (Card card : cardArray)
	{
	rand = generateRandomNumber();
	swapCard(card, cardArray[rand]);
	}*/

	shuffleDeck(cardArray);

	printDeck(cardArray);
}


int getCardValue(const Card &card)
{
	switch (card.rank)
	{
	case CardRank::RANK_2: return 2;
	case CardRank::RANK_3: return 3;
	case CardRank::RANK_4: return 4;
	case CardRank::RANK_5: return 5;
	case CardRank::RANK_6: return 6;
	case CardRank::RANK_7: return 7;
	case CardRank::RANK_8: return 8;
	case CardRank::RANK_9: return 9;
	case CardRank::RANK_10: return 10;
	case CardRank::RANK_JACK: return 10;
	case CardRank::RANK_QUEEN: return 10;
	case CardRank::RANK_KING: return 10;
	case CardRank::RANK_ACE: return 10;
	}
}


void testGetCardValue()
{
	std::array <Card, 52> cardArray = generateDeck();

	printDeck(cardArray);

	// set random seed
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	// shuffle the card
	/*for (Card card : cardArray)
	{
	rand = generateRandomNumber();
	swapCard(card, cardArray[rand]);
	}*/

	shuffleDeck(cardArray);

	printDeck(cardArray);

	for (Card card : cardArray) {
		printCard(card);
		std::cout << ": " << getCardValue(card) << ";\n";
	}
}


int main()
{
	
	std::array <Card, 52> cardArray = generateDeck();

	printDeck(cardArray);

	// set random seed
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	// start with shuffled deck
	shuffleDeck(cardArray);

	printDeck(cardArray);

	// initialise a pointer to the first card
	Card *cardPtr = &cardArray[0];

	// Create two integers to hold the player's 
	// and dealer's total score so far
	int playerScore = 0;
	int dealerScore = 0;

	// player's turn




	return 0;
}
