// EXERCISE 15.5
//
// File name: 155-library-random.cpp
//
// Description:
// Write a program to use a library[1] and display national[2]
// lottery numbers. Make sure that each number is different.
//
// Example output:
//   1, 15, 30, 2 ...
//
// [1] http://www.cplusplus.com/reference/random
// [2] https://www.veikkaus.fi/fi/lotto (1-40; 7 normal and 1 spare number)

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <random>

using namespace std;

void printNumbers(int[], size_t);

int main()
{
    const int NUMBERS = 7;

    default_random_engine generator((unsigned) time(0));
    uniform_int_distribution<int> rand(1, 40);
    rand(generator); // Discarding bad first value (always the same)

    int lottery[NUMBERS];
    int spare = rand(generator);

    for (int i = 0; i < NUMBERS; i++) 
    {
        int value = 0;
        bool unique = false;
        while (!unique) 
        {
            value = rand(generator);
            if (value != spare)
            {
                bool sameFound = false;
                for (int existing = 0; existing < i; existing++) 
                {
                    if (value == lottery[existing])
                    {
                        sameFound = true;
                        break;
                    }
                }

                if (!sameFound)
                {
                    unique = true;
                }
            }
        }

        lottery[i] = value;
    }

    cout << "Lottery: ";
    printNumbers(lottery, NUMBERS);
    cout << "Spare: " << spare << endl;

    return 0;
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