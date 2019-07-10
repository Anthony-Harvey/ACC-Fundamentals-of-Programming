//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Lab 4:		Driver's License Exam
//	DUE:		

	//	Chapter 9, pg.642
	//	
	//	Write a program that can be used by a ski resort to keep track of local snow conditions for one week.
	//	
	//	It should have a seven-element array of structures or class objects,
	//	where each structure or object holds the following:
	//		Date
	//		Inches of snow
	//	
	//	The program should have the user input the following:
	//		Name of the Month
	//		Starting and Ending date of the Seven-day period being measured
	//		Seven base snow depths for that week
	//
	//	The program should then display the following:
	//		DEPTH by ASCENDING order
	//
	//	Given Example Output:
	//		
	//		Snow Report		December	 12 - 18
	//		Date			Base
	//		13				42.3
	//		12				42.5
	//		14				42.8
	//
	//

#include <iostream>
#include <iomanip>	//	Necessary?
#include <string>	//	Necessary?

using namespace std;

const int WEEK = 7;

class SnowTracker
{	
	int date;
	double snowDepth;
	//	totalSnowDepth should sum each objects snowDepth
	static double s_TotalSnowDepth;
	
	private:
	
	public:
		SnowTracker(int startDate, int y)
		{
			date = startDate;
			snowDepth = y;
		}
		
		static double s_GetTotalSnowDepth()
		{
			
		}
		void setDate(int x, double y)
		{
			date = x;
		}
		
		void setSnowDepth()
		{	
			snowDepth = y;
		}
		
};

void inputFunction();
void objectFunction(int startDate, double snowDepth);

int main()
{
	inputFunction();
	objectFunction();
	
	return 0;
	
}
	
void inputFunction()
{
	string month;
	int startDate;
	double snowDepth;
	
	cout << "Name of the Month" << endl;
	cin >> month;
	
	cout << "Starting Date" << endl;
	cin >> startDate;
	//~ SnowTracker snowData[WEEK];
	for(int i = 0; i < WEEK; i++)
	{
	cout << "Seven base snow depths for that week" << endl;
	cin >> snowDepth;
	};
	
}
void objectFunction(int startDate, double snowDepth)
{
	SnowTracker snowDayDepth;
	snowData[i].setMemberFunction(startDate);
	SnowTracker::s_GetTotalSnowDepth
}

