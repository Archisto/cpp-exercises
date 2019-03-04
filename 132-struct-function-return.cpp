// EXERCISE 13.2
//
// File name: 132-struct-function-return.cpp
//
// Description:
// Write a function to return a "Person" struct which is
// constructed from the input parameters. Allocate memory for the
// struct in the function.
//
// Code template:
//   // Function definition:
//   struct Person *makePerson(const char firstName[], const char lastName[])
//
//   // Global, outside of functions. Define struct.
//   struct Person ...

//   // In main():
//   struct Person *guest = makePerson("John", "Doe");
//   // Display struct
//   // Release memory allocated for struct and set pointer to NULL

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

struct Person *makePerson(const char firstName[], const char lastName[]);

int main()
{
    struct Person *guest = makePerson("John", "Doe");
    cout << guest->firstName << " " << guest->lastName << endl;

    delete guest;
    guest = NULL;

    return 0;
}

struct Person *makePerson(const char firstName[], const char lastName[])
{
    struct Person *person = new Person;
    strcpy(person->firstName, firstName);
    strcpy(person->lastName, lastName);
    return person;
}

// End of file