// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    string name;
    double runtime;
    

    cout << "Enter name:";
    getline(cin, name);
    
    cout << "Enter time:";
    cin >> runtime;
    while (runtime <= 0)
    {
          cout << "time must be positive, enter time:";
          cin >> runtime;
    }
    
    for (int i =0; i < 5; ++i)
        cout << i << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}
