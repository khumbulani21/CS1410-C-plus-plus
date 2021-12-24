// Author: Khumbulani Ndlovu
// Assignment: Lab 4
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: Feb 12, 2017
// Description: A program that calculates the area of a rectangle


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include<iostream>
#include"Rectangle.h"
using namespace std;

 Rectangle::Rectangle(int heightInput,  int widthInput)
   {
       
       width=widthInput;
       height=heightInput;
   };
   
   int Rectangle::getHeight()
   {
       return height;
   };
   
   int Rectangle::getWidth()
   {
       return width;
   };
   
   int Rectangle:: getArea()
   {
       return width* height;
   };
   
  
int main()
{
 
 //variables for height and width
   const int HEIGHT=7;
   const int WIDTH=4;
   
   //Create an instance of the rectangle class
  Rectangle rec(HEIGHT,WIDTH);
  
  //output he dimensions of the Rectangle
   cout<<"The height of the rectangle is: "<<rec.getHeight()<<endl;
   cout<<"The width of the rectangle is: "<<rec.getWidth()<<endl;
   cout<<"The area of the rectangle is: "<<rec.getArea()<<endl;
   
   //keep console window open
   cin.get();
}