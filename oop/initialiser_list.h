#ifndef INITIALISERLIST_H
#define INITIALISERLIST_H

#include <cstdlib>

void execute6();

class RGBA
{
private:
  std::uint_fast8_t m_red, m_green, m_blue, m_alpha;

public:

  // constructor (default)
  RGBA(std::uint_fast8_t _red = 0, std::uint_fast8_t _green = 0, std::uint_fast8_t _blue = 0, std::uint_fast8_t _alpha = 255)
    : m_red(_red), m_green(_green), m_blue(_blue), m_alpha(_alpha) {}

  // print
  void print();
};

#endif