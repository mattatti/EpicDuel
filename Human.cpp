#include "Human.h"



Human::Human()
{
	this->name = "John Doe";
	this->attackMax = 1;
	this->blockMax = 1;
	this->healthPoints = 100;
}


Human::~Human()
{
}

Human::Human(string name, int healthPoints, int attackPoints, int blockPoints)
{
	this->name = name;
	this->attackMax = attackPoints;
	this->healthPoints = healthPoints;
	this->blockMax = blockPoints;
}

int Human::Attack()
{
	return rand() % this->attackMax;
}

int Human::Block()
{
	return rand() % this->blockMax;
}

void Human::drinkHealthPotion()
{
}

bool Human::isStunned()
{
	return false;
}

void Human::SetStunValue(bool stun)
{
	stunned = stun;
}

