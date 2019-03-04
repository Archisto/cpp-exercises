// EXERCISE 11.4
//
// File name: 114-pointer-to-array-strings.cpp
//
// Description:
// Write a program to display strings from an array.        
//
// Code template:
//   const int length = 3;
//   const char *array[length] = { "abc", "def", "ghi" };

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const int length = 3;
    const char *array[length] = { "abc", "def", "ghi" };
    const char **aptr = &array[0];

    for (int i = 0; i < length; i++)
    {
        printf("%s\n", *(aptr + i));
    }

    return 0;
}

// End of file