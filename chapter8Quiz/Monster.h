#ifndef MONSTER_H
#define MONSTER_H


#include <string>

class Monster
{

// #include "MonsterType" // MonsterType is specific to the class

private:
public:

  // enum
  enum MonsterType
  {
    DRAGON, 
    GOBLIN, 
    OGRE, 
    ORC, 
    SKELETON, 
    TROLL, 
    VAMPIRE, 
    ZOMBIE,
    MAX_MONSTER_TYPES,
  };

    // constructor
Monster(MonsterType _type, std::string _name, std::string _roar, int _hitPoints)
    : m_type(_type), m_name(_name), m_roar(_roar), m_hitPoints(_hitPoints){}

    //getTypeString
std::string getTypeString();

// print
void print();

private:

  MonsterType m_type;
  std::string m_name;
  std::string m_roar;
  int m_hitPoints;

};

#endif