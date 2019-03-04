// EXERCISE 14.2
//
// File name: 142-std-string-to-char.cpp
//
// Description:
// Write a program to convert a C++ style string into C-style string.
//
// Code template:
//   string str = "abc";
//   const char cstr = ...
//
//   // Display CSTR

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    string str = "abc";
    const char cstr = str.c_str();

    cout << cstr << endl;

    return 0;
}

// End of file