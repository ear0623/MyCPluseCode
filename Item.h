#pragma once

#include <iostream>

class Item
{
public:
	Item();
	Item(const std::string& itemName, int itemValue);
	~Item();

	std::string name; // 아이템 이름
	int value;        // 아이템 값


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