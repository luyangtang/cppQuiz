#include <iostream>
#include <cassert>
#include <string>
#include "Mystring.h"


std::string Mystring::operator()(int start, int len)
{
  // check index!!
  assert(start + len <= m_str.length() && "Mystring::operator(int, int): Substring is out of range");


  std::string substr = "";

  for (std::string::iterator it = m_str.begin() + start; it != m_str.begin() + start + len; ++it)
  {
    substr += (*it);
  }

  return substr;
}