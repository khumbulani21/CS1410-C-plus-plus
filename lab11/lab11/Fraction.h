// Author: Khumbulani Ndlovu
// Assignment: Lab 11
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: April 3, 2017
// Description: A program that calculates local taxes


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

class Fraction
{
    private:
    int denominator;
    int numerator;
    
    public:
// Purpose: Default constructor for a fraction
// Parameters: void 
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  
    Fraction();
// Purpose: Default constructor for a fraction
// Parameters: int, int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    Fraction(int,  int);
// Purpose: Function to set the denominator of the fraction
// Parameters: int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    void setDenominator(int);
// Purpose: Function to set the numerator of the fraction
// Parameters: int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    void setNumerator(:int);
// Purpose: Function to get the denominator of the fraction
// Parameters: void
// Returns: int
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    int getDenominator(int);
// Purpose: Function to get the numerator of the fraction
// Parameters: void
// Returns: int
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
    int getNumerator(int);

}