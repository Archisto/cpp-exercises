// EXERCISE 24.1
//
// File name: 241-coordinate3.cpp
//
// Description:
// Make another version of "Coordinate" class by adding an overloaded
// operator "<<"[1]. This will allow writing the class in standard streams
// by using only the class variable.
//
// Code template:
//   Coordinate pixel(1, 2, 3);
//   cout << "Coordinate now: " << pixel << endl;
//                                 |
//                                 class variable
//
// Example output:
//   "Coordinate now: (1,2,3)"
//
// [1] This is similar to Java's *.toString() method.


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
    friend ostream& operator<<(ostream&, Coordinate);
    friend Coordinate operator+(Coordinate, Coordinate);
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

ostream& operator<<(ostream& os, Coordinate coord)
{
    os << '('
       << coord.getX() << ','
       << coord.getY() << ','
       << coord.getZ() << ')';
    return os;
}

Coordinate operator+(Coordinate coord1, Coordinate coord2)
{
    return Coordinate(coord1.getX() + coord2.getX(),
                      coord1.getY() + coord2.getY(),
                      coord1.getZ() + coord2.getZ());
}

int main()
{
    Coordinate pixel(1, 2, 3);
    cout << "Coordinate now: " << pixel << endl;

    return 0;
}

// End of file