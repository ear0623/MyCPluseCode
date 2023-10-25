#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include "MyPlayerCharacter.h"
#include "MyPlayMap.h"
#include "Header.h"


void MyPlaySound();

int main()
{

	MyPlayerCharacter Mycharacter_main;
	MyPlayMap Mymap_main;
	Mymap_main.Draw();
	MyPlaySound();
	//define 함수로 지정한 숫자는 왜
	Mycharacter_main.Start(StartX, StartY);
	Mycharacter_main.CharacterMove();
	

	return 0;
}

void MyPlaySound()
{
	PlaySound(TEXT("D:\\ETERBUS\\myC++\\MyCPluseCode\\MySourse\\BGM.WAV"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}
