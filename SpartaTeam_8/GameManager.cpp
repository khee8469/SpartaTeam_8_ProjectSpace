#include <vector>
#include <random>

#include "GameManager.h"
#include "Monster.h"

using namespace std;

Monster GameManager::spawnMonsters() 
{
	Monster monster;

	// will make it generates monster randomly.
	while (!monster)
	{
		switch (rand())
		{
		case 1:
			// create goblin
			monster = Goblin();
			break;

		case 2:
			// create Orc
			monster = Orc();
			break;

		case 3:
			// create Troll
			monster = Troll();
			break;

		default:
			break;
		}
	}

	return monster;
}

void GameManager::battle(Character* player) 
{
	int turns = 0, targetIdx = 0, enemySize = 0;
	vector<Monster> enemy;

	for (int i = 0; i < 3; i++) // will make it random(1 ~ 3) later.
	{
		enemy.push_back(spawnMonsters());
	}

	enemySize = enemy.size();

	while (true)
	{
		++turns;

		// battle Logic here

		if(enemy[targetIdx].health <= 0)
		{
			enemy.erase(targetIdx);
		}

		if(enemy.empty())
		{
			cout << "You have won the battle!" << endl;

			/* codes for winning condition. */
			
			int earnedXP = player->xp += rand() * player->level; // rand() is placeholder.
			int earnedGold = player->gold += rand() * player->level;// rand() is placeholder.

			player->gold += earnedGold;
			player->xp += earnedXP;

			cout << "You have earned " << earnedXP << " XP, " << earnedGold << " Golds." << endl;

			if (player->xp > player->xpLimit) 
			{
				player->level++;
				player->xpLimit *= 2;
				cout << "Level Up!" << endl;
			}
			else
			{
				player->xp += earnedXP;
			}

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