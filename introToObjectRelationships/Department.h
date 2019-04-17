#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Teacher.h"
#include <iostream>
#include <vector>

class Department
{
private:

  // holder teachers by addresses
  std::vector<Teacher *> m_teachers;

public:
  
  // constructor -- do nothing
  Department(){}

  // add
  void add(Teacher *t)
  {
    m_teachers.push_back(t);
  }


  // overload <<
  friend std::ostream& operator<< (std::ostream &out, Department &d);
};




std::ostream& operator<< (std::ostream &out, Department &d)
  {
    out << "Department : ";
    for (std::vector<Teacher *>::iterator it = d.m_teachers.begin(); it != d.m_teachers.end(); it++)
    {
      out << (*it)->getName() << ' ';
    }
    return out;
  }


void test();


void test()
{
  // Create a teacher outside the scope of the Department
    Teacher *t1 = new Teacher("Bob"); // create a teacher
    Teacher *t2 = new Teacher("Frank");
    Teacher *t3 = new Teacher("Beth");
 
    {
        // Create a department and use the constructor parameter to pass
        // the teacher to it.
        Department dept; // create an empty Department
        dept.add(t1);
        dept.add(t2);
        dept.add(t3);
 
        std::cout << dept;
 
    } // dept goes out of scope here and is destroyed
 
    std::cout << t1->getName() << " still exists!\n";
    std::cout << t2->getName() << " still exists!\n";
    std::cout << t3->getName() << " still exists!\n";
 
    delete t1;
    delete t2;
    delete t3;
}


#endif