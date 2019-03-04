// EXERCISE 05.4
//
// File name: 054-array-search.cpp
//
// Description:
// Write a program to search values from an array in range MIN..MAX
// (both inclusive).
//
// Code template:
//   int array[] = {-3, -2, -1, 0, 1, 2, 3};
//   int min = -1;
//   int max = 10;
//
// Example output:
//   -1, 0, 1, 2, 3

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int array[] = {-3, -2, -1, 0, 1, 2, 3};
    int min = -1;
    int max = 10;

    int arraySize = sizeof(array) / sizeof(array[0]);
    bool firstValuePrinted = false;
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] >= min && array[i] <= max)
        {
            if (firstValuePrinted)
            {
                cout << ", ";
            }
            else
            {
                firstValuePrinted = true;
            }

            cout << array[i];
        }
    }
    cout << endl;

    return 0;
}

// End of file