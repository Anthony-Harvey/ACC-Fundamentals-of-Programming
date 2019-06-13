// Michael Miller

#include <iostream>
#include <cstdlib>
// needed for the examples
#include <iomanip>

using namespace std;


int main()
{
    const float e = 2.718;         
    float price = 18.0;   
           
    cout << setw(8) << e << endl; 	
    cout << left << setw(8) << e
         << endl;   			
    cout << setprecision(2); 
    cout << e << endl;        
    cout << fixed << e << endl; 
    cout << right << setw(6) << price;   
    cout << endl;
      
    system("pause");
    return EXIT_SUCCESS;
}
