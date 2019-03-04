// EXERCISE 04.4
//
// File name: 044-area.cpp
//
// Description:
// Write a function to calculate areas of various shapes. See
// standard library for mathematical[1] functions. Implement
// following functions and test them from main():
//   float areaSquare(float length)
//   float areaRectangle(float length, float width)
//   float areaCircle(float radius)
//   float areaCylinder(float radius, float height)
//
// [1] http://www.cplusplus.com/reference/cmath/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

# define PI         3.14159265358979323846  /* pi */

using namespace std;

float areaSquare(float length);
float areaRectangle(float length, float width);
float areaCircle(float radius);
float areaCylinder(float radius, float height);

int main()
{
    float length = 5.0f;
    float width = 6.8f;
    float height = 12.0f;
    float radius = 2.5f;

    cout << "Square area: " << areaSquare(length) << endl;
    cout << "Rectangle area: " << areaRectangle(length, width) << endl;
    cout << "Circle area: " << areaCircle(radius) << endl;
    cout << "Cylinder area: " << areaCylinder(radius, height) << endl;

    return 0;
}

float areaSquare(float length)
{
    return pow(length, 2);
}

float areaRectangle(float length, float width)
{
    return length * width;
}

float areaCircle(float radius)
{
    return PI * pow(radius, 2);
}

float areaCylinder(float radius, float height)
{
    return 2 * areaCircle(radius) + areaRectangle(height, 2 * PI * radius);
}

// End of file