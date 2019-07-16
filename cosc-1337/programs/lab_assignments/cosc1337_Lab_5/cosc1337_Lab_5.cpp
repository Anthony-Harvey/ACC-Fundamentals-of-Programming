//	Anthony Harvey
//	Class:	cosc1337
//	Professor: Sravan Kumpati
//	Lab Assignment: 5

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
	//	Notes:
	//	-	I notice the assignment doesn't really mention input validation at all..
	//	-	I didn't set this program to accurately follow the number of days in a given month.

#include <iostream>
#include <iomanip>	//	Necessary?
#include <string>

using namespace std;

const int WEEK = 7;

class SnowTracker
{	
	int startDate = 0;
	int snowDate = 0;
	float snowDepth = 0.0;
	
	//	totalSnowDepth should sum each objects snowDepth
	//~ static float s_TotalSnowDepth;
	
	private:
	
	public:
		SnowTracker()
		{
		}
		SnowTracker(int x, float y)
		{
			snowDate = x;
			snowDepth = y;
		}
		
		//~ static float s_GetTotalSnowDepth()
		//~ {
			
		//~ }
		void setSnowDate(int x)
		{
			snowDate = x;
		}
		void setSnowDepth(float y)
		{	
			snowDepth = y;
		}
		int getSnowDate()
		{
			return snowDate;
		}
		float getSnowDepth()
		{
			return snowDepth;
		}
		void getData()
		{	
			cout << setw(12) << snowDate << setw(12) << snowDepth << endl;
		}	
};

void objectFunction(int startDate, SnowTracker objectArray[]);
void sortArray(SnowTracker objectArray[]);
void outputFunction(string month, int startDate, SnowTracker objectArray[]);

int main()
{
	string month;
	int startDate;
	
	SnowTracker objectArray[WEEK];
	
	
	cout << "Name of the Month" << endl;
	cin >> month;
	cout << "Starting Date" << endl;
	cin >> startDate;
	
	objectFunction(startDate, objectArray);
	sortArray(objectArray);
	outputFunction(month, startDate, objectArray);
	
	return 0;
	
}

void objectFunction(int startDate, SnowTracker objectArray[])
{
	float snowDepth;
	
	for(int i = 0; i < WEEK; i++)
	{
		
		objectArray[i].setSnowDate(startDate + i);
		cout << "Please enter the snow depth for the day of " << i + startDate << endl;
		while (!(cin >> snowDepth) || snowDepth < 0)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please ensure your entry is a positve number." << endl;
		}
		
		//	Debug line below:
		//~ cout << "Snow Depth Entered: " << snowDepth << endl;
		
		objectArray[i].setSnowDepth(snowDepth);
	};
	//~ return objectArray[];
}

void sortArray(SnowTracker objectArray[])
{
	int tempDate;
	float tempDepth;
	bool swapMade;
	
	do
	{
		swapMade = false;
		for(int i = 0; i < WEEK -1; i++)
		{
			if (objectArray[i].getSnowDepth() > objectArray[i+1].getSnowDepth())
			{
				//	The objective:
				//		Preserve Object[i]s member variables
				//		Retrieve and assign Object[i+1]s member variables to Object[i]
				//		Assign preserved Object[i]s member variables to  Object[i+1]
				
				tempDepth = objectArray[i].getSnowDepth();
				tempDate =  objectArray[i].getSnowDate();
				
				objectArray[i].setSnowDepth(objectArray[i+1].getSnowDepth());
				objectArray[i].setSnowDate(objectArray[i+1].getSnowDate());
				
				objectArray[i+1].setSnowDepth(tempDepth);
				objectArray[i+1].setSnowDate(tempDate);
				
				swapMade = true;
			}	
					
		}
	}	
	while(swapMade);
}

void outputFunction(string month, int startDate, SnowTracker objectArray[])
{
	cout << setw(12) << month << " " << startDate << "-" << startDate + (WEEK - 1) << endl;	
	cout << setw(12) << "Date" << setw(12) << "Snow Depth" << endl;
	cout << "------------------------------------" << endl;
	for(int i =0; i < WEEK; i++)
	{
		objectArray[i].getData();
	}
}
