/**********************************************************************
 *Program Name   :   Lab #5 - Prime Numbers
 *Author         :   Natalia Montilla
 *Date           :   March 30th, 2016
 *Course/Section :   CSC 110 ***002
 *Program Description:
 * Input a number and indicae whether it is a prime number or not. 
 *
 * BEGIN Calculating Prime Numbers
 * Input Nuber
 * WHILE (Num != QUIT)
 *     Create bool called isPrime is equal to true
 *     FOR (Count starting at 2; Count <= Num halfs; incri. count)
 *        IF (Num modulus 2 is equal to zero)
 *        Set isPrime equal to false
 *        END IF
 *     END FOR 
 *     IF(isPrime)
 *        Answer is Prime
 *        Output answer
 *     ELSE
 *        Answer is not Prime
 *        Output answer
 *        END IF
 *     Input new Number
 * END WHILE
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
    int Num;                  //any number 
    int Count = 2;            //initial count value
    string Ans;               // changed to string
    bool isPrime;
	/**************************start main program*********************/
    //Input Number	
    cout << "Enter number or QUIT: ";
    cin  >> Num; 
    
    //While Num is not QUIT
    while (Num != QUIT){
        
    	//Create bool isPrime equal to true and test it 
        isPrime = true; 
        //FOR (Count less than Num/2, incriment cout)
        for (Count = 2; Count <= Num/2; Count++){
        	
             //IF (Num modulus Count is zero)
             if(Num % Count == 0) {
               //num is not prime
               isPrime = false;
               break;
               } //END IF
              
        }//END FOR
        
        //IF(answer is isPrime)
        if (isPrime)
        {  //Answer is Prime, display answer
           Ans = "Num is Prime"; 
           cout << "Answer: " << Ans; 
        ///Answer is not Prime   
        }
        else 
        {  //Answer is not Prime, display answer
           Ans = "Num is not Prime"; 
           cout << "Answer: " << Ans; //END IF
        }   
        //Ask user for a new number or QUIT
        cout << "\n";
        cout << "Enter new number or QUIT: "; 
        cin  >> Num; 
        
  
    }//END WHILE  


}//END PRIME NUMBER PROGRAM
