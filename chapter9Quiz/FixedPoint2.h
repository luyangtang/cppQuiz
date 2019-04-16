#ifndef FIXEDPOINT2_H
#define FIXEDPOINT2_H

#include <iostream>
#include <assert.h>
#include <cstdint> // for fixed width integers
#include <cmath>

class FixedPoint2
{
private:
  std::int16_t m_base; // here's our non-fractional part
	std::int8_t m_decimal; // here's our factional part

public:

  // constructor
  FixedPoint2(std::int16_t _base = 0, std::int8_t _decimal = 0);

  // constructor that takes a double
  FixedPoint2(double _dbl);

  // overload <<
  friend std::ostream& operator<< (std::ostream &out, const FixedPoint2 &fp);
  
  // overload type
  operator double() const;

  //Overload operator==, operator >>, operator- (unary), and operator+ (binary).
  bool operator==(const FixedPoint2 &fp);

  friend std::istream& operator>>(std::istream &in, FixedPoint2 &fp);

  FixedPoint2 operator-();

  FixedPoint2 operator+(const FixedPoint2 &fp);
};

void testAddition();

#endif