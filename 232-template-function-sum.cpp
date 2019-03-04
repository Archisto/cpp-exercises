// EXERCISE 23.2
//
// File name: 232-template-function-sum.cpp
//
// Description:
// Use C++ template notation <> to define a generic sum()
// function that can sum any array of standard data types; those
// of int, float, double etc.
//
// That is, instead of using overloading and defining multiple
// methods, like:
//
//   int sum(int[]);
//   float sum(float[]);
//   double sum(double[]);
//   ...
//
// Use template keyword to define and instantiate all the above functions:
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
T sum(T array[], size_t size);

int main()
{
    int intArray[] = { 1, 3, 5, 7, 9 };
    float floatArray[] = { 8.1, 6.3, 4.5, 2.7, 0.9 };

    int sum1 = sum(intArray, (sizeof(intArray) / sizeof(intArray[0])));
    float sum2 = sum(floatArray, (sizeof(floatArray) / sizeof(floatArray[0])));

    cout << "Sums:" << endl
         << sum1 << endl
         << sum2 << endl;

    return 0;
}

template <class T>
T sum(T array[], size_t size)
{
    T result = 0;

    for (int i = 0; i < size; i++)
    {
        result += array[i];
    }

    return result;
}

// End of file