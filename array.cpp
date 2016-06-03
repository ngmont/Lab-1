/**********************************************************************
 *Program Name   :   Function Lab 2
 *Author         :   Natalia Montilla
 *Date           :   March 30th, 2016
 *Course/Section :   CSC 110 ***002
 *Program Description: Modify your simple array lab to use functions. 
 *I will provide you with a main program that you will have to modify.  
 *Break up you array lab to be two *programmer defined function.  
 *The first function will input data into an array. The second 
 *function will *output the contents of the array.
 *
 *BEGIN Array Input Using Sentinel Value
 *   Set Count = 0
 *   Input first value or quit value
 *   WHILE (User did not enter the quit value) 
 *      Call a function to input data into an array
 *           //Store the input in the array at position Count
 *           //Increment Count by 1
 *      IF (the array has been filled)
 *         Output message indicating max inputs have been reached
 *         Set the Input variable to the quit value
 *      ELSE //the array has not been filled
 *         Prompt the user for next input value or quit value
 *      END IF
 *   END WHILE 
 *   Clear Screen
 *   Display Heading
 *   Call a function to output the contents of the array.
 *      //FOR (Each value in the array)
 *      //Display value on its own line
 *   END FOR
 *END Lab01 - Array Input Using Sentinel Value
 *********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//place prototypes here
void fill_array (int array[], int value, int pos);
void display_array (int Pos);

int main()
{
  //local constants
    const int SIZE = 20;      //max size for array
    const int QUIT = -1;      //sentinal value

  //local variables
    int Empty_Array [SIZE];   //empty array
    int Value;                //values to be stored into array
    int Count = 0;            //cont which holds location in the array
    int Pos;                  //tells position in array like count 



      //**************************start main program*********************//
     //BEGIN Array Input Using Sentinel Value

    //Input first value or quit value
    cout << "Enter Value or QUIT: ";
    cin  >> Value; 

    //WHILE (User did not enter the quit value) 
    while (Value != QUIT)
    {

    //Call a function to input data into an array
    fill_array (Empty_Array, Value, Count);


    //IF (the array has been filled)
    if (Count == SIZE)
    {
    //Output message indicating max inputs have been reached
       cout << "Array is now full";
    //Set the Input variable to the quit value
       QUIT >> Value;

     //ELSE the array has not been filled
    }
    else    
    //Prompt the user for next input value or quit value
       cout << "Enter Value or QUIT: ";
       cin  >> Value; 

    //END WHILE 
    }

    //Clear Screen
    //system("cls");

    //Call a function to output the contents of the array.
    display_array (Pos);
    
}//END Lab01 - Array Input Using Sentinel Value

 /*********************************************************************b

 *Function Name  :  Fill the Array Function
 *Author         :   Natalia Montilla 
 *Date           :   
 *Program Description: This program will store the input values into the emtpy array
 *
 *BEGIN Filling the array 
 *     Store the input in the array at position Count
 *     Increment Count by 1
 *END Function Practice -filling the array
 ********************************************************************/
/*void fill_array (int Count) {
   
  //local constants
    const int SIZE = 20;      //max size for array
    const int QUIT = -1;      //sentinal value

  //local variables
    int Empty_Array [SIZE];   //empty array
    int Value;                //values to be stored into array
    int count = 0;            //cont which holds location in the array
    int Pos;                  //tells position in array like count 

********************************************

 //BEGIN Filling the array 
    
    //Store the input in the array at position Count

      Empty_Array[Count] = Value;
      //Increment Count by 1
       Count ++;
      return (Count); 
 }//END Function Practice -filling the array
 */

void fill_array(int array[], int value, int pos) {
	array[pos] = value;
}
 /********************************************************************
 *Function Name  :  Display Array
 *Author         :   Natalia Montilla
 *Date           :   
 *Program Description: Call a function to output the contents of the array.
 *
 *BEGIN Display Array
 *  FOR (Each value in the array)
 *  Display value on its own line
 *END Function Practice - Display Array
 ********************************************************************/
 int displayarray (int Pos){

  //local constants
    const int SIZE = 20;      //max size for array
    const int QUIT = -1;      //sentinal value

  //local variables
    int Empty_Array [SIZE];   //empty array
    int Value;                //values to be stored into array
    int Count = 0;            //cont which holds location in the array

 //******************************************/


  //BEGIN Display Array

    //Display Heading
    cout << "Values in the Array" << endl;

    //FOR (Each value in the array)
    for(Pos = 0; Pos < Count; Pos ++)
    {

    //Display value on its own line
    cout << Empty_Array [Pos] << endl;

    }//END FOR

    cout << endl;

   return (Pos); 
  }
  //END Function Practice - Display Array  
