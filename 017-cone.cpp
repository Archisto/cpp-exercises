// EXERCISE 01.7
//
// File name: 017-cone.cpp
//
// Description:
// Calculate a triangular cone's[1] volume from
// (r)adius and (h)eight
//
//          1         2            /\
// volume = - * PI * r * h        /  \
//          3                    /.--.\
//                               (    )
//                                '--'
//
// [1] https://en.wikipedia.org/wiki/Cone

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

float calculateConeVolume(float, float);

int main()
{
    float r = 1.1f;
    float h = 2.5f;
    float vol = calculateConeVolume(r, h);
    printf("A cone's volume, when its radius is %f and height is %f, is %f\n",
           r, h, vol);

    return 0;
}

float calculateConeVolume(float r, float h)
{
    const double pi = 3.1415926535897;
    return (1.0f / 3.0f) * pi * pow(r, 2) * h;
}

// End of file