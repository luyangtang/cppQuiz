#include <iostream>
#include "initialiser_list.h"

void execute6()
{
  RGBA teal(0, 127, 127);
	teal.print();
}

void RGBA::print()
{
  std::cout << "r=" << static_cast<int>(m_red) << " g=" << static_cast<int>(m_green) << " b=" << static_cast<int>(m_blue) << " a=" << static_cast<int>(m_alpha) << '\n';
}