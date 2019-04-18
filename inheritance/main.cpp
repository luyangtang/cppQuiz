#include <iostream>
#include "Apple.h"
#include "Banana.h"

int main() {
  const Apple a("Red delicious", "red", 4.2);
	std::cout << a;
 
	const Banana b("Cavendish", "yellow");
	std::cout << b;
}