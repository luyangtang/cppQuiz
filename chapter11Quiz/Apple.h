#ifndef APPLE_H
#define APPLE_H

#include "Fruit.h"
#include <string>

class Apple : public Fruit
{
public:
  // constructor
  Apple(std::string _colour, std::string _name = "apple")
    : Fruit(_name, _colour)
    {}
};


class GrannySmith : public Apple
{
public:
// constructor
  GrannySmith(std::string _colour = "green", std::string _name = "granny smith apple")
    : Apple(_colour, _name)
    {}
};

#endif