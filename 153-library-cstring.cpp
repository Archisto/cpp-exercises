// EXERCISE 15.3
//
// File name: 153-library-cstring.cpp
//
// Description:
// Write a program to demonstrate the following library[1] functions:
//   strncpy()
//   strcat()
//
// [1] http://www.cplusplus.com/reference/cstring/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    char *str = (char*) malloc(100);

    const char a[] = "First, ";
    const char b[] = "second, ";
    const char c[] = "third, ";
    const char d[] = "fourth.";
    const char e[] = "EXTRA";

    strncpy(str, a, 7);
    strcat(str, b);
    strcat(str, c);
    strcat(str, d);
    strncpy(str + 15, e, 5);

    cout << str << endl;

    free(str);

    return 0;
}

// End of file