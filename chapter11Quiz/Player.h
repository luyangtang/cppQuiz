#ifndef PLAYER_H
#define PLAYER_H

#include "Creature.h"
#include <string>
#include <iostream>

//Now we're going to create the Player class. The Player class inherits from Creature. Player has one additional member, the player's level, which starts at 1. The player has a custom name (entered by the user), uses symbol '@', has 10 health, does 1 damage to start, and has no gold. Write a function called levelUp() that increases the player's level and damage by 1. Also write a getter for the level member. Finally, write a function called hasWon() that returns true if the player has reached level 20.

void testPlayer();


std::string getUserName();

class Player : public Creature
{
private:
  int m_level;

public:

  // constructor
  Player(std::string _name)
    : Creature(_name,'@',10,1,0)
    {}
  
  // level up
  void levelUp();

  // get level
  int getLevel();

  // has won
  bool hasWon();

  // collect gold
  void collectGold(int _gold);

  // increase damage
  void damageUp();
};

void Player::damageUp()
{
  m_attack++;
}

bool Player::hasWon()
{
  return m_level >= 20;
}

int Player::getLevel()
{
  return m_level;
}

void Player::collectGold(int _gold)
{
  m_gold += _gold;
}


void Player::levelUp()
{
  m_level++; 
  m_attack++;
}

std::string getUserName()
{
  std::cout << "Enter a name: ";
  std::string _name;
  std::cin >> _name;
  std::cout << "\nWelcome, " << _name << '\n';

  return _name;
}

void testPlayer()
{
  Player o(getUserName());
  std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.\n.";
}

#endif