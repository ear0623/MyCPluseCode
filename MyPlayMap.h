#pragma once


class MyPlayMap
{
public:
	MyPlayMap();
	~MyPlayMap();

	void Draw();

private:
	int Vertical;
	int Horizen;
	int LeftWall;
	int TopWall;
};

