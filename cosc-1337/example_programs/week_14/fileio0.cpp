// Michael Miller

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


int main()
{
    string line, filename;
    // write a file
    ofstream outfile;
    cout << "Enter filename (w): ";
    getline(cin, filename);
    outfile.open(filename.c_str());
    outfile << "some text" << endl;
    
    outfile.close();
    
    // read a file
    
    cout << "Enter filename (r): ";
    getline(cin,filename);
    ifstream infile(filename.c_str());
    if (infile.fail())
    { 
      cout << "Can't open file" << endl;
    }
    else
    {
        getline(infile, line);
        cout << line << endl;
        
        infile.close();
    }
        
    system("pause");
    return EXIT_SUCCESS;
}
