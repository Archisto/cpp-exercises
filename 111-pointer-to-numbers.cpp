// EXERCISE 11.1
//
// File name: 111-pointer-to-numbers.cpp
//
// Description:
// Swap two integer values by using pointers.      
//
// Code template:
//   int a = 1;
//   int b = 2;
//
//   int *aptr = &a;
//   // ....rest of the code to swap A and B using aptr, bptr etc.

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int firstInRange(int*, size_t, int, int, int);

int main()
{
    int a = 1;
    int b = 2;
 
    int *aptr = &a;
    int *bptr = &b;

    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;

    cout << "a: " << a << endl
         << "b: " << b << endl;

    return 0;
}

// End of file