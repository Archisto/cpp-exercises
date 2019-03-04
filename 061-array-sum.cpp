// EXERCISE 06.1
//
// File name: 061-array-sum.cpp
//
// Description:
// Write a function that calculates the sum of an integer array.
//
// Code template:
//   const int length = 3;
//   int array[length] = {3, 1, 2};
//   ...
//   int sum = sum(array, length);         // sum = 6

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int sum(int*, size_t);

int main()
{
    const int length = 5;
    int array[length] = { 3, 2, 7, 2, -5 };
    int total = sum(array, length);

    cout << "The sum of the array's numbers is " << total << endl;

    return 0;
}

int sum(int *array, size_t size)
{
    int total = 0;
    if (size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            total += array[i];
        }
    }

    return total;
}

// End of file