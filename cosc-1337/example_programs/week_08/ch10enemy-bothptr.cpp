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
    vector<Enemy*> enemies;
    vector<Enemy*> los;
    
    for (int i = 0; i < 5; i++)
        enemies.push_back( new Enemy(i,i));
    
    los.push_back(enemies[1]);
    los.push_back(enemies[4]);
    
    cout << "enemies vector" << endl;
    for (unsigned int i = 0; i < enemies.size(); i++) {
        cout << &enemies[i] << ": ";
        enemies[i]->show();
    }
    cout << "los vector" << endl;
    for (unsigned int i = 0; i < los.size(); i++) {
        cout << &los[i] << ": ";
        los[i]->show();
    }
    
    // game play
    cout << endl;
    enemies[1]->xloc = 9;
    enemies[4]->xloc = 9;
    
    Enemy *e = enemies[4];
    enemies.erase(enemies.begin()+4);
    los.erase(los.begin()+1);   
    e->show();
    delete e;
    e= NULL;
    
    if (e != NULL)
       e->show();
    cout << endl;
    
    cout << "enemies vector" << endl;
    for (unsigned int i = 0; i < enemies.size(); i++) {
        cout << &enemies[i] << ": ";
        enemies[i]->show();
    }
    cout << "los vector" << endl;
    for (unsigned int i = 0; i < los.size(); i++) {
        cout << &los[i] << ": ";
        los[i]->show();
    }
      
    system("pause");
    return EXIT_SUCCESS;
}
