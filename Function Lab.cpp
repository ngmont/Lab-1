/********************************************************************
 *Program Name   :  Function Lab
 *Author         :  Natalia Montilla
 *Date           :  April 20th, 2016
 *Course/Section :  CSC110-002
*Program Description: Ask the user to input ‘A’ for absolute value or ‘P’ for 
*power or ‘Q’ for quit.  As long as the user didn’t quit then input two numbers.  
*If they chose ‘a’ then find the absolute value of the first number – the second 
*number. If the chose ‘P’ then raise the first number to the power of the second 
*number.  Display the answer.  If the user entered an invalid input, display an 
*error.  Finally, prompt the user to perform another operation. I should be able 
*to input upper or lower case letters.
*
*BEGIN Function Lab
*  Input Operation
*  Convert Operation to uppercase
*  WHILE (Operation != QUIT)
*     IF (Operation is valid)
*        Input 2 #'s
*     IF (Operations Power)
*        Answer = 1st # raised to 2nd power)
*     ELSE
*        Answer = Absolute VAlue of 1st - 2nd
*     END IF 
*     Dispaly Answers
*     ELSE 
*     Dispaly Error
*     END IF 
*  Input operation
*  Convert opperation to uppercase
*  END WHILE 
*END Function Lab	
    /********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// added comment
int main()
{
	
  //local constants
  const string Absolute = 'A';   //absolute value
  const string Power = 'P';   //power
  const string QUIT = 'Q';   //quit
		
  //local variables
  int Num1;          //number value 1
  int Num2;          //number value 2
  string Letter;    //letters a, b, c
  int Caclulation;  // absolute value or power
    
	
	/**************************start main program*********************/
	
    //BEGIN Function Lab
    
    //Input Operation
    cout << "\n";
    cout << "Letter: ";
    cin >> Letter; 
    
    //Convert Operation to uppercase
    char toupper(char)

    //WHILE (Operation != QUIT)
    while ( Letter != QUIT)
    {   
    //IF (Operation is valid)
    
    //Input 2 #'s
    cout << "Enter Numbers: "
    cin  >> Num 1; 
    cin  >> Num 2; 
    
    
    //IF (Operations Power)
    if (Letter == 'P')
	{
    	//Answer = 1st # raised to 2nd power)
    	Ans == int pow(Num1, Num2);
    }
    //ELSE 
    else if ( Letter == 'A')
    {
    	//Answer = Absolute Value of 1st - 2nd
    	Ans == int abs(int);

    }//END IF 

*     Dispaly Answers
*     ELSE 
*     Dispaly Error
*     END IF 
*  Input operation
*  Convert opperation to uppercase
*  END WHILE 
*END Function Lab	
	
	
	
	
	
