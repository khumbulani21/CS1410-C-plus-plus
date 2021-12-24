// Author: Khumbulani Ndlovu
// Assignment: lab 8
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: March 13 , 2017
// Description: A program that calculates and prints out payroll information

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

class DynArray
{
    private:
        int* nums;
        int size, capacity;
    public:
    
        // Purpose: Constructor to initialize variables
        // Parameters: int capacity
        // Returns: void
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions:Conditions that exist after function has executed
        // -----------------------------------------------------------------
        DynArray(int n);
        
        
        // Purpose: Constructor to initialize variables
        // Parameters: void
        // Returns: void
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions:Conditions that exist after function has executed
        // -----------------------------------------------------------------
        DynArray();
        
        // Purpose:Purpose: Deconstructor to initialize variables
        // Parameters: void
        // Returns: void
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions:Conditions that exist after function has executed
        // -----------------------------------------------------------------
        ~DynArray();
        
        // Purpose:Purpose: Function to get the size of the vector
        // Parameters: void
        // Returns: void int size
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions:Conditions that exist after function has executed
        // -----------------------------------------------------------------
        int size();
        
        // Purpose:Purpose: Function that gets the capacity of the vector
        // Parameters: void
        // Returns: int
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions:Conditions that exist after function has executed
        // -----------------------------------------------------------------
        int capacity();
        
        // Purpose:Purpose: Function to  delete all  elements from the vector and resets its size to zero and its capacity to two. 
        // Parameters: void
        // Returns: void
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions:Conditions that exist after function has executed
        // -----------------------------------------------------------------
        void clear();
        
        // Purpose:Purpose: Function to  add an element to the vector
        // Parameters: int
        // Returns: void
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions:Conditions that exist after function has executed
        // -----------------------------------------------------------------
        void push_back(int);
        
        // Purpose:Purpose: Function that removes the last used element in the vector. 
        // Parameters: void
        // Returns: void
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions: Conditions that exist after function has executed
        // -----------------------------------------------------------------
        void pop_back();
        
        // Purpose:Purpose: Function  that returns the value of the element at position n in the vector.
        // Parameters: int
        // Returns: int
        // Pre-conditions: Conditions that must exist for function to work
        // Post-conditions: Conditions that exist after function has executed
        // -----------------------------------------------------------------
        int at(int n);
}