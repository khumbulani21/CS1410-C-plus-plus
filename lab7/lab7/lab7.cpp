// Author: Khumbulani Ndlovu
// Assignment: Lab 7 
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: March 6 2017
// Description: A program that uses pointers to swap characters in a string


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#include<iostream>
using namespace std;


// Purpose: Function to reverse characters in a string
// Parameters: string 
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
void reverser(char* myString)
{

//pointer that points to the beginning character of the string. 
char * first=myString;

//pointer that points to the last character of the string. 
char * last = myString;

//temp character to hold value that is being swapped
char temp;

//count the number of elements in string
  while(*last != '\0')
  {
      
     ++last; 
  }
  last--;
  //swap characters in the string
   while(first < last)
    {
        temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
  
  
}

int main()
{
  
// declare a c-string to reverse
   char myString[ ] = "Hello world!";
 
   // call the reverser function
   reverser(myString);
 
   // output the result
   cout << myString << endl;
 
 //keep console window open
   cin.get();
    
}