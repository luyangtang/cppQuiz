#include <iostream>
#include "friend.h"


class Vector3d
{
private:
  double m_x, m_y, m_z;

public:
  Vector3d(double _x = 0.0, double _y = 0.0, double _z = 0.0)
    : m_x(_x), m_y(_y), m_z(_z) {}

  void print()
  {
    std::cout << "Vector(" << m_x << ", " << m_y << ", " << m_z << ")\n";
  }

  friend void Point3d2::moveByVector(const Vector3d &v);
  // friend class Point3d;
};


void Point3d2::print()
{
  std::cout << "Point(" << m_x << ", " << m_y << ", " << m_z << ")\n";
}


void Point3d2::moveByVector(const Vector3d &v)
{
  m_x += v.m_x;
  m_y += v.m_y;
  m_z += v.m_z;
}

void execute7()
{
  Point3d2 p(1.0, 2.0, 3.0);
	Vector3d v(2.0, 2.0, -3.0);
 
	p.print();
	p.moveByVector(v);
	p.print();
}