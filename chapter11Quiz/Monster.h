#ifndef MONSTER_H
#define MONSTER_H


#include "Creature.h"
#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

// First, write an empty Monster class inheriting from Creature, and then add an enum inside the Monster class named Type that contains enumerators for the 3 monsters that we'll have in this game: DRAGON, ORC, and SLIME (you'll also want a MAX_TYPES enumerator, as that will come in handy in a bit).

class Monster : public Creature
{

public:  

  struct MonsterData
  {
    std::string name;
    char symbol;
    int health;
    int attack;
    int gold;
  };

  enum Type
  {
    DRAGON,
    ORC,
    SLIME,
    MAX_TYPES
  };

private:
  static MonsterData monsterData[MAX_TYPES];


public:

  // constructor
  Monster(Monster::Type _type);

  // get random monster
  static Monster getRandomMonster();

};

void testMonster();

int getRandomNumber(int min, int max);



void testMonster()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // get rid of first result
 
	for (int i = 0; i < 10; ++i)
	{
		Monster m = Monster::getRandomMonster();
		std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
	}
}


// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}



Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES] = 
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};


Monster::Monster(Monster::Type _type)
  : Creature(Monster::monsterData[_type].name, Monster::monsterData[_type].symbol,
  Monster::monsterData[_type].health,
  Monster::monsterData[_type].attack,
  Monster::monsterData[_type].gold)
  {}


Monster Monster::getRandomMonster()
{
  Monster m(static_cast<Monster::Type>(getRandomNumber(0, Monster::MAX_TYPES - 1)));

  std::cout << "You have encountered a " << m.getName() << '\n';
  return m;
}


#endif