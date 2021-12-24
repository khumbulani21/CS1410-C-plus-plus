#include<iostream>
#include<stdexcept>
#include<cstddef>
using namespace std;
class DynArray
{
    private:
    int capacityX;
    int sizeX;
    int *vector;
    
    public:
    static const int DEFAULT_CAPACITY=2;
    static const double EXPANSION_SIZE=1.5;
    // Purpose:  Function to set the size of the vector
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    void setSize(int size);
    
    // Purpose:  Function to set the capacity of the vector
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    void setCapacity(int capacity);
    
    // Purpose:  Function to get the size of the vector
    // Parameters: int
    // Returns: void
    // Pre-conditions: none
    // Post-conditions: none
    int size();
    
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
    DynArray(int capacity);
    
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
    void push_back(int n);
    
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
    int at(int index);
    
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
    
    //DynArray(const DynArray&) = delete;
    //DynArray& operator=(const DynArray&) = delete;
};