// Author: Khumbulani Ndlovu
// Assignment: Lab 4
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: Feb 12, 2017
// Description: A program that calculates the area of a rectangle


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


//Class for a rectangle
class Rectangle
{
    private:
    
    //Variables for the rectangle
    int width;
    int height;
    
    public:
// Purpose: Constructor to initialize variables
// Parameters: int, int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    Rectangle(int , int );
    
// Purpose: Gets the height of the rectangle
// Parameters: void
// Returns: height
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    int getHeight();
    
// Purpose: Gets the width of the rectangle
// Parameters: void
// Returns: width
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
     int getWidth();
     
// Purpose: Calculates the area of rectangle using widht * height
// Parameters: widht and height
// Returns: area
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    int getArea();
    
};