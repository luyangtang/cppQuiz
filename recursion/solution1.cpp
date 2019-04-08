#include "solution1.h"

int factorial(int n)
{
  // base case
  if (n == 1 || n == 0)
    return n;
  
  // recursion cases
  return n * factorial(n-1);
}
