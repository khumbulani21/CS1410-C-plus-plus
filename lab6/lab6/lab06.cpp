// Author: Khumbulani Ndlovu
// Assignment: lab 6
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: Feb 27, 2017
// Description: A program that reads voltages stored in  a text file and calculates their average.


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include"lab06.h"

int main()
{
    //constant fot the maximum number of elements in array
    const int ARRAY_SIZE = 100;
    
    //constant fot the maximum number of elements in array
    const int PRECISION_VALUE = 2;
    
    //array to hold voltages
    double voltages[ARRAY_SIZE];
    
    //variable to hold voltage input before its stored on array
    double voltageTemp = 0.0;
    
    //variable  for average of voltages
    double average=0.0;
    
    //variable  for sum  of voltages in array
    double sum=0.0;
    
    //variable for the index of the array
    int index=0;
 
    //declare file stream object
    ifstream voltageInput;
    
    //open file
    voltageInput.open("voltages.txt");
    
    //check if file opened
    if(voltageInput.fail())
    {
       cout << "file failed to open"<<endl;
       
    }
    else
    {
        
    while (!voltageInput.eof( ) ) // read until end of file 
    {
        //read voltage and store in temp variable
        voltageInput >> voltageTemp;
        

        
        // Check if it is okay to save the data
        if (voltageInput.good( ) )
        {
            //store the next voltage in array
            voltages[index] = voltageTemp;
            
            //increment the index
            index++;
            
        }//end if
        
        // if the read failed, see if it was because of end of file
        else if ( !voltageInput.eof( ) ) 
        {
                cout << "\nThere was a problem reading the file";
                return 0;
        }//end else if
        
    } //end while
    
    }//end else
    
   
   
    for(int i=0; i<index; i++)
    {
        //calculate the sum of the elements in the array
        sum+=voltages[i];
    }
    
    //calculate average using formula sum/array size
    average=sum/index;
    
    //print out the average of the voltages
    cout<<"The average of the voltages is: " << fixed << setprecision(PRECISION_VALUE) << average << endl;
   
    
    //keep console window open
    cin.get();
}