//	Lab 2
//	Chapter 6: Problem 15

	//	The Middletown Whlesale Copper Wire Company sells:
	//		spools of copper wiring for 100 each
	//	Shipping Cost:
	//		ships them for 10 each.
	//
	//
	//	Write a program that displays the status of an order.
	//	
	//	It should use two functions..
	//	
	//	The first function asks for the following data and stores the input values in reference paramters.
	//		Spools: Number_of_Ordered
	//		Spools:	Number_in_Stock
	//		Any Special shipping and handling Charges
	
	
	//	The second function receives as argument any values needed to compute and display the following information:
	//		Number_of_Ordered:
	//			ready to ship from Number_in_Stock
	//		If the Number Ordered > Number_In_Stock:
	//			Number_of_Ordered Spools_on_Backorder
	//		Total selling price of the portion ready to ship
	//		Total of the order ready to ship
	//
	//
	//	The shipping and handling paramter in the second function should have the default argument 10.00
	//
	//


//	Due Saturday
//	
//	Use pass by values/refernces when calling functions

#include <iostream>

using namespace std;

const int costBaseItem = 100;
const int costShipping = 10;

//	Function Prototypes might be good here
//		This would maybe helps identify variables containing
//		pass by references/values.
//		And keeps the main() function at the top for easier readability
void inventoryFunction(int &stocked, int &ordered, double &specialChgs);

int main()
{
	int	stocked = 0;
	int	ordered = 0;
	double specialChgs = 0.0;
	
	cout << "Software owned and operated by Middletown Wholesale Copper Wire Company." << endl;
	cout << "\tWe've got copper and you've got problems!\n" << endl;
	cout << "WARNING: " << endl;
	cout << "\tThis software is restricted by the Arms Export Control Act, " << endl;
	cout << "\tTitle 22 USC Sec 2751 et seq." << endl;
	cout << "\tViolations of export laws are subject to severe criminal penalties!" << endl;
	cout << "\tHave a nice day!\n\n" << endl;

	cout << "Please answer the following questions: \n" << endl;
	cout << "\tHow many Copper Wire Spools do we currently have in stock?\n\t";
	cin >> stocked;
	cout << "\tHow many Copper Wire Spools have been ordered?\n\t";
	cin >> ordered;
	cout << "\tPlease input any additional Special Shipping and Handling charges: \n\t";
	cout << "(Enter 0 if none)\n\t";
	cin >> specialChgs;
	
	
	inventoryFunction(stocked, ordered, specialChgs);
	
	system("Please press ANY key to close this window.");
	return 0;
}

void inventoryFunction(int &stocked, int &ordered, double &specialChgs)
{
	int outboundStock = 0;
	int stockNeeded = 0;
	int handlingCost = 0;
	double gross = 0.0;
	double handling = 0.0;
	
	if (ordered > stocked)
	{
		stockNeeded = stocked - ordered;
		cout << "Uhhh somebody should order more stock so we can fill these orders..." << endl;
		cout << "More specifically..";
		cout << "We need at least " << abs(stockNeeded);
		cout << " more items to fill the current order list!" << endl;
	}
	
	//	This menu is ugly as shit..terrible formatting, the tabs could probably be replaced with specified number of spaces, etc, etc
	//	I'll need to use the \r character to update lines within the menu if changes are made to it
	cout << "--------------------------------------------------------------------" << endl;
	cout << "--\t\tCurrent Inventory Status\t\t          --" << endl;
	cout << "--\tIn Stock\tNumber Ordered\t\tNumber Needed\t  --" << endl;
	cout << "--\t\t\t\t\t\t\t\t  --" << endl;
	cout << "--\t\t\t\t\t\t\t\t  --" << endl;
	cout << "--\t\t\t\t\t\t\t\t  --" << endl;
	cout << "--\t\t\t\t\t\t\t\t  --" << endl;
	cout << "--\t\t\t\t\t\t\t\t  --" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	cout << stocked << ordered << specialChgs <<  endl;
	cout << outboundStock << stockNeeded << handlingCost << gross << handling << endl;
	
	
	
	
	
	
	
}
