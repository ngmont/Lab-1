/********************************************************************
 *Program Name   :   Function Practice - find a cube
 *Author         :   Natalia Montilla	
 *Date           :   May 11th, 2016
 *Program Description: This program will find the cube of any number. 
 *   the number will be input from the user and then passed into 
 *   a cube function will raise the number to the 3rd power.
 *   That result will be displayed on the screen.  This program will
 *   continue to find and display cubes until a sentinel value is 
 *   entered.
 *
 *BEGIN Function Practice - find a cube
 *   Input a number or 0 to quit
 *   WHILE (number entered is not QUIT)
 *       Call function to find cube of the input number
 *       Call function to display the cube
 *       Input next number or 0 to quit
 *   END WHILE
 *   Clear Screen
 *   Call function to Display departing message
 *   Pause screen
 *END Function Practice - find a cube
 ********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//place prototypes here
float calc_cube (float Ans, int Num); 
void display_cube(float Ans);
void end_message(int QUIT); 


int main()
{
  //local constants
  int Mltple = 3;  //the number that will be brought to the highest power.  
  int QUIT = 0;   // sentinal value
  
  //local variables
  int Num;         //# that will be cubed 
     
 /***********************************************/
//BEGIN Function Practice - find a cube


     //Input a number or 0 to quit
     cout << "Enter Number or 0 to QUIT"; 
     cin  >> Num;
     
     //WHILE (number entered is not QUIT)
     while (Num != QUIT){

     //Call function to find cube of the input number
     calc_cube (Ans, Num); 

     //Call function to display the cube
     cout << "The cube of   " << Num << "is: " << Ans; 
     
     //Input next number or 0 to quit
     cout << "Enter new number or 0 to QUIT";

     //Input a number or 0 to quit
     cout << "Enter Number or 0 to QUIT"; 
     cin  >> Num;
     //END WHILE
 }

    //Clear the screen
    system("CLS");

     //Call function to Display departing message
     end_message(QUIT);

     //Pause screen

} //END Function Practice - find a cube
/********************************************************************

} *Function Name  :   Calculate Cube
 *Author         :   Natalia Montilla 
 *Date           :   
 *Program Description: This program will find the cube of any number. 
 *   the number will be received as a parameter.  It will then be 
 *   raised to the 3rd power and the result will be returned to the
 *   calling function.
 *
 *BEGIN Calculate Cube (int Num)
 *   Calculate Num to the 3rd power
 *   Return the result of calculation
 *END Function Practice - find a cube
 ********************************************************************/
// FIXED 
float calc_cube (float Ans, int Num) { 

  //local constants
  int Mltple = 3;     //the number that will be brought to the highest power.  

  //local variables	
  float Ans = 1;     //the answer is the cubed number
/*********************************************/

    //BEGIN Calculate Cube (int Num)

    //Calculate Num to the 3rd power
    for (int i = 0; i < Mltple; i++)
	Ans = Ans * Num;

    //Return the result of calculation
    return Ans;

 }  //END Function Practice - find a cube

 /********************************************************************
 *Function Name  :   Display Closing
 *Author         :   Natalia Montilla
 *Date           :   
 *Program Description: This program will display a closing message to
 *   the user.  It will first clear the screen, then display the 
 *   message.  The message will include the Authors name and be big
 *   and bold.  
 *
 *BEGIN Display Closing
 *   Clear the screen
 *   Display the closing message
 *   Pause the screen
 *   Clear the screen
 *END Function Practice - find a cube
 ********************************************************************/
 void end_message(int QUIT){


 //local constants

 //local variables

 //******************************************/


    //BEGIN Display Closing
    
    //Clear the screen
    system("CLS");

    //Display the closing message
    cout << "Have a nice day" << endl;

    //Pause the screen
    system("PAUSE"); 

    //Clear the screen
    system("CLS");
 } 
    //END Function Practice - find a cube
