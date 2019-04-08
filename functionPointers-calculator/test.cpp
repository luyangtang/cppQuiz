#include <iostream>
#include "test.h"
#include "getInput.h"
#include "calculation.h"


void testInput()
{
  std::cout << "please give an int value: ";
  int input = getInput<int>();
  std::cout << input << '\n';

  std::cout << "please give a char value: ";
  char input2 = getInput<char>(notOperator);
  std::cout << input2 << '\n';

  std::cout << "please give a char value: ";
  char input3 = getInput<char>(notOperator);
  std::cout << input3 << '\n';
}

void testIsOperator()
{
  std::cout << notOperator('+');
  std::cout << notOperator('-');
  std::cout << notOperator('*');
  std::cout << notOperator('/');
  std::cout << notOperator(1);
  std::cout << notOperator('a');
}


void testOperations()
{
  std::cout << add<int>(2,3) << '\n';
  std::cout << substract<int>(2,3) << '\n';
  std::cout << multiply<int>(2,3) << '\n';
  std::cout << divide<int>(2,3) << '\n';
}


void testGetArithmeticFunction()
{
  std::cout << (*getArithmeticFunction('+'))(1,2) << '\n';
  std::cout << (*getArithmeticFunction('-'))(1,2) << '\n';
  std::cout << (*getArithmeticFunction('*'))(1,2) << '\n';
  std::cout << (*getArithmeticFunction('/'))(1,2) << '\n';
}

void testGetArithmeticFcn2()
{
  std::cout << (*getArithmeticFcn2('+'))(2,3) << '\n';
  std::cout << (*getArithmeticFcn2('-'))(2,3) << '\n';
  std::cout << (*getArithmeticFcn2('*'))(2,3) << '\n';
  std::cout << (*getArithmeticFcn2('/'))(2,3) << '\n';
}
