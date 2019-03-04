// EXERCISE 21.1
//
// File name: 211-coordinate2.cpp
//
// Description:
// Make another version of Coordinate.cpp by adding
// the following constructors:
//   Coordinate();        // 0, 0, 0
//   Coordinate(1);       // 1, 0, 0
//   Coordinate(1, 1);    // 1, 1, 0
//   Coordinate(1, 1, 1); // 1, 1, 1

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

class Coordinate
{
public:
    Coordinate();
    Coordinate(int x);
    Coordinate(int x, int y);
    Coordinate(int x, int y, int z);
    int getX();
    int getY();
    int getZ();
    void setX(int x);
    void setY(int y);
    void setZ(int z);
    void set(int x, int y, int z);
private:
    int x;
    int y;
    int z;
};

Coordinate::Coordinate()
{
    set(0, 0, 0);
}

Coordinate::Coordinate(int x)
{
    set(x, 0, 0);
}

Coordinate::Coordinate(int x, int y)
{
    set(x, y, 0);
}

Coordinate::Coordinate(int x, int y, int z)
{
    set(x, y, z);
}

int Coordinate::getX()
{
    return x;
}

int Coordinate::getY()
{
    return y;
}

int Coordinate::getZ()
{
    return z;
}

void Coordinate::setX(int x)
{
    this->x = x;
}

void Coordinate::setY(int y)
{
    this->y = y;
}

void Coordinate::setZ(int z)
{
    this->z = z;
}

void Coordinate::set(int x, int y, int z)
{
    setX(x);
    setY(y);
    setZ(z);
}

int main()
{
    Coordinate coordinate0;
    Coordinate coordinate1(1);
    Coordinate coordinate2(1, 1);
    Coordinate coordinate3(1, 1, 1);

    cout << '('
         << coordinate0.getX() << ","
         << coordinate0.getY() << ","
         << coordinate0.getZ() << ')' << endl;

    cout << '('
         << coordinate1.getX() << ","
         << coordinate1.getY() << ","
         << coordinate1.getZ() << ')' << endl;

    cout << '('
         << coordinate2.getX() << ","
         << coordinate2.getY() << ","
         << coordinate2.getZ() << ')' << endl;

    cout << '('
         << coordinate3.getX() << ","
         << coordinate3.getY() << ","
         << coordinate3.getZ() << ')' << endl;

    return 0;
}

// End of file