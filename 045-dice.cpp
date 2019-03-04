// EXERCISE 04.5
//
// File name: 045-dice.cpp
//
// Description:
// Write a program to roll a dice. Implement dice by returning
// a random[1] number between 1..6 each time the program is run.
//
// Code template:
//   int value = dice();
//   cout << "Dice: " << value << endl;
//
// [1] http://www.cplusplus.com/reference/cmath/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

int dice();

int main()
{
    int value = dice();
    cout << "Dice: " << value << endl;

    return 0;
}

int dice()
{
    srand((unsigned)time(0));
    return (rand()%6)+1;
}

// End of file