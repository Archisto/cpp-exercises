// EXERCISE 15.4
//
// File name: 154-library-ctime.cpp
//
// Description:
// Write a program to use a library[1] and display
// the current time in ISO 8601 format:
//   YYYY-MM-DD HH:MM:SS
//
// [1] http://www.cplusplus.com/reference/ctime

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <time.h>

#define BASEYEAR (1900)
#define GMT2 (+2)

using namespace std;

int main()
{
    time_t timer;
    struct tm *now;
    time(&timer);
    now = gmtime(&timer);

    printf("%d-%02d-%02d %02d:%02d:%02d\n",
        now->tm_year  +BASEYEAR,
        now->tm_mon   +1,
        now->tm_mday,
        now->tm_hour  +GMT2,
        now->tm_min,
        now->tm_sec);

    delete now;

    return 0;
}

// End of file