// EXERCISE 01.3
//
// File name: 013-tax.cpp
//
// Write a program to calculate annual taxes from following initial values:
//   - Total earnings in year: 134 000
// of which the stock exchange earnings are 23 000.
//   - The nominal tax rate for person is 27.3%.
//   - The government tax rate for extra income, like stocks, is 21 %.
//
// The program should calculate taxes and display the result.
// The results NNNNN may contain any number of decimals.
//
// Print result:
//   All income    : 134000
//   Work earnings : 111000
//   Stock earnings: 23000
//
//   Taxes total   : NNNNN.NN
//   Net income    : NNNNN.NN (after taxes reduced)

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

float calculateTaxes(const float workEarnings, const float extraEarnings, 
                     const float taxRatePerson, const float taxRateExtra);

int main()
{
    float workEarnings = 111000;
    float stockEarnings = 23000;
    float allIncome = workEarnings + stockEarnings;

    float taxRatePerson = 0.273f;
    float taxRateExtra = 0.21f;
    float taxes = calculateTaxes(workEarnings, stockEarnings,
                                 taxRatePerson, taxRateExtra);
    float netIncome = allIncome - taxes;

    cout << "All income    : " << allIncome << endl
         << "Work earnings : " << workEarnings << endl
         << "Stock earnings: " << stockEarnings << endl;
    cout << fixed << setprecision(2) << endl;
    cout << "Taxes total   : " << taxes << endl
         << "Net income    : " << netIncome << endl;

    return 0;
}

float calculateTaxes(const float workEarnings, const float extraEarnings, 
                     const float taxRatePerson, const float taxRateExtra)
{
    return workEarnings * taxRatePerson + extraEarnings * taxRateExtra;
}

// End of file