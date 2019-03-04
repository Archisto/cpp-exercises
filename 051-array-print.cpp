// EXERCISE 05.1
//
// File name: 051-array-print.cpp
//
// Description:
// Write a program to display values in array in *reverse* order.
//
// Code template:
//   int array[] = {0, 1, 2, 3, 4, 5};
//
// Example output:
//   5, 4, 3, 2, 1, 0

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5};

    if (sizeof(array) > 0)
    {
        int arraySize = sizeof(array) / sizeof(array[0]);
        for (int i = arraySize - 1; i >= 0; i--)
        {
            cout << array[i];
            if (i > 0)
            {
                cout << ", ";
            }
            else
            {
                cout << endl;
            }
        }
    }

    return 0;
}

// End of file