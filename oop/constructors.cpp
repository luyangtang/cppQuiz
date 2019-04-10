#include <iostream>
#include <string>
#include "constructors.h"



void execute5()
{
  Ball def;
	def.print();
 
	Ball blue("blue");
	blue.print();
	
	Ball twenty(20.0);
	twenty.print();
	
	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();
}


void Ball0::print()
{
  std::cout << "colour: " << m_colour << ", radius: " << m_radius << '\n';
}

void Ball::print()
{
  std::cout << "colour: " << m_colour << ", radius: " << m_radius << '\n';
}


// void Ball::print()
// {
//   std::cout << "colour: " << m_colour << ", radius: " << m_radius << '\n';
// }