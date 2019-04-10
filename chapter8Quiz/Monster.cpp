#include "Monster.h"
#include <string>

void Monster::print()
{
  std::cout << m_name << "the " << this->getTypeString() << " has " << m_hitPoints << " hit points and says *" << m_roar << "*\n";
}

std::string Monster::getTypeString()
{
  switch (m_type)
  {
    case 0: return "Dragon"; 
    case 1: return "Goblin";
    case 2: return "Ogre";
    case 3: return "Orc";
    case 4: return "Skeleton";
    case 5: return "Troll";
    case 6: return "Vampire";
    case 7: return "Zombie";
    default: return "UNDEFINED";
  }
}