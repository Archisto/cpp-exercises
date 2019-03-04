// EXERCISE 06.4
//
// File name: 064-array-average.cpp
//
// Description:
// Write a function that calculates the average of an integer array.
//
// Code template:
//   int array[] = {3, 1, 2];
//   int value = average(array, length);     // value = 2

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int average(int*, size_t);

int main()
{
    int array[] = { 3, 1, 2, 7, 4, 20, 1, 4 };
    size_t length = sizeof(array) / sizeof(array[0]);
    int value = average(array, length);
    cout << "Average: " << value << endl;

    return 0;
}

int average(int *array, size_t size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    return total / size;
}

// End of file