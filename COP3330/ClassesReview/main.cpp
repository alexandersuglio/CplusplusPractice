#include <iostream>
#include "Header.h" // include definition of class Time
using namespace std;

int main()
{
	Time t; // create Time object

	int &hourRef = t.badSetHour(20);




	cout << "\nInvalid hour after modification: " << t.getHour();
	hourRef = 30;


	t.badSetHour(12) = 74;

	cout << "\n\n*************************************************\n"
		<< "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
		<< "t.badSetHour( 12 ) as an lvalue, invalid hour: "
		<< t.getHour()
		<< "\n*************************************************" << endl;

	cin.get();
} // end main