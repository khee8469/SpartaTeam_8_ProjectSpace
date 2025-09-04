#pragma once
#include "Monster.h"

class Orc : public Monster
{
private:
	string name;
	int health;
	int attack;

public:
	Orc(int level = 1)
	{
		name = "Orc";
		health = 20 * level;
		attack = 5 * level;
	}
	~Orc() {}

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