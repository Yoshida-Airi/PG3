#include "Warrior.h"

Warrior::Warrior()
{
	name = "戦士";

}

Warrior::~Warrior()
{
}

void Warrior::Attack()
{
	printf("%sが剣を振り回す\n",name);
}
