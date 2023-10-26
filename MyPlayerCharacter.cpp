#include "MyPlayerCharacter.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Header.h"

MyPlayerCharacter::MyPlayerCharacter()
{
	PlayerX = 0;
	PlayerY = 0;
	ZeroBase = 0;
	bRunning = true;

}

MyPlayerCharacter::~MyPlayerCharacter()
{
}

void MyPlayerCharacter::CharacterMove()
{

	while (bRunning)
	{
		Key = _getch();

		if ((Key == 'a') || (Key == 'A'))
		{
			if (PlayerX == (ZeroBase + 1))
			{

				PlayerX = ZeroBase + 1;
			}
			else
			{
				AlreadyMove(PlayerX, PlayerY);
				PlayerX--;
			}

		}
		else if ((Key == 'd') || (Key == 'D'))
		{
			if (PlayerX == Width - XCelling - 1)
			{
				PlayerX = Width - XCelling - 1;
			}
			else
			{
				AlreadyMove(PlayerX, PlayerY);
				PlayerX++;
			}

		}
		else if ((Key == 'w') || (Key == 'W'))
		{
			if (PlayerY == ZeroBase + 1)
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
			if (PlayerY == (Height - Celling) - 1)
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

void MyPlayerCharacter::GotoXY(int x, int y)
{
	//x, y 좌표 설정
	COORD pos = { x,y };
	//커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	std::cout << "p";
}

void MyPlayerCharacter::Start(int x, int y)
{
	PlayerX = x;
	PlayerY = y;
	COORD pos = { PlayerX,PlayerY };
	//커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	std::cout << "p";
}

void MyPlayerCharacter::AlreadyMove(int x, int y)
{
	PlayerX = x;
	PlayerY = y;
	COORD pos = { PlayerX,PlayerY };
	//커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	std::cout << " ";
}

void MyPlayerCharacter::Shadow(int x, int y)
{
	//x, y 좌표 설정
	PlayerX = x;
	PlayerY = y;
	COORD pos = { PlayerX,PlayerY };
	//커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	std::cout << " ";
}
