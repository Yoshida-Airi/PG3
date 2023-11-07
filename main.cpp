#include "Circle.h"
#include "Rectangle.h"

int main() {
	IShape* circle = new Circle(2.0f);
	circle->size();
	circle->draw();

	IShape* rectangle = new Rectangle(2.0f, 4.0f);
	rectangle->size();
	rectangle->draw();

	delete circle;
	delete rectangle;

	return 0;
}