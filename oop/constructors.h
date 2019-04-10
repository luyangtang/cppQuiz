#ifndef CONSTURCTORS_H
#define CONSTURCTORS_H

#include <iostream>

class Ball0
{
private:
  std::string m_colour;
  double m_radius;

public:

  // constructor colour only
  Ball0(std::string _colour): m_colour(_colour), m_radius(10.0) {}

  // constructor radius only
  Ball0(double _radius)
    : m_colour("black"), m_radius(_radius) {}

  // constructor for both
  Ball0(std::string _colour, double _radius)
    : m_colour(_colour), m_radius(_radius) {}

  // constructor for neither
  Ball0(): m_colour("black"), m_radius(10.0) {}

  // print
  void print();
};


class Ball
{
private:
  std::string m_colour;
  double m_radius;

public:
  // constructor
  Ball(const std::string &_colour = "black", double _radius = 10)
    : m_colour(_colour), m_radius(_radius) {}

  Ball(double _radius)
    : m_colour("black"), m_radius(_radius) {}

  void print();
};


// class Ball
// {
// private:
//   std::string m_colour;
//   double m_radius;

// public:
//   // no constructor

//   // print
//   void print();
// };


void execute5();

#endif