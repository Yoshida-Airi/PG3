#include<stdio.h>
#include"Charctor.h"
#include"Warrior.h"
#include"Wizard.h"

int main(void)
{
	Charctor* charctors[2];

	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			charctors[i] = new Warrior;
		}
		else
		{
			charctors[i] = new Wizard;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		charctors[i]->Attack();

	}

	for (int i = 0; i < 2; i++)
	{
		delete charctors[i];
	}


	return 0;
}