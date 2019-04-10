#include "question1.h"
// #include "Monster.h"
#include "MonsterGenerator.h"

int main() {
  srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value
 
	Monster m = MonsterGenerator::generateMonster();
	m.print();
  
  return 0;
}