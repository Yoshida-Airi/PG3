#pragma once
#include"Charctor.h"
#include<stdio.h>

class Warrior :public Charctor
{
public:
	Warrior();

	~Warrior();

	void Attack()override;

private:

};

