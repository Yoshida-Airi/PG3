#pragma once
#include"IShape.h"

class Circle :public IShape
{
public:
	Circle(float radius);
	void size()override;
	void draw()override;


private:
	float area;
	float radius_ = 0.0f;
};

