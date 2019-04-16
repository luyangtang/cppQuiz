#include <iostream>
#include "FixedPoint2.h"

 
int main()
{
	FixedPoint2 a(34, 56);
	std::cout << a << '\n';
 
	FixedPoint2 b(-2, 8);
	std::cout << b << '\n';
 
	FixedPoint2 c(2, -8);
	std::cout << c << '\n';
 
	FixedPoint2 d(-2, -8);
	std::cout << d << '\n';
 
	FixedPoint2 e(0, -5);
	std::cout << e << '\n';
 
	// std::cout << static_cast<double>(e) << '\n';
 
	return 0;
}