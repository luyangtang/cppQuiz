#include "Car.h"
#include <vector>
#include <algorithm>


bool operator== (const Car &c1, const Car &c2)
{
    return (c1.m_make== c2.m_make &&
            c1.m_model== c2.m_model);
}
 
bool operator!= (const Car &c1, const Car &c2)
{
    return !(c1== c2);
}

bool operator< (const Car &c1, const Car &c2)
{
  if (c1.m_make == c2.m_make)
  {
    return c1.m_model < c2.m_model;
  }
  else
  {
    return c1.m_make < c2.m_make;
  }
}

std::ostream& operator<< (std::ostream &out, const Car &c)
{
  out << '(' << c.m_make << ", " << c.m_model << ')';
  return out;
}


void test()
{
  std::vector<Car> v;
	v.push_back(Car("Toyota", "Corolla"));
	v.push_back(Car("Honda", "Accord"));
	v.push_back(Car("Toyota", "Camry"));
	v.push_back(Car("Honda", "Civic"));
 
	std::sort(v.begin(), v.end()); // requires an overloaded operator<
 
	for (auto &car : v)
		std::cout << car << '\n'; // requires an overloaded operator<<
}