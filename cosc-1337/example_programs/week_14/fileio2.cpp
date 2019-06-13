// Michael Miller
// read/write usage

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


int main()
{
    string line, filename;
    int numbers [] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(numbers)/sizeof(numbers[0]);
    
    // write a file
    
    cout << "Enter filename (w): ";
    getline(cin,filename);
    ofstream outfile(filename.c_str(), ios::binary);
    outfile.write(reinterpret_cast<char *>(numbers), 
            sizeof(numbers));
    cout << "wrote " << sizeof(numbers) << " bytes" << endl;  
    outfile.close();
    
    // zero out array in memory
    for (int index = 0; index < len; index++)
    {
        numbers[index] = 0;
        cout << numbers[index] << " ";
    }
    cout << endl << endl;  
      
    // read a file
    
    cout << "Enter filename (r): ";
    getline(cin,filename);
    ifstream infile(filename.c_str());
    if (!infile.fail())
    {
        infile.read(reinterpret_cast<char *>(numbers), 
                sizeof(numbers));
        cout << "read " << sizeof(numbers) << " bytes" << endl;
    }
    infile.close();
    
    // display array read from file
    for (int index = 0; index < len; index++)
        cout << numbers[index] << " ";
    cout << endl << endl;
    
        
    system("pause");
    return EXIT_SUCCESS;
}
