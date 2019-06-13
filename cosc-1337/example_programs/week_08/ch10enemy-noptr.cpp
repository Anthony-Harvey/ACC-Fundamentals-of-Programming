// Michael Miller

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Enemy 
{
   public:
      string name;
      int xloc,yloc;

      Enemy(int x, int y) 
      { 
            name = "enemy";
            xloc =x; yloc = y;
      }
      void show () 
      { 
           cout << this << " "
                << name << ":" 
                << xloc << ","
                << yloc << endl;
      }
      
};

        
int main()
{
    vector<Enemy> enemies;
    vector<Enemy> los;
    
    for (int i = 0; i < 5; i++)
        enemies.push_back( Enemy(i,i));
    
    los.push_back(enemies[1]);
    los.push_back(enemies[4]);
    
    cout << "enemies vector" << endl;
    for (unsigned int i = 0; i < enemies.size(); i++) 
        enemies[i].show();
    cout << "los vector" << endl;
    for (unsigned int i = 0; i < los.size(); i++) 
        los[i].show();
    
    cout << endl;
    enemies[1].xloc = 9;
    enemies[4].xloc = 9;
    cout << endl;
    
    cout << "enemies vector" << endl;
    for (unsigned int i = 0; i < enemies.size(); i++) 
        enemies[i].show();
    cout << "los vector" << endl;
    for (unsigned int i = 0; i < los.size(); i++) 
        los[i].show();
        
    system("pause");
    return EXIT_SUCCESS;
}
