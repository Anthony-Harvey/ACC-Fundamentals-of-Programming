//	Lab 7


//	Write a Driver program to make the provided content work.

//	STDUY:	Research static const in Classes


// Chapter 11-- Assignment 2, Day of the year.
// This program takes an integer representing a day of the 
// year and translates it to an description of the form
// month - day of month.

// Assumes all years have 365 days

#include <iostream>
#include <string>
using namespace std;

// This class encapsulates the strategy for solving the problem.
class DayOfYear
{
public:
   static const int daysAtEndOfMonth[ ];
   static const string monthName[ ];
   void print();
   void setDay(int day){this->day = day;}
private:
   int day;       
};

// These are self-explanatory, eh?
const int DayOfYear::daysAtEndOfMonth[ ] = {31, 59, 90, 120, 
                                       151, 181, 212, 243, 273,
                                       304, 334, 365};
const string DayOfYear::monthName[ ]= {"January", "February", "March",
                 "April", "May", "June", "July",
                 "August", "September", "October",
                 "November", "December"};


//***************************************
//          DayOfYear::print            *
// Convert and print day of year.       * 
//***************************************                                 
void DayOfYear::print()
{
    int month = 0;
    
    while (daysAtEndOfMonth[month] < day)
         month = (month + 1) %12;
    // DaysAtEndOfMonth >= day
    if (month == 0) 
      cout << "January " << day;
    else
      {
           cout << DayOfYear::monthName[month] <<  " " 
                << day - DayOfYear::daysAtEndOfMonth[month-1];
      }    
}

int main()
{
    //write the driver program to make it work
	cout << "Please enter the day";
	int day;
	cin >> day
	if (day < 0 || day > 365)
	{
		cout "invalid range for a day\n" << endl;
		exit(1);
	}
		
	
	
	
    return 0;
}
                                  

