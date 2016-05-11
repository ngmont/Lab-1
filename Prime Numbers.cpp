/**********************************************************************
 *Program Name   :   Lab #5
 *Author         :   Natalia Montilla
 *Date           :   March 30th, 2016
 *Course/Section :   CSC 110 ***002
 *Program Description:
 * Input a number and indicae whether it is a prime number or not. 
 *
 * BEGIN Calculating Prime Numbers
 *  Input Num
 *  WHILE (Num != Quit)
 *      If(Num is divisible by A or B or C or D)
 *        Display Num is not a prime number
 *      ELSE IF (Num is not divisible by A or B or C or D) 
 *        Display Num is a prime number
 *      END IF 
 *        Num is Quit
 *      Input new Num
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
	
	//local variables
	int Num;            //any number
	int Value;          // any number to test
    int Count = 2;      //initial count value
    bool isPrime = true; 
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
	
	
	
	
	
