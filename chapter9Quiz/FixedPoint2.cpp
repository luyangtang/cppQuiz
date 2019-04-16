#include "FixedPoint2.h"
#include <iostream>
#include <assert.h>
#include <cstdint> // for fixed width integers
#include <cmath>





FixedPoint2 FixedPoint2::operator+(const FixedPoint2 &fp)
{
  double sum = static_cast<double>(*this) + static_cast<double>(fp);

  return FixedPoint2(sum);
}


FixedPoint2 FixedPoint2::operator-()
{
  return FixedPoint2(-m_base, -m_decimal);
}


std::istream& operator>>(std::istream &in, FixedPoint2 &fp)
{
  double _input;
  in >> _input;

  return in;
}


bool FixedPoint2::operator==(const FixedPoint2 &fp)
{
  return (this->m_base == fp.m_base) && (this->m_decimal == fp.m_decimal);
}




FixedPoint2::FixedPoint2(std::int16_t _base, std::int8_t _decimal)
    : m_base(_base), m_decimal(_decimal)
{
   assert(_decimal <= 99 && _decimal >= -99); 
   
   if (m_base < 0 || m_decimal < 0)
   {
     // make base negative and decimal negative
     m_base = m_base > 0 ? -m_base : m_base;
     m_decimal = m_decimal > 0 ? -m_decimal : m_decimal;
   }
}


FixedPoint2::FixedPoint2(double _dbl)
{
  m_base = static_cast<std::int16_t>(std::round(_dbl));
  m_decimal = static_cast<std::int8_t>(std::round(_dbl*100) - m_base * 100);
}


FixedPoint2::operator double() const
{
  return m_base + static_cast<double>(m_decimal)/100;
}

std::ostream& operator<< (std::ostream &out, const FixedPoint2 &fp)
{
  out << static_cast<double>(fp);
  return out;
} 

void testAddition()
{
	// h/t to reader Sharjeel Safdar for this function
	std::cout << std::boolalpha;
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.23) == FixedPoint2(1.98)) << '\n'; // both positive, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.50) == FixedPoint2(2.25)) << '\n'; // both positive, with decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.23) == FixedPoint2(-1.98)) << '\n'; // both negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.50) == FixedPoint2(-2.25)) << '\n'; // both negative, with decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.23) == FixedPoint2(-0.48)) << '\n'; // second negative, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.50) == FixedPoint2(-0.75)) << '\n'; // second negative, possible decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.23) == FixedPoint2(0.48)) << '\n'; // first negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.50) == FixedPoint2(0.75)) << '\n'; // first negative, possible decimal overflow
}