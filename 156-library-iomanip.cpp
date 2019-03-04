// EXERCISE 15.6
//
// File name: 156-library-iomanip.cpp
//
// Description:
// Write a program to use a library[1] and use C++
// style "cout" formatting, instead of C-style printf() function.
// Display the values from an array right aligned. Display
// precision with one decimal only.
//
// Code template:
//   float array[] = {1.11, 10.22, 100.33, 1000.44};
//   <loop>
//       cout << ...
//   </loop>
//
// Example output:
//   Value:    1.1
//   Value:   10.2
//   Value:  100.3
//   Value: 1000.4

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    float array[] = {1.11, 10.22, 100.33, 1000.44};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "Value:"
             << setw(7) << fixed << setprecision(1)
             << array[i] << endl;
    }

    return 0;
}

// End of file