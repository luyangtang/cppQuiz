#ifndef POINT2D_H
#define POINT2D_H


class Point2d
{
private:
  double m_x, m_y;

public:
  // constructor
  Point2d(double _x = 0.0, double _y = 0.0)
    : m_x(_x), m_y(_y){};
  
  // calculate distance
  double distanceTo(const Point2d &p);

  // friend non member function for distance
  friend double distanceFrom(const Point2d &p1, const Point2d &p2);

  // print
  void print();
};

#endif