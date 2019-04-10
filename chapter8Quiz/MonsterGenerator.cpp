#include "MonsterGenerator.h"
#include "Monster.h"

Monster MonsterGenerator::generateMonster()
{
  static const std::string s_names[6] {"Alice", "Bob", "Charles", "Daniel", "Elli", "Fiona"};

  static const std::string s_roars[6] {"*meow*", "*rattle*", "*bark*", "*Zzzz*", "*Shush*", "*Bump*"};

  Monster::MonsterType _type = static_cast<Monster::MonsterType>(getRandomNumber(0,Monster::MAX_MONSTER_TYPES-1));

  int _hitPoint = getRandomNumber(1,100);


  return Monster(_type, s_names[getRandomNumber(0,5)], s_roars[getRandomNumber(0,5)], _hitPoint);
}

int MonsterGenerator::getRandomNumber(int min, int max)
{
  static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
  // evenly distribute the random number across our range
  return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}