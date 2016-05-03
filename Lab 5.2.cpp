
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{


	//local constants
	const int QUIT = -1; //sentinal value
	
	//local variables
	int Num;           //any number
	int Value;         // any number to test
	int MAX = 0;       //the max is one half the number
	int MIN = 2;       //smallest number
	/**************************start main program*********************/
	
    //BEGIN Calculating Prime Numbers
    
    //Input Num
    cout << "Input Num or Quit: ";
    cin  >> Num;

    MAX = .5 * Num; 
    
    cout << "MAX = ";
    cout << MAX;
    

       
}
