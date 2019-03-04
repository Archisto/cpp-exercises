// EXERCISE 15.7
//
// File name: 157-library-fstream-write.cpp
//
// Description:
// Write a program to use a library[1] to write an integer array into a
// text file "library-fstream-write.txt". Write each integer to a
// separate line.
//
// Code template:
//   #include <fstream>
//   ...
//   const int length = 3;
//   int array[length] = {1, 2, 3};
//   // Write ARRAY into a file  
//
// [1] http://www.cplusplus.com/reference/fstream/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
	const int length = 3;
	int array[length] = { 1, 2, 3 };

	ofstream textFile;
	textFile.open("library-fstream-write.txt");
	for (int i = 0; i < length; i++)
	{
		textFile << array[i] << endl;
	}
	textFile.close();

	return 0;
}

// End of file