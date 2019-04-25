#include <iostream>
#include "Shape.h"
#include <vector>



 
int main()
{
	std::vector<Shape*> v;
	v.push_back(new Circle(Point(1, 2, 3), 7));
	v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
	v.push_back(new Circle(Point(4, 5, 6), 3));
 
	// print each shape in vector v on its own line here
 
       	std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function
 
	// delete each element in the vector here
  for(std::vector<Shape*>::iterator it = v.begin(); it != v.end(); it++)
  {
    delete (*it);
  }
}