#ifndef FRUIT_H
#define FRUIT_H

#include <string>


class Fruit
{
private:
  std::string m_name;
  std::string m_colour;

public:
  //constructor
  Fruit(std::string _name = "fruit", std::string _colour = "colour")
    : m_name(_name), m_colour(_colour)
    {}


  // get name
  std::string getName() const;

  // get colour
  std::string getColour() const;
};


std::string Fruit::getName() const
{
  return m_name;
}

std::string Fruit::getColour() const
{
  return m_colour;
}

#endif