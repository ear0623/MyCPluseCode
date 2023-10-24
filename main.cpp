#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

class MyCharacter
{
public:
	MyCharacter();
	~MyCharacter();
	
public:
	void CharacterMove();

private:
	int Key;
	int PlayerX;
	int PlayerY;
	bool bRunning;


};

MyCharacter::MyCharacter()
{
	PlayerX = 0;
	PlayerY = 0;
	bRunning = true;

}

MyCharacter::~MyCharacter()
{
}

void MyCharacter::CharacterMove()
{
	Key = _getch();

	while (bRunning)
	{
		if ((Key == 'a') || (Key == 'A'))
		{

		}
	}
}

class MyMap
{
public:
	MyMap();
	~MyMap();

private:

};

MyMap::MyMap()
{
}

MyMap::~MyMap()
{
}

int main()
{
	return 0;
}