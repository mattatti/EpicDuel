#pragma once
#include "Human.h"

class Paladin : public Human
{
private:
	int mana = 100;
	
public:
	Paladin() : Human() {}
	Paladin(string name, int healthPoints, int attackMax, int blockMax);
	~Paladin();
	int stunChance();
	
};