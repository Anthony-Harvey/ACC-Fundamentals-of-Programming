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
#include <string>

using namespace std;

const int WEEK = 7;

class SnowTracker
{	
	int startDate = 0;
	int snowDate = 0;
	double snowDepth = 0.0;
	
	//	totalSnowDepth should sum each objects snowDepth
	//~ static double s_TotalSnowDepth;
	
	private:
	
	public:
		SnowTracker()
		{
		}
		SnowTracker(int x, double y)
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
		int getSnowDate()
		{
			return snowDate;
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
void sortArray(SnowTracker objectArray[]);
void outputFunction(string month, SnowTracker objectArray[]);

int main()
{
	string month;
	int startDate;
	double snowDepth;
	
	SnowTracker objectArray[WEEK];
	
	
	cout << "Name of the Month" << endl;
	cin >> month;
	cout << "Starting Date" << endl;
	cin >> startDate;
	
	objectFunction(startDate, snowDepth, objectArray);
	sortArray(objectArray);
	outputFunction(month, objectArray);
	
	return 0;
	
}

void objectFunction(int startDate, double snowDepth, SnowTracker objectArray[])
{
	for(int i = 0; i < WEEK; i++)
	{
		
		objectArray[i].setSnowDate(startDate + i);
		cout << "Please enter the snow depth for the day of " << i + startDate << endl;
		while (!(cin >> snowDepth) || snowDepth < 0)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please ensure your entry is a positve integer." << endl;
		}
		
		//	Debug line below:
		cout << "Snow Depth Entered: " << snowDepth << endl;
		
		objectArray[i].setSnowDepth(snowDepth);
		
	};
	//~ return objectArray[];
}

void sortArray(SnowTracker objectArray[])
{
	int tempDate;
	double tempDepth;
	bool swapMade;
	
	do
	{
		swapMade = false;
		for(int i =0; i < WEEK -1; i++)
		{
			if (objectArray[i].getSnowDepth() > objectArray[i+1].getSnowDepth())
			{
				//	The objective:
				//		Preserve Object[i]s member variables
				//		Retrieve and assign Object[i+1]s member variables to Object[i]
				//		Assign preserved Object[i]s member variables to  Object[i+1]
				
				tempDepth = objectArray[i].getSnowDepth();
				tempDate =  objectArray[i].getSnowDate();
				
				cout << "Temp Variable Data: " << tempDepth << "_" << tempDate << endl;
				cout << objectArray[i].getSnowDepth() << "<i and i+1>" << objectArray[i+1].getSnowDepth() << endl;
				cout << objectArray[i].getSnowDate() << "<i and i+1>" << objectArray[i+1].getSnowDate() << endl;
				
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
void outputFunction(string month, SnowTracker objectArray[])
{
	cout << setw(12) << "Date in: " << endl;	
	cout << setw(12) << month << setw(12) << "Snow Depth" << endl;
	cout << "------------------------------------" << endl;
	for(int i =0; i < WEEK; i++)
	{
		objectArray[i].getData();
	}


}
