// EXERCISE 04.6
//
// File name: 046-lottery.cpp
//
// Description:
// Write a simple[1] Finnish lottery[2] where the numbers and
// spare numbers are displayed to the screen.
//
// Example output:
//   Lottery: N, N, NN, N, N ...
//   Spare: N, N, NN
//
// [1] Simple in the sense that you may get same numbers from
// random number generator. Ignore possible duplicate numbers for
// this exercise. To implement lottery correcly, there would be
// need to store the values to an array for checking against
// duplicates.
// [2] https://www.veikkaus.fi/fi/lotto

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int randomRange(int, int);
void printNumbers(int[], size_t);

int main()
{
    const int NUMBERS = 7;
    const int SPARE_NUMBERS = 3;

    int lottery[NUMBERS];
    int spare[SPARE_NUMBERS];

    srand((unsigned)time(0));
    for (int i = 0; i < NUMBERS; i++) 
    {
        lottery[i] = randomRange(1, 40);
    }

    for (int i = 0; i < SPARE_NUMBERS; i++) 
    {
        spare[i] = randomRange(1, 40);
    }

    cout << "Lottery: ";
    printNumbers(lottery, NUMBERS);
    cout << "Spare: ";
    printNumbers(spare, SPARE_NUMBERS);

    return 0;
}

int randomRange(int min, int max)
{
    return (rand()%(max - min + 1)) + min;
}

void printNumbers(int numbers[], size_t size)
{
    for (unsigned int i = 0; i < size; i++) 
    {
        cout << numbers[i];
        if (i == size - 1)
        {
            cout << endl;
        }
        else
        {
            cout << ", ";
        }
    }
}

// End of file