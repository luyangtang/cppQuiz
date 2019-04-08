#include <iostream>
#include "solution3.h"


void testPrintBin()
{
  for (int i = 0; i < 10; i++)
  {
    std::cout << "BIN(" << i << ") = ";
    printBin(i);
    std::cout << '\n';
  }
}



void printBin(unsigned int n)
{

  // base case
  if (n == 0 || n == 1)
  {
    std::cout << n;
  }

  // recursion steps
  else
  {
  printBin(n/2);
  std::cout << n % 2;
  }
}