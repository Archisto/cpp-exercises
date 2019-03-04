// EXERCISE 04.3
//
// File name: 043-tax.cpp
//
// Description:
// Write a function to calculate taxes.
//
// Code template:
//   // float yearlyTaxes(float, float)
//   float taxes = yearlyTaxes(yearlySalary, percentage);

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

float yearlyTaxes(float, float);

int main()
{
    float yearlySalary = 58208.60;
    float percentage = 12.4;
    float taxes = yearlyTaxes(yearlySalary, percentage);

    cout << "Yearly salary:  " << yearlySalary << endl
         << "Tax percentage: " << percentage << endl
         << "Taxes:          " << taxes << endl;

    return 0;
}

float yearlyTaxes(float yearlySalary, float percentage)
{
    float result = 0;
    if (percentage > 0)
    {
        result = yearlySalary * (percentage / 100);
    }

    return result;
}

// End of file