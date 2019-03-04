// EXERCISE 15.2
//
// File name: 152-library-cstdlib.cpp
//
// Description:
// Write a program to demonstrate the following library[1] functions:
//   atof()
//   atoi()
//
// [1] http://www.cplusplus.com/reference/cstdlib/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const char array[][6] = { "1", "a", "11.9","40.3", "-23", "hello" };
    int size = sizeof(array) / sizeof(array[0]);

    printf("%-8s%-12s%s\n", "base", "atof()", "atoi()");
    for (int i = 0; i < size; i++)
    {
        printf("%-8s%-12f%d\n", array[i], atof(array[i]), atoi(array[i]));
    }

    return 0;
}

// End of file