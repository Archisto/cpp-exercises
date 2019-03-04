// EXERCISE 03.4
//
// File name: 034-shape-square.cpp
//
// Description:
// Write a program to display a square on the screen based on a
// defined SIZE. Solve the problem using two nested loops.
//
// Example output (various sizes, set to values 2, 3 and 4):
//   xx    xxx   xxxx
//   xx    xxx   xxxx
//         xxx   xxxx
//               xxxx

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int size = 3;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "x";
        }
        cout << endl;
    }

    return 0;
}

// End of file