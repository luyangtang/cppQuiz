#ifndef BANANA_H
#define BANANA_H


#include <iostream>
#include <string>
#include "Fruit.h"



class Banana: public Fruit
{
public:

  // constructor
  Banana(std::string _name, std::string _colour)
    : Fruit(_name,_colour)
    {}

  // overload operator <<
  friend std::ostream& operator<< (std::ostream &out, const Banana &b);
};



std::ostream& operator<<(std::ostream &out, const Banana &b)
{
  out << "Banana(" << b.getName() << ", " << b.getColour() << ")\n";

  return out;
}

#endif