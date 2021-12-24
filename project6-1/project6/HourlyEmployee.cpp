#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(int nubmer, string employeeName, string employeeAddress, string employeePhone, double employeeWage, double employeeHours)
    : Employee(nubmer, employeeName, employeeAddress, employeePhone)
{
    hourlyWage = employeeWage;
    hoursWorked = employeeHours;
}

HourlyEmployee::HourlyEmployee()
    : Employee()
{
    hourlyWage = 0.0;
    hoursWorked = 0.0;
}

double HourlyEmployee::getHourlyWage() const
{
    return hourlyWage;
}

double HourlyEmployee::getHoursWorked() const
{
    return hoursWorked;
}

double HourlyEmployee::calcPay() const
{
    double grosspay=0.0;
     const int FULL_TIME = 40;
    const double OVER_TIME = 1.5;
    if(hoursWorked <= FULL_TIME)
    {
        grosspay=hoursWorked * hourlyWage;
       return grosspay-( (grosspay*STATE_TAX) + (grosspay*FEDERAL_TAX) );
    }
    else
    {
        grosspay=((FULL_TIME * hourlyWage) + ( (hoursWorked - FULL_TIME) * hourlyWage * OVER_TIME));
        return grosspay-(grosspay*STATE_TAX) + (grosspay*FEDERAL_TAX);
    }
    
}

HourlyEmployee* HourlyEmployee::read(ifstream& inFile)
{
    HourlyEmployee* temp = new HourlyEmployee();
    temp->Employee::readData(inFile);
    temp->readData(inFile);
    return temp;
}

void HourlyEmployee::readData(ifstream& inFile)
{
    if(!inFile.eof())
    {
        inFile >> hourlyWage;
        if(inFile.fail())
        {
            throw runtime_error("Could not read Employee wage for " + getName());
        }
        inFile >> hoursWorked;
        if(inFile.fail())
        {
            throw runtime_error("Could not read Employee hours for " + getName());
        }
        inFile.ignore();
    }
}

void HourlyEmployee::write(ofstream& outFile) const
{
    Employee::write(outFile);
    outFile << hourlyWage <<endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee wage for " + getName());
    }
    outFile << hoursWorked << endl;
    if(outFile.fail())
    {
        throw runtime_error("Could not write Employee hours for " + getName());
    }
}

void HourlyEmployee::printCheck() const
{
    Employee::printCheck();
    cout << calcPay() << endl;
    cout << "\nUnited Bank of Eastern Orem\n----------------------------------------------------\n";
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Hourly Wage: " << hourlyWage << endl << endl;
}