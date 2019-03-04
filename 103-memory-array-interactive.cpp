// EXERCISE 10.3
//
// File name: 103-memory-array-interactive.cpp
//
// Description:
// Write a program to ask N numbers from user to an array. The user
// defines how many numbers to input. Display sum. Release
// memory on exit. Logic:
//   Size: 3       // User input
//
//   // Allocate memory and enter into a loop for 3 numbers
//   Value: 1      // User input...
//   Value: 2
//   Value: 3
//
//   // End loop and display result
//   Sum: 6        // Program output
//
//   // Exit and release memory

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int size;
    int sum = 0;
    int num = 0;
    
    cout << "Size: ";
    cin >> size;

    int *numbers;

    if (size > 0)
    {
        numbers = new int[size];

        for (int i = 0; i < size; i++)
        {
            cout << "Value: ";
            cin >> num;
            numbers[i] = num;
            sum += numbers[i];
        }
    }

    cout << "Sum: " << sum << endl;

    if (size > 0)
    {
        delete[] numbers;
    }

    return 0;
}

// End of file