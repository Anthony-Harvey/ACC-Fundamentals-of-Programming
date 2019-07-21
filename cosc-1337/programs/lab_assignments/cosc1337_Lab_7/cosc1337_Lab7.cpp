//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Lab 7

//	Chapter 11-- Assignment 2, Day of the Year:
//		This program takes an integer representing a day of the year
//		and then calculates the Date (Month and Day).

//	Assumes all years have 365 days...
//	Write a Driver program to make the provided content work.


#include <iostream>
#include <string>
using namespace std;

// This class encapsulates the strategy for solving the problem.	
class DayOfYear
{
	private:
		int day;
	
	public:
		static const int daysAtEndOfMonth[ ];
		static const string monthName[ ];
		
		void print(int day);
};

const int DayOfYear::daysAtEndOfMonth[ ] = {31, 59, 90, 120,
											151, 181, 212, 243,
											273, 304, 334, 365};
const string DayOfYear::monthName[ ]= {	"January", "February", "March", "April",
										"May", "June", "July", "August",
										 "September", "October", "November", "December"};

int main()
{
	int day;
	
	while(day != 0)
    {
		cout << "Please enter the day number: \n\t";
		while (!(cin >> day) || day < 0 || day > 365)
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Please enter the day number (Integers 1-365 only please): " << endl;
			cin >> day;
		}
		
		DayOfYear dateCalc;
		dateCalc.print(day);
		
		cout << "\n\tEnter 0 to quit." << endl;
	};
	return 0;
}

//***************************************
//          DayOfYear::print            *
// Convert and print day of year.       * 
//***************************************                                 
void DayOfYear::print(int day)
{
	int month = 0;
    
	while (daysAtEndOfMonth[month] < day)
		month = (month + 1) %12;

    if (month == 0)
		cout << "\tJanuary " << day << endl;
	else
	{
		  cout << "\tThe specific Date given your provided integer: \n\t";
		  cout << DayOfYear::monthName[month] <<  " " 
		  << day - DayOfYear::daysAtEndOfMonth[month -1] << endl;
	}
}   

