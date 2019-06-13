// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

struct Runner {
      string name;
      double time;
};

int main()
{
    Runner run1 = {"Tim", 1.23};
    bool flag = true; 
    
    flag = !!!flag;
    cout << flag << endl;
    
    int pds = 1;
    int tot = 0;
    while (pds > 0) {
          tot += pds;
          cout << "Enter weight or 0 to exit" << endl;
          cin >> pds;
    }
    
    getline(cin, run1.name);
    
    cout << run1.name << " " << run1.time << endl;

    system("pause");
    return EXIT_SUCCESS;
}
