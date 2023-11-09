#include<stdio.h>
#include"Enemy.h"

int main()
{
	Enemy* enemy = new Enemy;

	enemy->update();

	delete enemy;
	return 0;
}