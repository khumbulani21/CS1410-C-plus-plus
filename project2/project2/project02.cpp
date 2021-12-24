// Author: Khumbulani Ndlovu
// Assignment: Project #2
// Instructor: Embry
// Class: CS 1410 Section: X01
// Date Written: Feb 6, 2017
// Description: A program that calculates local taxes


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include<iostream>
#include<vector>
#include<stdexcept>
#include<algorithm>
using namespace std;

//counter for selecting a message to print when getting input for exam scores
int counters=0;

//variable to store the number 2
const int EVEN=2;
 
 
 
// Purpose: Get exam score from user
// Parameters: 
// Returns: score
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
int getScore()
{
    //variable for the maximum exam score
    const int MAX_EXAM_SCORE=100;
   
    //variable for an exam score
    int score=0;
   
   
    
    //string to temporarily hold input
    string scoreTemp="";
  
    
    do
    {
     //determine which message to display to user
     switch(counters)
     {
         case  0 :
        
                 cout<<"Please enter your first exam score "<<endl;  
                    break;
       
         case  1 :
        
                 cout<<"Please enter your second exam score "<<endl;  
                    break;
         case  EVEN :
        
                 cout<<"Please enter your final exam score "<<endl;  
                    break;
                   
                    
         
     }
        
   //get user's input
    getline(cin, scoreTemp);
   
   try 
   {
       //convert string to int
       score=stoi(scoreTemp);
       
       //test to see if user has input a correct score
       if(score >= 0 && score <=  MAX_EXAM_SCORE)
       {
          
          //increment counter since correct score was entered by user.
           counters++; 
           
       }//end if
       
       else
       {
         
           cout<<"Please enter a value between 0 and 100"<<endl;
          
          //set score to -1 since incorrect input was entered
          score=-1;
       }//end else
         
   }//end try
   
   catch(logic_error)
   {
     cout<<"invalid input"<<endl;
     //set the score string to an empty string
     scoreTemp="";
   }//end catch
   
  }while(scoreTemp == "" ||  score <= -1); //end do while
    
  //return exam score
  return score;
  
}



// Purpose: Find the median homework score
// Parameters: homework scores vector
// Returns: median score
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
int getMedianHomeWork(vector <int> scores)
{
 //variable to temporarily hold a value
 int temp=0;
 //variable for checking if any swap has occured
 int swapped;
 int median=0;
 do {
                swapped = 0;
                for(int i = 0; i < scores.size(); i++)
                {
                        if(scores[i] > scores[i + 1]) 
                        {
                            swapped = 1;
                            temp = scores[i];
                            scores[i] = scores[i + 1];
                            scores[i + 1] = temp;
                         }
                }
        } while(swapped);
        
        //sort(scores.begin( ), scores.end( ) ); 
if((scores.size() % EVEN) == 0)
{
 int temp = scores.size() / EVEN;
 median=(scores[temp] + scores[temp+1]) / EVEN;
 
}
 else if(scores.size()==1)
 {
  median= scores[1];
 }
 
  else 
 {
  median= scores[scores.size() / EVEN];
 }
 return median;
 
}

// Purpose: Find the grade
// Parameters: examScore, medianScore
// Returns: grade
// Pre-conditions: Conditions that must exist for function to work
// Post-conditions:Conditions that exist after function has executed
// -----------------------------------------------------------------
 string getGrade(int examScore, int homeWorkScore)
{
  //calculate total score
  int totalScore= examScore + homeWorkScore;
  
 //variables for grades
 const int FAIL=180;
 const int D_MINUS=200;
 const int D_GRADE=220;
 const int D_PLUS=240;
 const int C_MINUS=260;
 const int C_GRADE=280;
 const int C_PLUS=300;
 const int B_MINUS=320;
 const int B_GRADE=340;
 const int B_PLUS=360;
 const int A_MINUS=380;
 const int A_GRADE=400;
 const int NUM_GRADES=12;
 const int MAX_INDEX=12;
 
 //variables for array index
 const int FIRST_INDEX=1;
 const int SECOND_INDEX=2; 
 const int THIRD_INDEX=3;
 const int FOURTH_INDEX=4;
 const int FIFTH_INDEX=5;
 const int SIXTH_INDEX=6;
 const int SEVENTH_INDEX=7;
 const int EIGHT_INDEX=8; 
 const int NINENTH_INDEX=9;
 const int TENTH_INDEX=10;
 const int ELEVENTH_INDEX=11;


 string grade="";
 
 //grades
 string grades[MAX_INDEX]={"A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "fail"};
 
 
if(totalScore <= FAIL)
{
 grade=grades[MAX_INDEX-1];


}//end if

else if(totalScore > FAIL && totalScore <= D_MINUS)
{
 grade = grades[MAX_INDEX - SECOND_INDEX];

 
}//end if else

else if(totalScore > D_MINUS && totalScore <= D_GRADE)
{
 grade=grades[MAX_INDEX-THIRD_INDEX];
 
}//end if else

else if(totalScore > D_GRADE && totalScore <= D_PLUS)
{
 grade=grades[MAX_INDEX-FOURTH_INDEX];

}//end if else

else if(totalScore > D_PLUS && totalScore <= C_MINUS)
{
 grade=grades[MAX_INDEX-FIFTH_INDEX];

}//end if else

else if(totalScore > C_MINUS && totalScore <= C_GRADE)
{
 grade=grades[MAX_INDEX-SIXTH_INDEX];

}//end if else

else if(totalScore > C_GRADE && totalScore <= C_PLUS)
{
 grade=grades[MAX_INDEX-SEVENTH_INDEX];

}//end if else
else if(totalScore > C_PLUS && totalScore < B_MINUS)
{
 grade=grades[MAX_INDEX-EIGHT_INDEX];
 
}//end if else

else if(totalScore > B_MINUS && totalScore <= B_GRADE)
{
 grade=grades[MAX_INDEX-NINENTH_INDEX];

}//end if else

else if(totalScore > B_GRADE && totalScore <= B_PLUS)
{
 grade=grades[MAX_INDEX-TENTH_INDEX];

}//end if else
else if(totalScore > B_PLUS && totalScore <= A_MINUS)
{
 grade=grades[MAX_INDEX-ELEVENTH_INDEX];
 
}//end if else

else if(totalScore > A_MINUS )
{
 grade=grades[MAX_INDEX-MAX_INDEX];

}//end if else

//return final grade

return grade;
}//getGrade
 
 
int main()
{
 //variables for scores
 int firstMidTerm=0;
 int secondMidTerm=0;
 int finalExam=0;
 int score=0;

 int medianScore=0;
 string finalGrade="";
 const int MAX_HOMEWORK_SCORE=100;
 //string to temporarily hold input
 string scoreTemp="";
 
 //vector for homework scores
 vector <int> homeWorkScores;

 //get the first midterm from user
 firstMidTerm=getScore();
    
 //get the second midterm from user
 secondMidTerm=getScore();
    
 //get the first midterm from user
 finalExam=getScore();
    
 
   
  //get homework score from user
    do
    {
     cout<<"Please enter your next homework score. Enter ctrl-z to exit."<<endl;
     getline(cin, scoreTemp);
        
      if(scoreTemp == "^z"  )
      {
        if(homeWorkScores.size()==0)
         {
          homeWorkScores.push_back(0);
          break;
         }
          else
         {
          cout<<"Thank you"<<endl; 
          break;
         }
      
       }
       else
        {
         try 
         {
            score=stoi(scoreTemp);
            
            if(score < 0 || score > MAX_HOMEWORK_SCORE)
            {
              cout<<"Please enter a value between 0 and 100."<<endl; 
              score=0;
              scoreTemp="";
          
            }//end if
       
            else
            {
            //increment counter since correct score was entered by user.
            homeWorkScores.push_back(score);
     
           
            }//end else
        }
        
        catch(logic_error)
        {
            //inform user of invalid input
            cout<<"invalid input"<<endl;
            //clear string
            scoreTemp="";
        }
     }
    }while( scoreTemp == "" || scoreTemp != "^z"  ); //end do while
    
 
  
  //calculate exam total score
  int examTotal =firstMidTerm + secondMidTerm + finalExam;
  
  
  //calculate median score
    medianScore = getMedianHomeWork(homeWorkScores);
    
  //calculate final grade
    finalGrade=getGrade(examTotal, medianScore);
  
    
  
    //print out median homework score
    cout<<"Your median homework score is: "<<medianScore<< endl;
    //print out the total score
    cout<<"Your total score is : " <<(examTotal+medianScore) << endl;
    //print out final grade
    cout<<"Your final grade is : "<< finalGrade << endl;
    
    //keep console window open
    cin.get();
}