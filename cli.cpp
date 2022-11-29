#include "main.h"
int get_age_from_cli() {
	int myAge;
	std::cout << "Enter your age: ";
	std::cin >> myAge;
	std::cout << (myAge * 3) << std::endl;
	return myAge;
}