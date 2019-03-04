// EXERCISE 04.2
//
// File name: 042-play.cpp
//
// Description:
// Write a function which determines how many rounds a player can
// afford to play until he runs out of money.
//
// Code template:
//   float money = 20.55;
//   float roundPrice = 1.5;
//
//   // float play(float, float)
//   float rounds = play(money, roundPrice);

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

float play(float, float);

int main()
{
    float money = 60;
    float roundPrice = 12.4;
    float rounds = play(money, roundPrice);

    cout << "Money:       " << money << endl
         << "Round price: " << roundPrice << endl
         << "Rounds:      " << rounds << endl;

    return 0;
}

float play(float money, float roundPrice)
{
    float result = 0;
    if (money > 0 && roundPrice > 0)
    {
        while (money >= roundPrice)
        {
            money -= roundPrice;
            result++;
        }

        if (money > 0)
        {
            result += money / roundPrice;
        }
    }
    else if (roundPrice <= 0)
    {
        result = 9999;
    }

    return result;
}

// End of file