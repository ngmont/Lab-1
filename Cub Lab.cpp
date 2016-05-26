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
void display_cube(string Ans, int pow);
void end_message(string Name, float Message); 


int main()
{
  //local constants
  int Mltple = 3;  //the number that will be brought to the highest power.  
  string Message = "Have a nice day"; // closing message
  int QUIT = 0;   // sentinal value
  
  //local variables
  int Num;         //# that will be cubed 
     
 /***********************************************/
//BEGIN Function Practice - find a cube


     //Input a number or 0 to quit
	 cout << "Enter Number or 0 to QUIT"; 

     //WHILE (number entered is not QUIT)
     while (Num != QUIT){

     //Call function to find cube of the input number
     calc_cube(); 

     //Call function to display the cube
     display_cube();

     //Input next number or 0 to quit
     cout << "Enter new number or 0 to QUIT";

     //END WHILE
 }

     //Clear Screen
     clear(scrn);

     //Call function to Display departing message
     end_message();

     //Pause screen

//END Function Practice - find a cube
/********************************************************************

 *Function Name  :   Calculate Cube
 *Author         :  Natalia Montilla 
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
 float calc_cube (float Ans, int Num); 

 int main {

  //local constants
  int Mltple = 3;     //the number that will be brought to the highest power.  

  //local variables	
  int Num;   //The number entered
  int Ans;   //the answer is the cubed number
  int pow;   //raising the number to a power
/*********************************************/

	//BEGIN Calculate Cube (int Num)

	//Calculate Num to the 3rd power
    Ans = pow (Num, Mltple); 

	//Return the result of calculation
    return (Ans);

 }	//END Function Practice - find a cube

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
 void end_message(string Message); 

 int main {

 //local constants
 string Message = "Have a nice day!";

 //local variables

 //******************************************//


	//BEGIN Display Closing
    
	//Clear the screen
    clear(scrn);

	//Display the closing message
    cout << Message << endl;

	//Pause the screen
    system("PUASE"); 

    //Clear the screen
    clear(scrn);

    //END Function Practice - find a cube
