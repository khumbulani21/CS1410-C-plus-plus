#include"Employee.h"
#include <iomanip>
//Pay rate for Jonhy Kay
const double JONHY_PAY = 10.00;
//Hours worked by Jonhy Kay
const double JOHNY_HOURS = 45;

//pay rate for Khummbulani Ndlovu
const double KHUMBULANI_PAY = 12.50;
//Hours worked by Khummbulani Ndlovu
const double KHUMBULANI_HOURS = 30;
  
//constant for the normal hours worked in week
const int NORMAL_HOURS = 40;

//constant for calculating overtime pay
const double TIME_HALF =1.5;

//constants for taxes
const double FEDERAL_TAX_PERCENTAGE = 0.20;
const double STATE_TAX_PERCENTAGE = 0.075;

//employee number for employee Khumbulani Ndlovu
const int KHUMBU_EMPLOYEE_NUMBER=2;

//Constant for setting the precision value to 2
const int PRECISION_VALUE=2;


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
  
// Purpose: Function for getting the phone number
// Parameters: void
// Returns: string
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
void printCheck(Employee employeeX)
{
    cout<< "---------------------------FluffShuffle Electronics------------------------"<< endl;
    cout<<"Pay to the order of "<<employeeX.getName();
    cout<<" .................................................... $"<< fixed << setprecision(PRECISION_VALUE)<< employeeX.calcPay()<<endl;
    
    cout << "United Bank of Eastern Orem \n" << endl;
    
    cout <<  "--------------------------------------------------------------------------------"<<endl;
   
    cout<<"Hours worked: "<< fixed << setprecision(PRECISION_VALUE)<< employeeX.getHoursWorked()<<endl;
    cout<<"Hourly wage : $"<< fixed << setprecision(PRECISION_VALUE) << employeeX.getHourlyWage()<<"\n"<< endl;
    
}


// Purpose: Function for getting the phone number
// Parameters: void
// Returns: string
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
int main()
{
   //Create an Employee object for an employee whose hourly wage is $10.00
   Employee jonhy(1, "Jonhy Kay", "650 S 800 N ", "075 889 4444", JONHY_PAY, JOHNY_HOURS);
   Employee khumbu(KHUMBU_EMPLOYEE_NUMBER, "Khumbulani Ndlovu", "700 E 400 N ", "075 889 4444", KHUMBULANI_PAY, KHUMBULANI_HOURS);
   
   //print out employee information using the printCheck() function
   printCheck(jonhy);
   printCheck(khumbu);
   
   
   //print out message for user to click any key to continue
   cout <<"Press any key to continue\n" << endl;
    
   cin.get();
   
}
