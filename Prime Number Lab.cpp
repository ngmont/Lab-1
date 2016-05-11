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
*         IF(Num is in Range and divisible by 2)
*            Add Num to Total
*            Incriment count
*         ELSE IF (Num is not in Range)
*            Display error
*         END IF
*         Input Num
*   END WHILE
*   Display Total
*   Display Count
*END Calculating Positive Integers
    /********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	//local constants
	//local variables
	int Num;        //any number value
	int Total = 0;  //total will start at zero
	int Count = 0;  //count begins at zero
	int Quit = -1;  //initializer
	int MIN = 0;   // lowest value
	int MAX = 20;  // higheset value
     /**************************start main program*********************/
     
     //BEGIN Calculating Positive Integers

     //Output title
     cout << "\n"; 
     cout << setw (55) << "Calculate Posotive Integers";
     cout << "\n\n"; 
     //Input Num
     cout << setw (53) << "Input Num or Quit:       "; 
     cin  >> Num;
      
     //begin while loop
 
     while(Num != Quit)    
	 {
	 	    //Check that Num is in range and divisible
            if(Num > MIN && Num < MAX && Num % 2 == 0)
            {      //Add num to total and incriment count
                   Total += Num;                     
                   Count++;}
            //Checking if num is out of range
            else if (!(Num > MIN && Num < MAX)){
            
                 //Display Error Message
                 cout << "\n";
                 cout << setw (42) << "Invalid Number";
                 cout << "\n";
            }                                  
     // input new number                                              
     cout << setw (53) << "Input Num or Quit:       "; 
     cin  >> Num; 
     } // end WHILE loop
	
     
     //Display total and count 
     cout << "\n";
     cout << setw (53) << "Total:                   " << Total; 
     cout << "\n";
     cout << setw (54) << "Count:                   " << Count;                                           
     return (0);
}
//END Calculating Positive Integers
