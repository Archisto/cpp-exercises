// EXERCISE 06.5
//
// File name: 065-array-find.cpp
//
// Description:
// Write a function that returns the first value in range FROM..TO (inclusive).
// In case the value is not found, return a defined value NOT_FOUND.
//
// Code template:
//   const int length = 3;
//   int array[length] = {3, 1, 2};
//
//   int from = 2;
//   int to = 10;
//   const int NOT_FOUND = -1;  // what to return if no value was found
//
//   int value = firstInRange(array, length, from, to, NOT_FOUND); // value = 3

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int firstInRange(int*, size_t, int, int, int);

int main()
{
    const int length = 3;
    int array[length] = { 3, 1, 2 };

    int from = 2;
    int to = 10;
    const int NOT_FOUND = -1; // What to return if no value was found

    int value = firstInRange(array, length, from, to, NOT_FOUND);
    cout << "Value: " << value << endl;

    return 0;
}

int firstInRange(int *array, size_t size, int from, int to, int notFoundValue)
{
    int result = notFoundValue;

    for (int i = 0; i < size; i++)
    {
        if (array[i] >= from && array[i] <= to)
        {
            result = array[i];
            break;
        }
    }

    return result;
}

// End of file