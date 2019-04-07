//
//  main.cpp
//  pair
//
//  Created by LYT on 07/04/2019.
//  Copyright © 2019 Kiki Tan. All rights reserved.
//

#include <iostream>
#include "pair.h"



int main(int argc, const char * argv[]) {
    
    Pair1<int> p1(5, 8);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    
    const Pair1<double> p2(2.3, 4.5);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    
    return 0;
}
