#include "Wizard.h"

Wizard::Wizard()
{
	name = "魔法使い";
}

Wizard::~Wizard()
{
}

void Wizard::Attack()
{
	printf("%sが魔法を放つ\n", name);
}
