#pragma once
#include <string>
#include <iostream>
using namespace std;

class Item;

class Monster
{
private:
	string name;
	int health;
	int attack;

public:
	Monster(int level, string name, int health, int attack)
	{
		this->name = name;
		this->health = health;
		this->attack = attack * level;
		if (name == "BossMonster")
		{
			this->health *= 1.5f;
			this->attack *= 1.5f;
		}
	}

	string getName() const { return name; }
	int getHealth() const { return health; }
	int getAttack() const { return attack; }
	void takeDamage(int damage)
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