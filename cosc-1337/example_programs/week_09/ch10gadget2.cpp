// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

class Gadgets {
   public:
      string name;
      int *ids;
      int length;

      Gadgets(int l) 
      { 
            length = l;
            name = "widget";
            ids = new int[length];
            for (int i =0; i< length;i++)
                ids[i] = i;
      }
      ~Gadgets() { delete [] ids; }
      void display()
      {
           for (int i =0; i< length;i++)
                cout << ids[i] << " "; 
           cout << endl;
      }

};

int main()
{
    Gadgets * pg;
    pg = new Gadgets(5);
    pg->display();
    (*pg).display();
    
    
    // address of the array
    cout << pg->ids << endl;;
    // first value
    cout << *pg->ids << endl;
    cout << pg->ids[0] << endl;
    
    cout << *(*pg).ids << endl;

    system("pause");
    return EXIT_SUCCESS;
}
