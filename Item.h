#pragma once

#include <iostream>

class Item
{
public:
	Item();
	Item(const std::string& itemName, int itemValue);
	~Item();

	std::string name; // ������ �̸�
	int value;        // ������ ��


private:
	
};

Item::Item()
{
}

inline Item::Item(const std::string& itemName, int itemValue)
{

}



	

Item::~Item()
{
}