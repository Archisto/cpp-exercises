// EXERCISE 02.4
//
// File name: 024-iftemperature.cpp
//
// Description:
// Write a program that solves the following problem using logical operators. 
//
// Use the following decision table:
// - If temperature is below -20 in Tampere, display "Freezing"
// - If temperature is below -20 in Turku or Helsinki, display "Ice Freezing"
// - If temperature is above -20 in Tampere, display "Moderate Winter"
// - If temperature is between -20..-10 in Helsinki or Turku, display "Ice Cold"
//
// Code template:
//   const int HELSINKI = 0;
//   const int TAMPERE = 1;
//   const int TURKU = 2;
//
//   // These values can be changed
//   int city = HELSINKI;
//   int temperature = -25;
//   ... code ...

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const int HELSINKI = 0;
    const int TAMPERE = 1;
    const int TURKU = 2;

    // These values can be changed
    int city = TAMPERE;
    int temperature = -9;

    char genderStr[8];
    int shortHeight;
    int tallHeight;

    if (city == TAMPERE && temperature < -20)
    {
        cout << "Freezing" << endl;
    }
    else if ((city == TURKU || city == HELSINKI) && temperature < -20)
    {
        cout << "Ice Freezing" << endl;
    }
    else if (city == TAMPERE && temperature > -20)
    {
        cout << "Moderate Winter" << endl;
    }
    else if ((city == TURKU || city == HELSINKI)
             && (temperature >= -20 && temperature <= -10))
    {
        cout << "Ice Cold" << endl;
    }

    return 0;
}

// End of file