// EXERCISE 11.5
//
// File name: 115-pointer-function-string-upcase.cpp
//
// Description:
// Write a function to convert any string to uppercase.
// Modify the original value.
//
// Code template:
//   // modifies the string through pointer str
//   void strUpcase(char *str);
//
//   // Call example
//   char *str = new char[10];
//   strcpy(str, "abc");
//   strUpcase(str);             // converts to "ABC"
//   ...
//   // At end, release memory

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void strUpcase(char *str);

int main()
{
    char *str = new char[10];
    strcpy(str, "abc");
    strUpcase(str);           // converts to "ABC"

    cout << str << endl;

    // Releases memory
    str = NULL;

    return 0;
}

void strUpcase(char *str)
{
    int i = 0;
    while (*(str + i))
    {
        *(str + i) = toupper(*(str + i));
        i++;
    }
}

// End of file