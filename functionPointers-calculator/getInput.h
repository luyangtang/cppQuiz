#ifndef GETINPUT_H
#define GETINPUT_H
#include <iostream>
#include <limits>

bool notInt(int input);
bool notOperator(int input);
bool notYN(int input);

// prompt for input
// get input from user
template <typename T>
T getInput(bool (*inputValidation)(int)=notInt)
{

  // extract the input
  T input(0);
  std::cin >> input;
  

  // while not validated, keeps prompting for new input
  while((*inputValidation)(input))
  {
    if(std::cin.fail())
      std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "\n Invalid input, please type again: ";
    std::cin >> input;
  }

  // start a new line
  std::cout << '\n';

  // return the value
  return input;
}

#endif