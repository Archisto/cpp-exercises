// EXERCISE 01.6
//
// File name: 016-pythagoras.cpp
//
// Description:
// Write a program to to calculate hypotenuse (C) from pythagorean
// theorem[1]. See math[2] library for power and square root
// functions.
//
//  2     2     2
// c  =  a  +  b
//
// [1] https://en.wikipedia.org/wiki/Pythagorean_theorem
// [2] http://www.cplusplus.com/reference/cmath/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

float hypotenuse(float, float);

int main()
{
    float a = 1.4f;
    float b = 6.8f;
    float hyp = hypotenuse(a, b);
    printf("The hypotenuse of %f and %f is %f\n", a, b, hyp);

    return 0;
}

float hypotenuse(float a, float b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

// End of file