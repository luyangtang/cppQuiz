#include <iostream>
#include <assert.h>
#include "access_specifier.h"


void execute2()
{
    Point3d point;
    point.setValues(1, 2, 3);
 
    point.print();
}


void Point3d::setValues(const int _x, const int _y, const int _z)
{
  m_x = _x;
  m_y = _y;
  m_z = _z;
}

void Point3d::print()
{
  std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n"; 
}


void execute3()
{
  Point3d point1;
  point1.setValues(1, 2, 3);

  Point3d point2;
  point2.setValues(1, 2, 3);

  if (point1.isEqual(point2))
    std::cout << "point1 and point2 are equal\n";
  else
    std::cout << "point1 and point2 are not equal\n";

  Point3d point3;
  point3.setValues(3, 4, 5);

  if (point1.isEqual(point3))
    std::cout << "point1 and point3 are equal\n";
  else
    std::cout << "point1 and point3 are not equal\n";
}

bool Point3d::isEqual(const Point3d &_point)
  {
    // this is using the fact that access controls work on a per-class basis so we can directly access the private members of Point3d parameter p
    return ((m_x == _point.m_x) && (m_y == _point.m_y) && (m_z == _point.m_z));
  }

void Stack::reset()
{
  len = 0;
}

bool Stack::push(int _new)
{
  if (len < 10)
  {
    arr[len++] = _new;
    return true;
  }
  else
    return false;
}

int Stack::pop()
{
  assert(len > 0);
  return arr[len--];
}

void Stack::print()
{
  std::cout << "( ";

  for (int i = 0; i < len; i++)
  {
    std::cout << arr[i] << ' ';
  }

  std::cout << ")\n";
}


void execute4()
{
  Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
}