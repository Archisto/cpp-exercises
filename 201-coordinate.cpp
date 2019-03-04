// EXERCISE 20.1
//
// File name: 201-coordinate.cpp
//
// Description:
// Write a "Coordinate" class which holds X, Y and Z axes. Write
// public setter and getter functions for the member variables.
//
// Code template:
//   setX, setY, setZ
//   set(x, y, z)           // Set all three
//   getX, getY, getZ

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
    Coordinate coordinate(10, 20, 30);

    cout << '('
         << coordinate.getX() << ","
         << coordinate.getY() << ","
         << coordinate.getZ() << ')' << endl;

    return 0;
}

// End of file