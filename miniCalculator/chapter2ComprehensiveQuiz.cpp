// chapter2ComprehensiveQuiz.cpp : Defines the entry point for the console application.
//
#include <iostream>

using namespace std;

double getDouble() {
	double userInput;
	cout << "Enter a double value: ";
	cin >> userInput;
	cout << "\n";

	return userInput;
}

char getOperator() {
	char userInput;
	cout << "Enter one of the following: +, -, * or /: ";
	cin >> userInput;
	return userInput;
}

void getAnswer(double x, double y, char operation) {
	double result;
	if (operation == '+') 
	{
		result = x + y; cout << "x " << operation << " y is " << result; 
	}
	else if (operation == '-')
	{
		result = x - y; cout << "x " << operation << " y is " << result; 
	}
	else if (operation == '*')
	{
		result = x * y; cout << "x " << operation << " y is " << result;
	}
	else if (operation == '/')
	{
		result = x / y; cout << "x " << operation << " y is " << result; 
	}
}


int main()
{

	// prompt for user input for x
	double x = getDouble();

	// prompt for user input for y
	double y = getDouble();
	
	// prompt for user input for operator
	char operation = getOperator();

	// compute
	getAnswer(x, y, operation);

    return 0;
}

