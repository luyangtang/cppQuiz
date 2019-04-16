#ifndef FIXEDPOINT2_H
#define FIXEDPOINT2_H

#include <iostream>
#include <cstdint> // for fixed width integers

class FixedPoint2
{
private:
  std::int16_t m_base; // here's our non-fractional part
	std::int8_t m_decimal; // here's our factional part

public:

  // constructor
  FixedPoint2(std::int16_t _base = 0, std::int8_t _decimal = 0)
    : m_base(_base), m_decimal(_decimal)
    {}

  // overload <<
  friend std::ostream& operator<< (std::ostream &out, const FixedPoint2 &fp);
  

};



std::ostream& operator<< (std::ostream &out, const FixedPoint2 &fp)
{
  if (fp.m_base < 0 || fp.m_decimal < 0)
  {
    out << '-';
  }
  out << fp.m_base << '.' << fp.m_decimal;

  return out;
}

#endif