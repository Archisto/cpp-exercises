// EXERCISE 13.1
//
// File name: 131-struct-person.cpp
//
// Description:
// Define a struct "Person" which contains person's first and last
// name. Assign data ("John", "Doe") to struct's member variables.
// Display the contents of the struct.        
//
// Code template:
//   // Define
//   struct Person ...
//
//   // Fill in struct
//   // Display content of struct

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

struct Person
{
    char firstName[100];
    char lastName[100];
};

int main()
{
    struct Person person;
    strcpy(person.firstName, "John");
    strcpy(person.lastName, "Doe");

    cout << person.firstName << " " << person.lastName << endl;

    return 0;
}

// End of file