// EXERCISE 03.2
//
// File name: 032-series.cpp
//
// Description:
// Write a program to display 10-based columns of numbers on the
// screen. The *length* of the display can be configured.
// Substitute the last number with space at the end.
//
// Code template:
//   int length = 25;
//   ... code ...
//
// Example output:
//   123456789 123456789 12345

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int length = 32;

    int printNumber = 1;
    for (int i = 0; i < length; i++) 
    {
        if (printNumber == 10)
        {
            cout << " ";
            printNumber = 1;
        }
        else
        {
            cout << printNumber;
            printNumber++;
        }
    }
    cout << endl;

    return 0;
}

// End of file