#include<string>
#include<iostream>
using namespace std;

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
  


};