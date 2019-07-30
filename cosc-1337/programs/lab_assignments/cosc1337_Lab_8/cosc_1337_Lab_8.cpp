//	Anthony Harvey
//	Class:	cosc1337
//	Professor: Sravan Kumpati
//	Lab Assignment: 8

//	A corporation has six divisions, each responsible for sales to different geographic locations.
//	Desgin a DivSales class that keeps sales data for a division, with the following members:
//	-	[DONE]	An array with four elements for holding four quarters of sales figures for each division
//	-	[DONE]	A private static variable for holding the total corporate sales for all divisions for the entire year.
//	-	[DONE]	A member function that takes four arguments, each assumed to be the sales for a quarter.
//				The value of the arguments should be copied into the array that holds the sales data.
//				The total of the four arguments should be added to the static variable that holds the total yearly corporate sales
//	-	[DONE]	A function that takes an integer argument within the range of 0 to 3.
//				The argument is to be used as a subscript into the division quarterly sales array.
//				The function should return the value of the array element with that subscript.
//		
//	Write a program that creates an array of six DivSales objects.
//	The program should ask the user to enter the sales for four quarters for each division.
//	After the data is entered, the program should display a table showing the division sales for each quarter.
//	The program should then display the toal corporate sales for the year.

#include <iostream>
#include <iomanip>
#include <string>

const int DIVISIONS = 6;

using namespace std;

class DivSales
{
	//	if it's stupid and it works, it's stupid!...er wait..
	double div1, div2, div3, div4, div5, div6;
	double quarterSum = 0;
	
	private:
		
		
	public:
		static double 	totalSales;
		static double 	totalDivOne, totalDivTwo, totalDivThree,
						totalDivFour, totalDivFive, totalDivSix;
		
		DivSales()
		{
		}
		void setQuarter(double a, double b, double c, double d, double e, double f)
		{
			//	Thisssss.....
			div1 = a;
			div2 = b;
			div3 = c;
			div4 = d;
			div5 = e;
			div6 = f;
			
		}
			
		
		static void sumSales()
		{
			totalSales += totalSales;
		}
		
		void setDivisionSales()
		{
			cout << "Provide the sales data, separated by empty spaces, for all 6 Divisions.\n\t(Ex: 222342 123456 100.20 5 6 7007).\n\t" << endl;
			cin >> div1 >> div2 >> div3 >> div4 >> div5 >> div6;
			
			totalSales 		+= (div1 + div2 + div3 + div4 + div5 + div6);
			quarterSum 		= (div1 + div2 + div3 + div4 + div5 + div6);
			
			totalDivOne 	+= div1;
			totalDivTwo 	+= div2;
			totalDivThree 	+= div3;
			totalDivFour 	+= div4;
			totalDivFive 	+= div5;
			totalDivSix 	+= div6;
			//quartersArray[i].setQuarter(input1, input2, input3, input4, input5, input6);
		}
		
		double *getQuarterSum()
		{
			//return (div1 + div2 + div3 + div4 + div4 + div6);
			cout << "\t$" << quarterSum;
		}
		
		void getInfo()
		{
			cout << setw(12) << div1 << setw(12) << div2 << setw(12) << div3
				 << setw(12) << div4 << setw(12) << div5 << setw(12) << div6 << endl;
		
		}
		
};

//	I feel like this is cumbersome...but it's actually less work than other methods lol
double 	DivSales::totalSales = 0;
double	DivSales::totalDivOne = 0, DivSales::totalDivTwo = 0, DivSales::totalDivThree = 0,
		DivSales::totalDivFour = 0, DivSales::totalDivFive = 0, DivSales::totalDivSix = 0;

void objectInput(DivSales quartersArray[]);
void dataOutput(DivSales quartersArray[]);
void menuSystem(DivSales quartersArray[]);

int main()
{
	DivSales quartersArray[4];
	
	
	cout << "\tWelcome to GloboCorp...We're watching! :)\n" << endl;
	cout << "\t\t(GloboCorps Friendly but slightly threatening opening statements are trademarked by GloboCorp)\n\n" << endl;
	
	
	objectInput(quartersArray);
	dataOutput(quartersArray);
	menuSystem(quartersArray);

	return 0;
}

void objectInput(DivSales quartersArray[])
{
	cout << "We will need to collect the Quarterly Sales Data for all of the 6 Divisions of Globo Corp.\nComply or be terminated.\n" << endl;
	for(int i=0; i < 4; i++)
	{
		cout << "Quarter " << i+1 << "." << endl;
		quartersArray[i].setDivisionSales();
	}
}

void dataOutput(DivSales quartersArray[])
{
	cout << "\n";
	cout << setw(12) << "Division 1" << setw(12) << "Division 2" << setw(12) << "Division 3"
		 << setw(12) << "Division 4" << setw(12) << "Division 5" << setw(12) << "Division 6" << endl;
	cout << setw(12) << "---" << setw(12) << "---" << setw(12) << "---"
 		 << setw(12) << "---" << setw(12) << "---" << setw(12) << "---" << endl;
 		 
	for(int i = 0; i < 4; i++)
	{
		quartersArray[i].getInfo();
		
		if(i >= 3)
		{
			cout << setw(12) << "---" << setw(12) << "---" << setw(12) << "---"
			 	 << setw(12) << "---" << setw(12) << "---" << setw(12) << "---" << endl;
			 	 
			cout << setw(12) << DivSales::totalDivOne << setw(12) << DivSales::totalDivTwo << setw(12) << DivSales::totalDivThree
				 << setw(12) << DivSales::totalDivFour << setw(12) << DivSales::totalDivFive << setw(12) << DivSales::totalDivSix << endl;
				 
		}
		
	}
	cout << "\nTotal Sales across all Divisions: $" << DivSales::totalSales << endl;
	
}

void menuSystem(DivSales quartersArray[])
{
	int quit = 1;
	
	cout << "\nYour compliance has been added to your employee review docket.\n" << endl;
	while(quit != 0)
	{
		cout << "\n\nYou can now choose to get specific data:\n" << endl;
		cout << "1. " << setw(12) << "Get Data on Quarter 1" << endl;
		cout << "2. " << setw(12) << "Get Data on Quarter 2" << endl;
		cout << "3. " << setw(12) << "Get Data on Quarter 3" << endl;
		cout << "4. " << setw(12) << "Get Data on Quarter 4" << endl;
		
		cout << "Enter '0' if you wish to quit:" << endl;
		cin >> quit;
		
		switch(quit)
		{
			case 1:
				cout << "You have chosen get total Quarter One Sales.\n\t";
				quartersArray[0].getQuarterSum();
				
				break;
			case 2:
				cout << "You have chosen get total Quarter Two Sales.\n\t";
				quartersArray[1].getQuarterSum();
				break;
			case 3:
				cout << "You have chosen get total Quarter Three Sales.\n\t";
				quartersArray[2].getQuarterSum();
				break;
			case 4:
				cout << "You have chosen get total Quarter Four Sales.\n\t";
				quartersArray[3].getQuarterSum();
				break;
			case 0:
				
			cout << "You have chosen to end your Employment here at GloboCorp.\n" << "..." << "Security has been notified.";	
				break;
				
		}
	}
}
