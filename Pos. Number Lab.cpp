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

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    //local constants
    int QUIT = -1;  //quit value
    int MIN = 0;   // lowest value
    int MAX = 20;  // higheset value
	
    //local variables
    int Num;        //any number value
    int Total = 0;  //total will start at zero
    int Count = 0;  //count begins at zero

     /**************************start main program*********************/
     
    //BEGIN Calculating Positive Integers

    //Input Num
    cout << "Enter Number or QUIT: ";
    cin  >> Num; 
    
    //WHILE(Num is not Quit)
    {
       //IF(Num is in Range and divisible by 2)
       if  (Num > MIN && Num < MAX){
       	
           //Add Num to Total
           Total += Num ; 
           //Incriment count
           Count ++; 
           
        //ELSE IF (Num is not in Range)
        else 
           //Display Error
           cout << "Error"; 
        //END IF
        
    //Input Num or QUIT
    cout << "Enter Number or QUIT: ";
    cin  >> Num; 
    
    //END WHILE
    }
    
    //Display Total
    cout << "Total: " << Total; 
    
    //Display Count
    coout << "Count: " << Count;
    
}    //*END Calculating Positive Integers
    
