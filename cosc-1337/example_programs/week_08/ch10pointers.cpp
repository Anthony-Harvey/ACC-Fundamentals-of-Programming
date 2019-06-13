// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int a = 9, b = 27;
    int * ptr_a;
    
    ptr_a = &a;
    
    cout << endl;
    cout << a << " at location " << &a << endl;
    cout << endl;
    cout << " ptr_a's value " << ptr_a << " ptr_a at location " << &ptr_a << endl;
    cout << endl;
    cout << *ptr_a << " at location " << ptr_a << endl;
    
    cout << endl;
    ptr_a = &b;
    *ptr_a = 90;
    cout << *ptr_a << " at location " << ptr_a << endl;
    cout << a << " at location " << &a << endl;
    cout << b << " at location " << &b << endl;
    
    cout << endl;
    cout << endl;
    system("pause");
    return EXIT_SUCCESS;
}
