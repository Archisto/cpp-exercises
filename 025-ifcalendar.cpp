// EXERCISE 02.5
//
// File name: 025-ifcalendar.cpp
//
// Description:
// Write a program which would display events based on date and time.
// In the beginning of program, define three variables:
// - weekday (signifying values from Mon...Fri)
// - hour
// - minute
//
// Write event notification to the screen if the values match any of:
// * Mon 19:00-20:30 volleyball
// * Wed 20:30-21:30 badminton
// * Sat 10:00-11:00 gym
//
// In case no date and time match, display:
//   No events for WEEKDAY HH:MM

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

    // These values can be changed
    int weekday = WEDNESDAY;
    int hour = 21;
    int minute = 10;

    char dayStr[20];
    if (weekday == MONDAY)
    {
        strcpy(dayStr, "Monday");
    }
    else if (weekday == TUESDAY)
    {
        strcpy(dayStr, "Tuesday");
    }
    else if (weekday == WEDNESDAY)
    {
        strcpy(dayStr, "Wednesday");
    }
    else if (weekday == THURSDAY)
    {
        strcpy(dayStr, "Thursday");
    }
    else if (weekday == FRIDAY)
    {
        strcpy(dayStr, "Friday");
    }
    else if (weekday == SATURDAY)
    {
        strcpy(dayStr, "Saturday");
    }
    else if (weekday == SUNDAY)
    {
        strcpy(dayStr, "Sunday");
    }
    else
    {
        strcpy(dayStr, "WEEKDAY-ERROR");
    }

    if (weekday == MONDAY
        && (hour == 19 || (hour == 20 && minute < 30)))
    {
        cout << "Mon 19:00-20:30 volleyball" << endl;
    }
    else if (weekday == WEDNESDAY
             && ((hour == 20 && minute >= 30) || (hour == 21 && minute < 30)))
    {
        cout << "Wed 20:30-21:30 badminton" << endl;
    }
    else if (weekday == SATURDAY && hour == 10)
    {
        cout << "Sat 10:00-11:00 gym" << endl;
    }
    else
    {
        cout << "No events for " << dayStr << " ";
        if (minute < 10)
        {
            cout << hour << ":0" << minute << endl;
        }
        else
        {
            cout << hour << ":" << minute << endl;
        }
    }

    return 0;
}

// End of file