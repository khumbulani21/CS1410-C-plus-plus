
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
// Class:  Employee models an employee

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdexcept>
using namespace std;

class Employee
{
    private:
        int employeeNumber;
        string name, streetAddress, phoneNumber;
    protected:    
        // Purpose:  provide a default constructor to allow child classes to have default constructors
        // Parameters: none
        // Returns: none
        // Pre-conditions: none
        // Post-conditions: none
        Employee() ;

        // Purpose: read data from a file to fill data fields common to all child objects
        // Parameters: a reference to an input file stream
        // Returns: none
        // Pre-conditions: a valid text file created, valid stream created to read file
        // Post-conditions: child object will contain the information read from the file, will throw exception if there is an file error
        virtual void readData(ifstream&) = 0;

        // Purpose:  calculates net pay from gross pay calculated by child classes
        // Parameters: gross pay calculated by a child class
        // Returns:  net pay after taxes
        // Pre-conditions:  gross pay correctly calculated by child class
        // Post-conditions: calculates net pay
        double calcNetPay(double) const;
        
    public:
        static const double FEDERAL_TAX = .20;
        static const double STATE_TAX = .075;
        // Purpose:  parameterized constructor
        // Parameters: employee number, name, address, phone number, hourly wage and hours worked
        // Returns: none
        // Pre-conditions: valid values provided
        // Post-conditions: sets values in child object to be created
        Employee(int, string, string, string);

        // Purpose: access employee number
        // Parameters: none
        // Returns: employee number
        // Pre-conditions: valid Employee object created
        // Post-conditions: none
        int getEmployeeNumber() const;

        // Purpose: access employee name
        // Parameters: none
        // Returns: employee name
        // Pre-conditions: valid Employee object created
        // Post-conditions: none
        string getName() const;
        
        // Purpose: access employee address
        // Parameters: none
        // Returns: employee address
        // Pre-conditions: valid Employee object created
        // Post-conditions: none
        string getStreetAddress() const;

        // Purpose: access employee phone number
        // Parameters: none
        // Returns: employee phone number
        // Pre-conditions: valid Employee object created
        // Post-conditions: none
        string getPhoneNumber() const;

        // Purpose:  provide an interface for calculating net pay in derived classes
        // Parameters: none
        // Returns: none
        // Pre-conditions: none
        // Post-conditions: none
        virtual double calcPay() const = 0;
        
        // Purpose: write employee information to a text file
        // Parameters: a reference to an output file stream
        // Returns: none
        // Pre-conditions: a valid stream created to write a text file
        // Post-conditions: text file will contain the information from the object, will throw exception if there is an file error
        virtual void write(ofstream&) const = 0;
        
        // Purpose: print beginning of payroll check, same for all employees
        // Parameters: none
        // Returns: none
        // Pre-conditions: iostream library included, valid employee data set in child class
        // Post-conditions: none
        virtual void printCheck() const = 0;
        
        // Purpose: virtual destructor in base class, to allow child class objects to be destroyed
        // Parameters: none
        // Returns: none
        // Pre-conditions: none
        // Post-conditions: none
        //virtual ~Employee() = default;
};
#endif