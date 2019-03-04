// EXERCISE 05.5
//
// File name: 055-array-morse-code.cpp
//
// Description:
// Write a program to convert a string (phone number) into
// morse code[1]. Tip: study library functions[2], how you can
// examine a string as individual characters and find a way to
// set up a separate array for morse code signs. In this
// exercise you only need morse code signs for numbers.
//
// Code template:
//   const char str[] = "050123456";
//
// [1] https://en.wikipedia.org/wiki/Morse_code
// [2] http://www.cplusplus.com/reference/cstring/strlen/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const char MORSE_1[] = ".----";
    const char MORSE_2[] = "..---";
    const char MORSE_3[] = "...--";
    const char MORSE_4[] = "....-";
    const char MORSE_5[] = ".....";
    const char MORSE_6[] = "-....";
    const char MORSE_7[] = "--...";
    const char MORSE_8[] = "---..";
    const char MORSE_9[] = "----.";
    const char MORSE_0[] = "-----";

    const char str[] = "050123456";

    int strSize = strlen(str); 
    char morseStr[strSize * 6];

    for (int i = 0; i < strSize; i++)
    {
        int startChar = i * 6;
        char *currSign = &morseStr[startChar];

        if (i > 0)
        {
            morseStr[startChar - 1] = ' ';
        }

        switch (str[i])
        {
            case '1':
            {
                strncpy(currSign, MORSE_1, 5);
                break;
            }
            case '2':
            {
                strncpy(currSign, MORSE_2, 5);
                break;
            }
            case '3':
            {
                strncpy(currSign, MORSE_3, 5);
                break;
            }
            case '4':
            {
                strncpy(currSign, MORSE_4, 5);
                break;
            }
            case '5':
            {
                strncpy(currSign, MORSE_5, 5);
                break;
            }
            case '6':
            {
                strncpy(currSign, MORSE_6, 5);
                break;
            }
            case '7':
            {
                strncpy(currSign, MORSE_7, 5);
                break;
            }
            case '8':
            {
                strncpy(currSign, MORSE_8, 5);
                break;
            }
            case '9':
            {
                strncpy(currSign, MORSE_9, 5);
                break;
            }
            case '0':
            {
                strncpy(currSign, MORSE_0, 5);
                break;
            }
        }
    }
    morseStr[strSize * 6 - 1] = '\0';

    cout << morseStr << endl;

    return 0;
}

// End of file