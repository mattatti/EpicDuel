#pragma once
#include "Human.h"

class Warrior : public Human
{
private:
	int rage = 100;
	
public:
	Warrior() : Human() {}
	Warrior(string name, int healthPoints, int attackMax, int blockMax);
	~Warrior();
	int extraAttackChance();

	
};

//Warrior chance to get extra attack
//paladin chance to stun
//all classes, every 5 turns can drink healthpotion