
#include <iostream>
#include "Point2d.h"
#include "HelloWorld.h"
#include "question1.h"
#include "MonsterGenerator.h"
#include "Deck.h"
#include "blackJack.h"
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()

void question1a()
{
  Point2d first;
  Point2d second(3.0, 4.0);
  first.print();
  second.print();
}


void question1b()
{
  Point2d first;
  Point2d second(3.0, 4.0);
  first.print();
  second.print();
  std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
}


void question1c()
{
  Point2d first;
  Point2d second(3.0, 4.0);
  first.print();
  second.print();
  std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
}


void question2()
{
  HelloWorld hello;
  hello.print();
}


void question3()
{
  srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value
 
	Monster m = MonsterGenerator::generateMonster();
	m.print();
  
}


void question4()
{
  srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value
 
	Deck deck;
	deck.shuffleDeck();

  if(playBlackjack(deck))
    std::cout << "You win!\n";
  else
		std::cout << "You lose!\n";
}