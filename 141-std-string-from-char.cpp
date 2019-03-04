// EXERCISE 14.1
//
// File name: 141-std-string-from-char.cpp
//
// Description:
// Write a program to convert a C-style string into a C++ style std::string.
//
// Code template:
//   const char cstr[] = "abc";
//   string str = ...
//
//   // Display STR

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    const char cstr[] = "abc";
    string str = cstr;

    cout << str << endl;

    return 0;
}

// End of file