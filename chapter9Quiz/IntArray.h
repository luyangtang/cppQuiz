#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>


class IntArray
{
private:
  int m_size;
  int *m_arr;

public:
// constructor
  IntArray(int _size)
  {
    m_size = _size;
    m_arr = new int[_size];
  }

  // destructor
  ~IntArray()
  {
    delete[] m_arr;
  }

  // overload [] operator
  int& operator[](const int _i);

  // overload = operator
  IntArray& operator=(const IntArray &a);

  // cout
  friend std::ostream& operator<<(std::ostream &out, const IntArray &intarr);
};



#endif