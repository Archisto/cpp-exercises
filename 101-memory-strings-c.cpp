// EXERCISE 10.1
//
// File name: 101-memory-strings-c.cpp
//
// Description:
// Copy[1] a C-style string A to a new string B.
// Allocate memory for B, release memory on exit.
//
// Code template:
//   const char str[] = "this string";    // A
//
//   // Allocate memory for new string B.
//   // Copy string from A to B.
//   // Display A and B to make sure they are identical.
//   // Release memory.
//
// [1] Study library <cstring>
// http://www.cplusplus.com
// http://en.cppreference.com

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const char strA[] = "this string";

    // Allocate memory for new string B.
    char *strB = (char*) malloc(sizeof(strA) + 1);

    // Copy string from A to B.
    memcpy(strB, strA, strlen(strA));

    // Display A and B to make sure they are identical.
    cout << strA << endl << strB << endl;

    // Release memory.
    free(strB);

    return 0;
}

// End of file