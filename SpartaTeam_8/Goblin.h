#pragma once
#include "Monster.h"

class Goblin : public Monster
{
private:
	string name;
	int health;
	int attack;

public:
	Goblin(int level = 1)
	{
		name = "Goblin";
		health = 20 * level;
		attack = 5 * level;
	}
	~Goblin() {}

	string getName() { return name; }
	int getHealth() { return health; }
	int hetAttack() { return attack; }
	void takeDamege(int damage)
	{
		if (health <= damage)
		{
			health = 0;
			cout << "Monster Die" << endl;
			return;
		}
		health -= damage;
	}
	Item* dropItem();
};