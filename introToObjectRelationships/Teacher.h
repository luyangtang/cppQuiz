#ifndef TEACHER_H
#define TEACHER_H


#include <string>
class Teacher
{
private:
  std::string m_name;

public:
  
  // constructor
  Teacher(std::string _name)
    : m_name(_name) {}

  // get name
  std::string getName()
  {
    return m_name;
  }

};





#endif