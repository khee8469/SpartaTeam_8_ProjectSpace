#pragma once
#include <string>
#include <iostream>
using namespace std;

class Item;

class Monster
{
	virtual string getName();
	virtual int getHealth();
	virtual int getAttack();
	virtual void takeDamage(int damage);
	virtual Item* dropItem();
};