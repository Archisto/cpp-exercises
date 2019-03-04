// EXERCISE 12.3
//
// File name: 123-reference-function-array.cpp
//
// Description:
// Write a function to take two arrays and swap their values. The
// arrays are passed by references. Return boolean FALSE if the
// array lengths do not match exactly and thus cannot be swapped. 
//
// Code template:
//   // Function definition:
//   bool swap(int (&a)[], int alength, int (&b)[], int blength)
//
//   // Call example:
//   const int length = 2;
//   int a[length] = {1, 2};
//   int b[length] = {10, 20};
//
//   bool status = swap(a, length, b, length);
//   ...

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

template <int N1, int N2>
bool swap(int (&a)[N1], int alength, int (&b)[N2], int blength);

int main()
{
    const int length = 2;
    int a[length] = {1, 2};
    int b[length] = {10, 20};

    bool status = swap(a, length, b, length);

    cout << "a: ";
    for (int i = 0; i < length; i++)
    {
        if (i > 0)
        {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << endl;
    cout << "b: ";
    for (int i = 0; i < length; i++)
    {
        if (i > 0)
        {
            cout << ", ";
        }
        cout << b[i];
    }
    cout << endl;

    return 0;
}

template <int N1, int N2>
bool swap(int (&a)[N1], int alength, int (&b)[N2], int blength)
{
    if (alength == blength)
    {
        for (int i = 0; i < alength; i++)
        {
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }

    return false;
}

// End of file