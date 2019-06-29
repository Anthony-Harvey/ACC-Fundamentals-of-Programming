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
#include <string>

using namespace std;

class Inventory
{
	int itemNumber;
	int quantity;
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
		
		void itemNumSet(int x)
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
};

//	Function Prototype
void function2(int& menuChoice);

int main()
{
	int menuChoice = 0;
	int subMenuChoice = 0;
	int itemNumber = 0;
	int itemQuantity = 0;
	double itemCost = 0;
		
	cout << "Walmart Inventory Management Software: " << endl;
	cout << "\tRemember... the customer is always something something!\n" << endl;
	

	
	while (menuChoice != 4)
	{
		cout << "Available Inventory Management Choices" << endl;
		cout << "\t1. Create a new Item" << endl;
		cout << "\t2. Inspect the new Item" << endl;
		cout << "\t3. Inventory Analytics" << endl;
		cout << "\t4. Quit" << endl;
		cout << "Please select an one of the 4 choices: \n";

		while (!(cin >> menuChoice) || menuChoice < 0 || menuChoice > 4)
			{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please ensure your entry is a positve integer between 1 and 9." << endl;
			}
			
		if (menuChoice == 1)
			{
				//	User wants to Create New Item
				Inventory newItemPlaceholder;
				cout << "\tWe will now create a new item, but we need some information." << endl;
				cout << "Please enter the Item Number: " << endl;
			
				while (!(cin >> itemNumber) || menuChoice < 0)
				{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Please ensure your entry is a positve integer." << endl;
				}
				newItemPlaceholder.itemNumSet(itemNumber);
				
				
				cout << "Please enter the Item Quantity: " << endl;
				while (!(cin >> itemNumber) || menuChoice < 0)
				{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Please ensure your entry is a positve integer." << endl;
				}
				newItemPlaceholder.setQuantity(itemQuantity);
				
				cout << "Please enter the Item Cost: " << endl;
				while (!(cin >> itemNumber) || menuChoice < 0)
				{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Please ensure your entry is a positve integer." << endl;
				}
				newItemPlaceholder.setCost(itemCost);
				
			}
		
		if (menuChoice == 2)
		{
			//	User wants to Inspect the New Item
			while (subMenuChoice != 5)
			{
				cout << "You are now reviewing the new inventory item: \n";
				cout << "\t1. Get the Item Quantity" << endl;
				cout << "\t2. Get the Item Cost" << endl;
				cout << "\t3. Change the Item Quantity" << endl;
				cout << "\t4. Change the Item Cost" << endl;
				cout << "\t5. Quit" << endl;
				
				while (!(cin >> subMenuChoice) || subMenuChoice < 0 || subMenuChoice > 5)
					{
						cin.clear();
						cin.ignore(1000, '\n');
						cout << "Please ensure your entry is a positve integer between 1 and 5." << endl;
					}
					
				if (menuChoice == 1)
				{
					//	Get the Item Quantity
					while (!(cin >> itemQuantity) || itemQuantity > 0)
					{
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Please ensure your entry is a positve integer." << endl;
					}
					newItemPlaceholder.getQuantity();
				}
			
				if (menuChoice == 2)
				{
					//	Get the Item Cost
					while (!(cin >> itemCost) || itemCost > 0)
					{
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Please ensure your entry is a positve integer." << endl;
					}
					newItemPlaceholder.getCost();
				}
				
				if (menuChoice == 3)
				{
					//	Change the Item Quantity
					while (!(cin >> itemQuantity) || itemQuantity > 0)
					{
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Please ensure your entry is a positve integer." << endl;
					}
					newItemPlaceholder.setQuantity(itemQuantity);
				}
			
				if (menuChoice == 4)
				{
					//	Change the Item Cost
					while (!(cin >> itemCost) || itemCost > 0)
					{
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Please ensure your entry is a positve integer." << endl;
					}
					newItemPlaceholder.setCost(itemCost);
				}
				
				//~ if (menuChoice == 5)
				//~ {
					//~ //	Quit back to primary menu
					
				//~ }
				
				
			}
		}
		
		if (menuChoice == 3)
		{
			//	User wants to perform Inventory Analytics
			
		}
			
		if (menuChoice == 4)
		{
			
		}
	}
	
	//~ cout << "\t1. Set the Item Number for the new Item" << endl;
	//~ cout << "\t2. Set the Quantity of the Item in the Inventory" << endl;
	//~ cout << "\t3. Set the Item Number for the new Item" << endl;
	
	//~ cout << "\t4. Get the Item Number for an item in the Inventory" << endl;
	//~ cout << "\t1. Set the Item Number for the new Item" << endl;
	//~ cout << "\t2. Set the Quantity of the Item in the Inventory" << endl;
	//~ cout << "\t3. Set the Item Number for the new Item" << endl;
	
	//~ cout << "\t4. Get the Item Number for an item in the Inventory" << endl;
	//~ cout << "\t5. Get the Quantity of an item in the Inventory" << endl;
	//~ cout << "\t5. Get the Cost of an item in the Inventory" << endl;
	//~ cout << "\t6. Get the Total Cost of a specific Item in the Inventory" << endl;
	
	//~	Option 7 will use an Overload Constructor to create the new item
	//~ cout << "\t7. Add a new Item to the Inventory: " << endl;
	//~ cout << "\t8. Remove an Item from the Inventory" << endl;
	//~ cout << "\t9. Quit" << endl; 	
	
	
	//	Accept user menu choice and then pass the menuChoice to an function that will manipulate the class Inventory object
	//~ while (menuChoice != 9)
	//~ {
		//~ while (!(cin >> menuChoice) || menuChoice < 0 || menuChoice > 4)
			//~ {
			//~ cin.clear();
			//~ cin.ignore(1000, '\n');
			//~ cout << "Please ensure your entry is a positve integer between 1 and 9." << endl;
			//~ }
		//~ function2(menuChoice);
	//~ }


	//~ cout << "Done!" << endl;
	//~ return 0;
//~ }

//~ void function2 (int& menuChoice)
//~ {
	//~ Inventory stockItem0;
	//~ cout << "function called: " << menuChoice << endl; 
	
	//~ if (menuChoice == 7)
	//~ {
		//~ int newItemNum;
		//~ int newItemQuantity;
		//~ float newItemCost;
		
		//~ cout << "\tCreating New Item" << endl;
		//~ cout << "Please provide an Item Number, Number of Items, and the Cost per Item: " << endl;
		//~ cin >> newItemNum >> newItemQuantity >> newItemCost;
		
		//~ Inventory stockItem3(newItemNum, newItemQuantity, newItemCost);
		//~ cout << stockItem3.getItemNumber() << endl;
		//~ cout << stockItem3.getQuantity() << endl;
		//~ cout << stockItem3.getCost() << endl;
	//~ };
		
		//~ Example of instantiating with an default constructor
	//~ else if ( menuChoice == 1)
	//~ {
		//~ Inventory stockItem2;
		//~ cout << "getQuantity: " << stockItem0.getItemNumber() << endl;
	//~ };
	
	//~ Example of using a setter method
	//~ stockItem0.itemNumSet(2);
	//~ cout << stockItem0.getQuantity();
	
	//~ Example of using the getQuantity getter function
	//~ cout << "Quantity	: " << stockItem2.getCost() << endl;
	
	//~ if (menuChoice == 7)
	//~ {
		//~ Inventory stockItem3(10, 20, 30);
		//~ cout << stockItem3.getItemNumber() << endl;
		//~ cout << stockItem3.getQuantity() << endl;
		//~ cout << stockItem3.getCost() << endl;
	//~ };
	
	//~ if (menuChoice == 1)
	//~ {
		//~ asdf
	//~ }
	//~ else if (menuChoice == 2) 
	//~ {
		//~ asdf
	//~ }
	//~ else if (menuChoice == 3)
	//~ {
		//~ asdf
	//~ }
	//~ else if (menuChoice == 4)
	//~ {
		//~ asdf
	//~ }
	//~ else (menuChoice == 5)
	//~ {
		//~ asdf
	//~ }
	
}
