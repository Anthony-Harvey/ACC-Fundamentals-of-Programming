// Michael Miller

#include <iostream>
#include <cstdlib>  // exit_success
#include <vector>
#include <algorithm>  // sort

using namespace std;

class Gadget {
      string name;
      int id;
   public:
      Gadget(int i) { 
            name = "widget";
            id = i;
      }
      int getID() { return id; }
      string getName() { return name; }
      void print()
      { cout << name << "--" << id << endl; }
};


bool cmp (Gadget i,Gadget j) { 
     return i.getID() < j.getID(); 
}
     
void displayVector(vector<Gadget>);

int main()
{
    const int SIZE = 6;
    vector<Gadget> values;
       
    for (int i=0;i<SIZE;i++)
    {
        int id;
        cout << "Enter id:";
        cin >> id;
        Gadget g(id);
        values.push_back(g);
    }
    cout << endl;
        
    displayVector(values);
    sort(values.begin(), values.end(), cmp);
    displayVector(values);
    
    system("pause");
    return EXIT_SUCCESS;
}

void displayVector(vector<Gadget> numbers)
{
    for (int i = 0; i < numbers.size();i++)
        numbers[i].print();
    cout << endl;
}
