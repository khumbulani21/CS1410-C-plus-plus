// Author: Khumbulani Ndlovu
// Assignment: Project #1
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: Jan 22, 2017
// Description: A program that calculates local taxes


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#include<iostream>
#include <iomanip>
#include<stdexcept>
using namespace std;

// Purpose: Calculate tax
// Parameters: taxable income, marital status
// Returns: tax
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------

double calculateTax(int income, char status)
{
    
//tax rates
const double TAX_RATE_ONE=0.023;
const double TAX_RATE_TWO=0.033;
const double TAX_RATE_THREE=0.052;
const double TAX_RATE_FOUR=0.075;

//Income limits for single filing
const int LIMIT_ONE_SINGLE=863;
const int LIMIT_TWO_SINGLE=2588;
const int LIMIT_THREE_SINGLE=4313;

//Income limits for married filing
const int LIMIT_ONE_MARRIED=1726;
const int LIMIT_TWO_MARRIED=5176;
const int LIMIT_THREE_MARRIED=8626;


//amount to add to tax for single filling
const int AMOUNT_ONE=25;
const int AMOUNT_TWO=85;
const int AMOUNT_THREE=181;

//amount to add to tax for married filing
const int AMOUNT_ONE_MARRIED=40;
const int AMOUNT_TWO_MARRIED=175;
const int AMOUNT_THREE_MARRIED=390;



    double tax=0.0;
    
    //check marital status and calculate tax
    switch(status)
    {
        //calaculate taxes for single filing
    case 's':  {
                
                if(income <= LIMIT_ONE_SINGLE)
                {
                    
                //calculate tax for amount less than 863   
                tax=((income*TAX_RATE_ONE));
                
                }
                
                else if(income > LIMIT_ONE_SINGLE && income <= LIMIT_TWO_SINGLE)
                {
                    
                    tax=((income - LIMIT_ONE_SINGLE) * TAX_RATE_TWO) + AMOUNT_ONE;
                }
                
                else if(income > LIMIT_TWO_SINGLE && income <= LIMIT_THREE_SINGLE)
                {
                    
                    tax=((income-LIMIT_TWO_SINGLE) * TAX_RATE_THREE) + AMOUNT_TWO;
                }
                
                else
                {
                    
                  tax=((income - TAX_RATE_THREE) * TAX_RATE_FOUR) + AMOUNT_THREE;  
                }
                
                break;
                
                }
                
    case 'm' : {
                if(income <= LIMIT_ONE_MARRIED)
               {
                  tax = ((income) * TAX_RATE_ONE);   
               }
               
               else if(income>LIMIT_ONE_MARRIED && income <= LIMIT_TWO_MARRIED)
               {
                   
                  tax = ((income-LIMIT_ONE_MARRIED) * TAX_RATE_TWO) + AMOUNT_ONE_MARRIED;    
               }
               
               else if(income > LIMIT_TWO_MARRIED && income <= LIMIT_THREE_MARRIED)
               {
                   
                  tax=((income - LIMIT_TWO_MARRIED) * TAX_RATE_THREE)+ AMOUNT_TWO_MARRIED;    
               }
               
               else 
               {
                   
                  tax=((income-LIMIT_THREE_MARRIED)*TAX_RATE_FOUR)+AMOUNT_THREE_MARRIED;    
               }
               
               break;
               
               }
               
       }//end switch statement
    
   return tax;
   
}


// Purpose: function to get income from user
// Parameters: 
// Returns: income
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
double getIncome()
{
    
    double income=0.0;
    
    //string to temporarily hold input
    string incomeTemp="";
    
    do
    {
    cout<<"Please enter your income. It should be a positive number."<<endl;
    getline(cin, incomeTemp);
   
   try 
   {
       income=stod(incomeTemp);
   }
   catch(logic_error)
   {
     cout<<"invalid input"<<endl;
     incomeTemp="";
   }
   
  }while(incomeTemp=="" ||  income < 0); //end do while
    
  return income;
  
}



int main()
{
    
    //variable declaration
    double taxableIncome;
    string tempString="";
    char status;
    char anotherTax;
    
  // do while for calculating tax      
 do 
 
 {
  //get user's income     
  taxableIncome = getIncome();
   
   //do while for getting marital status
  do 
  {
  
   cout<<"Enter m if married and filing jointly or s if single"<<endl;
   getline(cin, tempString);
    

       //check to see if user has entered a character
       if(tempString.size()>1)
       {
        //inform user of invalid input
        cout<<"invalid input"<<endl;
        
        //clear the user's input
        tempString="";
        
        //continue with the loop
        continue;
       }//end if
       
       else if (tempString == "s" || tempString == "m")
       {
        //save user's marital status if uset enetered s or m
        status=tempString[0];
        
       }//end else if
       
    //end do while for marital status   
   }while(tempString=="" || (status != 's' && status != 'm')); 
	
   //format and output the taxable income
   cout<<"Your taxable income is: $" << fixed << setprecision(2) << taxableIncome <<endl;
   
   if(status == 's')
   {
       cout<<"You are filing a single return."<<endl;
   }
   else if(status == 'm')
   {
      cout<<"You are filing a joint return."<<endl; 
   }
    //format and print out the tax user has to pay
    cout<<"You have to pay: $"<< fixed << setprecision(2) << calculateTax(taxableIncome, status) <<" in taxes"<<endl;

//do while for another tax calculation
  do 
  {
  
  //get user input
   cout<<"Do you want to calculate another tax return, type y for yes and n for no."<<endl;
   getline(cin, tempString);
    

       //check to see if user has entered a character
       if(tempString.size()>1)
       {
        cout<<"invalid input"<<endl;
        
        //clear the user's input
        tempString="";
        
        //continue with the loop
        continue;
        
       }//end if
       
       else if (tempString == "y" || tempString == "n")
       {
        //save user's input
        anotherTax=tempString[0];
        
       }//end else if
       
       //check to see if user has entered valid input
   }while(tempString=="" || (anotherTax != 'y' && anotherTax != 'n') ); //end do while for marital status

//check to see if uset wants to calculate another tax deduction
}while(anotherTax == 'y' );

//system("pause");
//Keep window open
cin.get();

}
