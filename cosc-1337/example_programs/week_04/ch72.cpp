// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

class Rectangle {
   public:
      int width, height;  // attribute
   public:  
      Rectangle(int w = 1, int h = 1) 
      { 
                    width = w; 
                    height = h; 
      }
      int getArea();
};

int Rectangle::getArea() 
{
    return width * height;
}

int main()
{
    // two objects
    Rectangle s1, s2(3);
    
    cout << "s1 area = " << s1.getArea() << endl;
    cout << "s2 area = " << s2.getArea() << endl;
    
    s1.width = s1.height = 9;
    s2.width = s2.height = 5;
    

    cout << "s1 area = " << s1.getArea() << endl;
    cout << "s2 area = " << s2.getArea() << endl;
        
    system("pause");
    return EXIT_SUCCESS;
}
