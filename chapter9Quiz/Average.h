#ifndef AVERAGE_H
#define AVERAGE_H
#include <iostream>

class Average
{
private:
  int32_t m_sum;
  int8_t m_count;
  
public:
  // constructor
  Average(int _sum = 0, int _count = 0)
  {
    m_sum = _sum; m_count = _count;
  }

  // overload operator
  Average& operator+= (int _n);

  // <<
  friend std::ostream& operator<< (std::ostream &out, const Average &avg);
};



#endif