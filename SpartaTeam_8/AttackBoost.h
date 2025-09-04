#pragma once
#include "Item.h"

class AttackBoost : public Item
{
private:
	int attackIncrease;
public:
	AttackBoost(int attackIncrease = 10)
	{
		this->attackIncrease = attackIncrease;
	}

	void Use(Character* character) override
	{
		//character attack 10 add
	}
};