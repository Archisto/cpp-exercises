// EXERCISE 06.3
//
// File name: 063-array-max.cpp
//
// Description:
// Write a function that returns the maximum value of an integer array.
//
// Code template:
//   const int length = 3;
//   int array[length] = {3, 1, 2};
//   ...
//   int max = max(array, length);	    // max = 3

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int max(int*, size_t);

int main()
{
    size_t size = 5;
    int intArray[] = { -5, 23, 45, -60, 34 };
    int largest = max(intArray, size);
    cout << "Largest number: " << largest << endl;

    return 0;
}

int max(int *array, size_t size)
{
    int maxVal = 0;
    if (size > 0)
    {
        maxVal = array[0];
        for (int i = 0; i < size; i++)
        {
            if (array[i] > maxVal)
            {
                maxVal = array[i];
            }
        }
    }

    return maxVal;
}

// End of file