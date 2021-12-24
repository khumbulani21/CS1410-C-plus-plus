// Author: Khumbulani Ndlovu
// Assignment: Lab #2
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: Jan 22, 2017
// Description: A program that calculates the sum of values in an array


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include<iostream>
#include<vector>
#include <iomanip>

using namespace std;

// Purpose: Calculate the sum of elements stored in an array
// Parameters: double array[], int size
// Returns: sum
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------

double arraySum(double array[] , int size)
{

 //variable for the sum 
 double sum = 0.0;

//for loop for adding the elements in the array
 for(int i = 0 ; i < size ; i++)
 {
 
  sum += array[i];
 
 }//end for loop

return sum;

}//end arraySum


int main()
{
 //Size of the array
 const int SIZE=5;
 const int INPUT_TO_IGNORE=80;
  //Vector declaration
  vector <double> doubleVector;

  //Array declaration
  double  array[SIZE];

  //Variable for input from user
  double value;
  
  //variable to store the result of testing if input has failed
  bool test;
  
//get 5 double values from the user
for(int i = 0 ; i < SIZE;i++)
{
 
  do
  {
  
  cout << "Enter a number to add to vector "<<endl;
  cin>>value;
  
  //test if input has failed
	 test=cin.fail();
	
		if(test == true)
		{
		 
		 //clear input buffer
			cin.clear();
			cin.ignore(INPUT_TO_IGNORE, '\n');
			cout << "\nPlease enter a valid number: "<<endl;
			
		}//end if
		
			
		}while(test == true);//end do while
 
 	
 //Add an element to vector
 doubleVector.push_back(value);

}//End for loop

 //copy elements in the vector to the array
 for(int i = 0 ; i < SIZE ; i++)
 {
  array[i] = doubleVector[i];
 }//end for loop
 
 //Calculate and output the sum
 
 
 cout << "\nThe sum is " << fixed << setprecision(2) << arraySum(array , SIZE) << endl;

 cin.get();
 return 0;
}