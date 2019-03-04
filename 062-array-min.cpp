// EXERCISE 06.2
//
// File name: 062-array-min.cpp
//
// Description:
// Write a function that returns the minimum value of an integer array.
//
// Code template:
//   const int length = 3;
//   int array[length] = {3, 1, 2};
//   ...
//   int min = min(array, length);	    // min = 1

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int min(int*, size_t);

int main()
{
    size_t size = 5;
    int intArray[] = { -5, 23, 45, -60, 34 };
    int smallest = min(intArray, size);
    cout << "Smallest number: " << smallest << endl;

    return 0;
}

int min(int *array, size_t size)
{
    int minVal = 0;
    if (size > 0)
    {
        minVal = array[0];
        for (int i = 0; i < size; i++)
        {
            if (array[i] < minVal)
            {
                minVal = array[i];
            }
        }
    }

    return minVal;
}

// End of file