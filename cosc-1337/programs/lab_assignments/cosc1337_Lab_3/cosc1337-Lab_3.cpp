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
	//	Demonstrate the class by writing a simple program that use it.
	//	This program should validate the user inputs to ensure that negative values are not accepted for item number, quantity, or cost.
	//
	//
	
	
//	Psuedo Code Below
//		I'm undecided on whether or not it's better to have a function for the 'userChoice' or the class object setters/getters.
//		Maybe it would be more interesting if there was a function for each set of actions, to make the 'main' function more streamlined.



//	If I use an Inenvtory.h file, it will contain the class declaration(s)

#include <iostream>
#include <string>

using namespace std;

class Inventory
{
	int itemNumber;
	int quantity;
	double cost;
	
	private:
		//~ asd
		
	public:
		Inventory()
		{
		}
		
		Inventory(int x, int y, float z)
		{
			itemNumber = 1;
			quantity = 1;
			cost = 0;
		}
		

		//~ setItemNumber(){itemNumber = 0;}
		//~ setQuantity(){;}
		//~ setCost(){;}
		//~ getItemNumber(){;}
		int getQuantity()
		{
			return quantity;
		}
		double getCost(){ return cost;}
		//~ getTotalCost(){;}
};

void function2(int& userChoice);
int main()
{
	int userChoice = 0;
		
	cout << "Walmart Inventory Management Software: " << endl;
	cout << "\tRemember... the customer is always something something!\n" << endl;
	
	cout << "Available Inventory Management Choices" << endl;
	cout << "\t1. Set the Item Number for the new Item" << endl;
	cout << "\t2. Set the Quantity of the Item in the Inventory" << endl;
	cout << "\t3. Set the Item Number for the new Item" << endl;
	
	cout << "\t4. Get the Item Number for an item in the Inventory" << endl;
	cout << "\t5. Get the Quantity of an item in the Inventory" << endl;
	cout << "\t5. Get the Cost of an item in the Inventory" << endl;
	cout << "\t6. Get the Total Cost of a specific Item in the Inventory" << endl;
	
	cout << "\t7. Add a new Item to the Inventory: " << endl;
	cout << "\t8. Remove an Item from the Inventory" << endl;
	cout << "\t9. Quit" << endl; 	
	
	
	//	Accept user menu choice and then pass the userChoice to an function that will manipulate the class Inventory object
	while (userChoice != 9)
	{
		while (!(cin >> userChoice) || userChoice < 0 || userChoice > 9)
			{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please ensure your entry is a positve integer between 1 and 9." << endl;
			}
		function2(userChoice);
	}


	cout << "Done!" << endl;
	return 0;
}

void function2 (int& userChoice)
{
	cout << "function called" << userChoice << endl; 
	
	//~ Example of instantiating with an default constructor
	Inventory stockItem2(10, 1, 5);
	
	//~ Example of instantiating with an overload constructor
	//~ Inventory stockItem2(120, 20, 20.20f)
	
	//~ Example of using the getQuantity getter function
	cout << "Quantity	: " << stockItem2.getCost() << endl;
	
	//~ if (userChoice == 1)
	//~ {
		//~ asdf
	//~ }
	//~ else if (userChoice == 2) 
	//~ {
		//~ asdf
	//~ }
	//~ else if (userChoice == 3)
	//~ {
		//~ asdf
	//~ }
	//~ else if (userChoice == 4)
	//~ {
		//~ asdf
	//~ }
	//~ else (userChoice == 5)
	//~ {
		//~ asdf
	//~ }
	
}
