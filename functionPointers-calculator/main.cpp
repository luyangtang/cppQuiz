#include <iostream>
#include <limits>
#include "getInput.h"
#include "calculation.h"
#include "test.h"




void runCalculator()
{
  char cont = 0;

  // welcome greet
  std::cout << "Welcome to my calculator!\n";

  // unless the user terminates the programme, run another calculation
  do
  {
    calculate();

    // ask user whether to continue
    std::cout << "Do you wish to continue? (y/n): ";
    cont = getInput<char>(notYN);
  }
  while (cont == 'y');
  
  // greet and quit
  std::cout << "okay bye! \n";
}

int main() {

  runCalculator();
  

  return 0;
}