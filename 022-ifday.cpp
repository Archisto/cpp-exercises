// EXERCISE 02.2
//
// File name: 022-ifday.cpp
//
// Description:
// Based on DAY value, display its name. Suppose that the week
// starts from Monday. Utilize constant values.
// The program outputs string "Monday" based on variable "today".
// If the value is changed, the output is adjusted accordingly.
// If the value is not a known date, display "Unknown date (N)",
// where N is the value. E.g. if date is set to:
//   today = 0;
// Output is:
//   "Unknown date (0)"
//
// Code template:
//   const int MONDAY = 1;
//   ...
//   int today = MONDAY;
//   ... code ...

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const int MONDAY = 1;
    const int TUESDAY = 2;
    const int WEDNESDAY = 3;
    const int THURSDAY = 4;
    const int FRIDAY = 5;
    const int SATURDAY = 6;
    const int SUNDAY = 7;

    int today = FRIDAY;

    char dayStr[20];
    if (today == MONDAY)
    {
        strcpy(dayStr, "Monday");
    }
    else if (today == TUESDAY)
    {
        strcpy(dayStr, "Tuesday");
    }
    else if (today == WEDNESDAY)
    {
        strcpy(dayStr, "Wednesday");
    }
    else if (today == THURSDAY)
    {
        strcpy(dayStr, "Thursday");
    }
    else if (today == FRIDAY)
    {
        strcpy(dayStr, "Friday");
    }
    else if (today == SATURDAY)
    {
        strcpy(dayStr, "Saturday");
    }
    else if (today == SUNDAY)
    {
        strcpy(dayStr, "Sunday");
    }
    else
    {
        snprintf(dayStr, 20, "Unknown date (%d)", today);
    }

    cout << dayStr << endl;

    return 0;
}

// End of file