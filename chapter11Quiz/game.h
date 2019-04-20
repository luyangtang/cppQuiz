#ifndef GAME_H
#define GAME_H



#include "Player.h"
#include "Monster.h"


#include <iostream>

char getPlayerAction();
void play();

char getPlayerAction()
{
  std::cout << "(R)un or (F)ight: ";
  char action = 0;

  std::cin >> action;
  // while(action != 'r' || action != 'f')
  // {
    std::cout << "Invalid input. (R)un or (F)ight: ";
    std::cin >> action;
  // }
  
  std::cout << '\n';
  return action;
}


void play()
{
  // create a player
  Player o(getUserName());
  std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.\n.";

  // initialise random number generator
  srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // get rid of first result

  // create a monster
  Monster m = Monster::getRandomMonster();

  // get user input
  char playerAction = getPlayerAction();

  // if the player escapes
  if (playerAction == 'r')
  {
    // get a escape result: 0 - fail, 1 - success
    int escaped = getRandomNumber(0,1);

    if (escaped)
    {
      // jump to the next round
    }
    else
    {
      // free attack from monster
      o.reduceHealth(m.getAttack());
    }
  }

  // if the players choose to fight
  else 
  {
    // player attacks first
    m.reduceHealth(o.getAttack());

    // if the monster is dead
    if (m.isDead())
    {
      // collect the gold
      o.collectGold(m.getGold());
      // level up and damage +1
      o.damageUp();
      o.levelUp();

      // create a new monster
      m = Monster::getRandomMonster();

      // go to the next round
    }

    // if the monster is not dead
    else
    {
      o.reduceHealth(m.getAttack());
      // go to the next round
    }
  }

}

#endif