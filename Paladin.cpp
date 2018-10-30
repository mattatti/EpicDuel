#include "Paladin.h"

Paladin::Paladin(string name, int healthPoints, int attackMax, int blockMax) : Human(name, healthPoints, attackMax, blockMax)
{

}

Paladin::~Paladin()
{
}

int Paladin::stunChance()
{
	return rand() % 100 + 1;
}
