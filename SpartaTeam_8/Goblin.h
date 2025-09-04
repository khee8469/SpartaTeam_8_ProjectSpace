#pragma once
#include "Monster.h"

class Goblin : public Monster
{
public:
	Goblin(int level, string name = "BossMonster", int health = 20, int attack = 5)
		: Monster(level, name, health, attack)
	{

	}


};