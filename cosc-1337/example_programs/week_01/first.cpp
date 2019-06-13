// Michael Miller

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    cout  <<  setw(10) << 123459
          << setw(10) << ";"  << endl
          << "howdy " << "bye"
          <<  " ;\n"
          << 5789 << endl;
    system("pause");
    return EXIT_SUCCESS;
}
