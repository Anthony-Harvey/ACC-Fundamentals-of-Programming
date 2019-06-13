// Michael Miller

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int grid[5][5] = {0};
    int n =0;
    
    for (int i =0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            grid[i][j] = n++;
    
    for (int i =0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    
    for (int i =0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << grid[j][i] << " ";
        cout << endl;
    }
    cout << endl;

    system("pause");
    return EXIT_SUCCESS;
}
