#pragma once
#include "Monster.h"

class Orc : public Monster
{
public:
	Orc(int level, string name = "BossMonster", int health = 20, int attack = 5)
		: Monster(level, name, health, attack)
	{

	}


};