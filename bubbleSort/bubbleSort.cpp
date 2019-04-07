// bubbleSort.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <utility> // for swap algorithm


void printArray(int arr[], int arrSize)
{
	std::cout << "The array is now: ";
	// determine the size of the array
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

void testPrintArray() {
	int arr[] = {10,5,3,6,7,1};
	int size = sizeof(arr)/sizeof(arr[0]); // can't have a separate function calculating this because arguments have unexpected results
	printArray(arr, size);
}

void printSwapCount(int swapCount) {
	std::cout << "This round involved " << swapCount << " swaps.\n";
}

int bubbleTheMin(int arr[], int range) {
	/*
	arr[] is the full array
	range is the index up to which we want to perform the bubbling

	Returns the swap count done in order to bubble the min
	*/
	int swapCount = 0;
	for (int i = 0; i < range - 1; i++)
	{
		if (arr[i] < arr[i + 1])
			// if i is less than i+1 then swap
		{
			std::swap(arr[i + 1], arr[i]);
			swapCount++; // add a swap count
		}
	}

	return swapCount;
}

void testBubbleTheMin()
{
	int arr[] = { 10,5,3,6,7,1 };
	int size = sizeof(arr) / sizeof(arr[0]);

	//bubbleTheMin (for desc)
	bubbleTheMin(arr, size);

	//print 
	printArray(arr, size);
}


void bubbleSort(int arr[], int size)
{
	
	int sortRange = size;
	int swapCount;
	int roundCount = 0;

	printArray(arr, size);

	do
	{
		//bubbleTheMin (for desc)
		swapCount = bubbleTheMin(arr, sortRange);
		// update counter
		sortRange--; roundCount++;
	} while ((sortRange > 1) && (swapCount > 0));

	printArray(arr, size);
	std::cout << '\n';
}


void testBubbleSort()
{
	int arr1[] = { 10,5,3,6,7,1 };
	bubbleSort(arr1, 6);

	int arr2[] = { 9,2,5,2,1,7,3,7,8,2,4,5 };
	bubbleSort(arr2, 12);

	int arr3[] = { 0,0,0,0,0 };
	bubbleSort(arr3, 5);
}


int main()
{
	/*
	int arr[] = { 10,5,3,6,7,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	*/
	testBubbleSort();

    return 0;
}

