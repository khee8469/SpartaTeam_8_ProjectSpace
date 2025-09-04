#pragma once
#include <string>

using namespace std;

class Character;

class Item
{
protected:
	string name;

public:
	string getName() { return name; }
	virtual void Use(Character* character) = 0;
};