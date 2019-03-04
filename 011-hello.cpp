// EXERCISE 01.1
//
// File name: 011-hello.cpp
//
// Description:
// Write a program to display: date, your first name, last name,
// and height (in cm) to the screen. Store each information
// to separate variable before displaying.
//
// Print result:
//   The date is YYYY-MM-DD
//   Hello, I'm John Doe
//   I'm 185 cm tall

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    char date[] = "2019-01-18";
    string firstName = "Lauri";
    string lastName = "Kosonen";
    int height = 173;

    cout << "The date is " << date << endl
         << "Hello, I'm " << firstName << " " << lastName << endl
         << "I'm " << height << " cm tall" << endl;

    return 0;
}

// End of file