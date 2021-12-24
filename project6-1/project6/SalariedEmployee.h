
// Author: Khumbulani Ndlovu
// Assignment: Project 6
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: April 3, 2017
// Description: A payroll program


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Employee.h"
// Class:  SalariedEmployee represents a class for a salaried employee
//

class SalariedEmployee : public Employee
{
    private:
        double weeklySalary;
        // Purpose: read data from a file to fill payroll data fields for SalariedEmployee objects
        // Parameters: a reference to an input file stream
        // Returns: none
        // Pre-conditions: a valid text file created, valid stream created to read file
        // Post-conditions: object will contain the information read from the file, will throw exception if there is an file error       
        
        static const double BENEFITS=0.0524;
        
        protected:
         // Purpose: default constructor, to allow creation of empty objects
        // Parameters: none
        // Returns: none
        // Pre-conditions: none
        // Post-conditions:  creates an empty SalariedEmployee object
        SalariedEmployee();
        void readData(ifstream&) ;
    public:
        // Purpose:  parameterized constructor
        // Parameters: employee number, name, address, phone number, weekly salary
        // Returns: none
        // Pre-conditions: valid values provided
        // Post-conditions: an SalariedEmployee object will be created
        SalariedEmployee(int, string, string, string, double);

       
        
        // Purpose: access weekly salary
        // Parameters: none
        // Returns: employee weekly salary
        // Pre-conditions: valid SalariedEmployee object created
        // Post-conditions: none
        double getWeeklySalary() const;

        // Purpose: calculate net pay for paycheck
        // Parameters: none
        // Returns: employee's net pay
        // Pre-conditions: valid SalariedEmployee object created, including weekly salary
        // Post-conditions: none
        double calcPay()const ;

        // Purpose: print information to paycheck specific to salaried employees
        // Parameters: none
        // Returns: none
        // Pre-conditions: valid SalariedEmployee object created, including payroll information
        // Post-conditions: none
        void printCheck() const ;
        
        // Purpose: read employee information from a text file
        // Parameters: a reference to an input file stream
        // Returns: pointer to a SalariedEmployee object
        // Pre-conditions: a valid text file created, valid stream created to read file
        // Post-conditions: object will contain the information read from the file, will throw exception if there is an file error
        SalariedEmployee* read(ifstream&);

        // Purpose: write salaried employee information to a text file
        // Parameters: a reference to an output file stream
        // Returns: none
        // Pre-conditions: a valid stream created to write a text file
        // Post-conditions: text file will contain the information from the object, will throw exception if there is an file error
        void write(ofstream&) const ;
};