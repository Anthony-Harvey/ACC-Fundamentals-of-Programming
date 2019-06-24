//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Lab 5:		Structures
//	DUE:		Not Sure


//	Chapter 9, page 642
//
//	Hit the Slopes

//	Write a program that can be used by a ski resort to keep track of local snow conditions for one week.
//	It should have a seven-element array of structures or class objects, where each structure or object holds a date and the number of inches of snow in the base on that date.
//	The program should have the user input the name of the month, the starting and ending date of the seven-day period being measured, and then the seven base snow depths.
//	The program should then sort the data in ascending order by base depth and display the results.

//		Here is the beginning of a sample report:
//			
//			Snow Reports for December 12-18
//				Date			Base
//				13				42.3
//				12				42.5
//				14				42.8

//	Comments:
//		This sounds like a dictionary, but it may just be two distinct arrays.


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


struct snowData
{
	int dayNumber;
	float snowHeight;
	
}

//	Function Prototype
void getData(SnowData[], string&, int&, int); // For loop here to accept Snow Depth for each day of the week
void sortData();
void displayData();

const int week = 7;

int main()
{
	string month;
	int startingDate;
	
	
	
	
	
	
	
	
}
