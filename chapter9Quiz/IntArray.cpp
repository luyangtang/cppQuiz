#include "IntArray.h"
#include <assert.h>
#include <iostream>


int& IntArray::operator[](const int _i)
  {
    assert((_i < m_size) && (_i >= 0));
    return m_arr[_i];
  }


IntArray& IntArray::operator=(const IntArray &a)
{
  if (this == &a)
    return *this;

  // else delete the existing space
  delete[] this->m_arr;

  m_size = a.m_size;
  this->m_arr = new int[m_size];

  for (int i = 0; i < m_size; i++)
  {
    this->m_arr[i] = a.m_arr[i];
  }

  return *this;
}


std::ostream& operator<<(std::ostream &out, const IntArray &intarr)
{
  for (int i = 0; i < intarr.m_size; i++)
  {
    out << intarr.m_arr[i] << ' ';
  }
  return out;
}