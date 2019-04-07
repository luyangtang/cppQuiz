// chapter4ComprehensiveQuiz.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

enum class MonsterType {
	OGRE,
	DRAGON,
	ORC,
	GIANTSPIDER,
	SLIME
};


struct Monster {
	MonsterType type;
	std::string name;
	int health;
};


std::string getMonsterType(MonsterType monsterType) {

	std::string monsterTypeStr;

	switch (monsterType) {
	case 0:
		monsterTypeStr = "Orge"; break;
	case 1:
		monsterTypeStr = "Dragon"; break;
	case 2:
		monsterTypeStr = "Orc"; break;
	case 3:
		monsterTypeStr = "Giant Spider"; break;
	case 4:
		monsterTypeStr = "Slime"; break;
	}
	return monsterTypeStr;
}


void printMonster(Monster monster) {
	std::cout << "This " << getMonsterType(monster.type) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
	Monster torg{ MonsterType::OGRE, "Torg", 145 };
	Monster blurp{ MonsterType::SLIME, "Blurp", 23 };
	printMonster(torg);
	printMonster(blurp);
    return 0;
}

