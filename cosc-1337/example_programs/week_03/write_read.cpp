// Michael Miller

#include <iostream>
#include <cstdlib>
#include <fstream>


using namespace std;


int main()
{
    ifstream inFile;
    ofstream outFile;
    int num1 = 8 , num2 = 9;
    
    outFile.open("file.txt");
    outFile << num1 << endl;
    outFile << num2 << endl;
    outFile.close();
    
    inFile.open("file.txt");
    inFile >> num2 >> num1;    
    inFile.close();
    
    cout << num2 << " "<< num1 << endl;
        
    system("pause");
    return EXIT_SUCCESS;
}
