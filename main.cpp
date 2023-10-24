#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;



int main()
{
	cout << "Test" << endl;
	//srand(time(nullptr));
	//bool Decision = ((rand() % 2) == 0);//나머지 연산자
	//랜덤함수 실제로는 전혀 쓰면 안됨
	//int Number;
	//cin >> Number;

	//int Result = Number % 2;

	//if (Result==1)
	/* {
		cout << "홀수" << endl;

	}
	else
	{
		cout << "짝수" << endl;

	}*/

	
	
	int PlayerX = 1;
	int PlayerY = 1;
	
	while (true)
	{

		
		char PlayerShape = 'p';
		bool bInsRunning = true;

		int key = _getch();

		system("cls");//게임만들때는 쓰지마 해킹당해

		if (key == 'a' || key == 'A')
		{
			cout << "ㅁ";
			PlayerX--;
		}
		else if (key == 'w' || key == 'W')
		{
			cout << "ㅁ";
			PlayerY--;
		}
		else if (key == 'd' || key == 'D')
		{
			cout << "ㅁ";
			PlayerX++;
		}
		else if (key == 's' || key == 'S')
		{
			cout << "ㅁ" << endl;
			PlayerY++;
		}
		else if (key == 'q' || key == 'Q')
		{
			cout << "End" << endl;
		}
		else
		{

		}
		cout << PlayerX << "," << PlayerY << endl;
		//x, y 좌표 설정
		COORD pos = { PlayerX,PlayerY };
		//커서 이동
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		cout << PlayerShape << endl;
	}

	

	return 0;
}