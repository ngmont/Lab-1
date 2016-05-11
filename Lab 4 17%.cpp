/********************************************************************
 *Program Name   : Lab - Calculate 17%
 *Author         : Natalia Montilla
 *Date           : March 28th, 2016
 *Course/Section : CSC110-002
 *Program Description: 
 *
 *BEGIN Find 17%
 *   Input 2 Number (or Quit)
 *   WHILE( Number != Quit)
 *    IF(Number is in greater than min and less than max) 
 *      Answer is 17% of Number
 *      Display Answer
 *    ELSE
 *      Display Error
 *    END IF 
 *      Input Next Number (or Quit)
 *    END WHILE
 *END Lab Find 17%
 ********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	//local constants
        const int MIN = 50;         //minimum number
        const int MAX = 75;         //maximum number
        const int QUIT = -1;        //sentinal value
        const float PERCENT = .17;  //17%
    
	//local variables
	int Num;                  //any number
	float Ans;                //the answer in decimal form
	
	/**************************start main program*********************/

        //Input Number (or Quit)
        cout << "\n";
        cout << setw (48) << "Calculate 17% Lab ";
        cout << "\n\n";
        cout << setw (48) << "Num or QUIT: " ; 
        cin  >> Num; 
    
        //WHILE( Number != Quit)
        while(Num != QUIT)
 	{
    
          //IF(Number is in Range) 
          if(Num > MIN && Num < MAX)
          {
            // Answer is 17% of Number
            Ans = (float)Num * PERCENT;
         
            //Display Answer 
            cout << setw (36) << "Answer:" << setw (14) << Ans;                 
           }
           
          else	//If number is not in range						 
            cout << "Error"; //END IF  
       
                                    
   
        //Input Next Number (or Quit)
        system ("cls");
        system ("pause");
       
        cout << "\n";
        cout << setw (48) << "Num or -1 to Quit: " ; 
        cin  >> Num; 

       
        } //End while loop
         cout << "\n\n\n\n";
         
} //END Find 17%
