// Author: Khumbulani Ndlovu
// Assignment: Project 8
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: April 17, 2017
// Description: A program that models vector class for integers


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include"DynArray.h"


DynArray::DynArray()
{
//set capacity to default value
  capacityX=  DEFAULT_CAPACITY;
  sizeX=0;
  //create new array on heap and set vector to point to that array
  vector=new int[capacityX];
  
}//end DynArray

DynArray::DynArray(int vectorCapacity)
{
   sizeX=0; 
   //create new array on heap and set vector to point to that array
   int *vector=new int[vectorCapacity];
}

void DynArray::setSize(int size)
{
    //set the value of the size of the vector
        this->sizeX=size;
}//end setSize
    
void DynArray::setCapacity(int capacity)
{
    //set the value of the capacity of the vector
        this->capacityX=capacity;
}//end setCapacity
    
int DynArray::size()
{
        return sizeX;
}//end size
    
int DynArray::capacity()
{
        return capacityX;
}//end capacity
    
void DynArray::clear()
{
    //delete the array from the heap
     delete vector;
     
     //set capacity to default value of 2
     capacityX=  DEFAULT_CAPACITY;
     sizeX=0;  
     
     //create a new bigger array
     int *tempPointer=new int[DEFAULT_CAPACITY];
     
     //assign vector pointer to point to the new array
     vector=tempPointer;
     
     //set the tempPointer to point to null
     tempPointer=NULL;
}//end clear
    
void DynArray::push_back(int n)
{
  //check to see if vector is full
  if(sizeX == capacityX)
    {
     //increase the size of the vector   
     increaseCapacity();
     //add the new element to the array
     vector[sizeX++]=n;
    }//end if
  else
    {
     //add the new element to the array
     vector[sizeX++]=n;
            
    }//end else
}//end push_back

    


void DynArray::pop_back()
{
    //check to see if vector has any elements 
    if (sizeX > 0)
     {
         //reduce the size of the vector by one
         sizeX= --sizeX;    
     } //end if
     else
     {
         //throw a runtime exception if the vector is empty
         throw runtime_error("vector is empty");
     }//end else
}//end pop_back
    
int DynArray::at(int index)
{
    //check if user is trying to view a valid index
    if(index >= sizeX)
     {
      throw runtime_error("Index out of range");   
     }//end if
     else if(sizeX == 0)
     {
     //throw exception if vector is empty
      throw runtime_error("The vector is empty, add elements before calling function at()");   
     
     }//end else if
     else
     {
         //return element at the specified index
         return vector[index];
     }//end else
     
}//end at
    
DynArray::~DynArray()
{
      //delete dynamically allocated memory
      delete vector;
      
      vector =NULL;
}//~DynArray

void DynArray::increaseCapacity()
{
  
       int tempCapacity= capacityX * EXPANSION_SIZE;
       
      //create a new larger array
       int *temp=new int [tempCapacity];
       
       //store the elements from the old array in the new array
       for(int i=0;i<sizeX;i++)
       {
       
        temp[i]=vector[i];
       }// end for
      //set the capacity to the new capacity
       capacityX=tempCapacity;
       //set the vector pointer to point to the new array
       vector=temp;
       
       temp=NULL;
       
       	
}//end increaseCapacity
