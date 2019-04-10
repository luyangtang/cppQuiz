#include "Point2d.h"
#include <cmath>
#include <iostream>

void Point2d::print()
{
  std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
}

double Point2d::distanceTo(const Point2d &p)
{
  return sqrt((m_x - p.m_x) * (m_x - p.m_x) + (m_y - p.m_y) * (m_y - p.m_y));
}

double distanceFrom(const Point2d &p1, const Point2d &p2)
{
  return sqrt((p1.m_x - p2.m_x) * (p1.m_x - p2.m_x) + (p1.m_y - p2.m_y) * (p1.m_y - p2.m_y));
}