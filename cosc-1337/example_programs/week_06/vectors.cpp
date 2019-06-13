// Michael Miller

#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector (3,100);
  
  
  std::vector<int>::iterator it,it2;

  // insert 200 after the three 100 in myvector
  it = myvector.end();
  it2 = myvector.insert ( it , 200 );

  // insert two 300 after the first 100
  it2 = myvector.begin()+1;
  myvector.insert (it2,2,300);
  
  // loop through vector like a c-array
  for (int i=0; i < myvector.size(); i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';
  
   
  std::cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';

   // "it" no longer valid, get a new one:
  it = myvector.begin();

  // insert a second vector into myvector
  std::vector<int> anothervector (2,400);
  myvector.insert (it+2,anothervector.begin(),anothervector.end());

  // insert a c array into myvector
  int myarray [] = { 501,502,503 };
  myvector.insert (myvector.begin(), myarray, myarray+3);

// use iterator to loop through myvector and display every element
  std::cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';

        
    system("pause");
    return EXIT_SUCCESS;
}
