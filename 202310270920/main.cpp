#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	//1~52 �� ���� ����
	srand(time(nullptr));
	cout << "���� ���� ����" << endl;
	for (int i = 0; i <= 4; i++)
	{
		cout << (rand() % 52)<<" ";
	}
	


	cout << endl;
	cout << endl;
	cout << endl;
	//���� �ζ� ��õ ��ȣ
	cout << "�̹��� �ζ� ��õ��ȣ" << endl;
	for  (int i = 1; i <= 7; i++)
	{
		cout << rand() % 52<<" ";
	}
	cout<< endl;
}