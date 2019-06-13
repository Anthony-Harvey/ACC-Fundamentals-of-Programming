// Michael Miller

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void displayVector(vector<int>);
void sortVector(vector<int> &);

int main()
{
    const int SIZE = 6;
    vector<int> values(SIZE);
    
    cout << "Enter " << SIZE << " integers separated by spaces" << endl;
    
    for (int i=0;i<SIZE;i++)
        cin >> values[i];
        
    displayVector(values);
    sortVector(values);
    sort(values.begin(), values.end());
    displayVector(values);
    
    system("pause");
    return EXIT_SUCCESS;
}

void displayVector(vector<int> numbers)
{
    for (unsigned int i = 0; i < numbers.size();i++)
        cout << numbers[i] << " ";
    cout << endl;
}

// what sorting algorithm?
void sortVector(vector<int> &numbers)
{
    int temp;
    bool swap = true;
    
    while (swap) 
    {
        swap = false;
        for (unsigned int i =0; i < numbers.size()-1;i++)
        {
                if (numbers[i]> numbers[i+1])
                {
                    temp = numbers[i];
                    numbers[i] = numbers[i+1];
                    numbers[i+1] = temp;
                    swap = true;
                }
        }
    }
}
