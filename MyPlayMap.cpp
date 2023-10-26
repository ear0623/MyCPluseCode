#include "MyPlayMap.h"
#include <iostream>
#include "Header.h"


MyPlayMap::MyPlayMap()
{
	Horizen = Width;
	Vertical = Height;
	LeftWall = XCelling;
	TopWall = Celling;
}

MyPlayMap::~MyPlayMap()
{
}

void MyPlayMap::Draw()
{
	for (int i = TopWall; i <= (Vertical); i++)
	{
		for (int j = LeftWall; j <= (Horizen); j++)
		{
			if ((i == LeftWall) || (i == Vertical) || (j == TopWall) || (j == Horizen))
			{
				std::cout << "*";
			
			}
			else
			{
				std::cout << " ";
			}

		}
		std::cout << std::endl;
	}
}
