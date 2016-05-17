/********************************************************************
 *Program Name   :  Prog. 1 - Positive Integers Lab
 *Author         :  Natalia Montilla
 *Date           :  March 2nd, 2016
 *Course/Section :  CSC110-002
*Program Description: Read in a list of positive integers. Add up all of the
*even numbers in the list. Numbers range from 0 - 20.  If an invalid number is 
*entered, display an error. Use a sentinel value to end the input. No more than 
*10 numbers should be entered. Display the total and count of even numbers.
*
*BEGIN Calculating Positive Integers
*   Sentinal = -1
*   Total = 0
*   Count = 0
*   Input Num
*   WHILE(Num is not Quit)
*      IF(Num is in Range and divisible by 2)
*         Add Num to Total
*         Incriment count
*      ELSE IF (Num is not in Range)
*         Display error
*      END IF
*         Input Num
*   END WHILE
*   Display Total
*   Display Count
*END Calculating Positive Integers
* 
    /********************************************************************/

#include<iostream> 
#include<iomanip> 
#include<cstdlib> 
using namespace std; 

 
int main() 
{ 

   //local constants 
 const int QUIT = -1;  //quit value 
 const int MIN = 0;    // lowest value 
 const int MAX = 20;   // higheset value 

   //local variables 
 int Num;        //any number value 
 int Total = 0;  //total will start at zero 
 int Count = 0;  //count begins at zero 

//***********Begin Program ***********//
 
 //Input number
 cout << "Enter Number or QUIT: "; 
 cin  >> Num; 
 
 //while num is not quit and count is less than 10
  while (Num != QUIT && Count < 10) {   
   Count ++;
    //if the number is in range, test to see if it is a prime number
     if (Num > MIN && Num < MAX)
     { 
      if (Num % 2 == 0) Total += Num;
         
     } 
     else //the number is not in range, display error

     cout << "Error"; 
    
   //input new number or quit    
   cout << "Enter Number or QUIT: "; 
   cin  >> Num; 
    
  }
  //Display the total and count. total should represent the amount of tries attemtped
    cout << "Total: " << Total;
    cout << "Count: " << Count; 
    
} //End program
    
