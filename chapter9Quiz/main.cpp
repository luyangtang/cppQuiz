#include <iostream>
#include "FixedPoint2.h"


 
int main()
{
	testAddition();
 
	FixedPoint2 a(-0.48); 
	std::cout << a << '\n';
 
	std::cout << -a << '\n';
 
	std::cout << "Enter a number: "; // enter 5.678
	std::cin >> a;
	
	std::cout << "You entered: " << a << '\n';
 
	return 0;
}