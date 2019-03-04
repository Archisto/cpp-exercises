// EXERCISE 21.2
//
// File name: 212-dice2.cpp
//
// Description:
// Make another version of the class by changing the constructor.
// Add also a destructor. New class requirements:
// - Store the dice VALUE into a dynamically allocated integer variable.
// - When the class is instantiated, the dice value is set in the constructor.
//   It can be immediately retrieved with the value() method.
// - When the class is deleted, in the destructor, release memory
//   allocated for the stored dice VALUE.

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

class Dice
{
public:
    Dice();
    ~Dice();
    void play();
    int value();
private:
    int *currentValue;
};

Dice::Dice()
{
    currentValue = new int;
    play();
}

Dice::~Dice()
{
    delete currentValue;
}

void Dice::play()
{
    *currentValue = (rand()%6)+1;
}

int Dice::value()
{
    return *currentValue;
}

int main()
{
    srand((unsigned)time(0));
    Dice dice;
    cout << "Dice value: " << dice.value() << endl;

    return 0;
}

// End of file