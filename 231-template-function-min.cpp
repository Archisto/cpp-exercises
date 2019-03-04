// EXERCISE 23.1
//
// File name: 231-template-function-min.cpp
//
// Description:
// Use C++ template notation <> to define a generic minimum()
// function that can be used for *any* internal data type, like
// int, float, double etc.
//
// That is, instead of using overloading and defining multiple
// methods, like:
//
//   int minimum(int, int);
//   float minimum(float, float);
//   double minimum(double, double);
//   ...
//
// Use template keyword to define and instantiate all of the above functions.
//
//   template ...
//
// Test the template code from main() by using int and float values.

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

template <class T>
T minimum(T value1, T value2);

int main()
{
    int int1 = 4;
    int int2 = 6;
    float float1 = 8;
    float float2 = 7.9;

    int min1 = minimum(int1, int2);
    float min2 = minimum(float1, float2);

    cout << "Minimums:" << endl
         << min1 << endl
         << min2 << endl;

    return 0;
}

template <class T>
T minimum(T value1, T value2)
{
    if (value2 < value1)
    {
        return value2;
    }
    else
    {
        return value1;
    }
}

// End of file