#pragma once
#include <string>
#include "Human.h"

using namespace std;
class Human
{
public:
	Human();
	~Human();
	Human(string name, int healthPoints, int attackMax, int blockMax);
	int Attack();
	int Block();
	string name;
	int healthPoints;
	void drinkHealthPotion();
	bool isStunned();
	void SetStunValue(bool stun);
private:
	bool stunned = false;
	int attackMax, blockMax;

};

