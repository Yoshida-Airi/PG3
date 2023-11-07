#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle(float width, float height)
{
	width_ = width;
	height_ = height;
}

void Rectangle::size()
{
	area = width_ * height_;
}

void Rectangle::draw()
{
	printf("矩形の面積は　%f　です\n", area);
}
