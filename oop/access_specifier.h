#ifndef ACCESSSPECIFIER_H
#define ACCESSSPECIFIER_H


class Point3d
{
private:
  int m_x;
  int m_y;
  int m_z;

public:
  void setValues(const int _x, const int _y, const int _z);

  void print();

  bool isEqual(const Point3d &_point);
};

void execute2();

void execute3();

void execute4();


class Stack
{
private:
  int arr[10];
  int len;

public:
  void reset();

  bool push(int _new);

  int pop();

  void print();
};

#endif