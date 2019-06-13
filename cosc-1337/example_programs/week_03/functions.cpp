// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

// global scope but constant
const int MY_MAX = 9;
// function prototype
void multiplier(int &, int);

// default argument must be last
int reduce(int, string = "not bob", int = 0);

// returns int and has no parameters
int main()  // function header
{
    // these are used as actual arguments to the function below
    int n1 = 4, n2 = 5;
    
    multiplier(n1, n2);
    
    cout << n1 << " " << n2 << endl;
    
    cout << reduce(6,"bob", 2) << endl;
    // missing second argument uses default of 0
    cout << reduce(6) << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}
// num1 and num2 are formal parameters 
// and local in scope to their respective functions
// place functions after main, read code starting with main

// multiples two numbers
// first number is passed by reference (uses address of variable
// second number is passed by value (copied)
void multiplier(int & num1, int num2)  // function header
{
     num1 *= num2;
     num2++; // does nothing in main
}

// subtracts second from first, returns result
int reduce(int num1, string n, int num2)  // function header
{
    cout << "reduce " << n << endl;
    return num1 - num2;
}

