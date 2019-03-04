// EXERCISE 02.3
//
// File name: 023-ifgender.cpp
//
// Description:
// Write a program that solves following problem using logical
// operators. Set MALE and FEMALE variables as constant integers
// in the beginning.
//
// Use the following decision table:
// - if MALE
//   + below 180, display "Short male"
//   + between 180..187, display "Normal male"
//   + over 187, display "Tall male"
// - if FEMALE
//   + below 175, display "Short female"
//   + between 175..182, display "Normal female"
//   + over 182, display "Tall female"
//
// Code template:
//   const int MALE = 0;
//   const int FEMALE = 1;
//
//   // These values can be changed
//   int gender = MALE;
//   int height = 175;
//   ... code ...

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const int MALE = 0;
    const int FEMALE = 1;

    // These values can be changed
    int gender = FEMALE;
    int height = 184;

    char genderStr[8];
    int shortHeight;
    int tallHeight;

    if (gender == MALE)
    {
        strcpy(genderStr, "male");
        shortHeight = 180;
        tallHeight = 187;
    }
    else
    {
        strcpy(genderStr, "female");
        shortHeight = 175;
        tallHeight = 182;
    }

    if (height < shortHeight)
    {
        cout << "Short " << genderStr << endl;
    }
    else if (height > tallHeight)
    {
        cout << "Tall " << genderStr << endl;
    }
    else
    {
        cout << "Normal " << genderStr << endl;
    }

    return 0;
}

// End of file