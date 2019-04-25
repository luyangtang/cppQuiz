#ifndef SHAPE_H
#define SHAPE_H


#include <iostream>
#include "Point.h"
#include <vector>
#include <algorithm>
// Create an abstract class named Shape. This class should have three functions: a pure virtual print function that takes and returns a std::ostream, an overloaded operator<< and an empty virtual destructor.

class Shape
{
public:
  virtual std::ostream& print(std::ostream &out) const = 0;
  friend std::ostream& operator<<(std::ostream &out, const Shape &s);
  virtual ~Shape();
};

// 2b) Derive two classes from Shape: a Triangle, and a Circle. The Triangle should have 3 Points as members. The Circle should have one center Point, and an integer radius. Overload the print() function so the following program runs:

class Triangle : public Shape
{
protected:
  Point m_p1;
  Point m_p2;
  Point m_p3;

public:
  Triangle(const Point &p1, const Point &p2, const Point &p3)
    : m_p1(p1), m_p2(p2), m_p3(p3)
    {}

  std::ostream& print(std::ostream &out) const override;
};


class Circle : public Shape
{
protected:
  Point m_centre;
  int m_radius;

public:
  Circle(const Point &centre, int radius)
    : m_centre(centre), m_radius(radius)
    {}

  int getRadius();

  std::ostream& print(std::ostream &out) const override;
};


int getLargestRadius(std::vector<Shape*> v);



Shape::~Shape(){}

std::ostream& operator<<(std::ostream &out, const Shape &s)
{
  return s.print(out);
}

std::ostream& Triangle::print(std::ostream &out) const
{
  out << "Triangle(" << m_p1 << ", " << m_p2 << ", " << m_p3 << ')';
  return out;
}


std::ostream& Circle::print(std::ostream &out) const
{
  out << "Circle(" << m_centre << ", radius " << m_radius << ')';
  return out;
}


int Circle::getRadius()
{
  return m_radius;
}


int getLargestRadius(std::vector<Shape*> v)
{
 std::vector<int> r; // vector for radius

 for (auto const &element : v)
 {
   if (Circle *c = dynamic_cast<Circle*>(element))
   {
     r.push_back(c->getRadius());
   }
 }

 return *std::max_element(r.begin(), r.end());
}


#endif