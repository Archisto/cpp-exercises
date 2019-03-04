// EXERCISE 11.7
//
// File name: 117-pointer-function-convert-array-strings.cpp
//
// Description:
// Write a function to convert the first letter of each string in
// an array to uppercase format. Like in upcase => Upcase.
// ARRAY is not modified. Read strings one by one and display the result.
//
// Code template:
//   const char *array[] = { "abc", "def", "ghi" };
//   ...
//
// Example output:
//   Abc
//   Def
//   Ghi

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void strArrFirstCharUpcase(char **array, size_t size);

int main()
{
    const char *array[] = { "abc", "def", "ghi" };
    int length = sizeof(array) / sizeof(array[0]);

    char *newArray[length];

    for (int i = 0; i < length; i++)
    {
        int size = sizeof(array[i]) / sizeof(array[0]);
        newArray[i] = new char[size];
        strcpy(newArray[i], array[i]);
    }

    strArrFirstCharUpcase(newArray, length);

    for (int i = 0; i < length; i++)
    {
        cout << newArray[i] << endl;
    }

    return 0;
}

void strArrFirstCharUpcase(char **array, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        *array[i] = toupper(*array[i]);
    }
}

// End of file