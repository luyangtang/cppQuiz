//
//  main.cpp
//  learncpp
//
//  Created by LYT on 29/11/2018.
//  Copyright © 2018 Kiki Tan. All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    
    using namespace std;
    
    char alphabet = 'a';
    
    while (alphabet < 'z')
    {
        cout << alphabet << " has ASCII code " << static_cast<int>(alphabet) << '\n';
        alphabet++;
    }
}
