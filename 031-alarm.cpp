// EXERCISE 03.1
//
// File name: 031-alarm.cpp
//
// Description:
// Write a program to emulate an alarm clock. Display values counting
// backwards until last value where program displays "ALARM!".
//
// Code template:
//   int max = 10;
//   ... code ...
//
// Example output:
//   10, 9, 8, 7, 6, 5, 4, 3, 2, 1, ALARM!

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int startingNumber = 10;
    for (int i = startingNumber; i > 0; i--) 
    {
        cout << i << ", ";
    }
    cout << "ALARM!" << endl;

    return 0;
}

// End of file