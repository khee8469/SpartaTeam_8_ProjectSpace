#pragma once
#include "Item.h"

class HealthPotion : public Item
{
private:
	int healthRestore;
public:
	HealthPotion(int healthRestore = 50)
	{
		this->name = "HealthPotion";
		this->healthRestore = healthRestore;
	}

	void Use(Character* character) override
	{
		//character hp 50 add
	}
};
