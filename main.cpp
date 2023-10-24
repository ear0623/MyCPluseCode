

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define Width  100
#define Height 25
#define StartX 3
#define StartY 15
#define Celling 0
#define XCelling 0

using namespace std;

class MyCharacter
{
public:
	MyCharacter();
	~MyCharacter();
	
public:
	void CharacterMove();
	void GotoXY(int x, int y);
	void Start(int x, int y);
	void AlreadyMove(int x, int y);
	void Shadow(int x, int y);

private:
	int Key;
	int PlayerX;
	int PlayerY;
	int ZeroBase;
	bool bRunning;


};

MyCharacter::MyCharacter()
{
	PlayerX = 0;
	PlayerY = 0;
	ZeroBase = 0;
	bRunning = true;

}

MyCharacter::~MyCharacter()
{
}

void MyCharacter::CharacterMove()
{
	
	while (bRunning)
	{
		Key = _getch();
		
		if ((Key == 'a') || (Key == 'A'))
		{
			if (PlayerX == (ZeroBase+1))
			{
				
				PlayerX = ZeroBase+1;
			}
			else
			{
				AlreadyMove(PlayerX,PlayerY);
				PlayerX--;
			}

		}
		else if ((Key == 'd') || (Key == 'D'))
		{
			if (PlayerX == Width - XCelling-1)
			{
				PlayerX = Width - XCelling-1;
			}
			else
			{
				AlreadyMove(PlayerX, PlayerY);
				PlayerX++;
			}

		}
		else if ((Key == 'w') || (Key == 'W'))
		{
			if (PlayerY == ZeroBase+1)
			{
				PlayerY = ZeroBase + 1;
			}
			else
			{
				AlreadyMove(PlayerX, PlayerY);
				PlayerY--;
			}
		}
		else if ((Key == 's') || (Key == 'S'))
		{
			if (PlayerY == (Height-Celling)-1)
			{
				PlayerY = (Height - Celling) - 1;
			}
			else
			{
				AlreadyMove(PlayerX, PlayerY);
				PlayerY++;
			}
		}
		else
		{

		}
		GotoXY(PlayerX, PlayerY);
	}
}

void MyCharacter::GotoXY(int x, int y)
{
	//
	PlayerX = x;
	PlayerY = y;
	//x, y 좌표 설정
	COORD pos = { PlayerX,PlayerY };
	//커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//
	std::cout << "P";
}

void MyCharacter::Start(int x, int y)
{
	//
	PlayerX = x;
	PlayerY = y;
	//x, y 좌표 설정
	COORD pos = { PlayerX,PlayerY };
	//커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//
	std::cout << "P";
}

void MyCharacter::AlreadyMove(int x, int y)
{
	Shadow(x, y);
}

void MyCharacter::Shadow(int x, int y)
{
	//x, y 좌표 설정
	COORD pos = { x,y };
	//커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//
	std::cout << " ";
}


class MyMap
{
public:
	MyMap();
	~MyMap();

public:
	void Draw();

private:
	int Vertical;
	int Horizen;
	int LeftWall;
	int TopWall;

};

MyMap::MyMap()
{
	Horizen = Width;
	Vertical = Height;
	LeftWall = XCelling;
	TopWall = Celling;
}

MyMap::~MyMap()
{
}

void MyMap::Draw()
{
	for (int i = TopWall; i <= (Vertical); i++)
	{
		for (int j = LeftWall; j <= (Horizen); j++)
		{
			if ((i == LeftWall)||(i==Vertical)||(j== TopWall)||(j==Horizen))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			
		}
		cout << endl;
	}
}

void MyPlaySound();

int main()
{

	MyCharacter Character_main;
	MyMap Map_main;
	Map_main.Draw();
	MyPlaySound();
	//define 함수로 지정한 숫자는 왜
	Character_main.Start(StartX, StartY);
	Character_main.CharacterMove();
	

	return 0;
}

void MyPlaySound()
{
	PlaySound(TEXT("D:\\ETERBUS\\myC++\\MyCPluseCode\\MySourse\\BGM.WAV"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}
