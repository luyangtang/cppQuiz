#ifndef APPLE_H
#define APPLE_H

#include <iostream>
#include <string>
#include "Fruit.h"

class Apple: public Fruit
{
private:
  double m_fibre;

public:

  // constructor
  Apple(std::string _name, std::string _colour, double _fibre)
  : Fruit(_name,_colour), m_fibre(_fibre)
  {}


  // overload <<
  friend std::ostream& operator<< (std::ostream &out, const Apple &a);
};



std::ostream& operator<< (std::ostream &out, const Apple &a)
{
  out << "Apple(" << a.getName() << ", " << a.getColour() << ", " << a.m_fibre << ")\n";

  return out;
}



#endif