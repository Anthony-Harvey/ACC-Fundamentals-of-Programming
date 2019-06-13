#include <iostream>
#include <string>
#include <array>

using namespace std;

class Player
{
private:
	
	
public:
	string firstName;
	string lastName;
	int age;
	float weight;
	float xPos = 0;
	float yPos = 0;
	int speed = 1;
	
	//	array Testing
	static const int exampleSize = 5;
	int example[exampleSize];
	
	//	buffs
	bool levitate;
	bool spiritofwolf;
	bool invisibility;
	
	void Move(int xa, int ya)
	{
	xPos += xa * speed;
	yPos += ya * speed;
	}
	
};



int main()
{
	Player player;
	Player player2;

	cout << "What is your First Name?" << endl;
	cin >> player.firstName;
	cout << "What is your Last Name?" << endl;
	cin >> player.lastName;
	cout << "Hello and Good Bye " << player.firstName << " " << player.lastName << endl;
	
	cout << "Who are you targeting?" << endl;
	cin >> player2.firstName;
	
	cout << "I cast Spirt of Wolf on " << player2.firstName << endl;
	cout << "He begins running!" << endl;
	
	cout << player2.firstName << " is running forward." << endl;
	
	
	//	Array testing
	int example[5];
	for (int n=0; n<5; n++)
	{
		example[n] = n + 1;
		cout << example[n] << endl;
	}
	
	//	C++11 Array Testing
	//	#include <array> added
	array<int, 5> another;
	Entity()
	{
		for (int i = 0; i < another.size; i++)
		example[i] = 2;
	}
	
	
	for (int n=0; n<=10; n++)
	{
		player2.Move(2, 1);
		cout << player2.xPos;
		cout << player2.yPos;
		cout << "" << endl;
	}

	return 0;
}
