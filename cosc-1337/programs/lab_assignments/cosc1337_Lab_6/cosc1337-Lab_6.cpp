//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Chapter:	10
//	Lab 6:		Days in Current Month
//	DUE:		

	//	Write a program that can determine the number of days in a month for a specified month and year.
	//	
	//	The program should allow a user to enter the following:
	//		Month Number
	//		Year Number
	//
	//	The integers 1 through 12 will be used to identify the months of January through Decemeber.
	//	The user indicates the end of input by entering 0 for the month and year.
	//	
	//	It should perform the following:
	//		Determine how many days are in the specified month
	//		Output the number of days in the current month
	//	
	//	Use the following creiteria to identify Leap Years:
	//	1.	'Y' is divisible by 100.
	//		'Y' is also divisible by 400.
	//			For example: 2000 = Leap Year, but 2100 isn't.
	//	
	//	2.	'Y' is not divisible by 100.
	//		'Y' is divisible by 4.
	//			For example: 2008 = Leap Year, but 2009 isn't.
	//	
	//	Example Output:
	//		Enter month and year: 2 2008[ENTER]
	//			29 days
	//		Enter month and year: 0 0[ENTER]
	//			The current month, September 2009, has 30 days.

#include <iostream>
#include <string>

using namespace std;

const int daysInMonth[ ] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const string monthName[ ]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

bool leapYearFunction(int year);
void outputFunction(int year, int month, bool leapYear);

int main()
{

	bool leapYear = false;
	int year, month;
	
	//	User is prompted for the Date ( Year, Month )
	cout << "To calculate the number of days in any given month, please enter the Year and Month in whole numbers only: ";
	cout << "(example: 1985 12)\n\t";
	
	cin >> year >> month;
	cout << year << month << endl;
	
	leapYear = leapYearFunction(year);
	outputFunction(year, month, leapYear);
	return 0;
}

bool leapYearFunction(int year)
{
	bool leapYear = false; 
	
	if(year % 4 && year % 100)
		leapYear = year % 400;
	
	if(year % 4 && !(year % 100))
		leapYear = true;
		
	cout << "leapYear is currently set to: " << leapYear << endl;
	return leapYear;
}
	
void outputFunction(int year, int month, bool leapYear)
{
	int days;
	
	days = daysInMonth[month - 1];
	if(leapYear == true)
	{
		cout << "The provided year is a Leap Year. With that in mind, we have the following results: \n\t";
		days++;
	}
	else
	{
		cout << "The provided year is not a Leap Year. With that in mind, we have the following results: \n\t";
	}
		
	cout << "In the year " << year << "," << monthName[month+1] << " has " << days << " days." << endl;
}
