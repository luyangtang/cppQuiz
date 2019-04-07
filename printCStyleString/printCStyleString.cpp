

/*

Write a function to print a C-style string character by character. 
Use a pointer to step through each character of the string and print that character. 
Stop when you hit a null terminator. 
Write a main function that tests the function with the string literal “Hello, world!”.

*/


#include <iostream>


void printCStyleString(char *cStyleString)
{
	char *iterator = cStyleString;

	for (iterator; *iterator != '\0'; iterator++)
	{
		std::cout << *iterator << " ";
	}
}

int main()
{
	
	printCStyleString("Hello, world!");

	
	return 0;
}