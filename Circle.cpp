#include "Circle.h"
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle(float radius)
{
	radius_ = radius;
}

void Circle::size()
{
	area = float(M_PI) * float(pow(radius_, 2.0f));
}

void Circle::draw()
{
	printf("円の面積は　%f　です\n", area);
}
