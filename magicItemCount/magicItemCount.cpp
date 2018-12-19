// magicItemCount.cpp : Defines the entry point for the console application.
//

/*Pretend you’re writing a game where the player can hold 3 types of items: 
health potions, torches, and arrows. 

Create an enum to identify the different types of items,
and a fixed array to store the number of each item the player is carrying 
(use built-in fixed arrays, not std::array).

The player should start with 2 health potions, 5 torches, and 10 arrows.

Write a function called countTotalItems() that returns how many items the player has in total. 
Have your main() function print the output of countTotalItems().
*/

#include <iostream>

enum class MagicItem
{
	HEALTH_PORTION,
	TORCH,
	ARROW,
	MAX_ITEMS
};


//int countTotalItems(int arr[])
//{
//	return *(arr+static_cast<int>(MagicItem::HEALTH_PORTION))
//		+ *(arr+ static_cast<int>(MagicItem::TORCH)) + *(arr+ static_cast<int>(MagicItem::ARROW));
//}

int countTotalItems(int *arr)
{
	int count = 0;
	for (int i = 0; i < static_cast<int>(MagicItem::MAX_ITEMS); i++)
	{
		count += arr[i];
	}

	return count;
}


int main()
{
	int itemCount[static_cast<int>(MagicItem::MAX_ITEMS)] = { 2,5,10 };

	std::cout << "The player has " << countTotalItems(itemCount) << " items.\n";
    return 0;
}

