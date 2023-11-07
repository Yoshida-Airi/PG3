#pragma once
#include"IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle(float width, float height);
	void size()override;
	void draw()override;

private:
	float area;
	float width_ = 0.0f;
	float height_ = 0.0f;
};

