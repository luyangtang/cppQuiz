#include <iostream>
#include "calculation.h"
#include "getInput.h"



arithmeticFcn getArithmeticFunction(char operatorChar)
{
  switch (operatorChar)
  {
    case '+': return add;
    case '-': return substract;
    case '*': return multiply;
    case '/': return divide;
    default: return add; // default being add - must specify a return value.
  }
}


void calculate()
{
  std::cout << "Please give the first integer: ";
  int x = getInput<int>();

  std::cout << "Please give the second integer: ";
  int y = getInput<int>();

  std::cout << "Please give the operation: ";
  char operatorChar = getInput<char>(notOperator);

  std::cout << x << ' ' << operatorChar << ' ' << y << " = " << (*getArithmeticFunction(operatorChar))(x,y) << '\n';
}



static arithmeticStruct arithmeticArr[] = 
{
  {'+', add},
  {'-', substract},
  {'*', multiply},
  {'/', divide}
};

arithmeticFcn getArithmeticFcn2(char operatorChar)
{
  // loop through the operator array until operatorChar matches
  for (int i = 0; i < 4; i++)
  {
    if (arithmeticArr[i].operatorChar == operatorChar)
    {
      // return the fcn and exit the function
      return arithmeticArr[i].fcn;
    }
  }
  return add; // default
}