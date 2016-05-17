/**********************************************************************
 *Program Name   :   Lab #5
 *Author         :   Natalia Montilla
 *Date           :   March 30th, 2016
 *Course/Section :   CSC 110 ***002
 *Program Description:
 * Input a number and indicae whether it is a prime number or not. 
 *
 * BEGIN Calculating Prime Numbers
 *  
 *END Calculating Prime Numbers
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{


	//local constants
	const int QUIT = -1; //sentinal value
	
	//local variables
	int Num;                  //any number *changed to int
    int Count = 2;            //initial count value
    int Non_Prime_Count = 0;    
    int Prime_Count = 0; 
    string Ans;                  // changed to string
	/**************************start main program*********************/
	
    cout << "Enter number or QUIT: ";
    cin  >> Num; 
    
    while (Num != QUIT){
         
         for (Count = 2; Count < Num/2; Count++){
             
             if(Num % Count == 0) // changed to equality operator
               //num is not prime
               Non_Prime_Count ++; 
               
             else if(Num % Count != 0)
                  //num is prime
                  Prime_Count ++;
            }
        if (Prime_Count > 0)
           Ans = "Num is Prime"; 
           
        else if (Non_Prime_Count > 0)
            Ans = "Num is not Prime"; 
            
        cout << "Answer: " << Ans; 
        
        cout << "Enter new number or QUIT"; 
        cin  >> Num; 
        
    }
}

        
            
        
        
    
