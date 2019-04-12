#include "Fraction.h"
#include <iostream>

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
  Fraction tmp(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);

  return tmp;
}


Fraction operator*(const Fraction &f, int n)
{
  Fraction tmp(f.m_numerator * n, f.m_denominator);

  return tmp;
}


Fraction operator*(int n, const Fraction &f)
{
  Fraction tmp(f.m_numerator * n, f.m_denominator);
  
  return tmp;
}


void Fraction::reduce()
{
  int _gcd = gcd(m_numerator, m_denominator);
  m_numerator /= _gcd;
  m_denominator /= _gcd;
}


std::ostream& operator<<(std::ostream &out, const Fraction &f)
{
  out << f.m_numerator << '/' << f.m_denominator;
  return out;
}


std::istream& operator>>(std::istream &in, Fraction &f)
{
  char c;

  in >> f.m_numerator;
  in >> c;
  in >> f.m_denominator;

  f.reduce();
  return in;
}