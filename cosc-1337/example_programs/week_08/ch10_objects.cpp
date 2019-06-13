// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

void print(string *p);
void print2(string &p);

int main()
{
    string  name = "John Smith";
    
    print(&name);
    print2(name);
    
    cout << name << endl;

    system("pause");
    return EXIT_SUCCESS;
}

void print(string *p)
{
     cout << *p << endl;
     *p = "Not Smith";
}

void print2(string &p)
{
     cout << p << endl;
     p = "Jane Smith";
}
