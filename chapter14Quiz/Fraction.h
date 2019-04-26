#ifndef FRACTION_H
#define FRACTION_H

#include <stdexcept>
#include <iostream>
#include <limits>


class Fraction
{
private:
  int m_numerator, m_denominator;

public:
  Fraction(int numerator = 0, int denominator = 1) try
    : m_numerator(numerator), m_denominator(denominator)
    {
      // verify the denominator
      if (m_denominator == 0)
        throw std::runtime_error("Denominator cannot be 0");
    }
    catch(std::except &except)
    {
      std::
    }

  friend std::ostream& operator<<(std::ostream &out, const Fraction &f);
};


int getUserInput();



std::ostream& operator<<(std::ostream &out, const Fraction &f)
{
  out << "Fraction(" << f.m_numerator << '/' << f.m_denominator << ')';
  return out;
}

int getUserInput()
{
  std::cout << "Enter the numerator: ";

  // get user input
  int input;
  std::cin >> input;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

  // error check
  while (std::cin.fail())
  {
    // put us back in normal operation mode
    std::cin.clear();

    // remove bad input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    // prompt for another input
    std::cout << "Not recognised, please enter again: ";
    std::cin >> input;
    
  }

  // return output
  return input;
}

#endif