// EXERCISE 02.1
//
// File name: 021-ifchoices.cpp
//
// Description:
// Write a program to decide the order of three values.
// The program must work even if any of the values are changed.
//
// Code template:
//   int a = 15;
//   int b = 4;
//   int c = 7;
//   ... code ...
//
// Example output:
//   15 is the biggest
//   7 is in the middle
//   4 is the smallest

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int a = 53;
    int b = 200;
    int c = 68;
    int largest = a;
    int middle = a;
    int smallest = a;

    if (b > a && b > c)
    {
        largest = b;
    }
    else if (b < a && b < c)
    {
        smallest = b;
    }
    else
    {
        middle = b;
    }

    if (c > a && c > b)
    {
        largest = c;
    }
    else if (c < a && c < b)
    {
        smallest = c;
    }
    else
    {
        middle = c;
    }

    cout << largest << " is the largest" << endl
         << middle << " is in the middle" << endl
         << smallest << " is the smallest" << endl;

    return 0;
}

// End of file