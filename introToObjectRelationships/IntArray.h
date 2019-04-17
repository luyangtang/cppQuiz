#ifndef INTARRAY_H
#define INTARRAY_H

#include <initializer_list> // for std::initializer_list
#include <iostream>

void testIntArray();


class IntArray
{
private:
  int m_length;
  int *m_data;

public:
  // constructor
  IntArray(const int _length = 0);

  // constructor via initialiser list
  IntArray(const std::initializer_list<int> &list);

  // destructor
  ~IntArray();

  // get length
  int getLength();

  // overload []
  int operator[](int _i);

  // overload = (assign for initializer_list)
  IntArray& operator= (const std::initializer_list<int> &list);
};


IntArray::IntArray(const int _length)
  : m_length(_length)
{
  m_data = new int[_length];
}

IntArray::IntArray(const std::initializer_list<int> &list)
  : IntArray(list.size())
{
  int i = 0;
  for (auto &element: list)
  // std::initializer_list does not support [] indicing
  {
    m_data[i++] = element;
  }
}

IntArray::~IntArray()
{
  delete[] m_data;
  m_length = 0;
  m_data = nullptr;
}

int IntArray::getLength()
{
  return m_length;
}


int IntArray::operator[](int _i)
{
  return m_data[_i];
}


IntArray& IntArray::operator= (const std::initializer_list<int> &list)
{
  delete[] m_data;
  m_data = nullptr;

  m_length = list.size();
  m_data = new int[list.size()];

  // copy from the list
  int i = 0;
  for (auto &element:list)
  {
    m_data[i++] = element;
  }

  return (*this);
}


void testIntArray()
{
  	IntArray array { 5, 4, 3, 2, 1 }; // initializer list
	for (int count = 0; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';
 
	std::cout << '\n';
 
	array = { 1, 3, 5, 7, 9, 11 };
 
	for (int count = 0; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';
}

#endif