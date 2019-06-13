// Michael Miller

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    char s[12] = "hello";
    
    char *t = "hello";
    
    if (strcmp(t , "hello") == 0)
       cout << "equal" << endl;
    else 
    cout << "not equal" << endl;
    cout << t << " " << &"hello" << endl;
    strcat(s, t);
    cout << s << endl;
    
    int number = atoi("   57    89");
    cout << number << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}

