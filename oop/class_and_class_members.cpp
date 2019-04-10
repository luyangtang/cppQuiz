#include <iostream>
#include "class_and_class_members.h"


void IntPair::set(int _x, int _y)
{
  m_x = _x;
  m_y = _y;
}

void IntPair::print()
{
  std::cout << "Pari(" << m_x << ", " << m_y << ")\n";
}

void execute()
{
  IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)
	
	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)
 
	p1.print();
	p2.print();
}