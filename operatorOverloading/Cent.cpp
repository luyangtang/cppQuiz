
#include <iostream>
#include "Cent.h"

bool operator> (const Cents &c1, const Cents &c2)
{
    return c1.m_cents > c2.m_cents;
}
 
bool operator>= (const Cents &c1, const Cents &c2)
{
    return c1.m_cents >= c2.m_cents;
}
 
bool operator< (const Cents &c1, const Cents &c2)
{
    return !(c1 >= c2);
}
 
bool operator<= (const Cents &c1, const Cents &c2)
{
    return !(c1 > c2);
}