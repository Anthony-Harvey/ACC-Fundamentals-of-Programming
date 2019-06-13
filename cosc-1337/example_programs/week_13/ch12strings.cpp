// Michael Miller

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    string s = "hello";
    string t;
    
    if (s == "hello")
       cout << "yes match" << endl;
    else
        cout << "no match" <<  endl;
   
   string search = "ll";
   int pos = 0;
   int count = 0;
   s = "hello hello hello";
   pos = s.find(search, pos);
   while (pos != string::npos)
   {
         count ++;
         cout << "pos = " << pos << endl;
         pos++;
         pos = s.find(search, pos);
   }
   cout << "count = " << count << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}

