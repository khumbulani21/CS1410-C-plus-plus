// Author: Khumbulani Ndlovu
// Assignment: Project 7
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: April 10, 2017
// Description: A program that models a Fraction class


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include <iostream>
using namespace std;
class Fraction
{
     private:
     int numerator, denominator;
     
     void  normalForm();
     
     public:
// Purpose: Constructor for initializing variables 
// Parameters: int, int
// Returns: 
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
     //Fraction();
     
// Purpose: Constructor for initializing variables 
// Parameters: int, int
// Returns: 
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
     Fraction(int numerator, int denominator);
    
      
// Purpose: Function to set the value  of the numerator
// Parameters: int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
      void setNumerator(int numerator);
// Purpose: Function to set the value  of the denominator
// Parameters: int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
      void setDenominator(int denominator);
      
// Purpose: Function to get the value  of the denominator
// Parameters: int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
      int getDenominator() const;
      
// Purpose: Function to get the value  of the numerator
// Parameters: int
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
      int getNumerator() const;
      
// Purpose: Function to overload  the + operator to allow the addition of two fractions
// Parameters: Fraction, Fraction
// Returns: Fraction
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
      friend Fraction operator+(Fraction lho, Fraction rho);
      
// Purpose: Function to overload  the - operator to allow the subrtraction of two fractions
// Parameters: Fraction, Fraction
// Returns: Fraction
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
        friend Fraction operator-(Fraction lho, Fraction rho);
        
// Purpose: Function to overload  the - operator to allow the multiplicatin of two fractions
// Parameters: Fraction, Fraction
// Returns: Fraction
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
        friend Fraction operator*(Fraction lho, Fraction rho);
        
        
// Purpose: Function to overload  the / operator to allow the division of two fractions
// Parameters: Fraction, Fraction
// Returns: Fraction
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
        friend Fraction operator/(Fraction lho, Fraction rho);
        
// Purpose: Function to overload  the == operator to allow the comparison of two fractions for equality
// Parameters: Fraction, Fraction
// Returns: bool
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
        friend bool operator==(Fraction lho, Fraction rho);
};
// Purpose: Function to overload  the << operator to allow  a fraction to be printed
// Parameters: ostream, Fraction
// Returns: ostream
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
ostream& operator<<(ostream& output, Fraction myFraction);