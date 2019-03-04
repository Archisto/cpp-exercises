// EXERCISE 10.2
//
// File name: 102-memory-strings-cpp.cpp
//
// Description:
// Copy[1] a C++-style string A to a new string B and display the
// length of the new string. Try to find a way to close the equivalent
// to "release memory" of allocated C++ strings at exit.
//
// Code template:
//   string a = "value";
//   <rest of the code>
//
// [1] Study library <string>
// http://www.cplusplus.com
// http://en.cppreference.com

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    string a = "value";
    string b = a;

    cout << "String length: " << b.length() << endl;

    b.clear();

    return 0;
}

// End of file