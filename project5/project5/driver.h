#include "Employee.h"
#include<string>
#include<fstream>
#include<stdexcept>
#include<iostream>
#include <iomanip>

using namespace std;
//Constant for setting the precision value to 2
const int PRECISION_VALUE=2;
const int TWO = 2;
// Function:  printCheck
// Purpose: print payroll checks for Employee objects
// Parameters: Employee object
// Returns: None
// Pre-conditions: Employee object created
// Post-conditions: None
void printCheck(Employee);