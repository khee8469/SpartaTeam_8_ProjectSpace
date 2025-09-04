#include "Goblin.h"
#include<stdlib.h>
Goblin::Goblin(int level)
{
	this->name = "Goblin";
	this->health = level * (20 + rand() % 11);
	this->attack = level * (5 + rand() % 6);
}

Item* Goblin::dropItem()
{
	return nullptr;
}
