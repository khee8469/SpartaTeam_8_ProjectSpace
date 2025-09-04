#include <vector>

#include "GameManager.h"
#include "Monster.h"

using namespace std;

Monster GameManager::spawnMonsters() 
{
	// will make it generates monster randomly.
	return Monster(/*parameters*/);
}

void GameManager::battle(Character* player) 
{
	int turns = 0;
	int targetIdx = 0;
	vector<Monster> enemy;

	for (int i = 0; i < 3; i++) // will make it random(1 ~ 3) later.
	{
		enemy.push_back(spawnMonsters());
	}

	while (true)
	{
		++turns;

		// battle Logic
		if(enemy[targetIdx].health <= 0)
		{
			//takeDamage(dealt);
			enemy.erase(targetIdx);
		}

		if(enemy.empty())
		{
			cout << "You have won the battle!" << endl;

			/* codes for winning condition. */
			
			break;
		}
		if(player->health <= 0)
		{
			cout << "You have fallen..." << endl;

			/* codes for losing condition. */
			
			break;
		}
	}
}

void GameManager::bossBattle(Character* player) 
{
	Monster boss;
}

void GameManager::displayInv(Character* player)
{
	// displayInv Logic
}

void GameManager::displayStats(Character* player)
{
	// displayStats Logic
}

void GameManager::shopping(Character* player)
{
	// shop
}