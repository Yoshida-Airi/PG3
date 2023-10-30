#pragma once
class Charctor
{
public:
	Charctor();

	virtual ~Charctor();

	virtual void Attack();

protected:
	const char* name;
};

