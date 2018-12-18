// nameLookUp.cpp : Defines the entry point for the console application.
//

/* Exercise for https://www.learncpp.com/cpp-tutorial/6-12a-for-each-loops/
*/

#include <iostream>
#include <string>
#include <limits>

std::string getName()
{
	using namespace std;
	cout << "Enter a name: ";
	string name;

	// input validity check:
	while (!(cin >> name))
	{
		cin.ignore(numeric_limits<streamsize>::max());
		cin.clear();
		cout << "Invalid name, please enter a name: ";
	}

	return name;
}

void testGetName()
{
	std::string name = getName();
	std::cout << "The name you have entered is " << name << '\n';
}


bool isNameFound(std::string lookUpName)
{
	std::string nameArr[] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
	for (const auto &currentName : nameArr)
	{
		if (currentName == lookUpName)
			return true;
	}
	
	return false;
}

void printLookUpResult(std::string lookUpName)
{
	if (isNameFound(lookUpName))
		std::cout << lookUpName << " is found! \n";
	else
		std::cout << lookUpName << " not found! \n";
}

void testIsNameFound()
{
	printLookUpResult("Caroline");
	printLookUpResult("Alex");
	printLookUpResult("Zoe");
}

void test()
{
	printLookUpResult(getName());
	printLookUpResult(getName());
	printLookUpResult(getName());
}

int main()
{
	test();

    return 0;
}

