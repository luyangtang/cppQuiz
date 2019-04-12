#include "Point.h"


Point Point::operator- () const
{
  return Point(-m_x, -m_y, -m_z);
}

bool Point::operator! () const
{
  return (m_x == 0 && m_y == 0 && m_z == 0);
}

Point Point::operator+ () const
{
  return Point(m_x, m_y, m_z);
}