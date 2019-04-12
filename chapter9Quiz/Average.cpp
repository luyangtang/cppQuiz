#include "Average.h"
#include <iostream>

Average& Average::operator+= (int _n)
{
  m_sum += _n; m_count++;
  return *this;
}

std::ostream& operator<< (std::ostream &out, const Average &avg)
{
  out << static_cast<double>(avg.m_sum)/avg.m_count;
  return out;
}