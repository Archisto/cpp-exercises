// EXERCISE 20.2
//
// File name: 202-dice.cpp
//
// Description:
// Write "Dice" class. Provide the following functionality:
// - When class is instantiated, constructor sets the dice value
//   to 0 i.e. undefined.
// - Method play() generates a new dice value.
// - Method value() returns the current dice value.

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
    void play();
    int value();
private:
    int currentValue;
};

Dice::Dice()
{
    currentValue = 0;
}

void Dice::play()
{
    currentValue = (rand()%6)+1;
}

int Dice::value()
{
    return currentValue;
}

int main()
{
    Dice dice;
    srand((unsigned)time(0));
    dice.play();
    cout << "Dice value: " << dice.value() << endl;

    return 0;
}

// End of file