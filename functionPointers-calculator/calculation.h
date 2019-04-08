#ifndef CALCULATION_H
#define CALCULATION_H


template <typename T>
T add(T x, T y){return x + y;}

template <typename T>
T substract(T x, T y){return x - y;}

template <typename T>
T multiply(T x, T y){return x * y;}

template <typename T>
T divide(T x, T y){return x / y;}


typedef int (*arithmeticFcn)(int,int);

arithmeticFcn getArithmeticFunction(char operatorChar);

void calculate();

struct arithmeticStruct
{
public:
  char operatorChar;
  arithmeticFcn fcn;
};

arithmeticFcn getArithmeticFcn2(char operatorChar);
#endif