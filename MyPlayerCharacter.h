#pragma once



class MyPlayerCharacter
{
public:
	MyPlayerCharacter();
	~MyPlayerCharacter();

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
