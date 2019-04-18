#ifndef APPLE_H
#define APPLE_H

#include "Fruit.h"
#include <string>

class Apple : public Fruit
{
protected: // for GrannySmith
  // constructor
  Apple(std::string _name, std::string _colour)
    : Fruit(_name, _colour)
    {}

public:
  Apple(std::string _colour)
    : Fruit("apple", _colour)
    {}
};


class GrannySmith : public Apple
{
public:
// constructor
  GrannySmith(std::string _name = "granny smith apple", std::string _colour = "green")
    : Apple(_colour, _name)
    {}
};

#endif