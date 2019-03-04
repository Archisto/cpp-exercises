// EXERCISE 03.6
//
// File name: 036-multable.cpp
//
// Description:
// Write a program to display a multiplication table. The size of
// the table is controlled using one value SIZE. Tip: to make the
// output evenly spaced, utilize function printf(). You can
// assume that the the SIZE is in range 1..9[1]
//
// Code template:
//   int size = 9;
//
// Example output:
//    * |  1  2  3  4  5  6  7  8  9
//    -------------------------------
//    1 |  1  2  3  4  5  6  7  8  9
//    2 |  2  4  6  8 10 12 14 16 18
//    3 |  3  6  9 12 15 18 21 24 27
//    4 |  4  8 12 16 20 24 28 32 36
//    5 |  5 10 15 20 25 30 35 40 45
//    6 |  6 12 18 24 30 36 42 48 54
//    7 |  7 14 21 28 35 42 49 56 63
//    8 |  8 16 24 32 40 48 56 64 72
//    9 |  9 18 27 36 45 54 63 72 81
//
// [1] If the SIZE would exceed 9, the requirements to display
// evenly spaced table would change from row to row. This is not
// a straightforward task to solve considering that:
//   10 x 15 => requires 3 digit display area for value 150
//   99 x 55 => requires 4 digit display area for value 5445

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int size = 9;

    // Top row
    printf("%-2c%c", '*', '|');
    for (int i = 0; i < size; i++)
    {
        printf("%3d", i + 1);
    }
    cout << endl;

    // Top row underline
    for (int j = 0; j < 5 + 3 * size - 1; j++)
    {
        cout << '-';
    }
    cout << endl;

    // Rows
    for (int k = 0; k < size; k++)
    {
        printf("%-2d%c", k + 1, '|');

        // Columns
        for (int l = 0; l < size; l++)
        {
            printf("%3d", (k + 1) * (l + 1));
        }

        cout << endl;
    }

    return 0;
}

// End of file