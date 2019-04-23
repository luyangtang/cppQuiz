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
  Creature(std::string _name, char _symbol, int _health, int _attack, int _gold)
    :m_name(_name), m_symbol(_symbol), m_health(_health), m_attack(_attack), m_gold(_gold)
    {}

  // get name
  std::string getName();

  // get health
  int getHealth();

  // get gold
  int getGold();

  // get symbol
  char getSymbol();

  // get attack
  int getAttack();

  // add gold
  void addGold(int _gold);

  // reduce health
  void reduceHealth(int _health);

  // is dead
  bool isDead();
};


bool Creature::isDead()
{
  return m_health >= 0;
}

int Creature::getAttack()
{
  return m_attack;
}

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

char Creature::getSymbol()
{
  return m_symbol;
}

#endif