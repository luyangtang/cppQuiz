

/*

Write your own function to swap the value of two integer variables. 
Write a main() function to test it.
*/


#include <iostream>


void mySwap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void printAb(const int a, const int b)
{
	std::cout << "a = " << a << " and b = " << b << '\n';
}

bool testMySwap(const int a, const int b)
{
	int c = a; int d = b;
	mySwap(c, d);

	if ((a == d) && (b == c))
	{
		std::cout << "Test case with a = " << a << " and b = " << b << " passed\n";
		return true;
	}
	
	else
	{
		std::cout << "Test case with a = " << a << " and b = " << b << " failed\n";
		return false;
	}
		
}

void mainTest()
{
	testMySwap(1, 5);
	testMySwap(9, 3);
	testMySwap(2, 5);
	testMySwap(10000, 90);
	testMySwap(0, 0);
}

int main()
{
	mainTest();
	

	return 0;
}