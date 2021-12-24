
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

template <class X>
class Pair
{
  private:
  //data members 
  X first;
  X second;
  
  public:
  // Purpose:   A parameterized constructor receiving an integer, n, that creates a vector of capacity n.
  // Parameters: x, x
  // Returns: void
  // Pre-conditions: none
  // Post-conditions: none
  Pair( X a,  X b)
  {
    //initialize variables
    first=a;  
    second=b;
    
  }
  
    // Purpose:   A function that gets the value of the variable first
    // Parameters: void
    // Returns: X data type
    // Pre-conditions: none
    // Post-conditions: none
    X getFirst();
    
    // Purpose:   A function that gets the value of the variable second
    // Parameters: void
    // Returns: X data type
    // Pre-conditions: none
    // Post-conditions: none
    X getSecond();
  
};



template<class X>
X Pair<X>::getFirst()
{
    return first;
}

template<class X>
X Pair<X>::getSecond()
{
    return second;
}