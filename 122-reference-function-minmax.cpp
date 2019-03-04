// EXERCISE 12.2
//
// File name: 122-reference-function-minmax.cpp.cpp
//
// Description:
// Write a function to return minimum and maximum values
// by using reference arguments MIN and MAX.
//
// Code template:
//   // Function definition:
//   void findMinMax(const int array[], int length, int &min, int &max)
//
//   // Call example:
//   const int UNDEFINED = -999;
//   int length = 3;
//   const int array[length] = {1, 3, -1};
//   int min = UNDEFINED;
//   int max = UNDEFINED;
//
//   findMinMax(array, length, min, max);
//   cout << "Min: " << min << endl;
//   cout << "Max: " << max << endl;

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void findMinMax(const int array[], int length, int &min, int &max);

int main()
{
    const int UNDEFINED = -999;
    int length = 3;
    const int array[] = {1, 3, -1};
    int min = UNDEFINED;
    int max = UNDEFINED;

    findMinMax(array, length, min, max);
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}

void findMinMax(const int array[], int length, int &min, int &max)
{
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            min = array[i];
            max = array[i];
        }
        else if (array[i] < min)
        {
            min = array[i];
        }
        else if (array[i] > max)
        {
            max = array[i];
        }
    }
}

// End of file