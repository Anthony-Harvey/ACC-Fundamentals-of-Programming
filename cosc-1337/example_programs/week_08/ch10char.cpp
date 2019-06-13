// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

int print(char * ch_ptr);

int main()
{
    char name [] = "John Smith";
    char * ch_ptr = name;
    int length = 0;
    
    cout << name << endl << endl;
    
    length = print(name);
    cout << endl << length << endl;;
    cout << "<" << *ch_ptr << "> " << name << endl;

    system("pause");
    return EXIT_SUCCESS;
}


int print(char * ch_ptr)
{    
     int length = 0;
     while (*ch_ptr != NULL) // '\0'
    {
          cout << *ch_ptr << '_';
          ch_ptr++;
          length++;
    }
    return length;
}
