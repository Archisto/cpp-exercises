// EXERCISE 04.1
//
// File name: 041-sum.cpp
//
// Description:
// Write a function to calculate arithmetic sum.
//
// Code template:
//   int sum(int);
//   int total = sum(10);        // 1 + 2 + 3 ... N

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int sum(int);

int main()
{
    int total = sum(10);
    cout << "The arithmetic sum of " << 10 << " is " << total << endl;

    return 0;
}

// Calculates the arithmetic sum.
int sum(int number)
{
    int result = 0;
    for (int i = number; i > 0; i--)
    {
        result += i;
    }
    return result;
}

// End of file