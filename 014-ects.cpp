// EXERCISE 01.4
//
// File name: 014-ects.cpp
//
// A course consists of 3 separate parts which each has a
// different ECTS points (= FI: "opintopiste"). Calculate final
// grade based on weighted average mean[1]. Use many different
// kinds of variables in the program. The Final grade can have
// any number of decimals in the output.
//
// [1] https://en.wikipedia.org/wiki/Weighted_arithmetic_mean
//
// Print result:
//                   ECTS   Grade
//   -----------------------------
//   Exam            2      2
//   Design          1      4
//   Implementation  3      4
//   -----------------------------
//   Totals          6      N.NNN (Final Grade)

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

float weightedMean(vector<int> numbers, vector<int> weights, int total);
int calculateTotal(vector<int> numbers);

int main()
{
    int examEcts = 2;
    int designEcts = 1;
    int implEcts = 3;
    int examGrade = 2;
    int designGrade = 4;
    int implGrade = 4;
    int totalEcts = examEcts + designEcts + implEcts;

    vector<int> numbers = { examEcts, designEcts, implEcts };
    vector<int> grades = { examGrade, designGrade, implGrade };
    float finalGrade = weightedMean(numbers, grades, calculateTotal(numbers));

    cout << "                ECTS   Grade" << endl;
    cout << "-----------------------------" << endl;
    cout << "Exam            " << examEcts << "      " << examGrade << endl
         << "Design          " << designEcts << "      " << designGrade << endl
         << "Implementation  " << implEcts << "      " << implGrade << endl;
    cout << "-----------------------------" << endl;
    cout << "Totals          " << totalEcts << "      " << finalGrade
         << " (Final Grade)" << endl;

    return 0;
}

float weightedMean(vector<int> numbers, vector<int> weights, int total)
{
    if (numbers.size() > 0 && numbers.size() == weights.size())
    {
        int numbersMultWithWeights = 0;
        for (int i = 0; i < numbers.size(); i++)
        {
            numbersMultWithWeights += numbers[i] * weights[i];
        }
        return (float) numbersMultWithWeights / total;
    }
    // Invalid arguments; returns -100
    else
    {
        return -100;
    }
}

int calculateTotal(vector<int> numbers)
{
    int result = 0;
    if (numbers.size() > 0)
    {
        for (int i = 0; i < numbers.size(); i++)
        {
            result += numbers[i];
        }
    }
    return result;
}

// End of file