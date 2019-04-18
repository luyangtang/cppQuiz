#ifndef FRUIT_H
#define FRUIT_H


#include <string>

class Fruit
{
private:
  std::string m_name;
  std::string m_colour;

public:

  // constructor
  Fruit (std::string _name = "Name", std::string _colour = "None")
    :m_name(_name), m_colour(_colour)
    {}

  // get name
  std::string getName();

  // get colour
  std::string getColour();
};


std::string Fruit::getName()
{
  return m_name;
}

std::string Fruit::getColour()
{
  return m_colour;
}

#endif