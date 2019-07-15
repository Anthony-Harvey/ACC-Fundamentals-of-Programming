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
		int getSnowDepth()
		{
			return snowDepth;
		}
		void getData()
		{	
			cout << setw(12) << snowDate << setw(12) << snowDepth << endl;
		}
		
		
};

void objectFunction(int startDate, double snowDepth, SnowTracker objectArray[]);
void outputFunction(string month, SnowTracker objectArray[]);

int main()
{
	string month;
	int startDate = 0;
	//~ int* snowData;
	double snowDepth = 0;
	
	SnowTracker objectArray[WEEK];
	
	
	cout << "Name of the Month" << endl;
	cin >> month;
	cout << "Starting Date" << endl;
	cin >> startDate;
	
	objectFunction(startDate, snowDepth, objectArray);
	
	outputFunction(month, objectArray);
	
	return 0;
	
}
	
void objectFunction(int startDate, double snowDepth, SnowTracker objectArray[])
{
	//~ SnowTracker snowData[WEEK];
	//~ int snowDepth = 0;
	
	for(int i = 0; i < WEEK; i++)
	{
		
		objectArray[i].setSnowDate(startDate + i);
		cout << "Please enter the snow depth for the day of " << i + startDate << endl;
		cin >> snowDepth;
		
		objectArray[i].setSnowDepth(snowDepth);
		
	};
	//~ return objectArray[];
}

void outputFunction(string month, SnowTracker objectArray[])
{
	//~ receive pointer to array of objects
	cout << setw(12) << "Date in: " << endl;	
	cout << setw(12) << month << setw(12) << "Snow Depth" << endl;
	cout << "------------------------------------" << endl;

	for(int i =0; i < WEEK; i++)
	{
		if (objectArray[i].getSnowDepth =
		objectArray[i].getData();
	}
}


