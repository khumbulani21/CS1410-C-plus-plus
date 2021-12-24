// Author: Khumbulani Ndlovu
// Assignment: Project #4
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: Feb 20, 2017
// Description: A program that calculates local taxes


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include"Employee.h"


  Employee::Employee(int employeeNum, string employeeName, string streetAd, string phoneNum, double hourWage, double timeWorked)
  {
    //Initialize variables
    employeeNumber = employeeNum;
    name = employeeName;
    streetAddress = streetAd;
    phoneNumber = phoneNum;
    hourlyWage = hourWage;
    hoursWorked =timeWorked;
    
  }

  int Employee::getEmployeeNumber() const
  {
    return employeeNumber;
    
  }
  
  string Employee::getName() const
  {
      return name;
  }
  
  string Employee::getPhoneNumber() const
  {
      return phoneNumber;
  }
  
  double Employee::getHourlyWage() const
  {
      return hourlyWage;
  }
  
  double Employee::getHoursWorked() const
  { 
    return hoursWorked;  
  }
  
  double Employee::calcPay()
  {
      double grossPay = 0.0;
      double netPay =0.0;
      if(hoursWorked > NORMAL_HOURS)
      {
          // variable for overtime worked
          double  overTime = hoursWorked - NORMAL_HOURS;
          
          //overtime pay
          double overTimePay = overTime * (hourlyWage * TIME_HALF );
          
          //calculate grosspay 
          double grossPay = overTimePay + (NORMAL_HOURS *hourlyWage);
          
          //calculate netpay 
          netPay = grossPay - ((grossPay * FEDERAL_TAX_PERCENTAGE) + (grossPay * STATE_TAX_PERCENTAGE));
      }
      
      else
      {
         grossPay= (hoursWorked * hourlyWage);
         netPay = grossPay - ((grossPay * FEDERAL_TAX_PERCENTAGE) + (grossPay * STATE_TAX_PERCENTAGE));
      }
      
      return netPay;
  }
  
  
 void Employee::read(ifstream& inFile)
{
    getline(inFile, name);
    if(!inFile.eof())
    {
        if(inFile.fail())
        {
            throw runtime_error("Could not read Employee name");
        }
        getline(inFile, streetAddress);
        if(inFile.fail())
        {
            throw runtime_error("Could not read Employee address for " + name);
        }
        inFile >> phoneNumber;
        if(inFile.fail())
        {
            throw runtime_error("Could not read Employee phone number for " + name);
        }
        inFile >> hourlyWage;
        if(inFile.fail())
        {
            throw runtime_error("Could not read Employee wage for " + name);
        }
        inFile >> hoursWorked;
        if(inFile.fail())
        {
            throw runtime_error("Could not read Employee hours for " + name);
        }
        inFile.ignore();
    }
}

void Employee::write(ofstream& outFile)
{
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
    outFile << phoneNumber << " ";
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee phone number for " + name);
    }    
    outFile << hourlyWage << " ";
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee wage for " + name);
    }
    outFile << hoursWorked << endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee hours for " + name);
    }
}