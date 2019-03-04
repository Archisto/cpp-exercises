// EXERCISE 03.5
//
// File name: 035-shape-arrow.cpp
//
// Description:
// Write a program to display following pattern. Solve the problem
// using two *NESTED* loops (use more loops as needed).
// The SIZE and the displayed CHARACTER must be configurable.
//
// Code template:
//   int size = 5;
//   char character[] = "*";
//   ... code ...
//
// Example output:
//   * * * *
//     * * * *
//       * * * *
//     * * * *
//   * * * *

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int size = 7;
    char character[] = "o";

    if (size > 1)
    {
        for (int i = 0; i < size; i++)
        {
            int leadingSpaces = 0;
            if (i < size / 2)
            {
                leadingSpaces = 2 * i;
            }
            else
            {
                leadingSpaces = 2 * (size - i - 1);
            }

            for (int j = 0; j < leadingSpaces; j++)
            {
                cout << ' ';
            }

            for (int k = 0; k < size - 1; k++)
            {
                cout << character << ' ';
            }
            cout << endl;
        }
    }
    else if (size == 1)
    {
        cout << character << endl;
    }

    return 0;
}

// End of file