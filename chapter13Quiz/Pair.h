#ifndef PAIR_H
#define PAIR_H

#include <string>


template <typename T1, typename T2>
class Pair
{
private:
  T1 m_x;
  T2 m_y;

public:
  Pair(const T1 &x, const T2 &y)
    : m_x(x), m_y(y)
    {}

  T1 first() const;

  T2 second() const;
};


// A string-value pair is a special type of pair where the first value is always a string type, and the second value can be any type. Write a template class named StringValuePair that inherits from a partially specialized Pair class (using std::string as the first type, and allowing the user to specify the second type).


template <typename T>
class StringValuePair : public Pair<std::string, T>
{
public:
  StringValuePair(std::string x, const T &y)
    : Pair<std::string,T>(x,y)
    {};

};



template<typename T1, typename T2>
T1 Pair<T1,T2>::first() const
{
  return m_x;
}


template<typename T1, typename T2>
T2 Pair<T1,T2>::second() const
{
  return m_y;
}


#endif