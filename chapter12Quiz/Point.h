#ifndef POINT_H
#define POINT_H


#include <iostream>

class Point
{
private:
  int m_x, m_y, m_z;

public:
  Point(int _x = 0, int _y = 0, int _z = 0)
  : m_x(_x), m_y(_y), m_z(_z)
  {}

  friend std::ostream& operator<<(std::ostream &out, const Point &p);
};



std::ostream& operator<<(std::ostream &out, const Point &p)
{
  out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ')';
  return out;
}

#endif