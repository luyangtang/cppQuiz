#include <iostream>
#include "solution2.h"

int sumDigit(int input)
{
  // base case
  if (input/10 <= 0)
    return input;

  // recursion steps
  // note that int/int will be rounded and this is what we want to take advantage of
  return sumDigit(input/10) + (input - 10*(input/10));

  // sumDigit(x / 10) + x % 10!!
}


void testSumDigit()
{
  std::cout << "234 -> " << sumDigit(234) << '\n';
  std::cout << "357 -> " << sumDigit(357) << '\n';
  std::cout << "111 -> " << sumDigit(111) << '\n';
}