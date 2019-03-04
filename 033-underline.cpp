// EXERCISE 03.3
//
// File name: 033-underline.cpp
//
// Description:
// Write a program to draw an underline below a string. The program must
// work for any string. See cstring[1] library how to get string length.
//
// Code template:
//   #include <cstring>
//
//   char str[] = "This is a test";
//   ... code ...
//
// Example output:
//   This is a test
//   --------------
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
    char str[] = "Underlined message!";

    int strLength = strlen(str);
    if (strLength > 0)
    {
        cout << str << endl;
        for (int i = 0; i < strLength; i++) 
        {
            cout << "-";
        }
        cout << endl;
    }

    return 0;
}

// End of file