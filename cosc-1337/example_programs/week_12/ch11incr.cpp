// Michael Miller

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

	class CpClass
	{
   private: 
    int *p;
    int x;
    
   public:
          // convert constructor
    CpClass(int v=0)
      { p = new int; *p = v; x = v;}
      
      // copy cons
    CpClass(const CpClass &obj)
      { p = new int; *p = *obj.p; x = obj.x; }

      
      CpClass operator=(CpClass rhs)
      {
        *p = *rhs.p;
        x = rhs.x;
        return *this;
      }
      CpClass operator+(CpClass rhs)
      {
              CpClass sum;
              *(sum.p) = *(this->p) + *rhs.p; 
              sum.x = this->x + rhs.x; 
              return sum;    
      }

      operator int(){return *p;}
      CpClass operator++(); // pre
      CpClass operator++(int); // post


    ~CpClass(){delete p;}
    
    void print() { cout << p << "-" << *p << "-" << x << endl; }
};

CpClass CpClass::operator++() // pre
{
        (*p)++;
        x++;
        return *this;
}
CpClass CpClass::operator++(int) // post
{
        CpClass tmp = *this;
        (*p)++;
        x++;
        return tmp;
}

int main()
{
   
    CpClass c1(5), c3, c4(9);
    c4 = ++c3;
    c4 = c3++;
    c1.print();
    c3.print();
    c4.print();
    
    /*
    int a = 4;
    cout << a << endl;
    int b = ++a;
    int c = a++;
    
    cout << b << endl;
    cout << c << endl;
    cout << a << endl;
    */

    system("pause");
    return EXIT_SUCCESS;
}

