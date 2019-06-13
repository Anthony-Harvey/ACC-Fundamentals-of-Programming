// Michael Miller

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

class DayOfYear 
{
    private:
      int day;
      string monthday;
      static const int mdays[];
      static const string months[];
      void daysToMonthDay();
      void monthDayToDays(string, int);
      void buildString(int, int);
    public:     
      DayOfYear(int d) { 
            day = d; 
            daysToMonthDay (); 
      }
      DayOfYear(string m, int d) { monthDayToDays (m,d); }
      
      void print() { cout << "Day " << day << " => " << monthday << endl; }
     
      DayOfYear  operator++();
      DayOfYear operator++(int); // post
      DayOfYear  operator--();
      DayOfYear operator--(int); // post
};
const int DayOfYear::mdays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
const string DayOfYear::months[] = {"January", "February", "March","April",
                           "May","June","July","August",
                           "September","October","November","December"};

void DayOfYear::buildString(int month, int days) 
{
     stringstream ss;
     ss << days;
     string str = ss.str();
     monthday = months[month] + " " +str;
}
                          
DayOfYear DayOfYear::operator++()
{
  day++;
  if (day > 365) day = 1;
  daysToMonthDay();  
  return *this;     
}

DayOfYear DayOfYear::operator++(int) // post
{
  DayOfYear tmp = *this;
  ++*this;
  return tmp;      
}
DayOfYear DayOfYear::operator--()
{
  day--;
  if (day < 1) day = 365;
  daysToMonthDay();  
  return *this;     
}

DayOfYear DayOfYear::operator--(int) // post
{
  DayOfYear tmp = *this;
  --*this; 
  return tmp;      
}

void DayOfYear::monthDayToDays(string m, int d)
{
      int left = 0;
      int i = 0;
      for (;i <12;i++)
      {
          if (m == months[i])
             break;
          else
              left += mdays[i];
      } 
      if (d <= mdays[i] && d > 0) {
        left += d;
        day = left;
      } else {
            cout << "ERROR: invalid days(" << d << ") for " << m << endl;
            system("pause");
            exit(EXIT_FAILURE);
      }
      buildString(i,d);

}                          
void DayOfYear::daysToMonthDay()
{
      int left = day;
      int i = 0;
      for (;i <12;i++)
      {
          if (left <= mdays[i])
             break;
          else
              left -= mdays[i];
      } 
      buildString(i,left);
} 

int main()
{
    DayOfYear d = 2;
    d.print();
    d = 365;
    d.print();
    d = 32;
    d.print();

    DayOfYear g = d++;
    g.print();
    d.print();

    d = 365;
    ++d;
    d.print();
    d = 1;
    --d;
    d.print();
    
    d = 32;
    d--;
    d.print();
     
    DayOfYear e("June",6);
    e.print();
        
    system("pause");
    return EXIT_SUCCESS;
}
