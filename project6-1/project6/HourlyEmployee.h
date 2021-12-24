
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

// Class:  HourlyEmployee


#include "Employee.h"

class HourlyEmployee : public Employee
{
    private:
        double hourlyWage;
        double hoursWorked;
        
        protected:
        // Purpose: default constructor, to allow creation of empty objects
        // Parameters: none
        // Returns: none
        // Pre-conditions: none
        // Post-conditions:  creates an empty HourlyEmployee object
        HourlyEmployee();
        // Purpose: read data from a file to fill payroll data fields for HourlyEmployee objects
        // Parameters: a reference to an input file stream
        // Returns: none
        // Pre-conditions: a valid text file created, valid stream created to read file
        // Post-conditions: object will contain the information read from the file, will throw exception if there is an file error
        void readData(ifstream&) ;
        
        public:
        // Purpose:  parameterized constructor
        // Parameters: employee number, name, address, phone number, hourly wage and hours worked
        // Returns: none
        // Pre-conditions: valid values provided
        // Post-conditions: an HourlyEmployee object will be created
        HourlyEmployee(int employeeNumber, string name, string streetAddress, string address, double hourlyWage, double hoursWorked);

        

        // Purpose: Get hourly wage
        // Parameters: void
        // Returns:  Hourly wage
        // Pre-conditions: valid HourlyEmployee object created
        // Post-conditions: none
        double getHourlyWage() const;

        // Purpose: Get hours worked
        // Parameters: void
        // Returns:Hours worked
        // Pre-conditions: valid HourlyEmployee object created
        // Post-conditions: none
        double getHoursWorked() const;
        
        // Purpose: calculate  pay for hourly employees
        // Parameters: void
        // Returns: pay
        // Pre-conditions: valid HourlyEmployee object created, including hourly wage and hours worked
        // Post-conditions: none
        double calcPay() const ;
        
        // Purpose: Pring  paychecks for  hourly employees
        // Parameters: void
        // Returns: void
        // Pre-conditions: valid HourlyEmployee object created, including payroll information
        // Post-conditions: none
        void printCheck() const ;
        
        // Purpose: Read employee data from a text file
        // Parameters:input stream
        // Returns: Hourly employee pointer
        // Pre-conditions: a valid text file created, valid stream created to read file
        // Post-conditions: object will contain the information read from the file, will throw exception if there is an file error
        static HourlyEmployee* read(ifstream& inputStream);

        // Purpose: write hourly employee data to a text file
        // Parameters: output stream
        // Returns: void
        // Pre-conditions: a valid stream created to write a text file
        // Post-conditions: text file will contain the information from the object, will throw exception if there is an file error
        void write(ofstream& outputStream) const ;
};