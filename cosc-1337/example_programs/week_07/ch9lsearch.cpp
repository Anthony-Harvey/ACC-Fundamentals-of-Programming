// Michael Miller

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void displayVector(vector<int>);
int searchVector(vector<int>, int);

int main()
{
    const int SIZE = 6;
    int find = 0;
    vector<int> values(SIZE);
    
    cout << "Enter " << SIZE << " integers separated by spaces" << endl;
    
    for (int i=0;i<SIZE;i++)
        cin >> values[i];
        
    displayVector(values);
    
    cout << "Enter integer to search: ";
    cin >> find;
    int position = searchVector(values, find);
    if (position != -1)
       cout << "Found " << find << " at position " << position << endl;
    else
        cout << find << " not found" << endl;

    system("pause");
    return EXIT_SUCCESS;
}

int searchVector(vector<int> numbers, int search)
{
     bool found = false;
     int pos = -1;
     int i = 0;
     while (i < numbers.size() && !found)
     {
           if (numbers[i] == search)
           {
               found = true;
               pos = i;
           }
           i++;
     }
     return pos;
}

void displayVector(vector<int> numbers)
{
    for (unsigned int i = 0; i < numbers.size();i++)
        cout << numbers[i] << " ";
    cout << endl;
}
