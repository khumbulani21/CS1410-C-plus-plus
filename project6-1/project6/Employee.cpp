
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


Employee::Employee(int employeeNum, string employeeName, string address, string phone)
   
{
    employeeNumber = employeeNum;
    name=employeeName;
    streetAddress=address;
    phoneNumber=phone;
}
    
    
    
Employee::Employee()
{
}
int Employee::getEmployeeNumber() const
{
    return employeeNumber;
}

string Employee::getName() const
{
    return name;
}

string Employee::getStreetAddress() const
{
    return streetAddress;
}

string Employee::getPhoneNumber() const
{
    return phoneNumber;
}



void Employee::readData(ifstream& inputFile)
{
   string temp;
  getline(inputFile, temp);
    if(!inputFile.eof())
    {
        if(inputFile.fail())
        {
            throw runtime_error("Could not read Employee number");
        }
        getline(inputFile, name);
        
        if(inputFile.fail())
        {
            throw runtime_error("Could not read Employee name");
        }
        getline(inputFile, streetAddress);
        if(inputFile.fail())
        {
            throw runtime_error("Could not read Employee address for " + name);
        }
        getline(inputFile, phoneNumber);
        //inputFile >> phoneNumber;
        if(inputFile.fail())
        {
            throw runtime_error("Could not read Employee phone number for " + name);
        }
        
    }
}

void Employee::write(ofstream& outFile) const
{
    outFile << employeeNumber << endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee number");
    }
  
    outFile << name << endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee name");
    }
    outFile << streetAddress << endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee address for " + name);
    }
    outFile << phoneNumber << endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee phone number for " + name);
    }    
}

void Employee::printCheck() const
{
    cout << fixed << setprecision(2);
    cout << "----------------------FluffShuffle Electronics-------------------------------------\n";
    cout << "Pay to the order of " << name << "..............................$";
}
