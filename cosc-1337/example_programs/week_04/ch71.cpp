// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

class Square {
   private:
      int side;  // attribute
      int calc() { return side * side; }
   public:  
      // constructor
      Square() { side = 1; }
      Square(int s) { side = s; }
      void setSide(int s) { side = s; }  // mutator, setter, inline
      int getSide() { return side; }     // acessor, getter, inline
      int getArea(); // prototype

};

// implementation
int Square::getArea() 
{   
    return calc();
}

int main()
{
    // two objects
    Square s1, s2(3);

    cout << "s1 side = " << s1.getSide() << endl;
    cout << "s2 side = " << s2.getSide() << endl;
        
    s1.setSide(9);
    s2.setSide(5);
    
    cout << "s1 side = " << s1.getSide() << endl;
    cout << "s2 side = " << s2.getSide() << endl;

    cout << "s1 area = " << s1.getArea() << endl;
    cout << "s2 area = " << s2.getArea() << endl;
    cout << s2.getArea() + s1.getArea() << endl;
        
    system("pause");
    return EXIT_SUCCESS;
}
