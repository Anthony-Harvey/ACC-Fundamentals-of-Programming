//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Lab 3:		Inventory Class
//	DUE:		

	//	Chapter 7, pg.501
	//	
	//	Design an Inventory class that can hold information for an item in a retail store's inventory.
	//	The class should have the following private member variables:
	//		itemnumber		An int that holds the item's number
	//		quantity		An int that holds the quantity on hand
	//		cost			A double that holds the wholesale per-unit cost of the item
	//
	//	The class should have the following public member functions:
	//		default constructor		Sets all member variables to 0
	
	//		constructor #2			Accepts an item's number, quantity, and cost as arguments.
	//								Calls other class functions to copy these values into the appropriate member variables.
	//								Then calls the 'setTotalCost' function.
	//		
	//		setItemNumber			Accepts an int argument and copies it into the 'itemNumber' member variable.
	//		setQuantity				Accepts an int argument and copies it into the 'quantity' member variable.
	//		setCost					Accepts a double argument and copies it into the 'cost' member variable.
	//		getItemNumber			Returns the value in 'itemNumber'
	//		getQuantity				Returns the value in 'quantity'
	//		getCost					Returns the value in 'cost'
	//		getTotalCost			Computes and returns the 'totalCost'
	//
	//
	//	Demonstrate the class by writing a simple program that uses it.
	//	This program should validate the user inputs to ensure that negative values are not accepted for item number, quantity, or cost.
	//
	//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Inventory
{
	int itemNumber,
		quantity;
		
	double cost;
	double totalCost;
	
	private:
		//~ asd
		
	public:
	
		//	Default constructor
		Inventory()
		{
			itemNumber = 0;
			quantity = 0;
			cost = 0;
			totalCost = 0;
		}
		
		//	Constructor
		Inventory(int x, int y, float z)
		{
			itemNumber = x;
			quantity = y;
			cost = z;
			totalCost = 0;
		}
		
		void setItemNum(int x)
		{
			itemNumber = x;
		}
		
		void setQuantity(int y)
		{
			quantity = y;
		}
		
		void setCost(int z)
		{
			quantity = z;
		}
		
		//~ setCost(){;}
		
		int getItemNumber()
		{
			return itemNumber;
		}
		
		int getQuantity()
		{
			return quantity;
		}
		
		double getCost()
		{
			return cost;
		}
		
		double getTotalCost()
		{
			totalCost = (cost * quantity);
			return totalCost;
		}
		void getSummary()
		{
			cout << setw(15) << "Item Number: " << setw(12) << getItemNumber() << endl;
			cout << setw(15) << "Quantity: " << setw(12)  << getQuantity() << endl;
			cout << setw(15) << "Cost: " << setw(12) << getCost() << endl;
			cout << setw(15) << "Total Cost: " << setw(12) << getTotalCost() << endl;
		}
};

//	Function Prototype
void function2(int& menuChoice);


int main()
{
	int menuChoice = 0,
		subMenuChoice = 0,
		itemNumber = 0,
		itemQuantity = 0;
	double itemCost = 0;
	double grossCost = 0;
	
	const int SIZE = 5;
	Inventory itemList[SIZE];
		
	cout << "Walmart Inventory Management Software: " << endl;
	cout << "\tRemember... the customer is always something something!\n" << endl;
	

	
	while (menuChoice != 3)
	{
		cout << "\nAvailable Inventory Management Choices" << endl;
		cout << "\t1. Inventory Management" << endl;
		cout << "\t2. Inventory Analytics" << endl;
		cout << "\t3. Quit" << endl;
		cout << "\tPlease select an option: \n";

		while (!(cin >> menuChoice) || menuChoice < 0 || menuChoice > 3)
			{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please ensure your entry is a positve integer between 1 and 3." << endl;
			}
			
		if (menuChoice == 1)
		{
			cout << "\t1. Create 5 Items with already known Costs and Quantities" << endl;
			cout << "\t2. Create a default Item" << endl;
			cout << "\t3. Return to previous Menu" << endl;
			
			while (!(cin >> subMenuChoice) || subMenuChoice < 0 || subMenuChoice > 3)
				{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Please ensure your entry is a positve integer between 1 and 3." << endl;
				}
			//	User wants to Create New Item
			
			if (subMenuChoice == 1)
			{
				
				for (int i = 0; i < 5; i++)
				{
					cout << "We will now create a new item, but we need some information." << endl;
					
					cout << "Please enter the Item Number: " << endl;
					while (!(cin >> itemNumber) || menuChoice < 0)
					{
						cin.clear();
						cin.ignore(1000, '\n');
						cout << "Please ensure your entry is a positve integer." << endl;
					}
					
					cout << "Please enter the Item Quantity: " << endl;
					while (!(cin >> itemQuantity) || menuChoice < 0)
					{
						cin.clear();
						cin.ignore(1000, '\n');
						cout << "Please ensure your entry is a positve integer." << endl;
					}
					
					cout << "Please enter the Item Cost: " << endl;
					while (!(cin >> itemCost) || menuChoice < 0)
					{
						cin.clear();
						cin.ignore(1000, '\n');
						cout << "Please ensure your entry is a positve integer." << endl;
					}
						
					//	Inventory newItemPlaceholder(itemNumber, itemQuantity, itemCost);
					//itemList[i]
					itemList[i] = Inventory(itemNumber, itemQuantity, itemCost);
					cout << "\n";
					
					//itemList[i] = newItemPlaceholder;
					itemList[i].getSummary();
				}
			}
			else if (subMenuChoice == 2)
			{
				cout << "\nCreating a new item with default values and assigning it to the last spot in your Inventory list." << endl;
				Inventory newItemPlaceholder;
				itemList[4] = newItemPlaceholder;
			}
				
		}
		
		if (menuChoice == 2)
		{
			//	User wants to perform Inventory Analytics
			cout << "\n";
			
			for(int j = 0; j < 5; j++)
			{
				cout<< fixed;
				cout << "\n" << setprecision(2);
				itemList[j].getSummary();
				grossCost += itemList[j].getTotalCost();
			}
			cout<< fixed;
			cout << "\nThe Gross Cost of your current Inventory is: \t" << setprecision(2) << grossCost << endl;
			grossCost = 0;
		}
			
		if (menuChoice == 4)
		{
			cout << menuChoice;
		}
	}
	cout << "\nDone!" << endl;
	return 0;
}
