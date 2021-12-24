#include<string>
#include<iostream>
#include<stdexcept>
#include<sstream>


using namespace std;

// Purpose: Calculating the square of a number
// Parameters: int
// Returns: int
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
int calculateSquare(int num)
{
    //check to see if user has entered a number greater than 0 
    if(num <= 0)
    {
        
       //stream to be used to convert int to string
       stringstream convert;   
        
       //load integer to stream    
       convert << num;
       
       //convert integer to string
       string number = convert.str();
       
        // throw an exception if number is less than 0
        throw runtime_error( "Invalid input: " + number);
    }//end if
    
    else
    {
       //return square
       return  num * num; 
    }//end else
    
  
}//end calculateSquare

int main()
{
    //Declare an integer value to store the user's input. 
    int input = 0;
    
    
    do
    {
    //Prompt the user to enter a positive, non-zero integer value. 
    cout << "Enter a number that is greater than 0." << endl;
    cin >> input;
    
    try
    {
        
    cout << "The square of your number is :" << calculateSquare(input) <<endl;
    
    }//end try
    catch(runtime_error &errorMessage)
    {
      cout << errorMessage.what() << endl;  
    }//end catch
    
    
    }while(input < 1);// end do while
    
    cin.get();
    
}