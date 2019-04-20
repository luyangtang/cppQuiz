#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <iostream>
#include <string>
#include "Apple.h"
#include "Banana.h"


void testFruit();

void testFruit() {
  Apple a("red");
	Banana b;
	GrannySmith c;
 
	std::cout << "My " << a.getName() << " is " << a.getColour() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColour() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColour() << ".\n";
}



#endif