#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
#include "Battle.h"
#include "Warrior.h"
#include "Paladin.h"
#include <iostream>


int main()
{
	/*
	Thor attacks Hulk and deals 12 damage
	Hulk is down to 28 health
	Hulk attacks Thor and deals 3 damage
	Hulk has Died and Thor is Victorious
	*/
	srand((unsigned int)time(NULL));
	Warrior thor("Thor", 100, 30, 15);
	Paladin hulk("Hulk", 135, 25, 10);
	Battle *battle = new Battle();
	battle->StartFight<Warrior, Paladin>(thor, hulk);
	
	getchar();
	return 0;
}