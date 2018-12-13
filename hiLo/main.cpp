//
//  main.cpp
//  hiLo
//
//  Created by LYT on 13/12/2018.
//  Copyright © 2018 Kiki Tan. All rights reserved.
//

#include <iostream>
#include <cstdlib>

int generateRand(int min = 1, int max = 100)
// generate a number from 1 to 100
{
    using namespace std;
    int randNum;
    
    //define the seed
    srand(static_cast<unsigned int>(time(nullptr)));
    static const double fraction = 1.0/(RAND_MAX+1.0);
    randNum = min + static_cast<int>((max - min + 1) * fraction * rand());
    
    return randNum;
}


int getGuess()
{
    using namespace std;
    cout << "Enter your guess: ";
    unsigned int userGuess;
    
    cin >> userGuess;
    
    // validate answer
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Sorry this is an invalid guess. Enter your guess again: ";
        cin >> userGuess;
    }
    return userGuess;
}


bool decideGuess(int trueValue, int userGuess, int &remainingAttempts)
{
    if (userGuess == trueValue)
    {
        std::cout << "You are right!\n";
        return true;
    }
    else if (userGuess > trueValue)
    {
        std::cout << "Your guess is too high!\n";
    }
    else
    {
        std::cout << "Your guess is too low!\n";
    }
    remainingAttempts--;
    return false;
}


void testDecideGuess()
{
    int remainingAttempts = 10;
    std::cout << decideGuess(11,11,remainingAttempts) << " remainingAttempts: " << remainingAttempts <<'\n';
    std::cout << decideGuess(10,11,remainingAttempts) << " remainingAttempts: " << remainingAttempts <<'\n';
    std::cout << decideGuess(11,12,remainingAttempts) << " remainingAttempts: " << remainingAttempts <<'\n';
}


void testGenerateRand(int simulationNum)
{
    int count = 0;
    
    while(count < simulationNum)
    {
        std::cout << generateRand() << ' ';
        count++;
        
    }
}


void gameRound(bool testMode = false)
{
    int randNum = generateRand();
    
    if (testMode)
        std::cout << "True value is " << randNum << '\n';
    int userGuess = getGuess();
    int remainintAttempt = 10;
    
    while(!decideGuess(randNum, userGuess, remainintAttempt) && remainintAttempt > 0)
    {
        userGuess = getGuess();
    }
}


void gameRoundWithForLoop(bool testMode = false)
{
    int randNum = generateRand();
    
    if (testMode)
        std::cout << "True value is " << randNum << '\n';
    int userGuess = getGuess();
    int remainintAttempt = 10;
    
    for (int attempt = 1; attempt < 10; attempt++)
    {
        if(decideGuess(randNum, userGuess, remainintAttempt))
        {
            break;
        }
        else
            userGuess = getGuess();
    }
    
}

void testUserInput()
{
    int userGuess = getGuess();
    std::cout << "User typed " << userGuess << '\n';
}

bool continueProgram()
{
    using namespace std;
    
    cout << "Do you wish to continue (y/n)? ";
    char continueProgram;
    cin >> continueProgram;
    while(cin.fail() || (!(continueProgram == 'y') && !(continueProgram == 'n')))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Enter y or n: ";
        cin >> continueProgram;
    }
    
    if (continueProgram == 'y')
        return false;
    else
        return true;
}


void testContinueProgram(){
    while(!continueProgram())
    {
        std::cout << "being executed\n";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...

    //gameRoundWithForLoop(true);
    do
    {
        gameRoundWithForLoop(false);
    }
    while(!continueProgram());
    
    return 0;
}
