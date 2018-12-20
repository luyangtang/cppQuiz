// magicItemCount.cpp : Defines the entry point for the console application.
//

/*Write the following program: 
Create a struct that holds a student’s first name and grade (on a scale of 0-100). 
Ask the user how many students they want to enter. 
Dynamically allocate an array to hold all of the students. 
Then prompt the user for each name and grade. 
Once the user has entered all the names and grade pairs, sort the list by grade (highest first). 

Then print all the names and grades in sorted order.
*/
#include <iostream>
#include <string>
#include <limits>

struct Student
{
	std::string firstName;
	int grade;
};

void printStudents(Student *students, const int studentNumber)
{
	for (int i = 0; i < studentNumber; i++)
	{
		std::cout << (students+i)->firstName << " got a score of " << (students + i)->grade << '\n';
	}
}


void selectionSort(Student *students, const int studentNumber)
{
	//const int length = 5;
	//int array[length] = { 30, 50, 20, 10, 40 };

	// Step through each element of the array
	// (except the last one, which will already be sorted by the time we get there)
	for (int startIndex = 0; startIndex < studentNumber - 1; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we’ve encountered this iteration
		// Start by assuming the smallest element is the first element of this iteration
		int smallestIndex = startIndex;

		// Then look for a smaller element in the rest of the array
		for (int currentIndex = startIndex + 1; currentIndex < studentNumber; ++currentIndex)
		{
			// If we've found an element that is smaller than our previously found smallest
			if ((students+currentIndex)->grade > (students + smallestIndex)->grade)
				// then keep track of it
				smallestIndex = currentIndex;
		}

		// smallestIndex is now the smallest element in the remaining array
		// swap our start element with our smallest element (this sorts it into the correct place)
		std::swap(students[startIndex], students[smallestIndex]);
	}

	//// Now that the whole array is sorted, print our sorted array as proof it works
	//for (int index = 0; index < length; ++index)
	//	std::cout << array[index] << ' ';

}

int usrIntInput(std::string promptMsg)
{
	using namespace std;

	// show welcome message
	cout << promptMsg;

	// get legitimate input
	int usrInt;

	while (1)
	{
		cin >> usrInt;
		if (cin.fail())
		{

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. " << promptMsg;

			
		}
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return usrInt;
		}
	}
	
	
}


int main()
{
	using namespace std;

	int studentNumber = usrIntInput("How many students? ");

	Student *students = new Student[studentNumber];

	for (int i = 0; i < studentNumber; i++)
	{
		
		cout << "Please enter a name: ";
		cin >> students[i].firstName;
		cout << "Please enter the score: ";
		cin >> students[i].grade;
	}

	selectionSort(students, studentNumber);
	printStudents(students, studentNumber);

	delete[] students;
	return 0;
}
