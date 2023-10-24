#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

class MyCharater
{
public:
	MyCharater();
	~MyCharater();
public:
	void gotoxy(int x, int y);
	void Move();

private:

	int PlayerX;
	int playerY;

};

MyCharater::MyCharater()
{
	PlayerX = 0;
	playerY = 0;
    bool bIsRunning = true;
    char PlayerShape = 'p';
}

MyCharater::~MyCharater()
{
}

void MyCharater::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	//Ŀ�� �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	cout << PlayerShape << endl;
}

void MyCharater::Move()
{
    while (bIsRunning)
    {
        int Key = _getch();

        system("cls");
    

        if ((Key == 'a')  Key == 'A')
        {
            cout << "����" << endl;
            PlayerX--;
        }
        else if ((Key == 'd')  Key == 'D')
        {
            cout << "������" << endl;
            PlayerX++;
        }

        else if ((Key == 'w')  Key == 'W')
        {
            cout << "��" << endl;
            PlayerY--;
        }

        else if ((Key == 's')  Key == 'S')
        {
            cout << "�Ʒ�" << endl;
            PlayerY++;
        }
        else if (Key == 'q' || Key == 'Q')
        {
            cout << "����" << endl;
            bIsRunning = false;
        }

     

        //X, Y ��ǥ����
        COORD pos = { PlayerX, PlayerY };

        //Ŀ�� �̵�
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

        cout << PlayerShape;
    }

}
}







int main()
{
	gotoxy(15, 15);
	void


	return 0;
}

