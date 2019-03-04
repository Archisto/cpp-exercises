// EXERCISE 01.5
//
// File name: 015-printf.cpp
//
// Description:
// Write a program that uses printf() function to format the items
// in columns. Use multiple variables in the program.
//
// Example output:
//   Conference participant listing
//
//   Seat        Name            Title   Registration Code
//   -------     ----------      -----   -----------------
//   B12         Ben Fowlds      Ph.D    123-46-1122
//   B15         Matthew Byrd    M.D     123-46-1123
//   A22         Cathy Donalds   PsyD    293-50-2344
//   C01         Teri Karan      D.Ed    293-50-2345

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void setRepeatChars(char*, char, int);

int main()
{
    // Headers
    char header1[] = "Seat";
    char header2[] = "Name";
    char header3[] = "Title";
    char header4[] = "Registration Code";
    // Seats
    char seat1[] = "B12";
    char seat2[] = "B15";
    char seat3[] = "A22";
    char seat4[] = "C01";
    // Names
    char name1[] = "Ben Fowlds";
    char name2[] = "Matthew Byrd";
    char name3[] = "Cathy Donalds";
    char name4[] = "Teri Karan";
    // Titles
    char title1[] = "Ph.D";
    char title2[] = "M.D";
    char title3[] = "PsyD";
    char title4[] = "D.Ed";
    // Registration Codes
    char regCode1[] = "123-46-1122";
    char regCode2[] = "123-46-1123";
    char regCode3[] = "293-50-2344";
    char regCode4[] = "293-50-2345";

    printf("Conference participant listing\n\n");
    printf("%-12s%-16s%-8s%s\n", header1, header2, header3, header4);
    char lines[25];
    setRepeatChars(lines, '-', 7);
    printf("%-12s", lines);
    setRepeatChars(lines, '-', 10);
    printf("%-16s", lines);
    setRepeatChars(lines, '-', 5);
    printf("%-8s", lines);
    setRepeatChars(lines, '-', 17);
    printf("%s\n", lines);
    printf("%-12s%-16s%-8s%s\n", seat1, name1, title1, regCode1);
    printf("%-12s%-16s%-8s%s\n", seat2, name2, title2, regCode2);
    printf("%-12s%-16s%-8s%s\n", seat3, name3, title3, regCode3);
    printf("%-12s%-16s%-8s%s\n", seat4, name4, title4, regCode4);

    return 0;
}

void setRepeatChars(char *str, char ch, int repeats)
{
    // Clears the string
    memset(str, 0, sizeof(str));

    // Adds the repeated chars to the string
    for (int i = 0; i < repeats; i++)
    {
        str[i] = ch;

        // Adds a null terminator to the string
        // as the last thing after the chars
        if (i == repeats - 1)
        {
            str[i + 1] = '\0';
        }
    }
}

// End of file