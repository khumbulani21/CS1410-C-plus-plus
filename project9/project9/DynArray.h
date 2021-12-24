// Author: Khumbulani Ndlovu
// Assignment: Project 9
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: May 1, 2017
// Description: A program that models vector class for integers


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include<iostream>
#include<stdexcept>
#include<cstddef>
#include<string>
using namespace std;

template<class yourType>
class DynArray
{
    private:
    int capacityX;
    int sizeX;
    yourType *vector;
    
    public:
    
    static const int DEFAULT_CAPACITY=2;
    static const double EXPANSION_SIZE=1.5;
    
    // Purpose:  Function to get the size of the vector
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    int size() const;
    
    // Purpose:  Function to get the capacity of the vector
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    int capacity();
    
    // Purpose:  Default constructor that initializes the size to 0 and capacity to 2
    // Parameters: void
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    DynArray();
    // Purpose:   A parameterized constructor receiving an integer, n, that creates a vector of capacity n.
    // Parameters: int capacity
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    DynArray(int capacityZ);
    
    // Purpose: Function  that deletes all of the elements from the vector and resets its size to zero and capacity to the default of two
    // Parameters: void
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    void clear();
    
    // Purpose: A function  that adds the integer value n to the end of the vector. 
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    void push_back(yourType n);
    
    // Purpose: A function  that decrements the "size" of the vector by 1
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    void pop_back();
    
    // Purpose:  Function that returns the value of the integer stored at a particular index in the vector. 
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    yourType at(int index) const;
    
    // Purpose:  Function that returns the value of the integer stored at a particular index in the vector. 
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    ~DynArray();
    
    // Purpose:  Function that returns the value of the integer stored at a particular index in the vector. 
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    void increaseCapacity();
    
    // Purpose: This function returns the value of the last used integer in the vector, but it does not remove it. 
    // Parameters: void
    // Returns: int
    // Pre-conditions: none
    // Post-conditions: none
    yourType& back();
    
    // Purpose: This function returns the value of the last used integer in the vector, but it does not remove it. 
    // Parameters: void
    // Returns: int
    // Pre-conditions: none
    // Post-conditions: none
    yourType& front();
   
    // Purpose: This function overloads the [ ] operator we use to index into an array 
    // Parameters: int index
    // Returns: int 
    // Pre-conditions: none
    // Post-conditions: none
    
    yourType& operator[](int index) ;
    
    // Purpose: Purpose: This function overloads the [ ] operator we use to index into an array 
    // Parameters: int index
    // Returns: int 
    // Pre-conditions: none
    // Post-conditions: none
    DynArray(const DynArray& right);
    
    /* Purpose:  This is the assignment opertator, which allocates new heap space 
     for the new object it is copying from the object passed as its parameter. It also deletes its old heap space.*/
    // Parameters: int index
    // Returns: int 
    // Pre-conditions: none
    // Post-conditions: none
    DynArray<yourType>& operator=(const DynArray&);
    
};

    template<typename yourType>
    DynArray<yourType>::DynArray(int capacityZ)
    {
        sizeX=0; 
        //create new array on heap and set vector to point to that array
        yourType *vector=new yourType[capacityZ];
    }

    template<typename yourType>
     DynArray<yourType>::DynArray()
    {
        //set capacity to default value
        capacityX=  DEFAULT_CAPACITY;
        sizeX=0;
        //create new array on heap and set vector to point to that array
        vector = new yourType[capacityX];
  
    }//end DynArray
    
    template<typename yourType>
     DynArray<yourType>::~DynArray()
    {
      //delete dynamically allocated memory
      delete[] vector;
      
      vector =NULL;
    }//~DynArray
    
    template<typename yourType>
    DynArray<yourType>::DynArray(const DynArray& right)
    {
        // create a new array 
        vector= new yourType[capacityX];
    
        //add elements to the array
        for(int i=0; i < right.size(); i++)
        {
            this->push_back(right.at(i));
        }
      
       
    }//end DynArray 
  
    
  
  
    template<typename yourType> 
    int DynArray<yourType>::size() const
    {
        return sizeX;
    }//end size
    
    template<typename yourType>   
    int DynArray<yourType>::capacity()
    {
        return capacityX;
    }//end capacity
    
    template<typename yourType>
    void DynArray<yourType>::clear()
    {
        //delete the array from the heap
        delete[] vector;
    
        //set capacity to default value of 2
        capacityX = DEFAULT_CAPACITY;
        sizeX = 0;  
     
        //create a new bigger array
        yourType *tempPointer=new yourType[DEFAULT_CAPACITY];
     
        //assign vector pointer to point to the new array
        vector=tempPointer;
     
        //set the tempPointer to point to null
        tempPointer=NULL;
    }//end clear
   
    template<typename yourType> 
    void DynArray<yourType>::push_back(yourType n)
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

    

    template<typename yourType>
    void DynArray<yourType>::pop_back()
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
    
    template<typename yourType>
    yourType DynArray<yourType>::at(int index) const
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
    


    template<typename yourType>
    void DynArray<yourType>::increaseCapacity()
    {
  
       int newCapacity= capacityX * EXPANSION_SIZE;
       
      //create a new larger array
       yourType *tempPointer=new yourType [newCapacity];
       
       //store the elements from the old array in the new array
       for(int i=0;i<sizeX;i++)
       {
       
        tempPointer[i]=vector[i];
       }// end for
      //set the capacity to the new capacity
       capacityX=newCapacity;
       //set the vector pointer to point to the new array
       vector=tempPointer;
       
       tempPointer=NULL;
       
       	
    }//end increaseCapacity


    template<class yourType>
    yourType& DynArray<yourType>::back()
    {
        if(sizeX>0)
        {
         
            return vector[sizeX-1];
        }
        else
        {
            //throw exception if vector is empty
            throw runtime_error("The vector is empty, add elements before calling function at()");  
        }
     
    }
 
 
    template<class yourType>
    yourType& DynArray<yourType>::front()
    {
        if(sizeX>0)
        {
            return *vector;
        }
        else
        {
            //throw exception if vector is empty
            throw runtime_error("The vector is empty, add elements before calling function at()");  
        }
     
    }
 
    template<class yourType>
    yourType& DynArray<yourType>::operator[](int index)
    {
     return vector[index];
    }
  
    template<class yourType>
    DynArray<yourType>& DynArray<yourType>::operator=(const DynArray& right)
    {
      
      if(this!= &right)
      {
          //delete memory for current object
         delete this;
         //create new heap space
         DynArray *newOne = new DynArray(right);
         return *newOne;
          
      }
      else 
        return *this;
    }
