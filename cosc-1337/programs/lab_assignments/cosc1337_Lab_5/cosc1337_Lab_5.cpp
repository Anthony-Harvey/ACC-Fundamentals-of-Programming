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
	int startDate = 0;
	int snowDate = 0;
	double snowDepth = 0;
	
	//	totalSnowDepth should sum each objects snowDepth
	//~ static double s_TotalSnowDepth;
	
	private:
	
	public:
		SnowTracker()
		{
		}
		SnowTracker(int x, int y)
		{
			snowDate = x;
			snowDepth = y;
		}
		
		//~ static double s_GetTotalSnowDepth()
		//~ {
			
		//~ }
		void setSnowDate(int x)
		{
			snowDate = x;
		}
		void setSnowDepth(double y)
		{	
			snowDepth = y;
		}
		void getData()
		{	
			cout << "\tDate: " << snowDate << "\n\t" << snowDepth << endl;
		}
		
		
};

void objectFunction(int startDate, double snowDepth);

int main()
{
	string month;
	int startDate = 0;
	double snowDepth = 0;
	
	cout << "Name of the Month" << endl;
	cin >> month;
	cout << "Starting Date" << endl;
	cin >> startDate;
		
	objectFunction(startDate, snowDepth);
	//~ objectFunction();
	
	return 0;
	
}
	
void objectFunction(int startDate, double snowDepth)
{
	SnowTracker snowData[WEEK];
	
	for(int i = 0; i < WEEK; i++)
	{
		snowData[i].setSnowDate(startDate + i);
		cout << "Please enter the snow depth for the day of " << i + startDate << endl;
		cin >> snowDepth;
		
		snowData[i].setSnowDepth(snowDepth);
		//~ snowData[1].getData();
		
	};
	
}

