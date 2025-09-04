#pragma once
#include "Item.h"

class AttackBoost : public Item
{
private:
	int attackIncrease;
public:
	AttackBoost(string name_ = "AttackBoost", int attackIncrease = 10)
	{
		name = name_;
		this->attackIncrease = attackIncrease;
	}

	void Use(Character* character) override
	{
		//character attack 10 add
	}
};