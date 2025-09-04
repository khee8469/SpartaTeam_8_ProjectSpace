#pragma once
#include "Monster.h"

class BossMonster : public Monster
{
private:
	string name;
	int health;
	int attack;

public:
	BossMonster(int level = 1)
	{
		name = "BossMonster";
		health = 20 * level * 1.5f;
		attack = 5 * level * 1.5f;
	}
	~BossMonster() {}

	string getName() { return name; }
	int getHealth() { return health; }
	int hetAttack() { return attack; }
	void takeDamege(int damage)
	{
		if (health <= damage)
		{
			health = 0;
			cout << "BossMonster Die" << endl;
			return;
		}
		health -= damage;
	}
	Item* dropItem();
};