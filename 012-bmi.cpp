// EXERCISE 01.2
//
// File name: 012-bmi.cpp
//
// Calculate body mass index[1] from WEIGHT and HEIGHT.
//
// [1] https://en.wikipedia.org/wiki/Body_mass_index
//
// Print result:
//   Weight (kg): NN
//   height (m) : N.N
//   BMI        : N.N

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

float calculateBmi(const int weight, const float height);

int main()
{
    int weight = 82;
    float height = 1.85;
    float bmi = calculateBmi(weight, height);

    cout << "Weight (kg): " << weight << endl
         << "height (m) : " << height << endl
         << "BMI        : " << bmi << endl;

    return 0;
}

float calculateBmi(const int weight, const float height)
{
    return weight / (height * height);
}

// End of file