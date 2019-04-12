#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction
{
private:
  int m_numerator;
  int m_denominator;

// calculate greatest common divisor
static int gcd (int a, int b)
{
  return (b == 0) ? (a > 0? a : -a) :gcd(b, a % b);
}

public:

  // constructor
  Fraction(int _numerator = 0, int _denominator = 1)
    : m_numerator(_numerator), m_denominator(_denominator) { reduce(); }

  // print
  void print()
  {
    std::cout << m_numerator << '/' << m_denominator << '\n';
  }

  // overload the multiplication operators
  friend Fraction operator*(const Fraction &f1, const Fraction &f2);

  friend Fraction operator*(const Fraction &f, int n);

  friend Fraction operator*(int n, const Fraction &f);

  friend std::ostream& operator<<(std::ostream &out, const Fraction &f);

  friend std::istream& operator>>(std::istream &in, Fraction &f);

  // cancellation
  void reduce();

};

#endif