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
      protected:
          string name;
      public:
          Person() { setName(""); }
          Person(string name) { setName(name); }
          void setName(string n) { name = n; }
          string getName() { return name; }
          virtual void print() 
          {
           cout << getName() << endl;
          }
};

class Student: public Person
{
      protected:
          Discipline major;
          Person *advisor;
      private:
          Year year;
      public:
             Student(string n, Year y, Discipline m)
             {
               name = n; setYear(y); setMajor(m);
             }
             void setAdvisor(Person *a) { advisor = a; }
             Person *getAdvisor() { return advisor; } 
             
             void setYear(Year y) { year = y; }
             string getYear() { return YEAR[year]; } 
             void setMajor(Discipline m) { major = m; }
             string getMajor() { return DISCIPLINE[major]; } 
             virtual void print() 
             {
                  cout << getName() <<  " " << getYear() << " " << getMajor() << endl;
             }
};

class Faculty: public Person
{
      protected:
          Discipline department;
      public:
             Faculty(string n, Discipline d)
             {
               setName(n); setDepartment(d);
             }

             void setDepartment(Discipline d) { department = d; }
             string getDepartment() { return DISCIPLINE[department]; } 
             virtual void print() 
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
    
    
    cout << endl;
    s.setAdvisor(&f);
    s.getAdvisor()->print();
    
    s.setAdvisor(&s);
    s.getAdvisor()->print();
    
    
    system("pause");
    return EXIT_SUCCESS;
}

