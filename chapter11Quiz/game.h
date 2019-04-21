#ifndef GAME_H
#define GAME_H



#include "Player.h"
#include "Monster.h"


#include <iostream>

char getPlayerAction();

// fightMonster() handles the fight between the Player and a single Monster, including asking the player what they want to do, handling the run or fight cases.
void fightMonster(char playerAction, Monster &m, Player &o);

void play();

//attackMonster() handles the player attacking the monster, including leveling up.
void attackMonster(Monster &m, Player o);

//attackPlayer() handles the monster attacking the player.
void attackPlayer(Monster &m, Player &o);

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



void fightMonster(char playerAction, Monster &m, Player &o)
{
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
      attackPlayer(m,o);
    }
  }

  // if the players choose to fight
  else 
  {
    attackMonster(m,o);
  }
}


void attackPlayer(Monster &m, Player &o)
{
    // free attack from monster
  o.reduceHealth(m.getAttack());
  std::cout << m.getName() << " hit you by " << m.getAttack() << "damage.\n";
}


void attackMonster(Monster &m, Player o)
{
  // player attacks first 
  m.reduceHealth(o.getAttack());
  std::cout << "You hit the " << m.getName() << "by " << o.getAttack() << " damage.\n";

  // if the monster is dead
  if (m.isDead())
  {
    // collect the gold
    o.collectGold(m.getGold());

    // level up and damage +1
    o.damageUp();
    o.levelUp();
    std::cout << "You are now level " << o.getLevel() << '\n';

    // create a new monster
    m = Monster::getRandomMonster();
  }

  // if the monster is not dead
  else
  {
    attackPlayer(m, o);
    // go to the next round
  }
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
  char action = getPlayerAction();

  // fight monster
  while(o.getLevel() < 20 || o.getHealth() > 0)
  {
    fightMonster(action, m, o);
  }

  // show result
  if (o.getLevel() >= 20)
  {
    std::cout << "You win with " << o.getGold() << " many gold!\n";
  }
  else
  {
    std::cout << "You lose the game with " << o.getGold() << " at level " << o.getLevel() << "!\n";
  }
}

#endif