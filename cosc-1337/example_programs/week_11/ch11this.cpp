// Michael Miller

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


class Actor {
      private:
              string name;
              static int count;
              static string movie;
      public:
             Actor() { name = "Bob Smith"; count++; }
             
            Actor (string name)
            { 
                  this->name = name; 
                  count++;
            } 
            
            string getName() const 
            { 
                   return name; 
            }       
            void setName(const string name) 
            { 

                 this->name = name; 
            } 
            static int getCount() { return count ; }     
            
            ~Actor () { count--; }  
            
            friend void print();
};

int Actor::count = 0;
string Actor::movie = "Jurassic Park 8";

void print() 
{
   cout << "Actors # = " << Actor::getCount();
   cout << " in " << Actor::movie << endl;
   
}


int main()
{
   print();
    
   Actor bob, jane("Jane Smith");
   
   cout << bob.getName() << endl;
   {
       jane.setName("Joe");
       cout << jane.getName() << endl;
       Actor tim("Tim");
       
       print();
   
   }

   print();
      
    system("pause");
    return EXIT_SUCCESS;
}

