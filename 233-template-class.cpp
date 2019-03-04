// EXERCISE 23.3
//
// File name: 233-template-class.cpp
//
// Description:
// Use C++ template notation <> to define a generic Math class
// which includes the previous minimum() and sum() functions from
// 23.1 and 23.2. The class, say "Math", is instantiated in main() using
// the angle bracket <> notation:
//
// Code template:
//   // Define template class "Math"
//   template ...
//
//   // In main()
//   Math<int> iMath;                // instantiate for "int" class
//   int min = iMath.minimum(1, 2);
//   cout << min << endl;

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

template <class T>
class Math
{
public:
    T minimum(T value1, T value2);
    T sum(T array[], size_t size);
};

template <class T>
T Math<T>::minimum(T value1, T value2)
{
    if (value2 < value1)
    {
        return value2;
    }
    else
    {
        return value1;
    }
}

template <class T>
T Math<T>::sum(T array[], size_t size)
{
    T result = 0;

    for (int i = 0; i < size; i++)
    {
        result += array[i];
    }

    return result;
}

int main()
{
    Math<int> iMath;
    int min = iMath.minimum(1, 2);
    cout << min << endl;

    return 0;
}

// End of file