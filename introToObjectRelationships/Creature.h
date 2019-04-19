#ifndef CREATURE_H
#define CREATURE_H


#include <string>
#include <assert.h>

class Creature
{
  // A name (std::string), a symbol (a char), an amount of health (int), the amount of damage they do per attack (int), and the amount of gold they are carrying (int)

protected:
  std::string m_name;
  char m_symbol;
  int m_health;
  int m_attack;
  int m_gold;

public:

  // constructor
  Creature(std::string _name, char _symbol = 0, int _health = 0, int _attack = 0, int _gold = 0)
    :m_name(_name), m_symbol(_symbol), m_health(_health), m_attack(_attack), m_gold(_gold)
    {}

  // get name
  std::string getName();

  // get health
  int getHealth();

  // get gold
  int getGold();

  // add gold
  void addGold(int _gold);

  // reduce health
  void reduceHealth(int _health);
};

void Creature::reduceHealth(int _health)
{
  assert(_health >= 0);
  m_health -= (_health > m_health ? m_health : _health);
}



void Creature::addGold(int _gold)
{
  m_gold += _gold;
}


int Creature::getGold()
{
  return m_gold;
}

int Creature::getHealth()
{
  return m_health;
}


std::string Creature::getName()
{
  return m_name;
}

#endif