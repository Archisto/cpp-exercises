// EXERCISE 05.2
//
// File name: 052-array-temperatures.cpp
//
// Description:
// Write a program to store 10 temperature values (in float) to an array.
// Loop over the values and present a report.
//
// Example output:
//   Temperatures:
//   Min: NN.N
//   Max: NN.N
//   Avg: NN.N

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    float array[] = {0.4f, -14.5f, 25.6f, 6.0f, 23.2f};

    if (sizeof(array) > 0)
    {
        float min = array[0];
        float max = array[0];
        float total = 0.0f;
        float avg;

        int arraySize = sizeof(array) / sizeof(array[0]);
        for (int i = 0; i < arraySize; i++)
        {
            total += array[i];
            if (array[i] < min)
            {
                min = array[i];
            }
            else if (array[i] > max)
            {
                max = array[i];
            }
        }
        avg = total / arraySize;

        cout << "Temperatures:" << endl;
        cout << "Min: " << min << endl;
        cout << "Max: " << max << endl;
        cout << "Avg: " << avg << endl;
    }

    return 0;
}

// End of file