#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;



int main()
{
	cout << "Test" << endl;
	//srand(time(nullptr));
	//bool Decision = ((rand() % 2) == 0);//������ ������
	//�����Լ� �����δ� ���� ���� �ȵ�
	//int Number;
	//cin >> Number;

	//int Result = Number % 2;

	//if (Result==1)
	/* {
		cout << "Ȧ��" << endl;

	}
	else
	{
		cout << "¦��" << endl;

	}*/

	
	
	int PlayerX = 1;
	int PlayerY = 1;
	
	while (true)
	{

		
		char PlayerShape = 'p';
		bool bInsRunning = true;

		int key = _getch();

		system("cls");//���Ӹ��鶧�� ������ ��ŷ����

		if (key == 'a' || key == 'A')
		{
			cout << "��";
			PlayerX--;
		}
		else if (key == 'w' || key == 'W')
		{
			cout << "��";
			PlayerY--;
		}
		else if (key == 'd' || key == 'D')
		{
			cout << "��";
			PlayerX++;
		}
		else if (key == 's' || key == 'S')
		{
			cout << "��" << endl;
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
		//x, y ��ǥ ����
		COORD pos = { PlayerX,PlayerY };
		//Ŀ�� �̵�
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		cout << PlayerShape << endl;
	}

	

	return 0;
}