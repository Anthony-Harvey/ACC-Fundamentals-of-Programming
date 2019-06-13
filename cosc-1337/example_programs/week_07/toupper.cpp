// Michael Miller

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
    string str = "Hello World";   

    cout << str << endl;
   
    for (int i=0; i < str.length(); i++)
        str[i] = toupper(str[i]);
                
    cout << str << endl;


    transform(str.begin(), str.end(),str.begin(), ::tolower);
    
    cout << str << endl;
 
    
    string::iterator it;   
    for (it = str.begin(); it < str.end(); it++)
        *it = toupper(*it);
        
    cout << str << endl;

    
    system("pause");
    return EXIT_SUCCESS;
}
