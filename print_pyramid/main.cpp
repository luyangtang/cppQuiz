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
    int rowNum = 5;
    int outerCounter = 0;
    int innerCounter;
    
    while (outerCounter < rowNum)
    {
        innerCounter = 0;
        while(innerCounter < rowNum)
        {
            if(innerCounter >= rowNum - outerCounter - 1)
                cout << rowNum - innerCounter << ' ';
            else
                cout << "  ";
            innerCounter ++;
        }
        cout << '\n';
        outerCounter++;
    }
}
