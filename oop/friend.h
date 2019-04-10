#ifndef FRIEND_H
#define FRIEND_H

void execute7();

class Vector3d;

class Point3d2
{
private:
  double m_x, m_y, m_z;

public:
  Point3d2(double _x = 0.0, double _y = 0.0, double _z = 0.0)
    : m_x(_x), m_y(_y), m_z(_z) {}

  void print();

  void moveByVector(const Vector3d &v);
};







#endif