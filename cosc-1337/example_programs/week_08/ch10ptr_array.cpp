// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int iarr[] = { 10, 20, 30 };
    int * ptr_a;
    
    ptr_a = iarr;
    
    cout << iarr << " memory location" << endl;
    cout << iarr[0] << " value at first memory location" << endl;
    cout << ptr_a << " memory location" << endl;
    cout << *ptr_a << " value at first memory location" << endl;
    cout << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << iarr[i] << " " <<  *ptr_a++ << " at " << &iarr[i] << endl;
        
    }
    
    ptr_a = iarr+2;
    cout << ptr_a << " memory location" << endl;
    cout << *ptr_a << " value at first memory location" << endl;
    
    cout << ptr_a-2 << " memory location" << endl;
    cout << *(ptr_a-2) << " value at first memory location" << endl;

    system("pause");
    return EXIT_SUCCESS;
}
