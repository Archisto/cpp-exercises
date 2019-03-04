// EXERCISE 07.1
//
// File name: 071-array2d-tictactoe.cpp
//
// Description:
// Write a program to display values in a two dimensional array.
// Based on values (0 = unoccupied, 1 = player A, 2 = player B),
// display a game grid.
//
// Code template:
//   int tictactoe[][3] = { {1, 2, 0},
//                          {2, 1, 0},
//                          {0, 2, 1} };
//
// Example output:
//   x o .
//   o x .
//   . o x

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const char markPlayerA = 'x';
    const char markPlayerB = 'o';
    const char markUnoccupied = '.';

    int tictactoe[][3] = { {1, 2, 0},
                           {2, 1, 0},
                           {0, 2, 1} };

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (x > 0)
            {
                cout << ' ';
            }

            switch (tictactoe[y][x])
            {
                case 1:
                {
                    cout << markPlayerA;
                    break;
                }
                case 2:
                {
                    cout << markPlayerB;
                    break;
                }
                default:
                {
                    cout << markUnoccupied;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}

// End of file