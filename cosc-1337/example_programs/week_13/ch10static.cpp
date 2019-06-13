// Michael Miller

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Bob
{

      private:
      static int value;
      int myId;
      public:
             Bob() { value++; myId = value; }
             static int getValue() { return value; }
             static void setValue(int v) { value = v; }
             int getID() { return myId; }
};

 int Bob::value = 0;      

int main()
{
   Bob b, a;
   cout << Bob::getValue() << endl;
   Bob::setValue(99);
   cout << Bob::getValue() << endl;
   cout << a.getID() << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}

