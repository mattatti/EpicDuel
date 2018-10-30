#pragma once
#include <string>
#include "Warrior.h"
#include "Paladin.h"
using namespace std;

class Battle
{
public:
	Battle();
	~Battle();


	template <typename T, typename U>
	void StartFight(T& , U&);

	template <typename T, typename U>
	string GetAttackResult(T& a, U& b);
};

template <typename T, typename U>
inline void Battle::StartFight(T& a, U& b)
{
	while (true)
	{
		if (GetAttackResult(a, b).compare("Game Over") == 0)
		{
			cout << "Game Over" << endl;
			break;
		}
		if (GetAttackResult(b, a).compare("Game Over") == 0)
		{
			cout << "Game Over" << endl;
			break;
		}
	}
}



template <typename T, typename U>
inline string Battle::GetAttackResult(T& a, U& b)
{
	int warriorAAttackAmount = a.Attack();
	int warriorBblockAmount = b.Block();
	int damage2WarriorB = (int)ceil(warriorAAttackAmount - warriorBblockAmount);
	damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;

	b.healthPoints = b.healthPoints - damage2WarriorB;

	cout << a.name << " attacks " << b.name << " and deals " << damage2WarriorB << " damage" << endl;
	cout << b.name << " is down to " << b.healthPoints << " health" << endl;
	if (b.healthPoints <= 0) {
		cout << b.name << " has Died and " << a.name << " is Victorius " << endl;
		return "Game Over";
	}
	else {
		return "Fight Again";
	}
}
