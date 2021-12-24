// Author: Khumbulani Ndlovu
// Assignment: Lab 13
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: April 22, 2017
// Description: A program that models a template class for a pair of data items


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include <iostream>
#include "pair.h"
using namespace std;


int main( )
{
    
    
   Pair<char>letters('a', 'd');
   cout << "\nThe first letter is: " << letters.getFirst( );
   cout << "\nThe second letter is: " << letters.getSecond( );
 
   cout << endl;
   cin.get();
   
}
