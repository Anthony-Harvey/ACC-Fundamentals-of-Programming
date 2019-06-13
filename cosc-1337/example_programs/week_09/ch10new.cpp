// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int *count, *arrayptr;
    count = new int;

    *count = 100000;
    
    
    for (int i=0; i<*count; i++)
    {
       arrayptr = new int[*count]; 
       for (int i=0; i<100; i++) 
           arrayptr[i] = i * 10;
       // do some work
       cout << *(arrayptr+9) << endl;
       // save that work
       delete [] arrayptr; 
       
       // status of arrayptr ?
       // a dangling pointer
    }
    
    delete count;

    system("pause");
    return EXIT_SUCCESS;
}
