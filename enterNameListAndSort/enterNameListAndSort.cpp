// enterNames.cpp : Defines the entry point for the console application.
/*
Quiz solution for 6.9a Dynamically allocating arrays
*/
//

#include <string>
#include <iostream>
#include <limits>

int getNameCount()
{
	using namespace std;
	cout << "How many names would you like to enter?: ";
	int nameCount;

	// user input validity check
	while (!(cin >> nameCount))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		std::cout << "Invalid input. Please enter a valid integer: ";
	}
	
	cout << '\n';
	return nameCount;
}

void testGetNameCount()
{
	int nameCount = getNameCount();
	std::cout << "The user has entered " << nameCount << ".\n";
}



std::string getName(int nameOrder = 1)
{
	using namespace std;
	cout << "Enter name #" << nameOrder << ": ";

	string name;
	while (!(cin >> name))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		std::cout << "Invalid input, please enter a valid name: ";
	}

	cout << '\n';
	return name;
}

void testGetName()
{
	std::string name = getName();
	std::cout << "The name you have put is " << name << '\n';
	name = getName(2);
	std::cout << "The name you have put is " << name << '\n';
	name = getName(3);
	std::cout << "The name you have put is " << name << '\n';
}


std::string* getNameList(int nameCount)
{
	std::string *nameList = new std::string[nameCount];

	for (int i = 0; i < nameCount; i++)
	{
		*(nameList + i) = getName(i+1);
	}

	return nameList;
}



void printNameList(int nameCount, std::string *nameList)
{

	std::cout << "Here is your sorted list:\n";
	for (int i = 0; i < nameCount; i++)
	{
		std::cout << "Name #" << i << ": " << *(nameList + i) << '\n';
	}
}

void testGetNameList()
{
	int nameCount = 6;
	std::string * nameList = getNameList(nameCount);

	printNameList(nameCount, nameList);
}

void nameSort(std::string *nameList, int nameListLength)
{
	// Step through each element of the array
	// (except the last one, which will already be sorted by the time we get there)
	for (int startIndex = 0; startIndex < nameListLength - 1; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we’ve encountered this iteration
		// Start by assuming the smallest element is the first element of this iteration
		int smallestIndex = startIndex;

		// Then look for a smaller element in the rest of the array
		for (int currentIndex = startIndex + 1; currentIndex < nameListLength; ++currentIndex)
		{
			// If we've found an element that is smaller than our previously found smallest
			if (nameList[currentIndex] < nameList[smallestIndex])
				// then keep track of it
				smallestIndex = currentIndex;
		}

		// smallestIndex is now the smallest element in the remaining array
		// swap our start element with our smallest element (this sorts it into the correct place)
		std::swap(nameList[startIndex], nameList[smallestIndex]);
	}

}


void testNameSort()
{
	std::string nameList[4] = { "Kelly","Vincent","Abigail","Abi" };
	nameSort(nameList,4);
	printNameList(4, nameList);
}


int main()

{

	// get number of names
	int nameCount = getNameCount();

	// generate a list
	std::string * nameList = getNameList(nameCount); // need to deallocate later

	// sort
	nameSort(nameList, nameCount);

	// print the name in alphabetic order
	printNameList(nameCount, nameList);
	
	// clean up the memory;
	delete nameList;
	nameList = nullptr;

    return 0;
}

