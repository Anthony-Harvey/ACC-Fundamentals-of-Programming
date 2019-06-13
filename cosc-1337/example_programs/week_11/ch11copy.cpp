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
    CpClass(int v=0)
      { p = new int; *p = v; x = v;}
      
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


    ~CpClass(){delete p;}
    
    void print() { cout << p << "-" << *p << "-" << x << endl; }
	};


int main()
{
   
    CpClass c1(5), c3, c4(9);
    c1.print();
    c4.print();

    {
      CpClass c2=c1;
      c2.print();
    }

    c1.print();
    
    c3.print();
    
    c3 = c1;
    
    c4 = c3 + c1;
    
    c3.print();
    c4 = 90;
    c4.print();
    
    int a = c4;
    cout << a << endl;

    system("pause");
    return EXIT_SUCCESS;
}

