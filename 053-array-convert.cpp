// EXERCISE 05.3
//
// File name: 053-array-convert.cpp
//
// Description:
// Write a program to convert an array of 5 values (inches) to another
// array of ISO centimeters. Display values by looping over both arrays.
//
// Code template:
//   float inches[] = {1, 2, 3};
//   float centimeters[3];    // Copy conversion here
//
// Example output:
//   1 in = 2.54 cm
//   2 in = 5.08 cm
//   3 in = 7.62 cm

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const float CONVERSION_IN_TO_CM = 2.54f;

    float inches[] = {1, 2, 3};
    float centimeters[3]; // Copy conversion here

    int arraySize = sizeof(inches) / sizeof(inches[0]);
    for (int i = 0; i < arraySize; i++)
    {
        centimeters[i] = inches[i] * CONVERSION_IN_TO_CM;
        cout << inches[i] << " in = " << centimeters[i] << " cm" << endl;
    }

    return 0;
}

// End of file