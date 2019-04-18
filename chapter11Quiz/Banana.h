#ifndef BANANA_H
#define BANANA_H


#include "Fruit.h"
#include <string>

class Banana : public Fruit
{
public:
  // constructor
  Banana(std::string _name = "banana", std::string _colour = "yellow")
    : Fruit(_name, _colour)
    {}
};


#endif