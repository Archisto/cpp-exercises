// EXERCISE 11.3
//
// File name: 113-pointer-to-array-int.cpp
//
// Description:
// Write a program to access an array from BEGIN to END
// using a pointer to the array (aptr).
//
// Code template:
//   const int length = 5;
//   int array[length] = {1, 2, 3, 4, 5};
//   int *aptr = &array[0];
//
//   // Rest of the code using aptr in a loop
//
// Example output:
//   array[1] = 1
//   array[2] = 2
//   array[3] = 3

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const int length = 5;
    int array[length] = {1, 2, 3, 4, 5};
    int *aptr = &array[0];

    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", (i + 1), *(aptr + i));
    }

    return 0;
}

// End of file