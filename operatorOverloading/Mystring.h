#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private:
  std::string m_str;

public:
  Mystring(std::string _str = "Hello, World!"): m_str(_str){}

  std::string operator()(int start, int len);
};



#endif