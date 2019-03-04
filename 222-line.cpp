// EXERCISE 22.2
//
// File name: 222-line.cpp
//
// Description:
// Make a "Line" class that is a composition of two
// "Coordinate" classes. The Line's point BEGIN and END are
// defined using Coordinate classes.
//
//   Line class
//   +----------------------+
//   | <member variables>   |
//   | begin                *----- Coordinate class
//   | end                  *----- Coordinate class
//   +----------------------+
//   | <methods>            |
//   | ...                  |
//   +----------------------+ 

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

class Line
{
public:
    Line();
    Line(Coordinate, Coordinate);
    void setPoints(Coordinate, Coordinate);
    float getLength();
    Coordinate begin;
    Coordinate end;
};

Line::Line()
{
    Coordinate p1;
    Coordinate p2;
    setPoints(p1, p2);
}

Line::Line(Coordinate begin, Coordinate end)
{
    setPoints(begin, end);
}

void Line::setPoints(Coordinate begin, Coordinate end)
{
    this->begin = begin;
    this->end = end;
}

float Line::getLength()
{
    float length = sqrt(
        pow(end.getX() - begin.getX(), 2) +
        pow(end.getY() - begin.getY(), 2) +
        pow(end.getZ() - begin.getZ(), 2));
    return length;
}

int main()
{
    Line line;
    line.begin.set(5, 6, 4);
    line.end.set(1, 3, 1);
    cout << line.getLength() << endl;

    return 0;
}

// End of file