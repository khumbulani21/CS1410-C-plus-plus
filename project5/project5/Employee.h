// Author: Khumbulani Ndlovu
// Assignment: Project #5
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: March 6 , 2017
// Description: A program that calculates and prints out payroll information

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include <string>
#include <fstream>
#include <stdexcept>
using namespace std;
//constant for the normal hours worked in week
const int NORMAL_HOURS = 40;

//constant for calculating overtime pay
const double TIME_HALF =1.5;

//constants for taxes
const double FEDERAL_TAX_PERCENTAGE = 0.20;
const double STATE_TAX_PERCENTAGE = 0.075;


//Employee class
class Employee
{
  private:
  int employeeNumber;
  string name;
  string streetAddress;
  string phoneNumber;
  double hourlyWage;
  double hoursWorked;
  
  public:
  
// Purpose: Constructor to initialize variables
// Parameters: Employee variables
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  
  Employee(int employeeNumber, string name, string streetAddress, string phoneNumber, double hourlyWage, double hoursWorked);
  
// Purpose: Function for getting the employee number
// Parameters: void
// Returns: int
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  int getEmployeeNumber() const;
  
// Purpose: Function for getting the Employee name
// Parameters: void
// Returns: string
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  string getName() const;

// Purpose: Function for getting the phone number
// Parameters: void
// Returns: string
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  string getPhoneNumber() const;
  
// Purpose: Function for getting the hourly wage
// Parameters: void
// Returns: double
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  double getHourlyWage() const;
  
   // Purpose: access employee address
        // Parameters: none
        // Returns: employee address
        // Pre-conditions: valid Employee object created
        // Post-conditions: none
        string getStreetAddress() const;
  
  // Purpose: Function for getting the hours worked
// Parameters: void
// Returns: double
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  double getHoursWorked() const;
  
// Purpose: Function for calculating the net pay for an employee
// Parameters: void
// Returns: double
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  double calcPay();
    
// Purpose: Function for reading from a file
// Parameters: ifstream
// Returns: Employee object
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
   void read(ifstream &inputStream);
  
// Purpose: Function for writing to a file
// Parameters: ofstream 
// Returns: void
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
  void write(ofstream &outputStream);
  
  


};