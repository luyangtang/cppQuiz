#include <iostream>
#include "getInput.h"


// validate integer input
bool notInt(int input)
{
  return std::cin.fail();
}

// validate operator input (char and int can be used interchangably in this case)
bool notOperator(int input)
{
  switch (input)
  {
    case '+': return false;
    case '-': return false;
    case '*': return false;
    case '/': return false;
  }
  return true;
}

bool notYN(int input)
{
  switch (input)
  {
    case 'y': return false;
    case 'n': return false;
  }
  return true;
}


// function pointers for validation Function
bool (*inputValidation)(int);

