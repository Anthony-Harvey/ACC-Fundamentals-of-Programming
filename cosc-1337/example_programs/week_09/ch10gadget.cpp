// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

class Gadget {
   private:
      int id;  
   public:
      string name;
      

      Gadget() { 
            name = "widget";
            id = 9999;
      }
      
      Gadget(int i) { 
            name = "widget";
            id = i;
      }
      int getID() { return id; }
      void print()
      { cout << name << "--" << id << endl; }
};

int main()
{
    Gadget g(0);
    Gadget * pg;
    int * pint;
    pint = new int;
    *pint = 2013;
    pg = new Gadget(*pint);
    (*pg).print();
 
    g.print();
        
    pg->name = "gadget";
    pg->print();
     
    delete pint;
    delete pg;
    
    pg = new Gadget;
    pg->print();

    
    delete pg;
    system("pause");
    return EXIT_SUCCESS;
}
