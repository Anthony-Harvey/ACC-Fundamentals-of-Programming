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
    outfile.open(filename.c_str(), ios::app);
    outfile << "some text" << endl;
    
    outfile.close();
    
    // read a file
    ifstream infile;
    cout << "Enter filename (r): ";
    getline(cin, filename);
    infile.open(filename.c_str());
    int count = 0;
    getline(infile, line);
    while (!infile.fail())
    {     
          cout << ++count << " (" << line.size() << "):" << line << endl;
          getline(infile, line);
    }
    cout << line.size() << line << endl;
    
    infile.close();
        
    system("pause");
    return EXIT_SUCCESS;
}
