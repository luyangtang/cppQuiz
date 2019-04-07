//
//  main.cpp
//  pair
//
//  Created by LYT on 07/04/2019.
//  Copyright © 2019 Kiki Tan. All rights reserved.
//

#include <iostream>
#include "pair.h"


void testPair1()
{
    Pair1<int> p1(5, 8);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    
    const Pair1<double> p2(2.3, 4.5);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}


void testPair()
{
    Pair<int, double> p1(5, 6.7);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    
    const Pair<double, int> p2(2.3, 4);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}


void testStringValuePair()
{
    StringValuePair<int> svp("Hello", 5);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
}




int main()
{
    
    testStringValuePair();
    
    return 0;
    
}
