#include <iostream>
#include "Fraction.h"



int main() {
  
  
  int x = getUserInput();
  int y = getUserInput();

  Fraction f(x,y);

  std::cout << f << '\n';

  return 0;
}