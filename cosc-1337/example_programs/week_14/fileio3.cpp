// Michael Miller
// read/write binary record

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

struct Info 
{
       char name[20];
       int age;
       char gender;
};

void print_person(Info p)
{
     cout << "name  : " << p.name << endl;
     cout << "age   : " << p.age << endl;
     cout << "gender: " << p.gender << endl;
}

void get_record_count(istream &in)
{
    long pos = in.tellg();
    in.seekg(0, ios::end);
    in.clear();
    cout << "# records = " 
         << in.tellg()/sizeof(Info) 
         << endl;
    in.seekg(pos, ios::beg);
}

void write_records();
void read_all_records();
void read_write_record();

const char filename[] = "data.dat";

int main()
{
    write_records();
          
    read_all_records();
        
    read_write_record();
    
    system("pause");
    return EXIT_SUCCESS;
}

void write_records()
{
    Info p1,p2;
    
    strcpy(p1.name,"John Smith");
    p1.age = 44;
    p1.gender = 'M';
    
    strcpy(p2.name,"Jane Smith");
    p2.age = 40;
    p2.gender = 'F';
        
    // write a file  
    ofstream outfile(filename, ios::binary);
    
    outfile.write(reinterpret_cast<char *>(&p1), 
            sizeof(Info));
    p1.age++; 
    outfile.write(reinterpret_cast<char *>(&p1), 
            sizeof(Info));
    outfile.write(reinterpret_cast<char *>(&p2), 
            sizeof(Info)); 
    p2.age++; 
    outfile.write(reinterpret_cast<char *>(&p2), 
            sizeof(Info)); 
                          
    outfile.close();
    cout << "Wrote 4 records to file" << endl << endl;     
}

void read_all_records()
{
         // read a file
    Info p;  
    cout << "Reading from file " << filename << endl;
    ifstream infile(filename, ios::binary);
    cout << "pos = " << infile.tellg() << endl;
    
    infile.read(reinterpret_cast<char *>(&p), 
           sizeof(Info));
    while (!infile.fail())
    {       
        print_person(p);
        cout << "pos = " << infile.tellg() << endl;
        infile.read(reinterpret_cast<char *>(&p), 
               sizeof(Info));  
    }
    cout << endl;
    cout << "pos = " << infile.tellg() << endl;
    
    // did go to EOF
    infile.clear();
    cout << "size (bytes)/last location = " << infile.tellg() << endl;
    infile.close();
}

// g is for get (read) and p is for put (write)
// some implementations maintain two pointers, 
// some implementations only have one pointer shared by both
void read_write_record()
{
    cout << endl << "opening r/w file " << filename << endl;
    Info p;
    fstream rwfile(filename, ios::in|ios::out|ios::binary);
    get_record_count(rwfile);
    
    // goes to fourth record
    cout << "read fourth record" << endl;

    rwfile.seekg(-sizeof(Info), ios::end);
    rwfile.read(reinterpret_cast<char *>(&p), 
           sizeof(Info));
    print_person(p);
    cout << "pos read = " << rwfile.tellg() << endl;
    cout << "pos write = " << rwfile.tellp() << endl << endl;
    
    // at EOF so need to clear EOF again    
    rwfile.clear();
    
    cout << "overwrite first record with last record contents" << endl;
    rwfile.seekp(0, ios::beg);
    rwfile.write(reinterpret_cast<char *>(&p), 
            sizeof(Info));
    cout << "pos read = " << rwfile.tellg() << endl;
    cout << "pos write = " << rwfile.tellp() << endl << endl;
      
    cout << "read first record" << endl;
    rwfile.seekg(0, ios::beg);
    rwfile.read(reinterpret_cast<char *>(&p), 
           sizeof(Info));
    print_person(p);
    cout << "pos read = " << rwfile.tellg() << endl;
    cout << "pos write = " << rwfile.tellp() << endl << endl;
    
    // still only four records 
      
    get_record_count(rwfile);
    rwfile.close();
}
