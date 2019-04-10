
#include <iostream>
#include "Point2d.h"
#include "HelloWorld.h"
#include "question1.h"

void question1a()
{
  Point2d first;
  Point2d second(3.0, 4.0);
  first.print();
  second.print();
}


void question1b()
{
  Point2d first;
  Point2d second(3.0, 4.0);
  first.print();
  second.print();
  std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
}


void question1c()
{
  Point2d first;
  Point2d second(3.0, 4.0);
  first.print();
  second.print();
  std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
}


void question2()
{
  HelloWorld hello;
  hello.print();
}
