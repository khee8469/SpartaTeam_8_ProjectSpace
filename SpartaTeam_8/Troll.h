#pragma once
#include "Monster.h"

class Troll : public Monster
{
private:
	string name;
	int health;
	int attack;

public:
	Troll(int level = 1)
	{
		name = "Troll";
		health = 20 * level;
		attack = 5 * level;
	}
	~Troll() {}

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