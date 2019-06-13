// Michael Miller

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Living {
    private:
        string name;   
        
    public:
        string getName() { return name; }
};

class Plant :public Living {
    
};

class Animal :public Living{
       
 public: 
        virtual void id() { cout << "animal "; }
        virtual void speak ()=0;
        virtual ~Animal() {};
};

class Cat : public Animal{
 public: 
        virtual void id(){cout << "cat ";}
        virtual void speak () { cout << "meow  "; }
};

class Dog : public Animal{
 public: 
        virtual void id(){cout << "dog ";}
        virtual void speak () { cout << "bark  "; }
};

class Westie : public Dog{
 public: 
        virtual void id(){cout << "westie ";}
        virtual void speak() { cout << "woof  "; }
};



int main()
{
    Living l;
    
    Animal *pA[] = {new Cat, new Dog,   
                  new Cat, new Westie};

    for(int k=0; k<4; k++) {        
      pA[k]->id();
      pA[k]->speak();
    }
    cout << endl;

    
    system("pause");
    return EXIT_SUCCESS;
}

