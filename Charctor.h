#pragma once
class Charctor
{
public:
	Charctor();

	~Charctor();

	virtual void Attack();

protected:
	const char* name;
};

