//
//  main.cpp
//  chapter5ComprehensiveQuiz
//
//  Created by LYT on 13/12/2018.
//  Copyright © 2018 Kiki Tan. All rights reserved.
//

#include <iostream>
#include "constants.h"
#include <cmath>

double getHeight()
{
    using namespace std;
    double initialHeight = 0;
    
    cout << "Please enter a height: ";
    cin >> initialHeight;
    
    // if cin fails, re-prompt the user to give input
    while (cin.fail() || initialHeight < 0)
    {
    cin.clear();
    cout << "Enter a valid height: ";
    
    // validate input (double value, non-negative)
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin >> initialHeight;
    }
    
    return initialHeight;
}


double calculateHeight(double initialHeight, int second)
{
    double height = 0.5 * myConstants::gravity * pow(second, 2);
    return initialHeight - (height > initialHeight?initialHeight:height);
}


void printHeight(double height, int second)
{
    std:: cout << "The ball is at " << height << "m after " << second << " seconds\n";
}

void testCalculateHeight(){
    std::cout.precision(3);
    printHeight(calculateHeight(5,0),0);
    printHeight(calculateHeight(5,1),1);
    printHeight(calculateHeight(5,2),2);
}

int main(int argc, const char * argv[]) {
    
    // prompt user for input
    double initialHeight = getHeight();
    
    int second = 0;
    double height = initialHeight;
    do
    {
        height = calculateHeight(initialHeight,second);
        printHeight(height,second);
        second++;
    }
    while(height > 0);
    
    return 0;
}
