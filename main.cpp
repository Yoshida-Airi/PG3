#include <stdio.h>
#include <iostream>
#include "MinFinder.h"

int main() {

	MinFinder<int, int> comparer1(4, 2);
	std::cout << comparer1.Min() << std::endl;

	MinFinder<int, float> comparer2(6, 1.0f);
	std::cout << comparer2.Min() << std::endl;

	MinFinder<int, double> comparer3(2, 6.0);
	std::cout << comparer3.Min() << std::endl;

	MinFinder<float, float> comparer4(9.0f, 8.0f);
	std::cout << comparer4.Min() << std::endl;

	MinFinder<float, double> comparer5(3.0f, 13.0);
	std::cout << comparer5.Min() << std::endl;

	MinFinder<double, double> comparer6(2.0, 4.0);
	std::cout << comparer6.Min() << std::endl;

	return 0;
}