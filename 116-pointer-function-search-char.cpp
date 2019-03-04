// EXERCISE 11.6
//
// File name: 116-pointer-function-search-char.cpp
//
// Description:
// Write a function to search a character from a string.
// Return pointer to the first occurrence of the character.
// Return NULL pointer if not found.        
//
// Code template:
//   // Function definition:
//   const char *strSearchChar(const char *str, char ch)
//
//   // Call example:
//   const char str[] = "abc";
//   const char *sptr = strSearchChar(str, 'b');
//
//   if (sptr)
//   {
//       cout << "Rest of the string from b: " << sptr << endl;
//   }

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

const char *strSearchChar(const char *str, char ch);

int main()
{
    const char str[] = "abc";
    const char *sptr = strSearchChar(str, 'b');

    if (sptr)
    {
        cout << "Rest of the string from b: " << sptr << endl;
    }

    return 0;
}

const char *strSearchChar(const char *str, char ch)
{
    const char *cptr = NULL;

    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ch)
        {
            cptr = &str[i];
            break;
        }
    }

    return cptr;
}

// End of file