#ifndef MONSTERGENERATOR_H
#define MONSTERGENERATOR_H

#include "Monster.h"

class MonsterGenerator
{
public:

  
  // generate a monster
  static Monster generateMonster();

  // generate a random number
  static int getRandomNumber(int min, int max);
};

#endif