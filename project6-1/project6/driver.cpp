
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

#include "driver.h"

int main()
{
    
    //output stream reference
    ofstream outputFile;
    //input stream reference
    ifstream inputFile;
    //employee type string to hold variable for determining the type of employee
    string employeeType;
    
    string fileName;
    
    //pointer variables
    HourlyEmployee* hourEmployee;
    SalariedEmployee* salaryEmployee;
    //vector for Employee pointers
    vector <Employee*> payroll;
    
    int choice;
    
    do
    {
        cout << "\n\nThis program has two options: \n";
        cout << "1 - Create a data file, or \n";
        cout << "2 - Read data from a file and print checks \n";
        cout << "0 - Quit\n";
        cout << "Please enter 1 to create a file, 2 to print checks, 0 to quit: ";
        cin >> choice;
        while(cin.fail() || choice < 0 || choice > SECOND_CHOICE)
        {
            cout << "Invalid response. Enter 1, 2, or 0: ";
            cin.clear();
            cin >> choice;
        }
        try 
        {
            if(choice==1)
            {
                    cout << "Enter name of data file to create: ";
                    cin >> fileName;
                    outputFile.open(fileName.c_str());
                    if(outputFile.fail())
                    {
                        throw runtime_error("File could not be created: " + fileName);
                    }
                    payroll.push_back(new HourlyEmployee(1, "H. Potter", "Privet Drive", "201-9090", 12.00, 40.0));
                    payroll.push_back(new SalariedEmployee(2, "A. Dumbledore", "Hogwarts", "803-1230", 1200.00));
                    payroll.push_back(new HourlyEmployee(3, "R. Weasley", "The Burrow", "892-2000", 10.00, 40));
                    payroll.push_back(new SalariedEmployee(4, "R. Hagrid", "Hogwarts", "910-8765", 1000.0));
                    for(int i=0; i<payroll.size(); i++)
                    {
                        payroll[i]->write(outputFile);
                    }
                    outputFile.close();
                    for(int i=0; i<payroll.size(); i++)
                    {
                        delete payroll[i];
                    }
                    payroll.clear();
                    cout << "File created.\n";
                    
                }
                if(choice==SECOND_CHOICE)
                {
                    cout << "Enter name of data file to read: ";
                    cin >> fileName;
                    inputFile.open(fileName.c_str());
                    if(inputFile.fail())
                    {
                        throw runtime_error("File could not be found: " + fileName);
                    }
                    else
                    {
                    vector <Employee*> payrollOutput;
                    hourEmployee = new HourlyEmployee(0,"","","",0.0,0.0);
                    payrollOutput.push_back(hourEmployee->read(inputFile));
                    salaryEmployee = new SalariedEmployee(0,"","","",0.0);
                    payrollOutput.push_back(salaryEmployee->read(inputFile));
                    hourEmployee = new HourlyEmployee(0,"","","",0.0,0.0);
                    payrollOutput.push_back(hourEmployee->read(inputFile));
                    salaryEmployee = new SalariedEmployee(0,"","","",0.0);
                    payrollOutput.push_back(salaryEmployee->read(inputFile));
                    inputFile.close();
                    
                    
                    for(int i=0; i<payrollOutput.size(); i++)
                    {
                        payrollOutput[i]->printCheck();
                    }
                   
                   for(int i=0; i<payrollOutput.size(); i++)
                    {
                        delete payrollOutput[i];
                    }
                    
                    }
                }  
        
            
        }
        catch(runtime_error& except)
        {
            cout << "File error:\n" << except.what();
            outputFile.clear();
            inputFile.clear();
        }
    }while( choice != 0);
}
