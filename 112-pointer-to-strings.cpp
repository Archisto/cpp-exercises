// EXERCISE 11.2
//
// File name: 112-pointer-to-strings.cpp
//
// Description:
// Write a program to access a string by using a pointer variable
// pointing to each individual character. Display each character
// separated by spaces. Use cPtr to access each character in str.
//
// Code template:
//   const char str[] = "string";
//   const char *cPtr;
//
// Example output:
//   s t r i n g

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const char str[] = "string";
    const char *cPtr;

    int i = 0;
    while (*cPtr != '\0')
    {
        if (i > 0)
        {
            cout << ' ';
        }

        cPtr = &str[i];
        cout << *cPtr;
        i++;
    }
    cout << endl;

    return 0;
}

// End of file