// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;

class Person {
      public:
             string name;
             int age;
      Person() { name = "bob"; age = 21; }
};

int main()
{
    int numbers[10] = {0}; // = {1,2,3,4,5,6,7,8};

    for (int i =0; i < 10; i++)
        numbers[i] = i* 5;    
    for (int i =0; i < 10; i++)
        cout << numbers[i] << " ";
    cout << endl;
    
    Person people[10];
    for (int i =0; i < 10; i++)
        cout << people[i].name << endl;

    system("pause");
    return EXIT_SUCCESS;
}
