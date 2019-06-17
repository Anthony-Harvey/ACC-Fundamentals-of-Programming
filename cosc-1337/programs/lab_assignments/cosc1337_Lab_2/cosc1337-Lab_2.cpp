//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Lab 2 - Order Status: Using Reference Parameters

	//	Chapter 6, pg.403
	//	Problem 15
	//
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


#include <iostream>
#include <string>

using namespace std;

const int costBaseItem = 100;
const int costShipping = 10;

//	Function Prototypes might be good here
//		This would maybe helps identify variables containing
//		pass by references/values.
//		And keeps the main() function at the top for easier readability
void inventoryFunction(int& stocked, int& ordered, double& specialChgs);

int main()
{
	int	stocked = 0;
	int	ordered = 0;
	double specialChgs = 0.0;
	string userExit = "n";
	
	cout << "Software owned and operated by Middletown Wholesale Copper Wire Company." << endl;
	cout << "\t\"We've got copper and you've got problems!\"\n" << endl;
	cout << "Please answer the following questions: \n" << endl;
	
	cout << "How many Copper Wire Spools do we currently have in stock?\n\t";
	while (!(cin >> stocked) || stocked < 0)
	{
		cout << "\tPlease ensure that you are entering only positive integers or zeroes!\n" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "How many Copper Wire Spools do we currently have in stock?\n\t";
	}
	cout << "How many Copper Wire Spools have been ordered?\n\t";
	while (!(cin >> ordered) || ordered < 0)
	{	
		cout << "\tPlease ensure that you are entering only positive integers or zeroes only!\n" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "How many Copper Wire Spools have been ordered?\n\t";
	}
	cout << "Please input any additional Special Shipping and Handling charges: \n\t";
	cout << "(Enter 0 if none)\n\t";
	while(!(cin >> specialChgs) || specialChgs < 0)
	{
		cout << "\tPlease ensure that you are entering only positive integeres of zeroes only!\n" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please input any additional Special Shipping and Handling charges: \n\t";
	}

	inventoryFunction(stocked, ordered, specialChgs);
	
	while (userExit != "y")
	{
		cout << "Close the program? (y/n)\t";
		cin >> userExit;
	}
	
	return 0;
}

void inventoryFunction(int& stocked, int& ordered, double& specialChgs)
{
	
	int stockNeeded = 0;
	
	
	if (ordered > stocked)
	{
		stockNeeded = abs(stocked - ordered);
		cout << "WARNING" << endl;
		cout << "We need at least " << abs(stockNeeded);
		cout << " more items to fill the current order list!" << endl;
	}
	
	//	This display has terrible formatting, the tabs could probably be replaced with specified number of spaces, etc, etc
	//		Maybe I should try using something like 'cout << string( n, ' ') << endl;' instead of 'cout << "--\t\t\t\t" << endl;'

	cout << "--------------------------------------------------" << endl;
	
	cout << "--\t    Current Inventory Status:\t\t--" << endl;
	cout << "--\t\t\t\t\t\t--" << endl;
	cout << "--\tIn Stock\t\tCurrent Order\t--" << endl;
	cout << "--\t" << stocked; cout << "\t\t\t" << ordered; cout << "\t\t--" << endl;;
	cout << "--\t\t\t\t\t\t--" << endl;

	cout << "--------------------------------------------------" << endl;
	
	cout << "--\t\t  Order Summary\t\t\t--" <<endl;
	cout << "--\t\t\t\t\t\t--" << endl;
	
	cout << "--\tReady to Ship\t\tBackordered\t--" << endl;
	cout << "--\t" << ordered - stockNeeded; cout << "\t\t\t" << stockNeeded; cout << "\t\t--" << endl;
	cout << "--\t\t\t\t\t\t--" << endl;
	
	cout << "--\tUnit Cost\t\tUnit Cost\t--" << endl;
	cout << "--\t" << "$" <<  costBaseItem*(ordered - stockNeeded); cout << "\t\t\t" << "$" <<  costBaseItem*(stockNeeded); cout << "\t\t--" << endl;
	cout << "--\t\t\t\t\t\t--" << endl;
	
	cout << "--\tShipping Costs\t\tShipping Cost\t--" << endl;
	cout << "--\t" << "$" <<  costShipping*(ordered - stockNeeded) + specialChgs; cout << "\t\t\t" << "$" <<  costShipping*(stockNeeded); cout << "\t\t--" << endl;
	cout << "--\t\t\t\t\t\t--" << endl;
	
	cout << "--\tCurrent Charge\t\tPending\t\t--" << endl;
	cout << "--\t" << "$" << (costBaseItem*(ordered - stockNeeded)) + (costShipping*(ordered - stockNeeded) + specialChgs);
	cout << "\t\t\t$"; cout << costBaseItem*(stockNeeded) + costShipping*(stockNeeded) + specialChgs; cout << "\t\t--" << endl;
	
	cout << "--------------------------------------------------" << endl;
	
	//cout << stocked << ordered << specialChgs <<  endl;
	//cout << outboundStock << stockNeeded << handlingCost << gross << handling << endl;
	
	
	
	
	
	
	
}
