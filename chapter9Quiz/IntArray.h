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
  int operator[](int _i);

  // cout
  friend std::ostream& operator<<(std::ostream out, const IntArray &intarr);
};


int operator[](int _i)
  {
    assert((_i < size) && (_i >= 0));
    return arr[_i];
  }


IntArray& operator=(int _val)
{
  arr[]
}


std::ostream& operator<<(std::ostream out, const IntArray &intarr)
{
  for (int i = 0; i < intarr.size; i++)
  {
    out << intarr.arr[i] << ' ';
  }
  return out;
}

#endif