#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(int number, string employeeName, string employeeAddress, string employeePhone, double salary)
    : Employee(number, employeeName, employeeAddress, employeePhone)
{
    weeklySalary = salary;
}

SalariedEmployee::SalariedEmployee()
    : Employee()
{
    weeklySalary = 0.0;
}

double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

double SalariedEmployee::calcPay() const
{
    
    return weeklySalary-( (weeklySalary*BENEFITS)+(weeklySalary*FEDERAL_TAX )+(weeklySalary*STATE_TAX ) );
}

SalariedEmployee* SalariedEmployee::read(ifstream& inFile)
{
    SalariedEmployee* temp = new SalariedEmployee();
    temp->Employee::readData(inFile);    
    temp->readData(inFile);
    return temp;
}

void SalariedEmployee::readData(ifstream& inFile)
{
    inFile >> weeklySalary;
    if(!inFile.eof())
    {
        if(inFile.fail())
        {
            throw runtime_error("Could not read salary for " + Employee::getName());
        }
    }
    inFile.ignore();
}

void SalariedEmployee::write(ofstream& outFile) const
{
    Employee::write(outFile);
    outFile << weeklySalary << endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee salary for " + getName());
    }
}

void SalariedEmployee::printCheck() const
{
    Employee::printCheck();
    cout << calcPay() << endl;
    cout << "\nUnited Bank of Eastern Orem\n----------------------------------------------------\n";
    cout << "Weekly Salary: " << weeklySalary << endl << endl;
}