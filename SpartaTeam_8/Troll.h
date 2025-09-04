#pragma once
#include "Monster.h"

class Troll : public Monster
{
public:
	Troll(int level, string name = "BossMonster", int health = 20, int attack = 5)
		: Monster(level, name, health, attack)
	{

	}


};