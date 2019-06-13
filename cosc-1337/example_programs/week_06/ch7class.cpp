// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

class Point {

       int x,y,z;
       public:
       Point(int a, int b, int c)
       { x = a; y = b; z = c; }
       void display()
       {
        cout << x <<"," << y << "," << z << endl;
       }
};


int main()
{
    Point p(1,2,3);
    
    p.display();

    system("pause");
    return EXIT_SUCCESS;
}


