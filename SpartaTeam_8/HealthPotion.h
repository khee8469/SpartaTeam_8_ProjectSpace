#pragma once
#include "Item.h"

class HealthPotion : public Item
{
private:
	int healthRestore;
public:
	HealthPotion(string name_ = "HealthPotion", int healthRestore = 50)
	{
		name = name_;
		this->healthRestore = healthRestore;
	}

	void Use(Character* character) override
	{
		//character hp 50 add
	}
};
