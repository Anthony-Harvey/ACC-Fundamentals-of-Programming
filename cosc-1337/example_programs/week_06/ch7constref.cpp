// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

struct Point {
       int x,y,z;
};

void display(const Point&);

int main()
{
    Point p = {1,2,3};
    
    display(p);

    system("pause");
    return EXIT_SUCCESS;
}

void display(const Point &p)
{
     cout << p.x <<"," << p.y << "," << p.z << endl;
     // does not work p.x = 0;
}
