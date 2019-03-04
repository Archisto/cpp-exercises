// EXERCISE 12.1
//
// File name: 121-refence-function-occur.cpp
//
// Description:
// Write a function to search a value from an array. Return how
// many occurrences were found by using the reference argument
// OCCURRENCES.
//
// Code template:
//   // Function definition:
//   void occurs(const int array[], int length, int search, int &occurrences)
//
//   // Call example:
//   const int length = 3;
//   int array[length] = {1, 2, 1};
//   int count = 0;
//
//   occurs(array, length, 1, count);   // count = 2
//   cout << "Number 1 occurs: " << count << " times" << endl;

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void occurs(const int array[], int length, int search, int &occurrences);

int main()
{
    const int length = 3;
    int array[length] = {1, 2, 1};
    int count = 0;
 
    occurs(array, length, 1, count);
    cout << "Number 1 occurs: " << count << " times" << endl;

    return 0;
}

void occurs(const int array[], int length, int search, int &occurrences)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == search)
        {
            occurrences++;
        }
    }
}

// End of file