// Author: Khumbulani Ndlovu
// Assignment: Project 9
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: May 1, 2017
// Description: A program that models vector class for integers


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include <iostream>
#include "DynArray.h"
using namespace std;

int main( )
{
	const char START = 'A';
	const int MAX = 12;

	// create a vector of doubles
	DynArray<char> vectD;

	// push some values into the vector
	for (int i = 0; i < MAX; i++)
	{
		vectD.push_back(START + i);
	}

	// remove the last element
	vectD.pop_back();

	// add another value
	vectD.push_back('Z');

	// test memory management
	DynArray<char> vectD2 = vectD;
	// display the contents
	cout << "\n[";
	for (int i = 0; i < vectD2.size() - 1; i++)
	{
		cout << vectD2[i] << ", ";
	}

	cout << "..., " << vectD2.back() << "]\n";
	cin.get();	
}

