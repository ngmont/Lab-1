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

using namespace std;

int main()
{


	//local constants
	const int QUIT = -1; //sentinal value
	
	//local variables
	float Num;                  //any number
    int Count = 2;            //initial count value
    int Non_Prime_Count = 0;    
    int Prime_Count = 0; 
    int Ans;                  // Answer
	/**************************start main program*********************/
	
    cout << "Enter number or QUIT: ";
    cin  >> Num; 
    
    while (Num != QUIT){
         
         for (Count < Num/2){
             
             if(Num % Count = 0)
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

        
            
        
        
    
