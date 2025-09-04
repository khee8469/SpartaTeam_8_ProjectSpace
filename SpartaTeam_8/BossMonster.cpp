#include "BossMonster.h"

BossMonster::BossMonster(int level)
{
	this->name = "BossMonster";
	this->health = (int)(level * (20 + rand() % 11) * (1 + (rand() % 6 * 0.1f)));
	this->attack = (int)(level * (5 + rand() % 6) * (1 + (rand() % 6 * 0.1f)));
}

Item* BossMonster::dropItem()
{
	return nullptr;
}
