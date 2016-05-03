/********************************************************************
 *Program Name   :   Function Practice - calculate GPA
 *Author         :   Natalia Montilla	
 *Date           :   April 27th, 2016
 *Program Description: This program will find the gpa for a college 
 *   student.
 *BEGIN Function Practice - find a cube
 *   Initialize total grade points to 0
 *   Initialize total credit hours to 0
 *   Input student name
 *   Input a grade or -1 to quit
 *   WHILE (grade entered is not QUIT)
 *       Input # of credit hours
 *       Call function to calculate grade points
 *       add grade points to total grade points
 *       add credit hours to total credit hours
 *       Input next number or 0 to quit
 *   END WHILE
 *   Call Function to calculate gpa
 *   Call function to Display name and gpa
 *   Pause screen
 *END Function Practice - find a cube
 ********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//place prototypes here
float calc_grade_pts (float Grade, int Credit_Hrs)
float calc_gpa (float Total_Credit_HRS, int Total_Grade_Points)
void display_data (string Name, float GPA)

int main()
{
	//local constants
	const int QUIT = -1;
	
	//local variables
        float Total_Grade_Points = 0;
        int Total_Credit_HRS = 0;
	float Grade;
	float Credit_Hrs;
	float Grade_Pts;
	string Name;
	float GPA; 
	
	/*************************************************************/

	//input student name
	cout << "\n\n\t\tEnter Student Name      : ";
	cin  >> Name;
	
	//input grade for first course or quit
	cout << "\t\tEnter Grade (-1 to quit): ";
	cin  >> Grade;
	
	//while grade isn't the quit value
	while (Grade != QUIT)
	{
		//input grade for first course or quit
		cout << "t\tEnter Credit Hours: ";
		cin  >> Credit_Hrs;
		
		//call function to calc grade points
	    Grade_Pts = calc_grade_pts (Grade, Credit_Hrs);
		
		//add grade points to total grade points
		Total_Grade_Points += Grade_Pts; 
		
		//add credit hours to total credit hours
		Total_Credit_HRS += Credit_Hrs; 
		
		//input grade for first course or quit
		cout << "\t\tEnter Grade (-1 to quit): ";
		cin  >> Grade;
		
	}//end while
	
	//call function to calcuate gpa
	GPA = calc_gpa (Total_Credit_HRS,Total_Grade_Points);
	//call function to display name and gpa
    void display_data (string Name, float GPA)
	
}//end main

/********************************************************************
 *Function Name  :   Calculate grade points
 *Author         :   
 *Date           :   
 *Program Description: 
 *
 *BEGIN Calculate Grade Points (int grade, int credit hours)
 *   multiply the grade times the Credit hours
 *	 return Grade points
 *END Function Practice - find a cube
 ********************************************************************/
 float calc_grade_pts (float Grade, int Credit_Hrs)
 {
 	//local constants
	
	//local variables
    float Grade_Pts; 
	
	/*************************************************************/
  
 	//multiply the grade times the Credit hours
 	Grade_Pts = Grade * Credit_Hrs; 
 	
 	//return Grade points
     return Grade_Pts;  
}
 /********************************************************************
 *Function Name  :   Calculate GPA
 *Author         :   
 *Date           :   
 *Program Description: 
 *
 *BEGIN Calculate GPA (total credit hours, total grade points)
 *   
 *END Function Practice - find a cube
 ********************************************************************/
float calc_gpa (float Total_Credit_HRS, int Total_Grade_Points)
{

  //local constants
  
  //local variables
  float GPA; 
  
  	/*************************************************************/
  
  GPA = Total_Grade_Points / Total_Credit_HRS; 
  
  return GPA; 
 
 
}
 /********************************************************************
 *Function Name  :   Display
 *Author         :   
 *Date           :   
 *Program Description: 
 *
 *BEGIN Display(student name, gpa)
 *   
 *END Function Practice - find a cube
 ********************************************************************/
  void display_data (string Name, float GPA)
 {
  //local constants
   
   
  //local variables
  string Name;
  float GPA; 
   
  /*************************************************************/
  
  //Dispalay Name
  
  //Display GPA

}
