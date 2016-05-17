/**********************************************************************
 *Program Name   :   Lab #5
 *Author         :   Natalia Montilla
 *Date           :   March 30th, 2016
 *Course/Section :   CSC 110 ***002
 *Program Description:
 * Input a number and indicae whether it is a prime number or not. 
 *
 * BEGIN Calculating Prime Numbers
 *  Input Num or QUIT
 *  WHILE (Num != Quit)
 *   MAX is equal to half the number
 *     IF (Num divisible by numbers in the range is equal to 0)
 *        Display Num is not a prime number
 *      ELSE IF (Num divisible by numbers in the range is not equal to 0) 
 *        Display Num is a prime number
 *      END IF 
 *   Clear Screen
 *      Input new Num or QUIT
 *   END WHILE
 *END Calculating Prime Numbers
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{


	//local constants
	const int QUIT = -1; //sentinal value
	const int MIN = 2;   //minimul number
	
	//local variables
	int Num;            //any number
	int Value;          // any number to test
        int Count = 2;      //initial count value
        
   
	/**************************start main program*********************/
	
    
    //BEGIN Calculating Prime Numbers
    //Input Num
    cout << "Input Num or Quit: ";
    cin  >> Num;
     
    
    //Check if num is not sentinal value
    while (Num != QUIT)
    {   
	 bool isPrime = true; 
	for( Count < Num/2 && Num % Count != 0)  
    {    if(Num % Count == 0)
	        isPrime = fase; 
    }
    }
}   //END Calculating Prime Numbers
	
	
	
	
	
