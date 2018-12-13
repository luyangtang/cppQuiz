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
    
    int alphabet = static_cast<int>('a');
    int counter = 0;
    
    while (counter < 26)
    {
        cout << static_cast<char>(alphabet) << " has ASCII code " << alphabet << '\n';
        counter++; alphabet++;
    }
}
