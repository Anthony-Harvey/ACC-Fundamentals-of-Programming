// Michael Miller

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

volatile  int sum = 0;

void total(int);

int main()
{
    for (int i = 0; i < 10; i++)
        total(i);
    
    system("pause");
    return EXIT_SUCCESS;
}


void total(int n)
{
     static int total = 0;
     total += n;
     cout << total << endl;
}
