// lab1.cpp : Defines the entry point for the console application.
//


// Lab One Programming Exercise
// CS 1410
// Khumbulani Ndlovu
// CS 1410 -- X01
// --------------------------

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// declarations
	int age;
	float value;
	string name;

	// Here you must supply code that does the following:
	// Your program must work in the order described
	// (you can use the following as pseudo-code):
	
	// Prompt the user for their age
	cout << "Enter your age "<<endl;

	// Get their age and store it in the variable age
	cin >> age;

	// Prompt the user for how much money they have
	cout << "Enter the amount of money you have "<<endl;

	// Get the amount of money and store it in the variable value
	cin >> value;

	// Prompt the user to enter their full name.
	cout << "Enter your full name "<<endl;

	// Get their name and store it in the string variable name
	cin.clear();
	cin.ignore();
	getline(cin, name);
	cout << endl;

	// Now display the following:
	//    The person's name. You must display the full name
	cout << "Thank you "<<name<<endl;

	//    The person's age
	cout <<"You are: "<< age<<" years old."<<endl;

	//    The money the person has. Display a dollar sign and two digits
	//    after the decimal point.

	cout.setf(ios::fixed);
	cout.precision(2);

	cout<<"and you have $"<<value<<endl;

	cout << "Press any key to continue...\n";
	
	cin.get();
	
}