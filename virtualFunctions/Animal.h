#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>
#include <string>

class Animal
{
protected:
  std::string m_name;
  const char* m_speak;

public:
  Animal(std::string _name)
    : m_name(_name) {}
  
  Animal(std::string _name, const char *_speak)
    : Animal(_name) { m_speak = _speak; }

  std::string getName();
  const char* speak();
};

class Cat: public Animal
{
public:
  Cat(std::string _name)
    : Animal(_name, "Meow")
    {}
};

class Dog: public Animal
{
  public:
  Dog(std::string _name)
    : Animal(_name, "Woof")
    {}
  
};



std::string Animal::getName()
{
  return m_name;
}


const char* Animal::speak()
{
  return m_speak;
}


#endif