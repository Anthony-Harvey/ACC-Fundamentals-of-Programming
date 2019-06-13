// Michael Miller

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

enum Discipline {BIOL, COMP_SCI, HIST};
enum Year {PLEBE, YEARLING, COW, FIRSTIE};

const string DISCIPLINE[] = {"Biology", "Computer Science", "History"};
const string YEAR[] = {"plebe", "yearling", "cow", "firstie"};

class Person {
      private:
          string name;
      public:
          Person() { setName(""); }
          Person(string name) { setName(name); }
          void setName(string n) { name = n; }
          string getName() { return name; }
          void print() 
          {
           cout << name << endl;
          }
};

class Student: public Person
{
      private:
          Discipline major;
          Year year;
      public:
             Student(string n, Year y, Discipline m)
             {
               setName(n); setYear(y); setMajor(m);
             }
             void setYear(Year y) { year = y; }
             string getYear() { return YEAR[year]; } 
             void setMajor(Discipline m) { major = m; }
             string getMajor() { return DISCIPLINE[major]; } 
             void print() 
             {
                  cout << getName() <<  " " << getYear() << " " << getMajor() << endl;
             }
};

class Faculty: public Person
{
      private:
          Discipline department;
      public:
             Faculty(string n, Discipline d)
             {
               setName(n); setDepartment(d);
             }

             void setDepartment(Discipline d) { department = d; }
             string getDepartment() { return DISCIPLINE[department]; } 
             void print() 
             {
                  cout << getName() << " " << getDepartment() << endl;
             }
};

int main()
{
    Person p("John Smith");
    p.print();
    
    Student s("Jane Smith",PLEBE,COMP_SCI);
    s.print();
    
    Faculty f("Joe Smith", HIST);
    f.print();
    
    
    system("pause");
    return EXIT_SUCCESS;
}

