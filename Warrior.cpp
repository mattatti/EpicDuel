#include "Warrior.h"





Warrior::Warrior(string name, int healthPoints, int attackMax, int blockMax) : Human(name, healthPoints, attackMax, blockMax)
{

}

Warrior::~Warrior()
{
}

int Warrior::extraAttackChance()
{
	return rand() % 100 + 1;
}
