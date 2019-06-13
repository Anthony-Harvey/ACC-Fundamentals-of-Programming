// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int x, y;
    string name, last;
    
    cout << "enter a number:";
    cin >> x ;
    cout << "enter a number:";
    cin >> y;
    
    cin.ignore(100,'\n');
    
    cout << "enter a name:";
    cin >> name;
    cin >> last;
    //getline(cin, name);
    cout << "|" << name << "|" << last << endl;
    
    cout << endl << x << " " << y << endl;

    system("pause");
    return EXIT_SUCCESS;
}
