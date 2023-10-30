#pragma once
#include"Charctor.h"
#include<stdio.h>

class Wizard :public Charctor
{
public:
	Wizard();

	~Wizard();

	void Attack()override;

private:

};