// EXERCISE 15.1
//
// File name: 151-library-cmath.cpp
//
// Description:
// Write a program to demonstrate the following library[1] functions:
//   round()
//   trunc()
//
// [1] http://www.cplusplus.com/reference/cmath/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const double array[] = { 0.1, 3.8, 5.4, 7.5, -9.0, -4.2, -2.7 };
    int size = sizeof(array) / sizeof(array[0]);

    printf("%-10s%-10s%s\n", "base", "round()", "trunc()");
    for (int i = 0; i < size; i++)
    {
        printf("%-10f%-10f%f\n", array[i], round(array[i]), trunc(array[i]));
    }

    return 0;
}

// End of file